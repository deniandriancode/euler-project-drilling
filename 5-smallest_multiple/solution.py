def valid(n):
    res = True
    for i in range(11, 21):
        if n % i != 0:
            res = False
            break

    return res

def solution():
    n = 2520
    s = n
    cond = True
    while cond:
        if valid(s):
            cond = False
            break
        s += n
            

    print(s)


# 232792560 -> solution?
    
if __name__ == "__main__":
    solution()
