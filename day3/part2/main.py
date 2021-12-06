report = []
oxygen_generator = 0
co2_scrubber = 0

with open("day3/input.txt", "r") as inputf:
  report = [line.strip() for line in inputf]

def get_oxygen_generator(report: list):
  for digit in range(12):
    ones = 0
    zeroes = 0

    if len(report) == 1:
      break

    for num in report:
      if num[digit] == '1':
        ones += 1
      else:
        zeroes += 1

    if zeroes > ones:
      report = list(filter(lambda num: num[digit] == '0', report))
    else:
      report = list(filter(lambda num: num[digit] == '1', report))

  return int(report[0], base=2)

def get_co2_scrubber(report: list):
  for digit in range(12):
    ones = 0
    zeroes = 0

    if len(report) == 1:
      break

    for num in report:
      if num[digit] == '1':
        ones += 1
      else:
        zeroes += 1

    if ones < zeroes:
      report = list(filter(lambda num: num[digit] == '1', report))
    else:
      report = list(filter(lambda num: num[digit] == '0', report))

  return int(report[0], base=2)

oxygen_generator = get_oxygen_generator(report)
co2_scrubber = get_co2_scrubber(report)

print(oxygen_generator * co2_scrubber)
