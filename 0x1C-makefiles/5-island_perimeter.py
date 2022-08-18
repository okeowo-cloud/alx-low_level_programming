#!/usr/bin/python3

def island_perimeter(grid):
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
