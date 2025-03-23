n = int(input("Enter limit: "))

a = 0 
b = 1 
c = 1 

if (n==0):
    print(a)    
elif n >= 1 : 
    print(a)
    i = 2
    while(i<=n) :
        print(c)
        c = a + b 
        a = b 
        b = c 
        i+= 1 
        