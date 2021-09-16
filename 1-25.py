import math
gip = float(input("гіпотенуза = "))
cat1 = float(input("перший катет = "))
cat2 = gip**2 - cat1**2
print("другий катет =", math.sqrt(cat2))
