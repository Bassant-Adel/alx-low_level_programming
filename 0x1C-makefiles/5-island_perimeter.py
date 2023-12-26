#!/usr/bin/python3
""" island """


def island_perimeter(grid):
    bw = len(grid[0])
    hb = len(grid)
    edges = 0
    size = 0

    for b in range(hb):
        for a in range(bw):
            if grid[b][a] == 1:
                size += 1
                if (a > 0 and grid[b][a - 1] == 1):
                    edges += 1
                if (b > 0 and grid[b - 1][a] == 1):
                    edges += 1
    return (size * 4 - edges * 2)
