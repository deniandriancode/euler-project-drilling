def solution():
    num = 120000 # need to be improved to gain more performance
    ps = [True] * (num+1)
    res = []
    p = 2
    while p * p <= num:
        if ps[p]:
            for i in range(p * p, num+1, p):
                ps[i] = False
        p += 1

    for i in range(2, num+1):
        if ps[i]:
            res.append(i)

    # print(len(res))
    print(res[10000])

if __name__ == "__main__":
    solution()
