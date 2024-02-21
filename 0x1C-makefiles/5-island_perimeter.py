#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (list of list of integers): Represents the island, where 0 represents water and 1 represents land.

    Returns:
    - perimeter (int): The perimeter of the island.

    Example:
    >>> island = [
    ...     [0, 1, 0, 0],
    ...     [1, 1, 1, 0],
    ...     [0, 1, 0, 0],
    ...     [1, 1, 0, 0]
    ... ]
    >>> island_perimeter(island)
    16
    """
    if not grid:
        return 0

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Each land square adds 4 to the perimeter
                # Check neighboring cells
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 for each adjacent land square vertically
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 for each adjacent land square horizontally

    return perimeter
