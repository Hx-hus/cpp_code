#define _CRT_SECURE_NO_WARNINGS 1 

#include<stack>
#include<iostream>
#include<string>

using namespace std;

int p[4] = {0, 0, 1, 1};
string o = "+-*/";
bool tf;

string infix_to_pos(string& str)
{
	stack<char> sym;
	string tmp;
	tmp.erase(0, 1);
	while (!str.empty())
	{
		while (str[0] >= '0' && str[0] <= '9')
		{
			tmp += str[0];
			str.erase(0, 1);
		}
		tmp += ' ';
		if (str[0] == ')')
		{
			while (!(sym.top() == '('))//遇到右括号则栈内一定会出现左括号
			{
				tmp += sym.top();
				sym.pop();
				tmp += ' ';
			}
			sym.pop();
			str.erase(0, 1);
		}
		//当当前一定是符号的时候，只要栈为空，或者当前符号优先级高于栈顶元素，则就将符号入栈,或者当栈顶元素为(时候直接入栈
		if ((str[0] <= '0' || str[0] >= '9') && (sym.empty() ||tf|| p[o.find(str[0])] > p[o.find(sym.top())]))
		{
			tf = false;
			sym.push(str[0]);
			str.erase(0, 1);
		}
		//当遇到左括号的时候入栈，并且打上记号为true,使其他符号不与(比优先级，直接进去入栈
		if (str[0] == '(')
		{
			sym.push(str[0]);
			str.erase(0, 1);
			tf = true;
		}
		//当前符号的优先级是不高于栈顶元素的，就出栈顶元素，并且栈不能为空
		while ((str[0] <= '0' || str[0] >= '9') && !sym.empty() && p[o.find(str[0])] <= p[o.find(sym.top())])
		{
			tmp += sym.top();
			sym.pop();
			tmp += ' ';
		}
	}
	return tmp;
}

int tmpnota(string str)
{
	stack<int> sum;
	while (!str.empty())
	{
		if (str[0] == ' ') str.erase(0, 1);//当有空格的时候对空格进行删除操作
		if(str[0] <= '9' && str[0] >= '0')//遇到这个区间的数一定是数字
		{
			string tmp;
			while (str[0] != ' ')//遇到下一个空格的时候证明该数结束
			{
				tmp += str[0];
				str.erase(0, 1);
			}
			sum.push(stoi(tmp));
		}
		if (str[0] == '+')
		{
			str.erase(0, 1);
			int x = sum.top();
			sum.pop();
			int y = sum.top();
			sum.pop();
			int z = x + y;
			sum.push(z);
		}
		if (str[0] == '-')
		{
			str.erase(0, 1);
			int x = sum.top();
			sum.pop();
			int y = sum.top();
			sum.pop();
			int z = x - y;
			sum.push(z);
		}
		if (str[0] == '*')
		{
			str.erase(0, 1);
			int x = sum.top();
			sum.pop();
			int y = sum.top();
			sum.pop();
			int z = x * y;
			sum.push(z);
		}
		if (str[0] == '/')
		{
			str.erase(0, 1);
			int x = sum.top();
			sum.pop();
			int y = sum.top();
			sum.pop();
			int z = x / y;
			sum.push(z);
		}
	}
	return sum.top();
}
int main()
{
	string tmp = "3*(4+7)+2/10";
	cout << tmpnota(infix_to_pos(tmp));
	return 0;
}