#test case 1
a1, b1, i1, j1, x1, y1 = map(float, input().split())
result_1 = (a1-b1) * (i1/j1) - (x1+y1)
print(f"{result_1:.3f}")

#test case 2
a2, b2 = map(float, input().split())
i2, j2 = map(float, input().split())
x2, y2 = map(float, input().split())
result_2 = (a2-b2) * (i2/j2) - (x2+y2)
print(f"{result_2:.3f}") 