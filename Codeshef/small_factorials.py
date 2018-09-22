a=[]
t=int(input())

def factorial(n):
    if n == 0:
        return 1
    f = n * factorial(n-1)
    return(f)

for i in range(0,t):

    a.append(int(input()))

for x in range(0,len(a)):
    print(factorial(a[x]))

