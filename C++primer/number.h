#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
/*测试类，只含有唯一一个int型数据成员num*/
class number
{
	friend std::ostream &operator<<(std::ostream &os, const number &number);
	friend std::istream &operator>>(std::istream &is, number &number);
	friend number operator+(const number &lhs, const number &rhs);
	friend bool operator==(const number &lhs, const number &rhs);
	friend bool operator!=(const number &lhs, const number &rhs);
	friend bool operator<(const number &lhs, const number &rhs);
	friend bool operator>(const number &lhs, const number &rhs);
	number operator=(const int&);//赋值运算符用法尚不明确，暂时搁置
	//number &operator--(void);
public:
	number(const int&);
	number():num(0){}
	number &operator+=(const number &rhs);

private:
	int num;
};
number::number(const int &n):num(n){}

number &number::operator+=(const number &rhs)
{
	num += rhs.num;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const number &number)
{
	os << number.num;
	return os;
}

std::istream &operator>>(std::istream &is, number &num)
{
	int n;
	is >> n;
	if (is)
		num.num = n;
	else
		num = number();
	return is;
}

number operator+(const number &lhs, const number &rhs)
{
	number sum = lhs;
	sum += rhs;
	return sum;
}

bool operator==(const number &lhs, const number &rhs)
{
	return lhs.num == rhs.num;
}
bool operator!=(const number &lhs, const number &rhs)
{
	return !(lhs == rhs);
}
bool operator<(const number &lhs, const number &rhs)
{
	return lhs.num < rhs.num;
}
bool operator>(const number &lhs, const number &rhs)
{
	return !(lhs<rhs);
}
number number::operator=(const int &n)
{
	num = n;
	return *this;
}
//number& number::operator--(void)
//{
//	number tmp=*this;
//	--num;
//	return tmp;
//}
#endif // !NUMBER_H
