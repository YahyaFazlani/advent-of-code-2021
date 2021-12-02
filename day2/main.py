hrzntl_pos = 0
depth = 0

with open("day2/input.txt") as inputf:
  for line in inputf:
    command = line.split()

    if command[0] == "forward":
      hrzntl_pos += int(command[1])

    elif command[0] == "up":
      depth -= int(command[1])

    elif command[0] == "down":
      depth += int(command[1])

print(f"horizontal position * depth = {hrzntl_pos*depth}")
