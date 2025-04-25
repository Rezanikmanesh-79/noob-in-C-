def is_safe(board, row, col, n):
    # Check this row on the left side
    for i in range(col):
        if board[row][i] == 1:
            return False

    # Check upper diagonal on the left side
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    # Check lower diagonal on the left side
    for i, j in zip(range(row, n, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    return True

def ids(board, col, n, depth_limit):
    if col >= n:
        return True
    if depth_limit == 0:
        return False

    for i in range(n):
        if is_safe(board, i, col, n):
            board[i][col] = 1

            if ids(board, col + 1, n, depth_limit - 1):
                return True

            board[i][col] = 0

    return False

def solve_n_queens(n):
    board = [[0] * n for _ in range(n)]
    depth = 1

    while not ids(board, 0, n, depth):
        depth += 1

    result = []
    for row in board:
        result.append(" ".join('*' if x == 1 else '--' for x in row))
    return result

# Read n from input.txt and write result to output.txt
try:
    with open('input.txt', 'r') as file:
        n = int(file.read().strip())
    
    if n <= 0:
        print("The number of queens must be a positive integer.")
    else:
        result = solve_n_queens(n)
        with open('output.txt', 'w') as file:
            for line in result:
                file.write(line + '\n')
except ValueError:
    print("Please enter a valid integer in input.txt.")
except FileNotFoundError:
    print("The file input.txt was not found.")
