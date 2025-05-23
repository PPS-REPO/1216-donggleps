import sys

inp = sys.stdin.read()
lines = inp.splitlines()
assert len(lines) == 1, 'Input must be a single line'

parts = lines[0].split()
assert len(parts) == 3, 'Input must contain exactly three values separated by spaces'

for i, part in enumerate(parts):
    assert part.isdigit(), f'Value {i+1} is not a valid integer'
    value = int(part)
    assert 1 <= value <= 10**9, f'Value {i+1} is out of bounds (1 ≤ value ≤ 10^9)'
