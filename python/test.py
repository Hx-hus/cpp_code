price = int(input("请输入消费额(整数)："))
if price < 200:
    price = price - price *0.1
else:
    price = price - price * 0.2
print("折扣后的应付金额是：", price)
