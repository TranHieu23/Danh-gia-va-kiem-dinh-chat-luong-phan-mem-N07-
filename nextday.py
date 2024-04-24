def is_leap_year(year):
    return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)

def next_date(day, month, year):
    days_in_month = [31, 29 if is_leap_year(year) else 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

    if day < days_in_month[month - 1]:
        return day + 1, month, year
    elif month < 12:
        return 1, month + 1, year
    else:
        return 1, 1, year + 1

# Nhập ngày, tháng, năm từ bàn phím
day = int(input("Nhập ngày: "))
month = int(input("Nhập tháng: "))
year = int(input("Nhập năm: "))

# Gọi hàm next_date với ngày, tháng, năm vừa nhập
next_day, next_month, next_year = next_date(day, month, year)

# In ra ngày tiếp theo
print(f"Ngày tiếp theo của {day}/{month}/{year} là {next_day}/{next_month}/{next_year}.")

