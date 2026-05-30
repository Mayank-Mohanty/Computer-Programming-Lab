#1. WAP to print nth prime number.
n=int(input("Enter n: "))
cnt=0
num=1
while (cnt!=n):
    num+=1
    valid=1
    for i in range(2,num): # (num//2)+1 or int(math.sqrt(num))+1 
        if (num%i==0):
            valid=0
            break
    if (valid==1): cnt+=1    
print(f"{n}th Prime Number: {num}")

n=int(input("Enter n: "))
cnt=0
num=1
while (cnt!=n):
    num+=1
    fac=0
    for i in range(1,num+1):
        if (num%i==0):
            fac+=1
    if (fac==2): cnt+=1
print(f"{n}th Prime Number: {num}")

#2. Armstrong number
n=int(input("Enter n: "))
dup=n
ctr=0
sum=0
while(n!=0):
    ctr+=1
    n//=10
n=dup
while(n!=0):
    digit=n%10
    sum+=digit**ctr
    n//=10
if (sum==dup): print("Armstrong number")
else: print("Not An Armstrong Number")

#3. Digit root of a number
n=int(input("Enter n: "))
while(n>9):
    sum=0
    while(n!=0):
        digit=n%10
        sum+=digit
        n//=10
    n=sum
print(f"Digit Root: {n}")

n=int(input("Enter n: "))
sum=0
while(n!=0):
    digit=n%10
    sum+=digit
    n//=10
    if (n==0 and sum>=10):
        n=sum
        sum=0
print(f"Digit Root: {sum}")


#     1
#    1 1
#   1 2 1
#  1 3 3 1
# 1 4 6 4 1
