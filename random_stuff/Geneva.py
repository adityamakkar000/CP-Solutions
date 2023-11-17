import math

for i in range(0,10000000000000000000):
  # check if 81 + 4i^2 is a perfect square
  if (math.sqrt(81 + 4 * i * i) == int(math.sqrt(81 + 4 * i * i))):
    print("Found a solution: " + str(i))

