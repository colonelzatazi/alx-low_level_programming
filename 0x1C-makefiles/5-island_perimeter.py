#!/usr/bin/python3
"""
A module that contains two functions ``def island_perimeter(grid)``
that returns the perimeter of the island describeed in grid
"""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """ A function that returns the perimeter of the island
    described in grid
    ARGS:
        grid - is a list of list of integers:
            * 0 represents a water zone
            * 1 represents a land zone
            * One cell is a square with side length 1
            * Grid cells are connected horizontally/vertically (not
              diagonally).
            * Grid is rectangular. width and height don't exceed 100

    Grid is completely surounded by water, and there is one island (or
    nothing).
    The island doesn't have 'lakes' (water insode that isn't connected
    to the water around the island).

    Example:
    =======
    alex@xandex-pc:~/0x1C$ cat 5-main.py
    #!/usr/bin/python3

    island_perimeter = __import__('5-island_perimeter').island_perimeter

    if __name__ = '__main__':
        grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
        ]
        print(island_perimeter(grid))

    alex@xandex-pc:~/0x1C$
    alex@xandex-pc:~/0x1C$ ./5-main.py
    12
    alex@xandex-pc:~/0x1C$
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_neighbors(grid, i, j)

    return perimeter
