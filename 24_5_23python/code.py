d = "hello"

print(len(d)) #求字符串长度使用len

f = " world"

print(d + f) #拼接字符串

#在python中类型是会变换的，则为动态类型，动态类型较为灵活，但是编程当中灵活往往以为是更加容易出错

a = 10

print(f"a = {a}")#f叫做格式化输出

a = input('请输入一个数字：')#会等待用户输入，只有输入的时候才会进行下一步
#input返回的类型是字符串类型，如果要整数就需要进行转换
print(f'输入的数字是：{a}')
print(type(a))

a = input("请输入第一个整数：")
a = int(a)
print(type(a))


