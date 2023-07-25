q = int(input())

if q == 1:
    n = int(input())
    s1 = list(map(int, input().split(" ")))
    s2 = list(map(int, input().split(" ")))

    s1.sort()
    s2.sort()

    maxSpeed = 0

    for i in range(n):
        speed = max(s1[i], s2[i])
        maxSpeed += speed

    print(maxSpeed)


elif q == 2:
    n = int(input())
    s1 = list(map(int, input().split(" ")))
    s2 = list(map(int, input().split(" ")))

    s1.sort()
    s2.sort(reverse=True)

    minSpeed = 0
    for i in range(n):
        speed = max(s1[i], s2[i])
        minSpeed += speed

    print(minSpeed)
