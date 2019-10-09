str=input()
list=[int(n) for n in str.split()]
A=list[0]
B=list[1]
Q=int(A//B)
R=A-B*Q
print(Q,R)
