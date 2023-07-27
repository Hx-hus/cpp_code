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
			while (!(sym.top() == '('))//������������ջ��һ�������������
			{
				tmp += sym.top();
				sym.pop();
				tmp += ' ';
			}
			sym.pop();
			str.erase(0, 1);
		}
		//����ǰһ���Ƿ��ŵ�ʱ��ֻҪջΪ�գ����ߵ�ǰ�������ȼ�����ջ��Ԫ�أ���ͽ�������ջ,���ߵ�ջ��Ԫ��Ϊ(ʱ��ֱ����ջ
		if ((str[0] <= '0' || str[0] >= '9') && (sym.empty() ||tf|| p[o.find(str[0])] > p[o.find(sym.top())]))
		{
			tf = false;
			sym.push(str[0]);
			str.erase(0, 1);
		}
		//�����������ŵ�ʱ����ջ�����Ҵ��ϼǺ�Ϊtrue,ʹ�������Ų���(�����ȼ���ֱ�ӽ�ȥ��ջ
		if (str[0] == '(')
		{
			sym.push(str[0]);
			str.erase(0, 1);
			tf = true;
		}
		//��ǰ���ŵ����ȼ��ǲ�����ջ��Ԫ�صģ��ͳ�ջ��Ԫ�أ�����ջ����Ϊ��
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
		if (str[0] == ' ') str.erase(0, 1);//���пո��ʱ��Կո����ɾ������
		if(str[0] <= '9' && str[0] >= '0')//��������������һ��������
		{
			string tmp;
			while (str[0] != ' ')//������һ���ո��ʱ��֤����������
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