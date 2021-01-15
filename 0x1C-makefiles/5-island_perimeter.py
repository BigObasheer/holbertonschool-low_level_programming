#!/usr/bin/python3
""" Returns perimeter of the island described """


def island_perimeter(grid):
    """ Return Perimeter """

    p = 0
    for x in range(0, len(grid)):
        for y in range(0, len(grid[0])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    p += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    p += 1
                if y == len(grid[0]) - 1 or grid[x][y + 1] == 0:
                    p += 1
                if y == 0 or grid[x][y - 1] == 0:
                    p += 1
    return p
