aim = 0
pos = 0
depth = 0

with open("day2/input.txt", "r") as inputf:
  for line in inputf:
    command, val = line.split()
    val = int(val)

    if command == "forward":
      pos += val
      depth += val * aim

    elif command == "up":
      aim -= val

    elif command == "down":
      aim += val

print(f"horizontal position * depth = {depth * pos}")
