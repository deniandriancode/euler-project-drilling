def fibonacci(n):
    t1 = 1
    t2 = 2
    if n == 1:
        return t1
    if n == 2:
        return t2
    
    nxt = t1 + t2
    c = 3
    while c < n:
        t1 = t2
        t2 = nxt
        nxt = t1 + t2
        c += 1

    return nxt

def fibonacci_even(n):
    t1 = 1
    t2 = 2
    if n == 1:
        return t1
    if n == 2:
        return t2
    
    nxt = t1 + t2 # must be odd (1 + 2)
    s = t2 # sum
    while nxt < n:
        t1 = t2
        t2 = nxt
        nxt = t1 + t2
        if nxt % 2 == 0:
            s += nxt

    return s

def solution():
    max_term = 4_000_000
    print(fibonacci_even(max_term))


if __name__ == "__main__":
    solution()
