def sum_of_square(n):
    s = 0
    for i in range(1, n+1):
        s += pow(i, 2)

    return s

def square_of_sum(n):
    s = 0
    for i in range(1, n+1):
        s += i

    return pow(s, 2)

def solution():
    v = 100
    res = abs(square_of_sum(v) - sum_of_square(v))
    print(res)
    


if __name__ == "__main__":
    solution()
