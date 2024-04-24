def classify_triangle(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        if a == b and b == c:
            return "Equilateral"
        elif a == b or b == c or c == a:
            return "Isosceles"
        else:
            return "Scalene"
    else:
        return "NotATriangle"

a = int(input("Nhập cạnh a: "))
b = int(input("Nhập cạnh b: "))
c = int(input("Nhập cạnh c: "))
print(classify_triangle(a, b, c))
