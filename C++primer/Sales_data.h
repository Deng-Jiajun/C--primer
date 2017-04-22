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

	/*��ͨ���캯��*/
	//Sales_data(const std::string &s="") : bookNo(s) {}//����ͬʱ���� Sales_data() = default;
	//Sales_data(std::istream &is) { read(is, *this); }

	/*ί�й��캯��*/
	Sales_data() :Sales_data("", 0, 0) {}
	explicit Sales_data(std::string s) :Sales_data(s, 0, 0) {}
	explicit Sales_data(std::istream &is) :Sales_data() { operator>>(is, *this); }
	/*explicit	������ʽת����ֻ������������ڹ��캯���������� ����0*/
	//ʹ��read������ʼ���ı�������Ϊconst,��ĩβtest��


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
	//double price = 0.0;����Ҫ��ʼ��
	double price;
	is >> item.bookNo >> item.units_sold >> price;

	if (is)//�ж��Ƿ��������ݣ�
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












/*��0*/
//string null_book = "9-999-99999-9";
//Sales_data item;

//item.combine(null_book);
//item.combine(cin);
//Sales_data item2 = null_book;
//Sales_data item2 = cin;

//δʹ��explicit�ؼ��֣���null_book ��cin������ʽת��ΪSale_data�࣬������ɺ�����






////������
//#include<iostream>
//#include<string>
////#include"Sales_data.h"
//using namespace std;
//class test
//{
//	friend istream read(istream &is, test &item);
///* const���ͱ�������ʱ������г�ʼ������read����δ���ֵ�Ҹ�ֵ������ǰ��
//������ֵ��δ����ģ������Ǳ�����Ĭ�Ϲ��캯����ʼ�� */
////const ����������������read����Ĺ��캯����ʼ��
//	int ival;//���͸�Ϊconst��read�������Ƿ�
//	double dval;
//	string str;
//	test(int i, double d, string s) :ival(i), dval(d), str(s) {}
//	test() :test(1, 2.0, "3") {}
//	//test(istream &is) :test() { read(is, *this); }
//	test(istream &is) { read(is, *this); }//û��ʹ��ί�й��캯��Ҳ�ǲ��е�
//};
//istream read(istream &is, test &item)
//{
//	is >> item.ival >> item.dval >> item.str;
//}
#endif // SALES_DATA_H
