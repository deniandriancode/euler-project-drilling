def solution():
    a = b = 999
    i = True
    while a >= 100 and b >= 100:
        n = a * b
        if str(n) == str(n)[::-1]:
            print(n)
            break

        if i:
            a -= 1
            i = False
        else:
            b -= 1
            i = True


if __name__ == "__main__":
    solution()
