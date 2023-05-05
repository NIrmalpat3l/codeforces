# Accepted
for i in range(int(input())):
    n=int(input())
    if n==1:
        print("-1")
    else:
        n-=1
        print("2",end="")
        for i in range(n):
            print("3",end="")
        print()
        