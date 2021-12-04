diagnostic_report = []
epsilon_rate = ""
gamma_rate = ""

with open("day3/input.txt", "r") as inputf:
  for line in inputf:
    diagnostic_report.append(line)

for col in range(12):
  one_count = 0
  zero_count = 0

  for row in range(len(diagnostic_report)):
    if diagnostic_report[row][col] == '1':
      one_count += 1
    else:
      zero_count += 1

  if one_count > zero_count:
    gamma_rate += '1'
    epsilon_rate += '0'
  else:
    gamma_rate += '0'
    epsilon_rate += '1'

gamma_rate = int(gamma_rate, base=2)
epsilon_rate = int(epsilon_rate, base=2)
print(gamma_rate * epsilon_rate)
