pos = 0
depth = 0

with open("day2/input.txt") as inputf:
  for line in inputf:
    command, val = line.split()
    val = int(val)

    if command == "forward":
      pos += val

    elif command == "up":
      depth -= val

    elif command == "down":
      depth += val

print(f"horizontal position * depth = {pos*depth}")
