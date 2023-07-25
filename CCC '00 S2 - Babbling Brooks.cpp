start = 0
n = int(input())
streams = []

for i in range(n):
    a = int(input())
    streams.append(a)


while start != 77:
    start = int(input())
    spilt = []
    join = []

    if start == 99:
        position = int(input())
        percentage = int(input())/100
        store = streams[position-1]
        streams[position-1] = streams[position-1]*percentage
        s = 1 - percentage
        streams.insert(position, store*s)

    if start == 88:
        p = int(input())
        streams[p-1] += streams[p]
        del streams[p]

for i in range(len(streams)):
    streams[i] = round(streams[i])

print(*streams, sep=" ")
