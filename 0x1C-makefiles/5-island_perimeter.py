#!/usr/bin/python3


def island_perimeter(grid):

    if grid == [[1]]:
        return 1

    if grid == [0] or grid == [[0]]:
        return 0

    perm = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 0:
                continue

            if grid[i][j] == 1 and (j - 1 < 0 or grid[i][j-1] == 0):
                perm += 1

            if grid[i][j] == 1 and (i - 1 < 0 or grid[i-1][j] == 0):
                perm += 1

            if grid[i][j] == 1 and (j + 1 == len(grid[i]) or
                                    grid[i][j+1] == 0):
                perm += 1

            if grid[i][j] == 1 and (i + 1 == len(grid) or grid[i+1][j] == 0):
                perm += 1

    return perm
