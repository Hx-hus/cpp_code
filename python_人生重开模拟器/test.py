import random
import sys  #引头文件，random是rand的头文件用于生成随机数

print("+------------------------------+")
print("|                              |")
print("|                              |")
print("|        人生重开模拟器        |")
print("|                              |")
print("|                              |")
print("+------------------------------+")


while True:
    print("请输入属性值(上限为20):")
    face = int(input("请输入颜值(上限为10):"))
    if face < 0 and face > 10:
        print("颜值输入错误，请重新输入")
        continue
    strong = int(input("请输入体制(上限为10):"))
    if strong < 0 and strong > 10:
        print("体制输入错误，请重新输入")
        continue
    iq = int(input("请输入智商(上限为10):"))
    if iq < 0 and iq > 10:
        print("智商输入错误，请重新输入")
        continue
    home = int(input("请输入家境(上限为10):"))
    if  home < 0 and home > 10:
        print("家境输入错误，请重新输入")
        continue
    if face + strong + iq + home > 20:
        print("属性输入错误，请重新输入")
        continue
    print(f'颜值：{face}  体制：{strong}  智商：{iq}  家境：{home}')

    break

point = random.randint(1, 10)
gender = point % 2
point = random.randint(1, 3)

if home == 10:
    if 7 < iq < 10:
        iq += 3
        if gender == 1:
            print("你出生在首都，是个男孩，父母是985 211 大学的教授")
        if gender == 0:
            print("你出生在首都，是个女孩，父母是985 211 大学的教授")
    elif 7 < strong < 10:
        strong += 3
        if gender == 1:
            print("你出生在首都，是个男孩，父母是世界冠军")
        if gender == 0:
            print("你出生在首都，是个女孩，父母是世界冠军")
    elif 7 < face < 10:
        face += 3
        if gender == 1:
            print("你出生在首都，是个男孩，父母是娱乐圈顶流")
        if gender == 0:
            print("你出生在首都，是个女孩，父母是娱乐圈顶流")
    else:
        iq += 1
        strong += 1
        face += 1
if 7 < home < 9:
    if 7 < iq < 10:
            iq += 3
            if gender == 1:
                print("你出生在城市，是个男孩，父母是大学的教授")
            if gender == 0:
                print("你出生在城市，是个女孩，父母是大学的教授")
    elif 7 < strong < 10:
        strong += 3
        if gender == 1:
            print("你出生在城市，是个男孩，父母是健身教练")
        if gender == 0:
            print("你出生在城市，是个女孩，父母是健身教练")
    elif 7 < face < 10:
        face += 3
        if gender == 1:
            print("你出生在城市，是个男孩，父母是")
        if gender == 0:
            print("你出生在城市，是个女孩，父母是")
    else:
        iq += 1
        strong += 1
        face += 1

            


    



    

 