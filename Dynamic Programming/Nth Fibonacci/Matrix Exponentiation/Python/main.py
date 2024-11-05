def matmul(m1, m2):
    x = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0]
    y = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1]
    z = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0]
    w = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1]

    m1[0][0], m1[0][1] = x, y
    m1[1][0], m1[1][1] = z, w

def matpow(m1, n):
    if n in [0,1]:
        return
    m2 = [[1,1],[1,0]]
    matpow(m1, n//2)
    matmul(m1, m1)
    if n % 2 != 0:
        matmul(m1,m2)

def fibo(n):
    if n <= 1:
        return n
    m1 = [[1,1],[1,0]]
    matpow(m1,n-1)
    return m1[0][0]

if __name__ == '__main__':
    n = 6
    result = fibo(n)
    print(result)