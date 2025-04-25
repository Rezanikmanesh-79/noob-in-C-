#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;

    Node(char ch, int freq) : ch(ch), freq(freq), left(nullptr), right(nullptr) {}
};

struct compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

// ایجاد درخت هافمن
Node* buildHuffmanTree(const string& text) {
    unordered_map<char, int> freqMap;
    for (char ch : text) {
        freqMap[ch]++;
    }

    priority_queue<Node*, vector<Node*>, compare> minHeap;
    for (const auto& pair : freqMap) {
        minHeap.push(new Node(pair.first, pair.second));
    }

    while (minHeap.size() > 1) {
        Node* left = minHeap.top();
        minHeap.pop();
        Node* right = minHeap.top();
        minHeap.pop();

        Node* sum = new Node('\0', left->freq + right->freq);
        sum->left = left;
        sum->right = right;
        minHeap.push(sum);
    }

    return minHeap.top();
}

void encode(Node* root, const string& str, unordered_map<char, string>& huffmanCode) {
    if (!root) {
        return;
    }

    if (!root->left && !root->right) {
        huffmanCode[root->ch] = str.empty() ? "0" : str;
    }

    encode(root->left, str + "0", huffmanCode);
    encode(root->right, str + "1", huffmanCode);
}

string decode(Node* root, const string& str) {
    string decoded = "";
    Node* current = root;
    for (char bit : str) {
        current = (bit == '0') ? current->left : current->right;
        if (!current->left && !current->right) {
            decoded += current->ch;
            current = root;
        }
    }
    return decoded;
}

int main() {
    ifstream inputFile("story.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }

    stringstream buffer;
    buffer << inputFile.rdbuf();
    string text = buffer.str();

    inputFile.close();

    Node* root = buildHuffmanTree(text);

    unordered_map<char, string> huffmanCode;
    encode(root, "", huffmanCode);

    string encodedString = "";
    for (char ch : text) {
        encodedString += huffmanCode[ch];
    }

    string decodedString = decode(root, encodedString);

    cout << "Original text: " << text << endl;
    cout << "Encoded text: " << encodedString << endl;
    cout << "Decoded text: " << decodedString << endl;

    cout << "Huffman Codes: " << endl;
    for (const auto& pair : huffmanCode) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
