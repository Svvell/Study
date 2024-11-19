from math import floor
from random import *

# Задание 1: написать программу, которая будет вычислять среднее значение этих чисел.
# Пример: (52 + 56 + 60) / 3 = 56

# n_Numbers: int = 3
# low_Value = 0  # int(input("Введите нижнюю границу рандомайзера"))
# high_Value = 100  # int(input("Введите верхнюю границу рандомайзера"))
# summa: int = 0
# average_value: float = 0
# rand_numbers:str = ""
# for i in range(n_Numbers):
#     rand_number:int = randint(low_Value, high_Value)
#     summa += rand_number
#     rand_numbers+=str(rand_number) + " "
# print(rand_numbers)
# print("Среднее значение = " + str(round(summa / n_Numbers,2)))


# Задание 2: написать программу, которая будет печать результат целочисленного деления этих чисел,
# а также остаток от деления первого от второго.
# Пример: x = 177 и y = 10


# low_Value = 0  # int(input("Введите нижнюю границу рандомайзера"))
# high_Value = 100  # int(input("Введите верхнюю границу рандомайзера"))
# first_number: int = randint(low_Value, high_Value)
# print("Первое число = ", first_number)
# second_number: int = randint(low_Value, high_Value)
# print("Второе число = ", second_number)
# print(first_number // second_number, first_number % second_number)


# Задание 3: написать программу, которая будет округлять заданное число:
# 1) 2‑х знаков после запятой;
# 2) до целого;
# 3) дополнять слева столько нулей, сколько не хватает числу до 11 знаков.

# x:float = float(input("Введите вещественное число: "))
# print("1) ", round(x,2))
# print("2) ", round(x))
# print(f"3) {x:011}")

# Задание 4: написать программу, которая будет инвертировать целое число

# input_number: int = int(input("Введите целое число"))
# reversed_number:int = 0
# while input_number > 0:
#     reversed_number = reversed_number*10+input_number%10
#     input_number//=10
# print(reversed_number)


# Задание 5: написать программу, которая будет инвертировать целое число.
# Если инвертированное число выходит за границы (32-bit integer), то вернуть 0.

# input_number: int = int(input("Введите целое число: "))
# x = input_number
# reversed_number: int = 0
# INT_MAX = 2 ** 32
# INT_MIN = -INT_MAX
# if INT_MIN < x < INT_MAX:
#     while x > 0:
#         reversed_number = reversed_number * 10 + x % 10
#         x //= 10
#     else:
#         reversed_number = 0
# print(f"{x}->{reversed_number}")
