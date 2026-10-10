phi = 22/7

#test case 1
r1 = float(input())
t1 = float(input())

volume1 = phi * r1 * r1 * t1
area1 = 2 * phi * r1 * (r1 + t1)
circumference1 = 2 * phi * r1

print(f"Volume = {volume1:.2f}")
print(f"Area = {area1:.2f}")
print(f"Circumference = {circumference1:.2f}")

#test case 2
r2, t2 = map(float, input().split())

volume2 = phi * r2 * r2 * t2
area2 = 2 * phi * r2 * (r2 + t2)
circumference2 = 2 * phi * r2

print(f"Volume = {volume2:.2f}")
print(f"Area = {area2:.2f}")
print(f"Circumference = {circumference2:.2f}")