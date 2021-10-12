#отримати дані від користувача
a1 = float(input("a1="))
a2 = float(input("a2="))
b1 = float(input("b1="))
b2 = float(input("b2="))
c1 = float(input("c1="))
c2 = float(input("c2="))
#розрахувати
y =(c2-a2*c1/a1)/(b2-a2*b1/a1)
x = (c1- b1*y)/a1

#перевірити
if b1 == b2 or a1==a2:
    if b1 == 0 or a2 ==0:
        if a1!=a2 or b1!=b2:
            print("no")
if b1 == b2 and a1 == a2 and c1!=c2:
    print("no")

else:
     #вивести
    print("х=", x)
    print("y=", y)
