def solution():
    c = 0               # variable to store the sum
    r = 1000            # upper bound
    for i in range(1, r):
        if i % 3 == 0 or i % 5 == 0:
            c += i

    return c

if __name__ == "__main__":
    print(solution())

