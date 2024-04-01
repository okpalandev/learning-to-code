def fib(n):
    if n == 0:
        return 1
    return fib(n-1) + fib(n-2)

def fib2(n,memo):
    if n in memo:
        return memo[n]
    if n == 0:
        return 1
    memo[n] = fib2(n-1,memo) + fib2(n-2,memo)
    return memo[n]

def fib3(n):
    a,b = 1,1
    for i in range(n):
        a,b = b,a+b
    return a


if __name__ == "__main__":
    print('Fib 1 of 10:',fib(10))
    print('Fib 2 of 10:',fib2(10,{}))
    print('Fib 3 of 10:',fib3(10))