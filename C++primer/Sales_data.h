//#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<string>
#include<iostream>
class Sales_data;
//std::istream &read(std::istream &is, Sales_data&item);
class Sales_data
{
	//friend Sales_data add(const Sales_data&, const Sales_data&);
	friend Sales_data operator+(const Sales_data&, const Sales_data&);


	//friend std::istream &read(std::istream&, Sales_data&);
	friend std::istream& operator>>(std::istream&, Sales_data&);

	//friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::ostream& operator<<(std::ostream&, const Sales_data&);



public:

	Sales_data(const std::string &s, unsigned cnt, double rev) :
		bookNo(s), units_sold(cnt), revenue(rev*cnt) {}

	/*普通构造函数*/
	//Sales_data(const std::string &s="") : bookNo(s) {}//不能同时定义 Sales_data() = default;
	//Sales_data(std::istream &is) { read(is, *this); }

	/*委托构造函数*/
	Sales_data() :Sales_data("", 0, 0) {}
	explicit Sales_data(std::string s) :Sales_data(s, 0, 0) {}
	explicit Sales_data(std::istream &is) :Sales_data() { operator>>(is, *this); }
	/*explicit	抑制隐式转换（只允许出现在类内构造函数声明处） 见例0*/
	//使用read函数初始化的变量不能为const,见末尾test类


	std::string isbn()const { return bookNo; }

	//Sales_data &combine(const Sales_data&);
	Sales_data& operator+=(const Sales_data&);
private:
	inline double avg_price() const { return units_sold ? revenue / units_sold : 0; }
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//Sales_data add(const Sales_data&, const Sales_data&);
Sales_data operator+(const Sales_data&, const Sales_data&);

//std::istream &read(std::istream&, Sales_data&);
std::istream& operator>>(std::istream&, Sales_data&);

//std::ostream &print(std::ostream&, const Sales_data&);
std::ostream& operator<<(std::ostream&, const Sales_data&);



//Sales_data& Sales_data::combine(const Sales_data&rhs)
//{
//	units_sold += rhs.units_sold;
//	revenue += rhs.revenue;
//	return *this;
//}
Sales_data& Sales_data::operator+=(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

//std::istream &read(std::istream &is, Sales_data &item)
//{
//	double price = 0;
//	is >> item.bookNo >> item.units_sold >> price;
//	item.revenue = price*item.units_sold;
//	return is;
//}
std::istream& operator>>(std::istream &is, Sales_data &item)
{
	//double price = 0.0;不需要初始化
	double price;
	is >> item.bookNo >> item.units_sold >> price;

	if (is)//判断是否输入内容；
		item.revenue = price*item.units_sold;
	else
		item = Sales_data();

	return is;
}
//std::ostream &print(std::ostream &os, const Sales_data &item)
//{
//	os << item.isbn() << " " << item.units_sold << " "
//		<< item.avg_price() << " " << item.revenue;
//	return os;
//}
std::ostream& operator<<(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.avg_price() << " " << item.revenue;
	return os;
}

//Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
//{
//	Sales_data sum = lhs;
//	sum.combine(rhs);
//	return sum;
//}
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum += rhs;
	return sum;
}












/*例0*/
//string null_book = "9-999-99999-9";
//Sales_data item;

//item.combine(null_book);
//item.combine(cin);
//Sales_data item2 = null_book;
//Sales_data item2 = cin;

//未使用explicit关键字，则null_book 和cin将被隐式转换为Sale_data类，操作完成后销毁






////测试类
//#include<iostream>
//#include<string>
////#include"Sales_data.h"
//using namespace std;
//class test
//{
//	friend istream read(istream &is, test &item);
///* const类型变量定义时必须进行初始化，在read函数未获得值且赋值给变量前，
//变量的值是未定义的，而不是被其他默认构造函数初始化 */
////const 变量可以正常被除read以外的构造函数初始化
//	int ival;//类型改为const，read函数将非法
//	double dval;
//	string str;
//	test(int i, double d, string s) :ival(i), dval(d), str(s) {}
//	test() :test(1, 2.0, "3") {}
//	//test(istream &is) :test() { read(is, *this); }
//	test(istream &is) { read(is, *this); }//没有使用委托构造函数也是不行的
//};
//istream read(istream &is, test &item)
//{
//	is >> item.ival >> item.dval >> item.str;
//}
#endif // SALES_DATA_H
