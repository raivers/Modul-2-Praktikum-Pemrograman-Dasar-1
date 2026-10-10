import math

#test case 1
a1, b1 = map(float, input().split())

base1 = math.sqrt(b1**2 - a1**2)
height1 = a1
perimeter1 = a1 + b1 + base1
area1 = 0.5 * base1 * height1

print(f"Base = {base1:g} cm")
print(f"Height = {height1:g} cm")
print(f"Perimeter = {perimeter1:g} cm")
print(f"Area = {area1:g} cm^2")

#test case 2
a2 = float(input())
b2 = float(input())

base2 = math.sqrt(b2**2 - a2**2)
height2 = a2
perimeter2 = a2 + b2 + base2
area2 = 0.5 * base2 * height2

print(f"Base = {base2:g} cm")
print(f"Height = {height2:g} cm")
print(f"Perimeter = {perimeter2:g} cm")
print(f"Area = {area2:g} cm^2")