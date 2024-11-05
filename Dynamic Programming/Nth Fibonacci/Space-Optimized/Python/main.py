def fibo(n):
    if n <= 1:
        return n
    curr,prev1, prev2 = 0,1,0
    for i in range(2, n+1):
        curr = prev1+prev2
        prev2=prev1
        prev1=curr
    return curr

if __name__ == '__main__':
    n = 6
    result = fibo(n)
    print(result)