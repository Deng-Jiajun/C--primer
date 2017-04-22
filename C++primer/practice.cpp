//#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	int v1=3, v2=4;
//	cout << "The sum of " << v1;
//	cout << " and " << v2;
//	cout << " is " << v1 + v2 << endl;
//	cout << "The sum of " << v1 <<" and "<< v2 << " is " << v1 + v2 << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	int sum = 0, val = 0;
//
//	while (cin >> val)
//		sum += val;
//
//	cout << "Sum of 1 to 10 inclusive is "
//		<< sum << endl;
//	system("pause");
//	return 0;
//}


#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	int currVal = 0, val = 0;
//	if (cin >> currVal)
//	{
//		int cnt = 1;
//		while (cin >> val)
//		{
//			if (val == currVal)
//				++cnt;
//			else
//			{
//				cout << currVal << " occurs "
//					<< cnt << " times " << endl;
//				currVal = val;
//				cnt = 1;
//			}
//		}
//		cout << currVal << " occurs "
//			<< cnt << " times " << endl;
//	}
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include "Sales_item.h"
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	Sales_item item;
//	while (cin >> item)
//		cout << item << endl;
//	system("pause");
//	
//	return 0;
//}

//#include<iostream>
//#include "Sales_item.h"
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(void)
//{
//	Sales_item item1, item2;
//	cin >> item1 >> item2;
//	cout << item1 + item2 << endl;
//	system("pause");
//
//	return 0;
//}


//#include<iostream>
//#include "Sales_item.h"
//using std::cin;
//using std::cout;
//using std::endl;
//using std::cerr;
//int main(void)
//{
//	Sales_item item1, item2;
//	cin >> item1 >> item2;
//	if (item1.isbn() == item2.isbn())
//	{
//		cout << item1 + item2 << endl;
//		system("pause");
//		return 0;
//	}
//	else
//	{
//		cerr << "Data must refer to same ISBN" << endl;
//		system("pause");
//		return -1;
//	}
//}



//#include<iostream>
//#include"Sales_item.h"
//using std::cin;
//using std::cout;
//using std::cerr;
//using std::endl;
//int main(void)
//{
//	Sales_item total, trans;
//	if (cin >> total)
//	{
//		while (cin >> trans)
//		{
//			if (total.isbn() == trans.isbn())
//				total += trans;
//			else
//			{
//				cout << total << endl;
//				total = trans;
//			}
//		}
//		cout << total << endl;
//	}
//
//	else
//	{
//		cerr << "No data?!" << endl;
//		return -1;
//	}
//	return 0;
//}


//#include<iostream>
//using std::cout;
//using std::cin;
//using std::cerr;
//using std::endl;
//int main(void)
//{
//	int sum = 0;
//	for (int val = 1; val <= 10; val++)
//		sum += val;
//	cout << "Sum of 1 to 10 inclusive is " << sum << endl;
//	for (int sum = 0; sum < 10; sum++)
//		printf("%d ", sum);
//	cout << sum << endl;
//	return 0;
//}


//#include<iostream>
//#include"Sales_data.h"
//#include<string>
//using std::cout;
//using std::cin;
//using std::cerr;
//using std::endl;
//using std::string;
//
//int main(void)
//{
//	Sales_data data1, data2;
//
//	double price = 0;
//	cout << "Enter book1's ISBN   sales volume   single price" << endl;
//	cin >> data1.bookNo >> data1.units_sold >> price;
//	data1.revenue = data1.units_sold * price;
//
//	cout << "Enter book2's ISBN   sales volume   single price" << endl;
//	cin >> data2.bookNo >> data2.units_sold >> price;
//	data2.revenue = data2.units_sold * price;
//
//	if (data1.bookNo == data2.bookNo)
//	{
//		unsigned totalCnt = data1.units_sold + data2.units_sold;
//		double totalReveue = data1.revenue + data2.revenue;
//		cout << "ISBN: " << data1.bookNo << " total sales volume: " << totalCnt
//			<< " total revenue: " << totalReveue << " ";
//		if (totalCnt != 0)
//			cout << " total single price : " << totalReveue / totalCnt << endl;
//		else
//			cout << "(no sales)" << endl;
//		return 0;
//	}
//	else
//	{
//		cerr << "Data must refer to the same ISBN"
//			<< endl;
//		return -1;
//	}
//}



//#include<iostream>
//#include<vector>
//#include<string>
//#include"function.h"
//using std::vector;
//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
//
//int main(void)
//{
//	vector<int>v1;
//	vector<int>v2(10);
//	vector<int>v3(10, 42);
//	vector<int>v4{ 10 };
//	vector<int>v5{ 10,42 };
//	vector<string>v6{ 10 };
//	vector<string>v7{ 10,"hi" };
//	check(v1);
//	check(v2);
//	check(v3);
//	check(v4);
//	check(v5);
//	check(v6);
//	check(v7);
//
//	vector<int> intengers(10);
//	for (auto it = intengers.begin(); it != intengers.end(); it++)
//	{
//		static int j = 0;
//		*it = j++;
//	}
//
//	for (auto &i : intengers)
//	{
//		i *= i;
//		cout << i << " ";
//	}
//	return 0;
//}



///*
//case:	42 65 95 100 39 67 95 76 88 76 83 92 76 93
//*/
//#include<iostream>
//#include<vector>
//using std::vector;
//using std::cout;
//using std::cin;
//using std::endl;
//int main(void)
//{
//	vector<unsigned>scores(11, 0);
//	unsigned grade;
//	decltype(scores.begin()) target;
//	while (cin >> grade)
//	{
//		if (grade <= 100)
//		{
//			target = scores.begin() + grade / 10;
//			(*target)++;
//			//(*(scores.begin() + grade / 10))++;
//		}
//	}
//
//	for (auto i : scores)
//		cout << i << " ";
//	cout << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using std::vector;
//using std::cout;
//using std::cin;
//using std::endl;
//int main(void)
//{
//	vector<int> intenger{ -63,-35,-5,6,23,32,67,89,101,235,435,565 };
//	auto beg = intenger.begin(), end = intenger.end();
//	auto mid = intenger.begin() + (end - beg) / 2;
//	int sought;
//	cout << "what intenger you find? ";
//	cin >> sought;
//	while (mid != end&& *mid != sought)
//	{
//		if (sought < *mid)
//			end = mid;
//		else
//			beg = mid + 1;
//		mid = beg + (end - beg) / 2;
//	}
//
//	if (*mid == sought)
//		cout << "find!" << endl;
//	else
//		cout << "No find!" << endl;
//
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include<iterator>
//#include"function.h"
//#include<vector>
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::begin;
//using std::end;
//using std::vector;
//int main(void)
//{
//	//int a[10] = { 0 };
//	//int a2[10] = { 0 };
//	////unsigned j = { 0 };
//	//for (auto &i : a)
//	//{
//	//	static unsigned j = 0;
//	//	i = j++;
//	//	cout << i << " ";
//	//}
//	//cout << endl;
//
//
//	//for (auto &i : a2)
//	//{
//	//	static unsigned j = 0;
//	//	a2[j] = a[j++];
//	//cout << i << " ";
//	//}
//	//cout << endl;
//
//	//int arr[] = { 0,1,2,3,4,-5,6,7,8,9 };
//	//int * e = &arr[10];
//	//for (int * b = arr; b != e; b++)
//	//	cout << *b <<" ";
//	//cout << endl;
//
//	///*int * beg = begin(arr);
//	//int * last = end(arr);*/
//
//	//int *pbeg = begin(arr), *pend = end(arr);
//	//while (pbeg != pend && *pbeg >= 0)
//	//	pbeg++;
//	//if (pbeg == pend)
//	//	cout << "no find" << endl;
//	//else
//	//cout << *(pbeg)<<endl;
//
//	/*int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int b[10] = { 0,1,2,3,4,5,6,7,8,5 };
//	comp_3_36(begin(a), end(a), begin(b), end(b));*/
//	
//	
//	vector<int> a = { 1,2,3,4,5,6,7,8,9 };
//	vector<int> b = { 1,2,3,4,5,6,7,8,2 };
//	if(a==b)
//		cout << "a equal to b" << endl;
//	else
//		cout << " different" << endl;
//	
//	//auto dif_a = end(a) - begin(a);
//	//auto dif_b = end(b) - begin(b);
//	//if (dif_a != dif_b)
//	//	cout << " different" << endl;
//	//else
//	//{
//	//	decltype(dif_a) i;
//	//	for (i = 0; i < dif_a; i++)
//	//	{
//	//		if (a[i] != b[i])
//	//		{
//	//			cout << " different" << endl;
//	//			break;
//	//		}
//	//	}
//	//	if (i == dif_a)
//	//		cout << "a equal to b" << endl;
//	//}
//
//	//for (auto &i : a)
//	//	i = 0;
//	//for (auto i : a)
//	//	cout << i << " "; 
//	//cout << endl;
//	//
//	//for (int i = 0; i < end(a) - begin(a); i++)
//	//	a[i] = 1;
//	//for (auto i : a)
//	//	cout << i << " ";
//	//cout << endl;
//
//	return 0;
//}



//#include<iostream>
//#include<cstring>
//#include<string>
//#include<vector>
//#include<iterator>
//using std::vector;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::begin;
//using std::end;
//int main(void)
//{
//	//char ca[] = { 'c','+','+' };
//	//cout << strlen(ca) << endl;
//	//const char ca[] = { 'h','e','l','l','o' };
//	//const char * cp = ca;
//	//while (*cp)
//	//{
//	//	cout << *cp <<" ";
//	//	cp++;
//	//}
//
//	//char s1[] = "×Ö·û´®B";
//	//char s2[] = "×Ö·û´®c";
//	//cout << s1 << s2 << endl;
//	//if (strcmp(s1, s2) == 0)
//	//	cout << "s1=s2" << endl;
//	//if (strcmp(s1, s2) > 0)
//	//	cout << "s1>s2" << endl;
//	//if (strcmp(s1, s2) < 0)
//	//	cout << "s1<s2" << endl;
//
//
//	//const auto len = 20;
//	//char s3[len];
//	//strcpy(s3, s1);
//	//strcat(s3, s2);
//	//cout << "ºÏ²¢ºó£º" << s3 << endl;
//	//string st1 = "×Ö·û´®C";
//	//string st2 = "×Ö·û´®B";
//
//	//cout << st1 << st2 << endl;
//	//if (st1 == st2)
//	//	cout << "st1=st2" << endl;
//	//if (st1 > st2)
//	//	cout << "st1>st2" << endl;
//	//if (st1 < st2)
//	//	cout << "st1<st2" << endl;
//
//
//	//st1 = s1;
//	//cout << st1 << endl;
//
//	//if (st1 == s1)
//	//	cout << " ==" << endl;
//	//st1 = st1 + "²åÈëÒ»¸ö×Ö·ûÊý×é£º" + s2;
//	//cout << st1 << endl;
//
//	////vector<string> str(begin(s1), end(s1));
//	//////cout << str << endl;
//	////for (auto c : str)
//	////	cout << c;
//	////cout << endl;
//	//int arr[] = { 0,1,2,3,4,5 };
//	//vector<int> ivec(begin(arr), end(arr));
//	//vector<int> ivec2(arr+2, arr+4);
//
//	//for (auto i : ivec)
//	//	cout << i<<" ";
//	//cout << endl;
//
//	//for (auto i : ivec2)
//	//	cout << i << " ";
//	//cout << endl;
//
//	//int int_array[6];
//	//for (auto i : ivec)
//	//{
//	//	static auto j = 0;
//	//	int_array[j++] = i;
//	//}
//
//	//for (auto *i = begin(int_array); i != end(int_array); i++)
//	//	cout << *i << " ";
//	//cout << endl;
//
//	//constexpr size_t rowCnt = 3, colCnt = 4;
//	//int ia[rowCnt][colCnt];
//	///*for (size_t i = 0; i != rowCnt; i++)
//	//	for (rsize_t j = 0; j != colCnt; j++)
//	//		ia[i][j] = i*colCnt + j;
//	//for (size_t i = 0; i != rowCnt; i++)
//	//	for (rsize_t j = 0; j != colCnt; j++)
//	//		cout << ia[i][j] << " ";*/
//	//size_t cnt = 0;
//	//for ( auto &row : ia)
//	//	for (auto &col : row)
//	//		col = cnt++;
//
//	//for (const auto &row : ia)
//	//	for (auto col : row)
//	//		cout << col << " ";
//
//	//cout << endl;
//	int i = 0;
//	int ia[3][4];
//	for (auto &row : ia)
//		for (auto &col : row)
//			col = i++;
//
//	//for (auto p = ia; p != ia + 3; p++)
//	//	for (auto q = *p; q != *p + 4; q++)
//	//		cout << *q << ' ';
//	//cout << endl;
//
//	for (auto p = begin(ia); p != end(ia); p++)
//	{
//		for(auto q=begin(*p);q!=end(*p);q++)
//			cout << *q << ' ';
//		cout << endl;
//	}
//	return 0;
//}