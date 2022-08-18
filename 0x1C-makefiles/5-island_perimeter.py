#!/usr/bin/python3

"""
Module 5-island_perimeter
"""


def island_perimeter(grid):
    """
    function returns the perimeter of the island described in grid

    args:
    grid - two dimensional integer array of values 0 and 1

    return - integer representing the perimeter of the island described in grid
    """
    i = 0
    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                i += 4
                if x - 1 >= 0 and grid[x - 1][y] == 1:
                    i -= 2
                if y - 1 >= 0 and grid[x][y - 1] == 1:
                    i -= 2
    return (i)
