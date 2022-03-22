#!/usr/bin/python3
""" Island perimeter """

def island_perimeter(grid):
    """ Returns the perimeter of the island """
    perimeter = 0
    length = len(grid) - 1
    width = len(grid) - 1

    for i, r in enumerate(grid):
        for j, n in enumerate(grid):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] != 1:
                    perimeter += 1
                if j == width or grid[i][j + 1] != 1:
                    perimeter += 1
                if i == length or grid[i + 1][j] != 1:
                    perimeter += 1
    return perimeter
