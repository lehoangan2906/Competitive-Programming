def fib( n):
    dict = [0, 1]
    for i in range(2, n+1):
        dict.append(dict[i-1] + dict[i-2])
    return dict[n]

def fib2(n):
    memo = [0, 1]
    if n < 0:
        return None
    elif n == 1 or n == 0:
        return n
    elif n not in memo:
        memo.append(fib2(n-1) + fib2(n-2))
        return fib2(n-1) + fib2(n-2)
    else:
        return fib2(n)
    
print(fib2(4))
