#include <iostream>
using namespace std;
int main()
{
	string week[7] = { "shanbe","yek shanbe","do shanbe","se shanbe","char shanbe","pan shanbeh","joomah" };
	int siz = (sizeof(week) / sizeof(week[0]));

	//for (int i = 0; i < siz; i++)
	int i = 0;
	while(i<siz)
	{
		cout << "day " << i +1 << " of week: " << week[i] << "\n";
		i++;
	}
}

