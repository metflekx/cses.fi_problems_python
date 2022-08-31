def main():
    def search(x, arr):
        for i in range(0, len(arr)):
            if arr[i] != i+1:
                return i+1

    while True:
        n = int(input())
        if n >= 2 or n <= (2*100000):
            break

    string = input().split()
    lst = list()
    for c in string:
        lst.append(int(c))
    if n not in lst:
        print(n)
        return 0

    lst.sort()

    print(search(n, lst))
    return 0


main()
