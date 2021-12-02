depths = []
inc_count = 0

with open("day1/input.txt", "r") as inputf:
  for line in inputf:
    depths.append(int(line.strip()))

for i in range(2000-3):
  window1 = depths[i] + depths[i + 1] + depths[i + 2]
  window2 = depths[i + 1] + depths[i + 2] + depths[i + 3]

  if window2 > window1:
    inc_count += 1

print(f"Windows larger than the previous: {inc_count}")
