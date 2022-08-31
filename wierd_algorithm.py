while True:
    n = int(input())
    if n >= 1 and n <= 1000000:
        break
 
print(int(n), end=" ")
while True:
    if n == 1:
        break
    else:
        if n % 2 == 0:
            n = n/2
        else:
            n = n * 3 + 1
    print(int(n), end=" ")
