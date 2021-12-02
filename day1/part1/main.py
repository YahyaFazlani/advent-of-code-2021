depths = []
inc_count = 0

with open("day1/input.txt", "r") as inputf:
  for line in inputf:
    depths.append(int(line.strip()))
  
for i in range(1999):
  if depths[i+1] > depths[i]:
    inc_count += 1

print(f"Depths larger than the previous: {inc_count}")