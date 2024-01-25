#!/usr/bin/python3
""" module of 5-island_perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    x = 0
    l = len(grid) - 1
    w = len(grid[0]) - 1

    for y, z in enumerate(grid):
        for a, b in enumerate(z):
            if b == 1:
                if y == 0 or grid[y - 1][a] != 1:
                    x += 1
                if a == 0 or grid[y][a - 1] != 1:
                    x += 1
                if a == w or grid[y][a + 1] != 1:
                    x += 1
                if y == l or grid[y + 1][a] != 1:
                    x += 1
    return x
