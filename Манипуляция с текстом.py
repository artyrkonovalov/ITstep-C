#Манипуляция с текстом
text = "Всегда мечтали сделать слова краивыми и легкими?"

print('Исходный текст')
print(text)

print('\nА в верхнем регистре слабо?')
print(text.upper())
print('\nНу а про нижний регистр что скажите?')
print(text.lower())
print('\nХмб а как сделать все первые буквы большими?')
print(text.title())
print('\nКак бы это че-нить вредительский подменить?')
print(text.replace("красивыми',"страшными"))
print('\nПоменяем регистры наоборот = 0')
print(text.swapcase())
print('\nНу а теперь все как и было...')
print(text)
input("\n\nPress Enter, to continue...")
