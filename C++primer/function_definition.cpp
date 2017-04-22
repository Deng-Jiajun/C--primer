#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include <initializer_list>
#include"function_declaration.h"
#include<random>

//read the element of vector<int>
void check(const std::vector<int> &vec)
{
	if (vec.empty())
		std::cout << "size: 0; no values." << std::endl;
	else
	{
		std::cout << "size: " << vec.size() << "; values:";
		for (auto it = vec.begin(); it != vec.end(); it++)
			std::cout << *it << ",";
		std::cout << "\b." << std::endl;
	}
}


//read the element of vector<string>
void check(const std::vector <std::string> &vec)
{
	if (vec.empty())
		std::cout << "size: 0; no values." << std::endl;
	else
	{
		std::cout << "size: " << vec.size() << "; values:";
		for (auto it = vec.begin(); it != vec.end(); it++)
			if (it->empty())
				std::cout << "(null)" << ",";
			else
				std::cout << *it << ",";
		std::cout << "\b." << std::endl;
	}
}


//compare the two int array a and b
void comp_3_36(const int *abegin, const int *aend, const int *bbegin, const int *bend)
{
	auto dif_a = aend - abegin;
	auto dif_b = bend - bbegin;

	if (dif_a != dif_b)
		std::cout << " different" << std::endl;
	else
	{
		decltype(dif_a) i;
		auto targe_a = abegin;
		auto targe_b = bbegin;
		for (i = 0; i < dif_a; i++)
		{
			if (*(targe_a + i) != *(targe_b + i))
			{
				std::cout << " different" << std::endl;
				break;
			}
		}
		if (i == dif_a)
			std::cout << "a equal to b" << std::endl;
	}
}

//calculate a number's factorial
int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

//calculate a number's absolute value
int absolute_value(int val)
{
	return (val > 0) ? val : -val;
}

//calculate functon called times
void cfct(void)
{
	static int i;//如果局部静态变量没有显式初始化，内置类型的局部静态变量初始化为0
	std::cout << ++i << "times" << std::endl;
}


void swap_reference(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}


void swap_pointer(int *a, int*b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

//找S里c第一出现的位置，返回下标，occurs记录出现次数;
//没有出现则返回S.size();occurs为0;
std::string::size_type find_char(const std::string &s, char c,
	std::string::size_type &occurs)
{
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret)i = 0; i != s.size(); i++)
	{
		if (s[i] == c)
		{
			if (ret == s.size())//初始数据即ret==s.size();后改变ret的值；
				ret = i;
			++occurs;
		}
	}
	return ret;
}


//判断s有没有大写字母
bool Judge_Wheather_Capital_Letter(const std::string &s)
{
	for (auto i : s)
	{
		if (isupper(i))
		{
			return true;
		}
	}
	return false;
}

//把s的大写改小写
std::string Transform_Capital_Letter(std::string &s)
{
	for (decltype(s.size()) i = 0; i != s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}

//比较a 和*b
int return_greater(int a, int *b)
{
	return (a > *b) ? a : *b;
}

//交换两个int指针
void SwapPointer(int *a, int *b)
{
	int *tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void reference_print_6_2_4(int(&arr)[2])
{
	for (auto i : arr)
		std::cout << i << std::endl;
}

void beg_end_print(const int *beg, const int *end)
{
	while (beg != end)
		std::cout << *beg++ << std::endl;

}
void count_print(const int *arr, const size_t count)
{
	for (size_t i = 0; i != count; i++)
		std::cout << arr[i] << std::endl;

}

// #include <initializer_list>中的 std::initializer_list<type>
// 通过花括号进行列表初始化赋值数量不定的变量	↓
//									sum_6_27({1,2,3,4,5})
int sum_6_27(std::initializer_list<int> init)
{
	int sum = 0;
	for (auto i : init)
	{
		sum += i;
	}
	return sum;
}


const std::string &shorterString(const std::string &s1, const std::string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

//返回值为引用类型，可作为左值
char &get_val_202(std::string &str, std::string::size_type ix)
{
	return str[ix];
}

//递归法求阶乘
int factorial(int val)
{
	if (val > 1)
		return factorial(--val)*val;
	return 1;

}


//递归输出vector对象的内容
void print_6_33_1(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
	if (beg != end)
	{
		std::cout << *beg << " ";
		print_6_33_1(std::next(beg), end);
	}
}
void print_6_33_1(std::vector<std::string>::iterator beg, std::vector<std::string>::iterator end)
{
	if (beg != end)
	{
		std::cout << *beg << " ";
		print_6_33_1(std::next(beg), end);
	}
}


std::string pf_221(const std::string &s1, const std::string &s2)
{
	return s1 > s2 ? s1 : s2;
}

//函数引用，加减乘除
int add_224(const int &a, const int &b)
{
	return a + b;
}
int subtract_224(const int &a, const int &b)
{
	return a - b;
}
int multiply_224(const int &a, const int &b)
{
	return a * b;
}
int divide_224(const int &a, const int &b)
{
	return a / b;
}

//返回给定范围[a,b]内的随机unsigned值,需要#include<random>
const unsigned range_based_random(const unsigned &a, const unsigned &b)
{
	static std::uniform_int_distribution<unsigned> u(a, b);//范围将被保留，多次使用建议去除static
	static std::default_random_engine e;//可以加入时间种子 e.seed(time(NULL));或直接初始化为e(time(NULL));

	return u(e);
}


/*		所有有关大数的操作都默认操作数为正整数，不含正负号，可能含有前导0		*/


//大数比较 包含正负号判断
//不能有前导0，自行删掉再来;
const int CompareLargeNumber(const std::string &N1, const std::string &N2)
{
	if (N1[0] != '-'&&N2[0] == '-')	return 1;
	if (N1[0] == '-'&&N2[0] != '-')	return -1;

	std::string A = N1, B = N2;

	if (N1[0] != '-' && N2[0] != '-')
	{
		A = LargeNumberCutZero(A);
		B = LargeNumberCutZero(B);
		if (A.size() > B.size()) return 1;
		if (A.size() < B.size()) return -1;
		if (A.size() == B.size())
		{
			if (A > B) return 1;
			if (A < B) return -1;
			if (A == B) return 0;
		}
	}

	if (N1[0] == '-'&&N2[0] == '-')
	{
		A.erase(A.begin());
		B.erase(B.begin());
		A = LargeNumberCutZero(A);
		B = LargeNumberCutZero(B);
		if (N1.size() > N2.size()) return -1;
		if (N1.size() < N2.size()) return 1;
		if (N1.size() == N2.size())
		{
			if (N1 > N2)return -1;
			if (N1 < N2)return 1;
			if (N1 == N2)return 0;
		}

	}
	return 0;
}

//删去前导0
const std::string LargeNumberCutZero(const std::string &N)
{
	std::string S = N;
	auto Sbeg = S.begin();
	while (*Sbeg == '0')
	{
		if (S == "0") return "0";
		S.erase(S.begin());
	}
	return S;
}

//大数相加
const std::string AddLargeNumber(const std::string &N1, const std::string &N2)
{
	std::string A = N1, B = N2;

	A = LargeNumberCutZero(A);
	B = LargeNumberCutZero(B);
	if (CompareLargeNumber(A, B) != 1)
	{
		std::string tmp;
		tmp = A;
		A = B;
		B = tmp;
	}
	//A大于B 或 AB相等

	auto Abeg = A.begin();
	auto Bbeg = B.begin();
	auto Aend = A.end();
	auto Bend = B.end();
	bool carry = false;//进位

	while (Aend != Abeg)
	{
		int tmp;
		if (Bend != Bbeg)
			tmp = *--Aend + *--Bend + carry - '0';
		else
			tmp = *--Aend + carry;

		carry = false;//进位被使用

		if (tmp > '9')
		{
			tmp -= 10;
			carry = true;
		}
		*Aend = tmp;
	}

	if (carry)//还有未使用的进位
		A.insert(0, "1");

	return A;
}

//大数相减
const std::string SubtractLargeNumber(const std::string &N1, const std::string &N2)
{
	std::string A = N1, B = N2;
	A = LargeNumberCutZero(A);
	B = LargeNumberCutZero(B);

	bool flag = false;//负号标志
	if (CompareLargeNumber(A, B) == -1)//判断A B的大小
		flag = true;

	if (CompareLargeNumber(A, B) != 1)
	{
		std::string tmp;
		tmp = A;
		A = B;
		B = tmp;
	}
	//A大于B

	auto Abeg = A.begin();
	auto Bbeg = B.begin();
	auto Aend = A.end();
	auto Bend = B.end();
	bool back = false;//退位

	while (Aend != Abeg)
	{
		int tmp;
		if (Bend != Bbeg)
			tmp = *--Aend - *--Bend - back + '0';
		else
			tmp = *--Aend - back;

		back = false;//退位被使用

		if (tmp < '0')
		{
			tmp += 10;
			back = true;
		}
		*Aend = tmp;
	}

	A = LargeNumberCutZero(A);

	//补正负号
	if (flag)
		A.insert(0, "-");
	return A;
}

//伪大数相乘(大数相乘基础)
const std::string PesudoMultiplyLargeNumber(const std::string &N1, const std::string &N2)
{
	std::string A, B, S = "0";
	A = N1; B = N2;

	while (B != "0")
	{
		S = AddLargeNumber(S, A);
		B = SubtractLargeNumber(B, "1");
	}
	return S;
}

//大数相乘
const std::string MultiplyLargeNumber(const std::string &N1, const std::string &N2)
{
	//函数指针PMLN，指向PesudoMultiplyLargeNumber
	const std::string(*PMLN)(const std::string &N1, const std::string &N2);
	const std::string(*ALN)(const std::string &N1, const std::string &N2);
	PMLN = PesudoMultiplyLargeNumber;
	ALN = AddLargeNumber;

	std::string A = N1, B = N2, S = "0";

	A = LargeNumberCutZero(A);
	B = LargeNumberCutZero(B);
	if (CompareLargeNumber(A, B) != 1)
	{
		std::string tmp;
		tmp = A;
		A = B;
		B = tmp;
	}


	auto Bbeg = B.begin();
	auto Bend = B.end();
	std::string zero;

	while (Bbeg != Bend)
	{
		std::string tmp;
		tmp = *(--Bend);//B每一位的值

		//tmp = PMLN(A, tmp)+zero;
		S = ALN(S, PMLN(A, tmp) + zero);
		//S = ALN(S, tmp);//加入tmp的值

		zero += "0";//补0	
	}
	return S;
}

//大数相除
const std::string DivideLargeNumber(const std::string &N1, const std::string &N2)
{
	std::string A = N1, B = N2;
	auto dif = A.size() - B.size();

	std::string tmp_A = A, tmp_B = B, result = "0";

	//while (tmp_A != "0")
	while (CompareLargeNumber(tmp_A, "0") != 0)
	{
		std::string tmp_result = "0";

		for (auto i = dif; i != 0; --i)//循环补0 对齐
		{
			tmp_B += '0';
		}
		std::cout << "tmp_B = " << tmp_B << std::endl;
		while (CompareLargeNumber(tmp_A, tmp_B) != -1)
		{
			tmp_A = SubtractLargeNumber(tmp_A, tmp_B);
			tmp_result = AddLargeNumber(tmp_result, "1");
		}

		for (auto i = dif; i != 0; --i)//循环补0 记录单次结果
		{
			tmp_result += '0';
		}
		std::cout << "tmp_result = " << tmp_result << std::endl;

		result = AddLargeNumber(result, tmp_result);
		std::cout << "result = " << result << std::endl;

		--dif;
		tmp_B = B;
	}

	return result;
}
