import string
# Задание 1. Welcome to Python
# name: string = input('Здравствуйте, какое у Вас имя? ')
# surname = input('О, а фамилия у Вас какая?')
# print('Приветствую Вас,', name, surname, "! Добро пожаловать в Python. Да пребудет с Вами удача!",sep = ' ')

from operator import truediv

# Задание 2. Заголовок
# text = input("Введите какой-нибудь текст: ")
# print(text.title())

# Задание 3. Форматированный вывод денежной суммы

# amount = float(input('Введите кол-во денег'))
# if amount > 0:
#     print(f'{amount:,.2f}')

# Попытки сделать свой алгоритм перевода в стандартный денежный формат:
# f1 = False
# # while (f1 != True):
# #     amount = float(input("Введите какую-то сумму денег! = "))
# #     if(amount > 1000000000):
# #         print("прошу вас, не надо, я не делал логику для этого")
# #     if(amount > 0):
# #         f1=True
# #     else:
# #         print("Число надо, положительное, а не Ваш счёт на кредитной карте....")
# amount = 234040.100 # 234,040.1
# result = ""
# while amount >0.001:
#
# if (amount > 1000000):
#     m = int(amount // 1000000)
#     result += str(m) + ","
#     amount -= m * 1000000
#     if (amount > 1000):
#         t = int(amount // 1000)
#         if (amount > 100000):
#             result += str(t)
#         elif (amount > 10000):
#             result += "0" + str(t)
#         elif (amount > 1000):
#             result += "00" + str(t)
#         else:
#             result += "000"
#         result += ","
#         amount -= t * 1000
#         if (amount > 0):
#             e = int(amount)
#             if (e > 100):
#                 result += str(e)
#             elif (e > 10):
#                 result += "0" + str(e)
#             elif (e > 0):
#                 result += "00" + str(e)
#             else:
#                 result += "000"
#             amount -= e
#             if (amount < 1):
#                 result += "." + str(round(amount, 2)).lstrip("0.")
#
# print(result)
# # if(m!=0):
# #     print("{},{},{}.{}".format(m,t, e, amount.lstrip("0.")))
# # elif(t!=0):
# #     print("{},{}.{}".format(t, e, amount.lstrip("0.")))
# # elif(amount!=0):
# #     print("{}.{}".format( e, amount.lstrip("0.")))
# # else:
# #     print("{}".format( e))

x = "hel"+"lo"
print(id(x))
x = "hello"
print(id(x))



























