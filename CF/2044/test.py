
arr = [(i+1) * 9 * 10**i for i in range(14)]
for i in range(1, 14):
  arr[i] = arr[i] + arr[i-1]

t = int(input())
for _ in range(t):
  n = int(input())
  idx = 0
  for i in range(14):
    if arr[i] > n:
      idx = i
      break

  num = 0
  if idx == 0:
    num = n
    print((num * (num + 1)) // 2)
    continue
  num = n - arr[idx-1]
  full_num = num // (idx + 1) + (10**idx - 1)
  ans = (full_num * (full_num + 1)) // 2

  partial_num = num % (idx + 1)
  if partial_num > 0:
    str_n = int(str(full_num + 1)[:partial_num])
    ans += str_n

  print(ans)
