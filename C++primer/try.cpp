//#include<iostream>
//using std::cout;
//using std::cin;
//using std::cerr;
//using std::endl;
//int reused = 42;
//int main(void)
//{
//
//	int i = 1;
//	const int &a = 1;
//
//	return 0;
//}

//#include<iostream>
//constexpr int size(void);
//int main(void)
//{
//	constexpr int a = 230;
//	constexpr int sz = size();
//	return 0;
//}
//constexpr int size(void)
//{
//	return 1;
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
//		cout <<"ISBN: "<< data1.bookNo << " total sales volume: " << totalCnt
//			<< " total revenue: " << totalReveue << " ";
//		if (totalCnt != 0)
//			cout <<" total single price : "<< totalReveue / totalCnt << endl;
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
//#include<string>
//using std::string;
//using std::cin;
//using std::cout;
//using std::cerr;
//using std::endl;
//
//int main(void)
//{
//	//string s4(19, 'c');
//	//cout << s4 << endl;
//	//string s8={ "ccccccccc" };
//	//cout << s8 << endl;
//	//string s;
//	//cin >> s;
//	//cout << s << endl;
//	//string word;
//	//while (cin >> word)
//	//cout << word << endl;
//	//string s1, s2,s3,s4;
//	//s1 = "HHHHHHHow are you?\n";
//	//s2 = "I'm fine.\n";
//	//s3 = s1 + s2;
//	//s4 = s1;
//	//s4 += s2;
//	//cout << s1 << s2 << s3 << s4 << endl;
//	//string s1, s2;
//	//s1 = "the string1";
//	//s1 = "- " + s1;
//	//cout << s1 << endl;
//
//	//string line1, line2;
//	//cout << "Enter two line:" << endl;
//	//cin >> line1 >> line2;
//	//cout << "\n" << line1 << "\n" << line2 << endl;
//	//if (line1 == line2)
//	//	cout << "line1==line2" << endl;
//	//else if (line1 > line2)
//	//	cout << line1 << endl;
//	//else
//	//	cout << line2 << endl;
//	//if (line1.size() == line2.size())
//	//	cout << "line1.size==line2.size" << endl;
//	//else if (line1.size() > line2.size())
//	//	cout << line1 << endl;
//	//else 
//	//	cout << line2 << endl;
//
//	//string line1, line2;
//	//cin >> line1;
//	//while (cin >> line2)
//	//	line1 = line1+" "+line2;
//	//cout << line1 << endl;
//
//	//string str("some string");
//	//for (auto c : str)
//	//	cout << c;
//	/*string s("Hello World!!!");
//	decltype(s.size()) punct_cnt = 0;
//	for (auto c : s)
//		if (ispunct(c))
//			++punct_cnt;
//	cout << punct_cnt
//		<< " punctuation characters in " << s << endl;*/
//		/*string s = "Hello World!!!";
//		for (auto &c : s)
//			c = toupper(c);
//		cout << s << endl;*/
//		/*string s = { "sdgJKFgj" };
//		if (!s.empty())
//			s[0] = toupper(s[0]);
//		cout << s << endl;*/
//		/*string s("somestring");
//		for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); index++)
//			s[index] = toupper(s[index]);
//		cout << s << endl;*/
//
//		/*const string hexdigits = { "0123456789ABCDEF" };
//		cout << "Enter a series of numbers between 0 and 15"
//			<< " separated by space.Hit ENTER when fineshed: "
//			<< endl;
//		string result;
//		decltype(hexdigits.size()) n;
//		while (cin >> n)
//			if (n < hexdigits.size())
//				result += hexdigits[n];
//		cout << "Your hex number is:" << result << endl;*/
//
//	string s("jfdh dgkjk$%^fgj%^hg%^&gfhj ");
//
//
//	//for (char &c : s)
//	//	if (!ispunct(c))
//	//		cout << c;
//
//
//	/*decltype(s.size()) index = 0;
//
//	while (index < s.size())
//	{
//		if (ispunct(s[index]))
//			s[index] = 'X';
//		index++;
//	}
//	cout << s << endl;*/
//
//
//	//for (int i = 0; i < s.size(); i++)
//	//{
//	//	if (ispunct(s[i]))
//	//		s[i] = 'X';
//	//}
//	//cout << s << endl; 
//
//		return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//using std::cin;
//using std::cout;
//using std::cerr;
//using std::endl;
//using std::vector;
//using std::string;
//int main(void)
//{
//	//vector<string> articles = { "a","an","the" };
//	//vector<int> ivec(10, -1);
//	//vector<string> svec(10, "hi!");
//
//	//vector<int> v2;
//	//for (int i = 0; i != 100; ++i)
//	//	v2.push_back(i);
//
//	/*vector<int> intengers;
//	int i;
//	while (cin >> i)
//		intengers.push_back(i);*/
//
//		//vector<string> strs;
//		//string str;
//		//while (cin >> str)
//		//	strs.push_back(str);
//		//for (auto c : strs)
//		//	cout << c << endl;
//
//
//		/*vector<int> v{ 1,2,3,4,5,6,7,8,9 };
//		for (auto &i : v)
//			i *= i;
//		for (auto i : v)
//			cout << i << " ";
//		cout << endl;*/
//
//		//vector<int> grade;
//		//vector<unsigned> scores(11, 0);
//		//int i;
//		//while (cin >> i)
//		//	grade.push_back(i);
//
//		//for (auto i : grade)
//		//	cout << i << " ";
//		//cout << endl;
//
//		//for (auto i : grade)
//		//	scores[i / 10]++;
//
//		//for (auto i : scores)
//		//	cout << i << " ";
//		//cout << endl;
//
//
//		//vector<unsigned> scores(11, 0);
//		//unsigned grade;
//		//while (cin >> grade)
//		//{
//		//	if (grade <= 100)
//		//		scores[grade / 10]++;
//		//}
//
//		//for (auto i : scores)
//		//	cout << i << " ";
//		//cout << endl;
//
//		/*string word;
//		vector<string> str;
//		while (cin >> word)
//			str.push_back(word);
//
//		for (auto &s : str)
//			for (auto &c : s)
//				c=toupper(c);
//
//		for (auto s : str)
//			cout << s << endl;*/
//
//			/*vector<int> intengers;
//			for (auto i : intengers)
//				cout << i << " ";*/
//
//	//vector<int> intengers;
//	//int i, tmp;
//	//while (cin >> i)
//	//	intengers.push_back(i);
//	//for (auto i : intengers)
//	//	cout << i << " ";
//	//cout << endl;
//	//auto size = intengers.size();
//	//cout << size << endl;
//
//	//for (decltype(intengers.size()) i = 0; i < size-1; i++)
//	//	cout << intengers[i] + intengers[i+1] <<" ";
//
//
//	//for (decltype(intengers.size()) i = 0; i < size / 2; i++)
//	//	cout << intengers[i] + intengers[size - 1 - i] << " ";
//
//	//if (size % 2)
//	//	cout << intengers[size / 2]<<endl;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<string>
////#include <iterator>
//#include"check.h"
//using std::vector;
//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
////void check(const vector<int> &vec);
////void check(const vector <string> &vec);
//
//int main(void)
//{
//	/*vector<int> v;
//	auto b = v.begin(), e = v.end();*/
//
//	//string s("some string");
//
//	//if (s.begin() != s.end())
//	//{
//	//	auto it = s.begin();
//	//	*it = toupper(*it);
//	//	//cout << *it << " ";
//	//	//it++;
//	//}
//
//
//	/*for (auto it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	cout << s;*/
//
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
//	/*vector<string> text;
//	for (string line; getline(cin, line);)
//		text.push_back(line);
//
//	for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
//	{ 
//		for (auto &c : *it)
//			c = toupper(c);
//		cout << *it << endl;
//	}*/
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

//void check(const vector<int> &vec)
//{
//	if (vec.empty())
//		cout << "size: 0; no values." << endl;
//	else
//	{
//		cout << "size: " << vec.size() << "; values:";
//		for (auto it = vec.begin(); it != vec.end(); it++)
//			cout << *it << ",";
//		cout << "\b." << endl;
//	}
//}
//
//void check(const vector <string> &vec)
//{
//	if (vec.empty())
//		cout << "size: 0; no values." << endl;
//	else
//	{
//		cout << "size: " << vec.size() << "; values:";
//		for (auto it = vec.begin(); it != vec.end(); it++)
//			if (it->empty())
//				cout << "(null)" << ",";
//			else
//				cout << *it << ",";
//		cout << "\b." << endl;
//	}
//}



///*
//	case:	42 65 95 100 39 67 95 76 88 76 83 92 76 93
// */
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
//			//target = scores.begin() + grade / 10;
//			//(*target)++;
//			(*(scores.begin() + grade / 10))++;
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
//	//char s1[] = "字符串B";
//	//char s2[] = "字符串c";
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
//	//cout << "合并后：" << s3 << endl;
//	//string st1 = "字符串C";
//	//string st2 = "字符串B";
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
//	//st1 = st1 + "插入一个字符数组：" + s2;
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

//#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//#define ONE 1
//#define TWO 2
//#define FIVE 5
//#define TEN 10
//int main(void)
//{
//	int money;
//	int one = 0, two = 0, five = 0, ten = 0;
//	cout << "Enter the change :";
//	cin >> money;
//	while (money >= TEN)
//	{
//		ten++;
//		money -= TEN;
//	}
//
//	while(money>=FIVE)
//	{
//		five++;
//		money -= FIVE;
//	}
//
//	while (money >= TWO)
//	{
//		two++;
//		money -= TWO;
//	}
//
//	while(money>=ONE)
//	{
//		one++; 
//		money -= ONE;
//	}
//
//	cout << "1:" << one << endl;
//	cout << "2:" << two << endl;
//	cout << "5:" << five << endl;
//	cout << "10:" << ten << endl;
//
//	return 0;
//}
//#include<iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//int main(void)
//{
//	//int a, b;
//	//cin >> a >> b;
//	//cout << a / b <<" "<< a%b;
//
//	//int nine = 9;
//	//int num;
//	//while(cin>>num && nine--)
//	//{
//	//	cout << num<<'\t';
//	//	if (nine % 3 == 0)cout << endl;
//	//}
//
//	//int time, salary;
//	//cin >> time >> salary;
//	//cout << time*salary*0.9 << endl;
//
//	
//	return 0;
//}




//#include<string>
//#include<iostream>
//#include<vector>
//int main(void)
//{
//	/*int i = 0;
//	std::cout << i;
//		std::cout<< ++i << std::endl;*/
//
//	//short i = 32767;
//	//i++;
//	//unsigned j = 0;
//	//std::cout << --j << std::endl;
//
//	//int i = 0;
//	//i = 1.3;//error :  i = { 1.3 };
//	//int ival, *pval;//error :   ival = pval = 0;
//	
//	//int i;
//	//double d;
//	//d = i = 3.15;
//	//std::cout << d <<" "<< i << std::endl;
//	//i = d = 3.5;
//	//std::cout << d << " "<<i << std::endl;
//
//	//int grade;
//	//std::cin >> grade;
//	//std::string finalgrade = (grade < 60) ? "fail" : "pass";
//	//std::cout << finalgrade << std::endl;
//	//return 0;
//
//	//std::vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9};
//	//for (auto &i : a)
//	//	(i % 2 == 0) ? i : i *= 2;
//	//
//	//for (auto i : a)
//	//	std::cout << i << " ";
//	
//	/*int grade;
//	while (1)
//	{
//
//	std::cin >> grade;
//	std::cout <<
//		((grade > 90) ? "high pass" : (grade > 75) ? "undef" : (grade > 60) ? "low pass" : "fail");
//	}*/
//
//	unsigned long quiz1 = 0;
//	unsigned long lUL = 1;
//	quiz1 |= lUL << 1;
//	bool status = quiz1 & (lUL << 1);
//	if (status)
//		printf("yes\n");
//	else
//		printf("no");
//	printf("%d\n", quiz1);
//	int a = 3;
//	a <<= 2;
//	printf("%d\n", a);
//	int b = 0b11111111111111111110001110000000;
//	printf("%d\n", b);
//
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//
//	int x[10]; int *p = x;
//std::cout << sizeof(x) / sizeof(*x) << std::endl;
//std::cout << sizeof(p) / sizeof(*p) << std::endl;
//
//for (auto i = 0; i < 10; ++i)
//	std::cout << -~i<<" ";
//
//
//int i;
//double d;
//const std::string *ps;
//char *pc;
//void *pv;
////pv = (void*)ps; 
//pv = const_cast<std::string*>(ps);
////i = int(*pc);
//i = static_cast<int>(*pc);
////pv = &d;
//pv = static_cast<void*>(&d);
////pc = (char*)pv;
//pc = static_cast<char*>(pv);
//
//}



//<60:D;60~70:C;70~80:B;80~90:A;>90:A+;
#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;
using std::runtime_error;
int main(void)
{
	//vector<string> grade_inenglish{ "D","C","B","A","A+" };
	//int grade;
	//while (cin >> grade)
	//	//if (grade < 60)
	//	//	cout << grade_inenglish[0] << endl;
	//	//else
	//	//{
	//	//	cout << grade_inenglish[(grade - 50) / 10];
	//	//	if (grade % 10 > 7)
	//	//		cout << '+' << endl;
	//	//	if (grade % 10 < 3)
	//	//		cout << '-' << endl;
	//	//}
	//	(grade < 60) ? (cout << grade_inenglish[0] << endl) : (cout << grade_inenglish[(grade - 50) / 10] << endl);

	//string SaveWord, InputWord, BeforeWord;
	//int SaveNum=0, CountNum=0;

	//cin >> BeforeWord;
	//++CountNum;
	//while (cin >> InputWord)
	//{
	//	if (InputWord == BeforeWord)
	//		++CountNum;
	//	else
	//	{
	//		if (CountNum > SaveNum)
	//		{
	//			SaveWord = BeforeWord;
	//			SaveNum = CountNum;
	//		}
	//		CountNum = 1;
	//	}

	//	BeforeWord = InputWord;
	//}
	//cout << SaveWord << " " << SaveNum << endl;


	//pair<string, int>max_duplicated;
	//int count = 0;
	//for (string str, prestr; cin >> str; prestr = str)
	//{
	//	if (str == prestr)
	//		++count;
	//	else
	//		count = 1;

	//	if (count > max_duplicated.second)
	//		max_duplicated = { prestr,count };
	//}
	//if (max_duplicated.first.empty())
	//	cout << "There's no duplicated string." << endl;
	//else
	//	cout << "the word " << max_duplicated.first
	//	<< " occurred " << max_duplicated.second << " times." << endl;

//	vector<string> svec;
//	string str;
//	while (cin >> str)
//		svec.push_back(str);
//
//	auto it = svec.begin();
//	int bigNum = 0, countNum = 0;
//	string bigStr, countStr;
//	while (svec.size() > 0 && it != svec.end()-1)
//	{
//		if(*it==*(it+1))
//		{
//			++countNum;
//			countStr = *it;
//		}
//		else
//		{
//			countNum = 0;
//		}
//		if (countNum > bigNum)
//		{
//			bigStr = countStr;
//			bigNum = countNum;
//		}
//		++it;
//	}
//
//	if(bigNum==0)
//		cout << "There's no duplicated string." << endl;
//	else
//		cout << "the word " << bigStr
//			<< " occurred " << bigNum+1 << " times." << endl;



	//vector<int> ivec1{ 0,1,1,2,3,5,8 };
	//vector<int> ivec2{ 0,1,1,2};
	//auto size =(ivec1.size() < ivec2.size() )? ivec1.size() : ivec2.size();

	//	for (decltype(ivec1.size()) i = 0; i != size; i++)
	//	{
	//		if (ivec1[i] != ivec2[i])
	//		{
	//			cout << "NO" << endl;
	//			break;
	//		}
	//		if(i==size-1)
	//			cout << "YES" << endl;
	//	}
	//	



	//string word1, word2;
	//bool flag = false;
	//while (cin >> word1)
	//{		
	//	if (word1 == word2 && isupper(word1[0]))
	//	{
	//		flag = true; 
	//		cout << word1 << endl;
	//		break;
	//	}
	//	word2 = word1;
	//}
	//if (!flag)
	//	cout << "None" << endl;


	//string buf;
	//while (cin >> buf && !buf.empty())
	//{
	//	if (buf[0] != '_')
	//		continue;
	//	cout << buf << endl;
	//}


	/*int a, b;
	cin >> a >> b;
	if (a == b)
	throw runtime_error("错了~");
	;*/

	string s1, s2;
	while (cin >> s1 >> s2)
	{
		try
		{
			if (s1 == s2)
				throw runtime_error("错了~");
			else
				cout << s1 << s2 << endl;
		}
		catch (runtime_error err)
		{
			cout <<err.what()
				<< "重来咯？" << endl;
			string c;
			cin >> c;
			if (c == "我不！")
				break;
		}
	}

	//int i1, i2;
	//cin >> i1 >> i2;
	//try {
	//	if (i2 == 0)
	//		throw runtime_error("i2==0!");
	//	else
	//		cout << i1 / i2 << endl;
	//}
	//catch (runtime_error err)
	//{
	//	cout << err.what();
	//}

	return 0;
}


//#include<iostream>
//#include"function_declaration.h"
//#include<string>
//#include<vector>
//#include<iterator>
//using std::cout;
//using std::endl;
//using std::string;
//using std::vector;
//using std::begin;
//using std::end;
//int main(void)
//{
//	int j = fact(5);
//	cout << "5! " << "is " << j << endl;
//	cout << "|-5| = " << absolute_value(-5) << endl;
//	for (int i = 0; i < 10; i++)
//		cfct();
//
//	int a = 1, b = 2;
//	cout << "a=" << a << " b=" << b << endl;
//	swap_reference(a, b);
//	cout <<"reference swap ：a="<< a <<" b="<< b << endl;
//	swap_pointer(&a, &b);
//	cout << "pointer swap ：a=" << a << " b=" << b << endl;
//
//	string s = "ghdsksdfgishgliadskjghlisadhl";
//	unsigned count;
//	cout << "position： " << find_char(s, 's', count) << endl;
//	cout<< " times：" << count << endl;
//	
//	string s1 = "fkjlhFGJLjlDJLjdklf32353";
//	cout << "test function ： " << endl;
//	cout << "s1: "<< s1 << endl;
//	cout << "Judge_Wheather_Capital_Letter(s1) = "
//		<< Judge_Wheather_Capital_Letter(s1) << endl;
//
//	cout << "Transform_Capital_Letter(s1) = "
//		<<Transform_Capital_Letter(s1) << endl;
//	
//	//vector<string> a;
//	//decltype(s.begin()) b;
//	//auto c = s.begin();
//
//	int inta,intb;
//	inta = 3;
//	intb = 2;
//	cout << "return_greater(inta, &intb) = " << return_greater(inta, &intb) << endl;
//
//	cout << "inta = " << inta << endl;
//	cout << "intb = " << intb << endl;
//
//	cout << "swap_pointer(&inta, &intb);" << endl;
//	swap_pointer(&inta, &intb);
//
//	cout << "inta = " << inta << endl;
//	cout << "intb = " << intb << endl;
//
//	if (true)//just define scop 
//	{
//	int i = 0;
//	int j[2] = { 0,1 };
//
//	cout << "reference_print_6_2_4(j);" << endl;
//	reference_print_6_2_4(j);
//	
//	cout << "beg_end_print(begin(j), end(j));" << endl;
//	beg_end_print(begin(j), end(j));
//	
//	cout << "count_print(j, end(j) - begin(j));" << endl;
//	count_print(j, end(j) - begin(j));
//	
//	}
//
//	return 0;
//}



//#include <iostream>
//#include <string>
//
//int main(int argc, char **argv)
//{
//	std::string str;
//	for (int i = 1; i != argc; ++i)
//	{
//		str += argv[i];
//		str += " ";
//	}
//
//	std::cout << str << std::endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<string>
//#include"function_declaration.h"
//using std::string;
//using std::cout;
//using std::endl;
//using std::vector;
//
////bool str_subrange(const string &str1, const string &str2)
////{
////	if (str1.size() == str2.size())
////		return str1 == str2;
////	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
////
////	//cout <<"size = "<< size << endl;
////	for (decltype(size)i = 0; i != size; ++i)
////	{
////		if (str1[i] != str2[i])
////			return ;//没有返回值；
////	}
////	//这里还要有一个返回值，vs2015并未提示；
////	//但是调试时可以看到错误列表："str_subrange":不是所有的控件路径都返回值
////	//当  string s3("abc");  string s4("abc ");
////	//即函数无返回值时，我们发现，
////	//****bool类型返回值的函数返回了    3   ****
////}
//
//
//void myprint(vector<int>::iterator beg, vector<int>::iterator end) 
//{
//	if (beg != end)
//	{
//		cout << *beg++ << " ";
//		myprint(beg, end);
//	}
//}
//
//void myprint(vector<string>::iterator beg, vector<string>::iterator end)
//{
//	if (beg != end)
//	{
//		cout << *beg++ << " ";
//		myprint(beg, end);
//	}
//}
//int main(void)
//{
//	std::cout << sum_6_27({ 1,2,3,4,5 }) << std::endl;
//	std::string s1("fdsghhsdfgklfgh");
//	std::string s2("jgjdfgj");
//	std::cout << "shorterString(s1, s2) = " << shorterString(s1, s2) << std::endl;
//	std::cout << "shorterString(s1, s2).size() = "
//		<< shorterString(s1, s2).size() << std::endl;
//
//	string s("a value");
//	cout << "s = " << s << endl;
//	cout << " get_val_202(s, 0) = toupper(get_val_202(s, 0)); " << endl;
//	get_val_202(s, 0) = toupper(get_val_202(s, 0));
//	cout << "s = " << s << endl;
//
//	cout << "factorial(5) = " << factorial(5) << endl;
//	cout << "factorial(1) = " << factorial(1) << endl;
//	cout << "factorial(0) = " << factorial(0) << endl;
//
//	string s3("abc");
//	string s4("abc ");
////	cout << str_subrange(s3, s4) << endl;
//
//	vector<int> ivec{1, 2, 3, 4, 5, 6};
//	vector<string> istr{"first", "second", "thirth"};
//	
//	print_6_33_1(ivec.begin(), ivec.end()); 
//	print_6_33_1(istr.begin(), istr.end());
//	cout << endl;
//	myprint(ivec.begin(), ivec.end());
//	myprint(istr.begin(), istr.end());
//
//	system("pause");
//	return EXIT_SUCCESS;
//}




//#include<iostream>
//#include<vector>
//#include<string>
//#include"function_declaration.h"
//
//using std::string;
//using std::cin;
//using std::cout;
//using std::endl;
//int main(void)
//{
//	string s1("dkhjdfhh");
//	string s2("hjdlaorioyurfd");
//
//	cout <<"isShorter_6_46(s1, s2) = "<< isShorter_6_46(s1, s2) << endl;
//	cout <<" shorterString_6_5_2(s1,s2) = "<< shorterString_6_5_2(s1,s2) << endl;
//	
//	system("pause");
//	return EXIT_SUCCESS;
//}



//#include <iostream>
//#include <vector>
//using std::vector; using std::cout; using std::endl;
//
//#define NDEBUG 
//
//void printVec(vector<int> &vec)
//{
//#ifdef NDEBUG
//	cout << "vector size: " << vec.size() << endl;
//#endif
//	if (!vec.empty())
//	{
//		auto tmp = vec.back();//保存尾元素
//		vec.pop_back();//删除尾元素
//		printVec(vec);
//		cout << tmp << " ";
//	}
//}
//
//int main()
//{
//	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
//	printVec(vec);
//	cout << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include"function_declaration.h"
//using std::cout;
//using std::endl;
//using std::string;
//void f() { cout << "f()" << endl; }
//void f(int) { cout << "f(int)" << endl; }
//void f(int,int) { cout << "f(int,int)" << endl; }
//void f(double,double=3.14) { cout << "f(double,double=3.14) " << endl; }
//
//int main(void)
//{
//	std::string s1 = "function_declaration.h";
//	for (auto &c : s1)
//	{
//		c = toupper(c);
//	}
//	std::cout << s1 << std::endl;
//	f();
//	f(400);
//	f(400, 20);
//	f(6.8);
//	
//
//	std::string (*pf)(const std::string &s1, const std::string &s2);
//	pf = pf_221;
//
//	string test;
//	test = pf("adsadsf", "gkfk");
//	cout << test << endl;
//
//
//	std::vector<decltype(add_224)*> fuc_224={add_224,subtract_224,multiply_224,divide_224};
//
//	cout << fuc_224[0](4, 2)<<" "
//		<< fuc_224[1](10, 5) << " "
//		<< fuc_224[2](25, 25) << " "
//		<< fuc_224[3](64, 8) << endl;
//	for (auto i : fuc_224)
//	{
//		cout << i(20,3) << endl;
//	}
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include"Sales_data.h"
//#include<string>
//using namespace std;
//int main(void)
//{
//	Sales_data total;
//	unsigned value;
//	cout << "输入： ISBN 本数 单价" << endl;
//	if (cin >> total.bookNo >> total.units_sold >> value)
//	{
//		total.revenue = total.units_sold*value;//把第一次输入的收入存进去
//		Sales_data trans;		
//		while ((cout << "输入： ISBN 本数 单价" << endl)
//			&&(cin >> trans.bookNo >> trans.units_sold >> value))
//		{
//			if (trans.bookNo == total.bookNo)//判断与之前输入的是否为同一本书
//			{
//				total.units_sold += trans.units_sold;
//				total.revenue += trans.units_sold*value;
//			}
//			else
//			{
//				cout << total.bookNo << " "<<total.units_sold <<" "
//					<<total.revenue<<" "<< total.revenue / total.units_sold << endl;
//				total = trans;
//			}
//		}
//	}
//	else
//		cerr << "No data?!That's so bad~" << endl;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<string>
//#include"Sales_data.h"
//using namespace std;
//
//int main(void)
//{
//	Sales_data total;
//	unsigned value;
//	cout << "输入： ISBN 本数 单价" << endl;
//	if (cin >> total.bookNo >> total.units_sold >> value)
//	{
//		total.revenue = total.units_sold*value;
//		Sales_data trans;
//		while ((cout << "输入： ISBN 本数 单价" << endl)
//			&& (cin >> trans.bookNo >> trans.units_sold >> value))
//		{
//			trans.revenue = trans.units_sold*value;
//			if (trans.isbn() == total.isbn())
//			{
//				total.combine(trans);
//			}
//			else
//			{
//				cout << total.bookNo << " " << total.units_sold << " "
//					<< total.revenue << " " << total.avg_price() << endl;
//				total = trans;
//			}
//		}
//	}
//	else
//		cerr << "No data?!That's so bad~" << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include"Sales_data.h"
//using namespace std;
//
//int main(void)
//{
//	Sales_data total;
//	cout << "ISBN 本数 单价 利润" << endl;
//	if (read(cin,total))
//	{
//		Sales_data trans;
//		while  (read(cin, trans))
//		{
//			if (trans.isbn() == total.isbn())
//			{
//				total=add(total, trans);
//			}
//			else
//			{
//				print(cout, total) << endl;				
//				total = trans;
//			}
//		}
//	}
//	else
//		cerr << "No data?!That's so bad~" << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include"Person.h"
//using namespace std;
//int main(void)
//{
//	Person test;
//	read(cin, test);
//	print(cout, test) << endl;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<string>
//#include"Sales_data.h"
//using namespace std;
//int main(void)
//{
//	Sales_data item1;
//	print(std::cout, item1) << std::endl;
//
//	Sales_data item2("0-201-78345-x");
//	print(std::cout, item2) << std::endl;
//
//	Sales_data item3("0-201-78345-x", 3, 20.00);
//	print(std::cout, item3) << std::endl;
//
//	Sales_data item4(cin);
//	print(std::cout, item4) << std::endl;
//
//	string s1(3, '3');
//	cout << s1 << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include"Sales_data.h"
//using namespace std;
//int main(void)
//{
//	cout << "ISBN 本数 单价 利润" << endl;
//	Sales_data total(cin);
//	if (!total.isbn().empty())
//	{
//		istream &is = cin;
//		while  (is)
//		{
//			Sales_data trans(is);
//			if (trans.isbn() == total.isbn())
//			{
//				total=add(total, trans);
//			}
//			else
//			{
//				print(cout, total) << endl;				
//				total = trans;
//			}
//		}
//	}
//	else
//		cerr << "No data?!That's so bad~" << endl;
//
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include"Person.h"
//using namespace std;
//int main(void)
//{
//	Person t1;
//	Person t2("张三");
//	Person t3("李四", "李四家");
//	Person t4("王五", 12345);
//	Person t5("赵六", 123456, "赵六家");
//	Person t6(cin);
//	print(cout, t1) << endl;
//	print(cout, t2) << endl;
//	print(cout, t3) << endl;
//	print(cout, t4) << endl;
//	print(cout, t5) << endl;
//	print(cout, t6) << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include"Person.h"
//using namespace std;
//int main(void)
//{
//	Person p1(cin);
//	Person p2("张", 123, "张家");
//	cout << p1._ID()<<" " << p1._Name() << endl;
//	cout << p2._ID() <<" "<< p2._Name() << endl;
//
//	print(cout, p1) << endl;
//	print(cout, p2) << endl;
//
//	system("pause");
//
//	return 0;
//}

//#include<iostream>
//#include"Screen.h"
//using namespace std;
//int main(void)
//{
//	Screen myScreen(5, 5, 'X');
//	myScreen.move(4, 0).set('#').display(cout);
//	cout << endl;
//	myScreen.display(cout);
//	cout << endl;
//	system("pause");
//	return 0;
//}


////随机数
//#include<iostream>
//#include<vector>
//#include<random>
//#include<cmath>
//#include"function_declaration.h"
//#include<ctime>
//using namespace std;
//int main(void)
//{
//	//static uniform_int_distribution<unsigned> u(1, 6);
//	//static default_random_engine e;
//	//unsigned  count = 10;
//	//int a[6] = {0};
//	//
//	////cout << "min: " << e.min() << " max: " << e.max() << endl;
//	//for (auto i = count; i != 0; i--)
//	//	a[u(e)-1]++;
//	//	//cout << u(e) << endl;
//
//	//for (auto &u : a)
//	//	cout << static_cast<double>( u)/ count << endl;
//		
//	//default_random_engine e1;
//	//default_random_engine e2(214);
//	//default_random_engine e3;
//	//e3.seed(32767);
//	//default_random_engine e4(32767);
//
//	//for (rsize_t i = 0; i != 100; ++i)
//	//{
//	//	if (e1() == e2())
//	//		cout << "unseed match at iteration: " << i << endl;
//	//	if (e3() != e4())
//	//		cout << "unseed diffmatch at iteration: " << i << endl;
//
//	//}
//
//	//unsigned count = 100;
//	//for (auto i = count; i != 0; i--)
//	//	cout << range_based_random(0, 9) << endl;
//
//	//default_random_engine e;
//	//uniform_real_distribution<double> d(0, 1);
//
//	//for (size_t i = 0; i != 10; ++i)
//	//	cout << d(e) << endl;
//
//
//	//default_random_engine e;
//	//normal_distribution<> n(4, 1.5);
//	//vector<unsigned> vals(9);
//	//for (rsize_t i = 0; i != 200; ++i)
//	//{
//	//	//auto v = n(e);
//	//	unsigned v = lround(n(e));
//	//	if (v < vals.size())  
//	//		++vals[v];
//	//}
//
//	//for (size_t j = 0; j != vals.size(); ++j)
//	//	cout << j << ": " << string(vals[j], '*') << endl;
//
//
//	//string resp;
//	//default_random_engine e;
//	//bernoulli_distribution b;
//	//do
//	//{
//	//	bool first = b(e);
//	//	cout << (first ? "we go first"
//	//		: "You get to go first") << endl;
//
//	//	cout <<( (play(first) )? "sorry,you lost"
//	//		: "congrats,you won" )<< endl;
//	//	cout << "play again?Enter'yes' or 'no'" << endl;
//	//} while (cin >> resp&&resp[0] == 'y');
//
//	
//	for (size_t i = 0; i != 10; i++)
//		cout << range_based_random(1,6) << endl;
//	system("pause");
//	return 0;
//}


////格式化输入输出
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main(void)
//{
//
//	//cout << "default values : " << 6.5 << " " << 70.0
//	//	<< "\n showpoint : " << showpoint << 6.5 << " " << 70.0
//	//	<< "\n noshowpoint : " << noshowpoint << 6.5 << " " << 70.0
//	//	<< endl;
//
//	//cout << "default values : " << -6 << " " << 70.0
//	//	<< "\n showpos : " << showpos << -6 << " " << 70.0
//	//	<< "\n noshowpos : " << noshowpos << -6 << " " << 70.0
//	//	<< endl;
//
//
//	//cout << "*****all showbase*****\n" <<  showbase 
//	//	<< "default values : " << 20<<dec
//	//	<< "\n dec : " << dec << 20 << dec
//	//	<< "\n hex : " << hex << 20 << dec
//	//	<< "\n oct : " << oct << 20 << dec
//	//	<< "\n left : " << left << 20 
//	//	<< "\n right : " << right << 20 
//	//	<< endl;
//	//cout << noshowbase << endl;
//
//	//cout << "——————————————————————————"<< endl;
//	//cout << "default bool values: "		<< true << " " << false
//	//	<< "\n alpha bool values: " << boolalpha<< true << " " << false
//	//	<< "\n noalpha bool values: "<< noboolalpha<< true << " " << false
//	//	<<endl;
//
//	//cout << "——————————————————————————" << endl;
//	//cout << uppercase<<showbase << endl;
//	//cout << "default : " << 20 << " " << 1024 << endl;
//	//cout << "octal : "<<oct << 20 << " " << 1024 << endl;
//	//cout << "hex : " <<hex<< 20 << " " << 1024 << endl;
//	//cout << "decimal : "<<dec << 20 << " " << 1024 << endl;
//
//	//cout << "——————————————————————————" << endl;
//	//cout << scientific << hexfloat << endl;
//	//cout << "Precison : " << cout.precision()
//	//	<< ",Value: " << sqrt(2.0) << endl;
//
//	//cout.precision(12);
//	//cout << "Precison : " << cout.precision()
//	//	<< ",Value: " << sqrt(2.0) << endl;
//
//	//cout << setprecision(3);
//	//cout << "Precison : " << cout.precision()
//	//	<< ",Value: " << sqrt(2.0) << endl;
//
//
//	//int i = -16;
//	//double d = 3.14159;
//	//cout << "i: " << setw(12) << i << "next col\n"
//	//	<< "d: " << setw(12) << d << "next col\n";
//	//	
//	//cout<<left
//	//		<< "i: " << setw(12) << i << "next col\n"
//	//		<< "d: " << setw(12) << d << "next col\n";
//
//	//cout << right
//	//	<< "i: " << setw(12) << i << "next col\n"
//	//	<< "d: " << setw(12) << d << "next col\n";
//
//	//cout<<internal
//	//	<< "i: " << setw(12) << i << "next col\n"
//	//	<< "d: " << setw(12) << d << "next col\n";
//
//	//cout << setfill('0')
//	//	<< "i: " << setw(12) << i << "next col\n"
//	//	<< "d: " << setw(12) << d << "next col\n"
//	//	<< setfill(' ');
//
//	//int a = 20;
//	////setbase(进制)  进制转换实际上只有8，16,连2进制都不行
//	//cout << setbase(8) << a << endl
//	//	<< setbase(10) << a << endl
//	//	<< setbase(16) << a << endl
//	//	<< setbase(2) << a << endl;
//
//	char c;
//	//cin >> noskipws;
//	//while (cin >> c)
//	//	cout << c;
//	//cin >> skipws;
//	while (cin >> c)
//		cout << c;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<vector>
//#include<string>
//#include"function_declaration.h"
//using namespace std;
//int main(void)
//{
//	//cout << (numeric_limits<int>::max)() << endl;
//	//cout << (numeric_limits<long>::max)() << endl;
//	//cout << (numeric_limits<long long>::max)() << endl;
//	
//	string s1, s2;
//	cin >> s1 >> s2;
//	cout << AddLargeNumber(s1, s2) << endl;
//	
//
//	system("pause");
//	return 0;
//}


////大数相加
//#include<iostream>
//#include<string>
//#include"function_declaration.h"
//using namespace std;
//int main(void)
//{
//
//	int T, t = 0;
//	cin >> T;
//	while (t != T)
//	{
//		string A, B;
//		cin >> A >> B;
//		cout << "Case " << ++t << ":" << endl;
//		if (t == T)
//		{
//			cout << A << " + " << B << " = " << AddLargeNumber(A, B)<<endl;
//			return 0;
//		}
//		cout << A << " + " << B << " = " << AddLargeNumber(A, B) << endl<<endl;
//	}
//	system("pause");
//	return 0;
//}

////大数相减
//#include<iostream>
//#include<string>
//#include"function_declaration.h"
//using namespace std;
//
//int main(void)
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	cout << SubtractLargeNumber(s1, s2) << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//vector<int>* Foo(void)
//{
//	return  new vector<int>();
//}
//
//vector<int>& Foo2(vector<int> &ivec)
//{
//	int input;
//	while (cin>> input)
//	{
//		ivec.push_back(input);
//	}
//	return ivec;
//}
//void Foo3(vector<int> &ivec)
//{
//	for (const auto &i : ivec)
//		cout << i << endl;
//}
//int main(void)
//{
//	vector<int>*F = Foo();
//	 Foo3(Foo2(*F));
//	 delete F;
//	
//	 for (auto &i : *F)
//	 {
//		 cout << i << endl;
//	 }
//
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<string>
//#include"function_declaration.h"
//using namespace std;
//int main(void)
//{
//	//string A, B,S;
//	//cin >> A >> B;
//	//string count = "0";
//	//while(S!="0")
//	//{
//	//	count = AddLargeNumber(count, "1");
//	//	string tmp;
//	//	tmp = MultiplyLargeNumber(B, count);
//	//	//cout << tmp << endl;
//
//	//	S = SubtractLargeNumber(A, tmp);
//	////	cout << S << endl;
//
//	//	//cout << count << endl;
//
//	//}
//	//cout << count << endl;
//
//
//	string A, B,S;
//	//while (cin >> A >> B)
//	cin >> A >> B;
//		cout << CompareLargeNumber(A, B)<<endl;
//	//	cout << AddLargeNumber(A, B) << endl;
//	//cout << MultiplyLargeNumber(A,B) << endl;
////	cout << SubtractLargeNumber(A, B) << endl;
////	cout << DivideLargeNumber(A, B) << endl;
//	system("pause");
//	return 0;
//}





//#include<vector>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include"Sales_data.h"
//using namespace std;
//
////class test
////{
////public:
////	friend istream read(istream &is, test &item);
/////* const类型变量定义时必须进行初始化，在read函数未获得值且赋值给变量前，
////变量的值是未定义的，而不是被其他默认构造函数初始化 */
////	const int ival;//类型改为const，read函数将非法
////	const double dval;
////	const string str;
////	test(int i, double d, string s) :ival(i), dval(d), str(s) {}
////	test() :test(1, 2.0, "3") {}
////	//test(istream &is) :test() { read(is, *this); }
//////	test(istream &is) { read(is, *this); }//没有使用委托构造函数也是不行的
////};
//////istream read(istream &is, test &item)
//////{
//////	is >> item.ival >> item.dval >> item.str;
//////}
//
////class NoDefault
////{
////public:
////	NoDefault(const int &i) : ival(i){}
////	int ival;
////	double dval=7;
////private:
////};
////
////class C
////{
////public:
////	C() : n(0){}
////	NoDefault n;
////private:
////};
//
//int main(void)
//{
//	//Sales_data i;
//	//vector<int> ivec{ 1,3,5,7,9,10,11,13,15 };
//	//auto p_l = lower_bound(ivec.begin(), ivec.end(), 10);
//	//auto p_u = upper_bound(ivec.begin(), ivec.end(), 10);
//	//cout << *p_l<<" "<<*p_u << endl;
//	//test t(cin);
//	/*Sales_data sale;
//	print(cout, sale);*/
//	//test t;
//	//
//	//cout << t.dval << t.ival << t.str << endl;
//
//	//C c;
//	//
//	//cout << c.n.ival << c.n.dval << endl;
//
//	//Sales_data sale0("sale0", 1, 2);
//	////cout << endl;
//	//Sales_data sale1;
//	////cout << endl;
//	//Sales_data sale2("sale2");
//	////cout << endl;
//	//Sales_data sale3(cin);
//	////cout << endl;
//
//	//print(cout, sale0) << std::endl;
//	//print(cout, sale1) << std::endl;
//	//print(cout, sale2) << std::endl;
//	//print(cout, sale3) << std::endl;
//
//	string null_book = "9-999-99999-9";
//	Sales_data item(null_book);
//	//Sales_data item2 = null_book;
//	//Sales_data item2 = cin;
//	//item.combine(null_book);
//	//item.combine(cin);
//	item.combine(Sales_data(null_book));
//	item.combine(static_cast<Sales_data> (cin));
//	print(cout, item) << endl;
//	system("pause");
//	return 0;
//}




//#include<iostream>
//using namespace std;
//class Debug
//{
//public:
//	constexpr Debug(bool b=true):hw(b),io(b),other(b){}
//	constexpr Debug(bool h,bool i,bool o):hw(h),io(i),other(o){}
//	constexpr bool any() { return hw || io || other; }
//	void set_io(bool b) { io = b; }
//	void set_hw(bool b) { hw = b; }
//	void set_other(bool b) { other = b; }
//private:
//	bool hw;
//	bool io;
//	bool other;
//};
//int main(void)
//{
//	constexpr Debug io_sub(false, true, false);
//	if (io_sub.any())
//		cerr << "Print appropriate error messages" << endl;
//	constexpr Debug prod(false);
//	if (prod.any())
//		cerr << "print an error message" << endl;
//	system("pause");
//	return 0;
//}





//#include<iostream>
//using namespace std;
//class Account;
//class Account
//{
//public:
//	void calculate() { amount += amount*interestRate; }
//	static double rate() { return interestRate; }
//	static void rate(double);
//private:
//	static constexpr int period = 30;
//	double daily_tbl[period];
//	string owner;
//	double amount;
//	static double interestRate;
//	static double initRate();
//};
//
//constexpr int Account::period;
//double Account::interestRate = initRate();
//void Account::rate(double newRate)
//{
//	interestRate = newRate;
//}
//int main(void)
//{
//	double r;
//	r = Account::rate();
//	Account ac1;
//	Account *ac2 = &ac1;
//	r = ac1.rate();
//	r = ac2->rate();
//
//
//	system("pause");
//	return 0;
//}





//#include<iostream>
//#include<string>
//using namespace std;
//istream &Foo(istream &is)
//{
//	string s;
//	while (is >> s)
//	{
//		cout << s << endl;
//	}
//	is.clear();
//	return is;
//}
//int main(void)
//{
//	Foo(cin);
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<string>
//#include<vector>
//#include<fstream>
//using namespace std;
//istream &Foo(istream &io)
//{
//	return io;
//}
//int main(void)
//{
//	//cout << "hi!" << endl;
//	//cout << "hi!" << flush;
//	//cout << "hi!" << ends;
//	//
//	//cout << unitbuf;
//	//cout << nounitbuf;
//
//	//cin.tie(&cout);
//	//ostream *old_tie = cin.tie(nullptr);
//	//cin.tie(&cerr);
//	//cin.tie(old_tie);
//	//
//	////int ival;
//	////Foo(cin) >> ival;
//	////cout << ival;
//	////Foo(cout) << ival;
//
//	//string str;
//	//getline(cin, str);
//	//cout << str;
//	//
//	//string s;
//	//fstream fstrm;
//	//fstream fstrm(s);
//	//fstrm.open(s);
//	//fstrm.close();
//	//fstrm.is_open();
//
//	//ifstream in(ifile);
//	//ofstream out;
//
//
//
//	system("pause");
//	return 0;
//}




//#include <iostream>
//#include<string>
//#include<fstream>
////using std::istream;
//using namespace std;
////istream& func(istream &is)
////{
////	string buf;
////	while (is >> buf)
////		cout << buf << endl;
////	is.clear();
////	return is;
////}
//
//int main()
//{
////	istream& is = func(cin);
//	//cout << is.rdstate() << endl;
//	//int ival;
//	//cin >> ival;
//	//cout << cin.rdstate() << endl;
//	//cout << cin.good() << endl;
//	//cout << cin.eofbit<< endl;
//	//cout << cin.failbit << endl;
//	//cout << cin.bad() << endl;
//	//cout << cin.fail() << endl;
//
//	//string ifile = "test.txt";
//	//ifstream in(ifile);
//	//ofstream out;
//	//string test;
//
//	//if (out)
//	//	cout << "succeed" << endl;
//	//else
//	//	cout << "fail" << endl;
//
//	//in >> test;
//
//	//out.open(ifile + ".copy");
//	//in.close();
//
//	//if (out)
//	//	cout << "succeed" << endl;
//	//else
//	//	cout << "fail" << endl;
//
//	//out << test <<ends;
//	//out.close();
//	//out.close();
//
//	//in.open(ifile + "2");
//
//	//if (in)
//	//	cout << "succeed(in)" << endl;
//	//else
//	//	cout << "fail(in)" << endl;
//
//	string filename("test.txt");
//	ofstream out(filename);
//	if (out)
//		cout << "suc" << endl;
//	else
//		cout << "fail" << endl;
//	out << "just try.";
//	out.close();
//
//	string tmp_string;
//
//	ifstream in(filename);
//	if (in)
//		cout << "suc" << endl;
//	else
//		cout << "fail" << endl;
//
////	in >> tmp_string;
//	getline(in, tmp_string);
//	cout << tmp_string << endl;
//	in.close();
//
//	ofstream outfile(filename + ".copy");
//	if (outfile)
//		cout << "suce";
//	else
//		cout << "fail" << endl;
//
//	
//	outfile << tmp_string;
//	outfile.close();
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<fstream>
//#include<string>
//#include<vector>
////using namespace std;
//int main(void)
//{
//	/*write*/
//	//std::string file_name("data\\book.txt");
//	//std::vector<std::string> svec;
//	//std::ofstream out(file_name);
//	//if (out)
//	//{
//	//	out << "try to write.";
//	//	out.close();
//	//}
//	//else
//	//	std::cerr << "open fial!" <<std:: endl;
//
//	/*read*/
//
//	/*by single words*/
//	/*std::string file_name("data\\test.txt");
//	std::vector<std::string> svec;
//	std::ifstream in(file_name);
//
//	while (in)
//	{
//		std::string tmp_str;
//		in >> tmp_str;
//		std::cout << tmp_str << " ";
//		if (!tmp_str.empty())
//			svec.push_back(tmp_str);
//	}
//	for (auto &s : svec)
//	{
//		std::cout << s << std::endl;
//	}*/
//	/*by single line*/
//	std::string file_name("data\\test.txt");
//	std::vector<std::string> svec;
//	std::ifstream in(file_name);
//
//	while (in)
//	{
//		std::string tmp_str;
//		std::getline(in, tmp_str);
//		if (!tmp_str.empty())
//			svec.push_back(tmp_str);
//	}
//	for (auto &s : svec)
//	{
//		std::cout << s << std::endl;
//	}
//	system("pause");
//	return 0;
//}



//"C:\\Users\\Deng-\\Desktop\\test.txt"

//#include<fstream>
//#include<iostream>
//int main(char *s)
//{
//	std::fstream out(s);
//	out << "try to write.";
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <fstream>
//int main(int argc, char **argv)
//{
//	std::string filename;
//	for (int i = 1; i != argc; ++i)
//	{
//		filename = argv[1];
//		break;
//	}
//
//	/*write*/
//	//std::ofstream out(filename);
//	//out << "try to write.";
//	//out.close();
//
//	/*read*/
//
//	std::ifstream in(filename);
//		std::string tmp_str;
//	while (in >> tmp_str)
//	{	
//		std::cout << tmp_str<<" ";
//	}
//	in.close();
//	//std::cout << str << std::endl;
//	return 0;
//}

////#include<iostream>
//#include<string>
//#include<fstream>
//
//int main(void)
//{
//	std::ofstream app("data\\book.txt", std::ofstream::out | std::ofstream::app);
//	if (app)
//		app << std::endl << "再加一句话" << std::endl;
//	else
//		std::cout << "open fail!" << std::endl;
//	app.close();
//	app.open("scratchpad");//默认out|trunc，没有进行输出操作，但是数据内容被清空
//
//	system("pause");
//	return 0;
//}

//"C:\\Users\\Deng-\\Desktop\\test.txt"
//#include<iostream>
//#include<fstream>
//#include<string>
//using std::ofstream;
//using std::ifstream;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::getline;
//int main(int argc, char **argv)
//{
//	/*write*/
//	ofstream out(argv[1], ofstream::app);
//	if (out)
//	{
//		out << "write a line" << endl;
//		out.close();
//	}
//	else
//		cout << "open fail(1)" << endl;
//
//
//	/*read*/
//	ifstream in(argv[1]);
//	string tmp_str;
//	if (in)
//	{
//		while (in)
//			getline(in, tmp_str);
//		in.close();
//	}
//	else
//		cout << "open fail(2)" << endl;
//
//	/*write*/
//	ofstream out2(argv[2],ofstream::app);
//	if (out2)
//	{
//		out2 << tmp_str << endl;
//		out2 << "————the copy of argv[1]" << endl;
//		out2.close();
//	}
//	else
//		cout << "open fail(3)" << endl;
//
//	return 0;
//}




//#include<iostream>
//#include<vector>
//#include<string>
//#include<sstream>
//#include<fstream>
//using namespace std;
//struct PersonInfo
//{
//	string name;
//	vector<string> phones;
//};
//int main(void)
//{
//	//string line, word;
//	//vector<PersonInfo> people;
//
//	//while (getline(cin, line));
//	//{
//	//	PersonInfo info;
//	//	istringstream record(line);
//	//	record >> info.name;
//	//	cout << info.name << endl;
//	//	while (record >> word)
//	//	{
//	//		info.phones.push_back(word);
//	//	}
//	//	people.push_back(info);
//	//}
//
//	//cout << people[0].name << endl;
//
//	//ofstream out("data\\Info.txt");
//	//if (out)
//	//{
//	//	out << "test";
//	//	/*for (auto &i : people)
//	//	{
//	//		out << i.name << " ";
//	//		for (auto &s : i.phones)
//	//		{
//	//			out << s << " ";
//	//		}
//	//		out << endl;
//	//	}*/
//	//}
//	//else
//	//	cout << "open fail" << endl;
//
//	//out.close();
//
//	string word, line;
//	vector<PersonInfo> people;
//	while (getline(cin, line))
//	{
//		//	cout << line << endl;
//		PersonInfo info;
//		istringstream record(line);
//		record >> info.name;
//		while (record >> word)
//			info.phones.push_back(word);
//
//		people.push_back(info);
//
//		/*cout << info.name << " ";
//		for (auto &s : info.phones)
//			cout << s << " ";
//		cout << endl;*/
//
//		//string line_t;
//		//while(record >> line_t)
//	//	cout << line_t << " ";
//		//cout<<endl;
//	}
//	ofstream out("data\\Info.txt");
//	for (const auto &i : people)
//	{
//		out << i.name << " ";
//		for (const auto &p : i.phones)
//			out << p << " ";
//		out << endl;
//	}
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<fstream>
//#include<string>
//#include<sstream>
//using namespace std;
//int main(void)
//{
//	string word;
//	vector<string> svec;
//	ifstream in("data\\Info.txt");
//	while (in>>word)
//	{
//		svec.push_back(word);
//	}
//	for ( auto &s : svec)
//	{
//	istringstream isstream(s);
//	isstream >> word;
//	cout << word << endl;
//	}
//
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include<fstream>
//#include<string>
//#include<sstream>
//#include<vector>
//using namespace std;
//const bool isNum(const string &s)
//{
//	for (auto &c : s)
//	{
//		if (!isdigit(c))
//			return false;
//	}
//	return true;
//}
//int main(void)
//{
//	/*
//		测试：
//		输入一组数据，将全为数字的存入TrueData,其余的存入FalseData,分别输出.
//	*/
//	string word;
//	vector<string> svec;
//	while (cin >> word)
//	{
//		svec.push_back(word);
//	}
//	ostringstream TrueData, FalseData;
//	for (const auto &s : svec)
//	{
//		if (isNum(s))
//			TrueData << s << " ";
//		else
//			FalseData << s << " ";
//	}
//
//	cout << "true : " << TrueData.str() << endl;
//	cout << "false : " << FalseData.str() << endl;
//
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//template <typename t>
//
//int compare(const t &v1, const t &v2)
//{
//	if (v1 < v2) return -1;
//	if (v2 < v1) return 1;
//	return 0;
//}
//
//
//
//int main(void)
//{
//	cout << compare(1, 3) << endl;
//	cout << compare(1.35, 0.112) << endl;
//	string s1("dfiu"), s2("gsfdjohi");
//	cout << compare(s1,s2) << endl;
//	vector<int> ivec{ 1,2,3 }, ivec2{ 4,5,6 };
//	cout << compare(ivec,ivec2) << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//template<unsigned N,unsigned M>
//int compare(const char(&p1)[N], const char(&p2)[M])
//{
//	return strcmp(p1, p2);
//}
//int main(void)
//{
//	char s[100], s2[100];
//	cin >> s >> s2;
//	cout << s << s2 << endl;
//	cout << compare(s,s2) << endl;
//	//注意字符数组大小  字符串字面常量末尾有\0
//	cout << compare("1234", "12345") << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//template <typename T> 
//int compare(const T &v1, const T &v2)
//{
//	if (less<T>()(v1, v2)) return -1;
//	if (less<T>()(v2, v1)) return 1;
//	return 0;
//}
//int main(void)
//{
//	cout << compare(1, 3) << endl;
//	string s{"53"}, s2{"426"};
//	cout << compare(s,s2 ) << endl;
//	system("pause");
//	return 0; 
//}



//#include<iostream>
//#include<vector>
//#include<string>
//#include<iterator>
//using namespace std;
//template<typename T, typename T1>
//const T my_find(T beg, T end, T1 val)
//{
//	while (*beg != val && beg != end)
//	{
//		beg++;
//	}
//	return beg;
//}

//int foo(int a)
//{
//	return 29;
//}

//template<typename T>
//void print(T &arr)
//{
//	for (auto &a : arr)
//		cout << a << endl;
//}
//int main(void)
//{
//	vector<int> ivec{ 1,2,3547,4,465,6,325,235,124,642,124,142,7462,235,51 };
//	//	cout << foo(2);
//	initializer_list<string> lis{ "fgsjhdl","fsdgh","sfgdkhj","fhg","fghjks","d" };
//	cout << *my_find(ivec.begin(), ivec.end(), 6) << endl;
//	cout << *my_find(lis.begin(), lis.end(), "fhg");
//	
//	int i[] = { 1,2,3 };
//	char c[] = "42214";
//	string s[] = { "3553","25353","43","34525","352" };
//	print(i);
//	print(c);
//	print(s);
//
//
//	system("pause");
//	return 0;
//}


/*数组begin()，end(),size()*/
//#include<iostream>
//using namespace std;
//
//template <typename T,unsigned size>
//T* my_begin(T (&arr)[size])
//{
//	return arr;
//}
//
//template <typename T, unsigned size>
//T* my_end(T (&arr)[size])
//{
//	return arr+size;
//}
//
//template<typename T,unsigned size>
//constexpr unsigned my_size(T (&arr)[size])
//{
//	return size;
//}
//
//
//int main(void)
//{
//	int iarr[10]{1,2,3,4,5,6,7,8,9,10};
//	cout << my_size(iarr) << endl;
//	for (auto beg = my_begin(iarr), end = my_end(iarr); beg != end; beg++)
//		cout << *beg << endl;
//
//	system("pause");
//	return 0;
//}




///*
// 有13个人围成一圈，顺序排号。
// 从第1个人开始报数(从1到3报数)，
// 凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
// 要求：使用指针方法实现
//*/
//#include<stdio.h>
//#define N 13
//void main()
//{
//	int k = 0, m = 0, i, a[50];
//
//	for (i = 0; i < N; i++)
//		*(a+i) = -~i;//numbering：a[0]=1,a[1]=2……
//
//	i = 0;
//	while (m < ~- N)
//	{
//		if (*(a + i) != 0)k++;
//
//		if (k == 3)
//		{
//			k = 0;
//			*(a + i) = 0;
//			m++;
//		}
//
//		i++;
//		if (i == N)i = 0;
//	}
//
//	i = 0;
//	while (*(a + i) == 0)i++;
//	printf("The last one is NO.%d", *(a + i));
//
//	system("pause");
//}
///*
// 有13个人围成一圈，顺序排号。
// 从第1个人开始报数(从1到3报数)，
// 凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
// 要求：使用指针方法实现
//*/
//#include<stdio.h>
//#define N 13
//void main()
//{
//	int k = 0, m = 0, i, a[50];
//
//	for (i = 0; i < N; i++)
//		*(a+i) = -~i;//numbering：a[0]=1,a[1]=2……
//
//	i = 0;
//	while (m < ~- N)
//	{
//		if (*(a + i) != 0)k++;
//
//		if (k == 3)
//		{
//			k = 0;
//			*(a + i) = 0;
//			m++;
//		}
//
//		i++;
//		if (i == N)i = 0;
//	}
//
//	i = 0;
//	while (*(a + i) == 0)i++;
//	printf("The last one is NO.%d", *(a + i));
//
//	system("pause");
//}



///*2017/3/8*/
//#include<iostream>
//#include<string>
//#include<vector>
//#include<list>
//using namespace std;
//
////bool find_value(vector<int>::iterator beg, vector<int>::iterator end, int ival)
////{
////	while (beg != end)
////	{
////		if (*beg == ival)
////			return true;
////		++beg;
////	}
////	return false;
////}
//
//vector<int>::iterator find_value(vector<int>::iterator beg, vector<int>::iterator end, int ival)
//{
//	while (beg != end)
//	{
//		if (*beg == ival)
//			break;
//		++beg;
//	}
//	return beg;
//}
//int main(void)
//{
//	/*insert*/
//	vector<string> slist;
//	slist.clear();
//	slist.insert(slist.begin(), 10, "hi~");
//
//	for (const auto &s : slist)
//		cout << s << endl;
//
//	slist.assign(2, "hehe");
//	for (const auto &s : slist)
//		cout << s << endl;
//
//	//vector<int> ivec{ 1,2,3,4,5,6,7,8,9 };
//
//	////cout << find_value(ivec.begin(), ivec.end(), 25) << endl;
//	////判断有没有
//	//if (find_value(ivec.begin(), ivec.end(), 3) != ivec.end())
//	//	cout << *find_value(ivec.begin(), ivec.end(), 3) << endl;
//
//	//vector<int> v1;
//	//const vector<int> v2;
//	//auto it1 = v1.begin(), it2 = v2.begin();
//	//auto it3 = v1.cbegin(), it4 = v2.cbegin();
//
//
//	/*vector<int> ivec;
//	vector<int> ivec2(10);
//	vector<int> ivec3(10,1);
//	vector<int> ivec4{1,2,3};
//	vector<int> ivec5(ivec2);
//	vector<int> ivec6(ivec4.begin(),ivec4.end()-1);
//	for (const auto &i : ivec)
//		cout << i << " ";
//	cout << endl;
//	for (const auto &i : ivec2)
//		cout << i << " ";
//	cout << endl;
//	for (const auto &i : ivec3)
//		cout << i << " ";
//	cout << endl;
//	for (const auto &i : ivec4)
//		cout << i << " ";
//	cout << endl;
//	for (const auto &i : ivec5)
//		cout << i << " ";
//	cout << endl;
//	for (const auto &i : ivec6)
//		cout << i << " ";
//	cout << endl;*/
//
//	//list<int> ilist;
//	//for (int i = 0; i != 10; ++i)
//	//	ilist.push_back(i);
//	//vector<double> dvec(ilist.cbegin(), ilist.cend());
//	//for (const auto &i : ilist)
//	//	cout << i << " ";
//	//cout << endl;
//
//	//vector<int> ivec;
//	//for (int i = 0; i != 10; ++i)
//	//	ivec.push_back(i);
//	//vector<double> dvec(ivec.begin(),ivec.end());
//	//for (const auto &d : dvec)
//	//	cout << d << " ";
//	//cout << endl;
//
//	//list<const char*> clist{ "first","second","third" };
//	//vector<string> svec(clist.begin(), clist.end());
//	//for (const auto &s : svec)
//	//	cout << s << " ";
//
//	list<int> ilist{ 1,2,3,4,5 };
//	vector<int> ivec{ 1,2,3 };
//	vector<int> ivec2{ 1,2,3,4,5 };
//
//	cout <<( ivec == vector<int>(ilist.begin(), ilist.end()) ? "==" : "!=" )<< endl;
//	cout << (ivec2 == vector<int>(ilist.begin(), ilist.end()) ? "==" : "!=") << endl;
//
//	ivec.insert(ivec.begin()+2, { 99,98,97 });
//	for (const auto &i : ivec)
//		cout << i << " "; cout << endl;
//	for(unsigned i=0;i!=ivec2.size();++i)
//		cout << ivec2.at(i) << endl;
////	cout << ivec2.at(6) << endl;
//	ivec.front() = 900;//front()为******* 引用****** 
//	cout << ivec.front() << " " << ivec.back() << endl;
//
//	vector<int> ivec3{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	ivec3.erase(ivec3.begin() + 2, ivec3.end() - 5);
//	for (const auto &i : ivec3)
//		cout << i << " ";
//	cout << endl;
//
//	vector<int> ivec4{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	ivec4.resize(25,-1);
//	for (const auto &i : ivec4)
//		cout << i << " ";
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

///*2017/3/8*/
//#include<iostream>
//#include<vector>
//#include<string>
//#include<deque>
//#include<list>
//#include"Sales_data.h"
//using namespace std;
//int main(void)
//{
//	//vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
//	//vector<int> ivec2{ 0,1,2,3,4,5 };
//	//ivec.insert(ivec.end()-2, ivec2.begin() + 1, ivec2.end());
//	//for (const auto &i : ivec)cout << i << " ";
//	//cout << endl;
//
//	//vector<int> ivec3{ 0,1,2,3,4,5 };
//	//auto beg = ivec3.begin();
//	//beg=ivec3.insert(beg+3, 99);
//	//for (const auto &i : ivec3)cout << i << " ";
//	//cout <<endl<< *beg << endl;
//
//	//ivec3.insert(ivec3.cbegin()+1, { 88,88,88,88,88 });
//	//for (const auto &i : ivec3)cout << i << " ";
//
//
//	///*
//	//push_back复制元素
//	//emplace_back构造元素
//	//*/
//	//vector<Sales_data> sale_vec(1);
//	//sale_vec.emplace_back("9760-241", 25, 15.99);
//	///* 错误 “没有参数列表匹配的版本”*/sale_vec.push_back("89-24", 25, 15.99);
//	//sale_vec.push_back(Sales_data("89-24", 25, 15.99));
//
//
//	//vector<string> svec;
//	//string word;
//	//while (cin >> word)
//	//	svec.push_back(word);
//
//	//deque<string> sdeq(svec.begin(),svec.end());
//	//list<string> slist(svec.begin(), svec.end());
//
//	//for (const auto &s : sdeq)
//	//	cout << s << " ";
//	//cout << endl;
//
//	//for (const auto &s : slist)
//	//	cout << s << " ";
//	//cout << endl;
//
//	//deque<string> sdeq;
//	//string word;
//	//while (cin >> word)
//	//	sdeq.push_back(word);
//
//	//auto beg = sdeq.begin(), end = sdeq.end();
//	//while(beg!=end)
//	//	cout << *(beg++) << " ";
//	//cout << endl;
//
//	//string word;
//	//list<string> slist;
//	//while (cin >> word)
//	//	slist.push_back(word);
//
//	//auto lbeg = slist.begin(), lend = slist.end();
//	//while (lbeg != lend)
//	//	cout << *(lbeg++) << " ";
//	//cout << endl;
//
//	//list<int> ilist{ 1,2,3,4,5,6,7,8,9,10,11,100,20,53,27,235,11,22,35,54,80 };
//	//deque<int> ideque, ideque2;
//	//for (const auto &i : ilist)
//	//{
//	//	if (i % 2)ideque.push_back(i);
//	//	else
//	//		ideque2.push_back(i);
//	//}
//
//	//for (const auto &i : ideque)
//	//	cout << i << " "; cout << endl;
//
//	//for (const auto &i : ideque2)
//	//	cout << i << " "; cout << endl;
//	
//	//vector<int> ivec{ 1,2,3,4,5,6 };
//	//ivec.erase(ivec.begin(), ivec.begin());
//	//for (const auto &i : ivec)
//	//	cout << i << " ";
//
//
//	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
//	vector<int> ivec(begin(ia), end(ia));
//	list<int> ilist(begin(ia),end(ia));
//	
//	vector<int>::iterator iter = ivec.begin();
//	while (iter != ivec.end())
//	{
//		if (*iter & 0x1)
//			iter = ivec.erase(iter);
//		else
//			++iter;
//	}	
//	for (const auto &i : ivec)
//		cout << i << " "; cout << endl;
//
//	list<int>::iterator it = ilist.begin();
//	while (it != ilist.end())
//	{
//		if (*it & 0x1)
//			++it;
//		else
//			it = ilist.erase(it);
//	}
//	for (const auto &i : ilist)
//		cout << i << " "; cout << endl;
//	system("pause");
//	return 0;
//}



/*2017年3月12日*/
//#include<iostream>
//#include<vector>
//#include<stack>
//#include<queue>
////#include<iterator>
//using namespace std;
//int main(void)
//{
//	//vector<int> ivec;
//	//cout << ivec.size() <<" "<< ivec.capacity() << endl;
//	//for (vector<int>::size_type ix = 0; ix != 24; ++ix)
//	//	ivec.push_back(ix);
//	//cout << ivec.size() << " " << ivec.capacity() << endl;
//	//ivec.reserve(50);
//	//cout << ivec.size() << " " << ivec.capacity() << endl;
//	//while (ivec.size() != ivec.capacity())
//	//	ivec.push_back(0);
//	//cout << ivec.size() << " " << ivec.capacity() << endl;
//	//ivec.push_back(0);
//	//cout << ivec.size() << " " << ivec.capacity() << endl;
//	//ivec.shrink_to_fit();
//	//cout << ivec.size() << " " << ivec.capacity() << endl;
//
//	stack<int> intStack;
//	for (size_t ix = 0; ix != 10; ++ix)
//		intStack.push(ix);
//	while (!intStack.empty())
//	{
//		
//		cout << intStack.top()<<ends;
//		intStack.pop();
//	}
//	cout << endl;
//	queue<int> intQueue;
//	for (size_t ix = 0; ix != 10; ++ix)
//		intQueue.push(ix);
//	while (!intQueue.empty())
//	{
//		cout << intQueue.front() << ends;
//		intQueue.pop();
//	}
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<stack>
//using namespace std;
//int main(void)
//{
//	stack<char> intStack;
//
//	system("pause");
//	return 0;
//}


//#include"Sales_item.h"
//#include<iostream>
//using namespace std;
//int main(void)
//{
//	Sales_item s1,s2;
//	cin >> s1;
//	cin >> s2;
//	cout << s1 << endl << s2 << endl;
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include"number.h"
//#include<functional>
//#include<string>
//using std::cout;
//using std::cin;
//using std::endl;
//
//class prt
//{
//public:
//	//函数调用运算符;
//	void operator()(void) { cout << "called fuction." << endl; }
//};
//
//class ifthenelse
//{
//public:
//	char operator()(int a, char c1, char c2)
//	{
//		if (a & 0x1)
//			return c1;
//		else
//			return c2;
//	}
//};
//	
//int main(void)
//{
//	prt i;
//	i();
//	ifthenelse a;
//	cout << a(2, 'y', 'n') << endl;
//	//number n1(1), n2(2);
//	//cin >> n1 >> n2;
//	//cout << n1 << n2;
//	//cout << "n1==n2? " << (n1 == n2) << endl;
//	//cout << "n1！=n2? " << (n1 != n2) << endl;
//	//cout << "n1！<n2? " << (n1 < n2) << endl;
//	//cout << "n1！>n2? " << (n1 > n2) << endl;	
//	//number a = 2121;
//	//cout << a;
//	number n = 2;
//	cout << n << endl;
//	std::plus<std::string> stringAdd;
//	cout << stringAdd("12345", "12344") << endl;
//	system("pause");
//	return 0;
//}


////#include<iostream>
////using namespace std;
////int main(void)
////{
////	/*auto foo = [] {return 42; };
////	cout << foo();*/
////	int sz=3;
////	auto bar = [sz](int ival) {cout << sz << endl; cout << ival << endl; };
////	bar(4);
////	system("pause");
////	return 0;
////}


//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//public:
//	virtual void get_value()
//	{
//		cin >> num >> name >> sex;
//	}
//	virtual void display()
//	{
//		cout << "num: " << num << endl;
//		cout << "name: " << name << endl;
//		cout << "sex: " << sex << endl;
//	}
//private:
//	int num;
//	string name;
//	char sex;
//};
//
//class Student1 : private Student
//{
//public:
//	void get_value() override
//	{
//		Student::get_value();
//		cin >> age >> addr;
//	}
//	void display()
//	{  
//		Student::display();
//		cout << "age: " << age << endl;          //引用派生类的私有成员，正确
//		cout << "address: " << addr << endl;
//	}    //引用派生类的私有成员，正确
//private:
//	int age;
//	string addr;
//};
//
//int main()
//{
//	Student1 stud1;
//	stud1.get_value();
//	stud1.display();
//	system("pause");
//	return 0;
//}




//#include<iostream>
//#include"bulk_quote.h"
//#include"limit_quote.h"
//int main(void)
//{
//	//Quote Q("book1", 100);
//	//Q.debug();
//	//limit_quote BQ("book", 100, 5, 0.5);
//	//BQ.debug();
//	//print_total(std::cout, Q, 10);
//	//print_total(std::cout, BQ, 1);
//	//print_total(std::cout, BQ, 10);
//
//	//Quote Q;
//	//disc_quote DQ;//invalid
//	//Bulk_quote BQ;
//
//	//Bulk_quote BQ("B1", 100, 5, 0.5);
//	//print_total(std::cout, BQ, 10);
//	//print_total(std::cout, BQ, 1);	
//
//	limit_quote LQ("B1", 100, 5, 0.5);
//	print_total(std::cout, LQ, 10);
//	print_total(std::cout, LQ, 1);
//	LQ.debug();
//
//	system("pause");
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Base
//{
//public:
//	Base()=default;
//	virtual int fcn();
//private:
//
//};
//int Base::fcn() { cout << "call Base fcn()"<<endl; return 0; }
//
//class D1 :public Base
//{
//public:
//	int fcn(int);
//	virtual void f2();
//};
//int D1::fcn(int) { cout << "call D1 fcn(int)" << endl; return 0; }
//void D1::f2() { cout << "call D1 f2()" << endl; }
//
//class D2:public D1
//{
//public:
//	D2()=default;
//	int fcn(int);
//	int fcn();
//	void f2();
//private:
//	 
//};
//int D2::fcn(int){ cout << "call D2 fcn(int)" << endl; return 0; }
//int D2::fcn() { cout << "call D1 fcn()" << endl; return 0; }
//void D2::f2() { cout << "call D2 f2()" << endl; }
//int main(void)
//{
//	Base B;
//	B.fcn();
//	system("pause");
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include<vector>
//#include<memory>
//#include"bulk_quote.h"
//using std::string;
//int main(void)
//{
//	std::vector<Quote> Qvec;
//	Qvec.push_back(Bulk_quote("book1", 100,5,0.5));
//	std::cout << Qvec.back().net_price(10) << std::endl;
//	Bulk_quote Q2("book2",100,5,0.5);
//	std::cout << Q2.net_price(10) << std::endl;
//	//Qvec.push_back(*(std::shared_ptr<Bulk_quote>("book1", 100, 5, 0.5)));
//	std::vector<std::shared_ptr<Bulk_quote>> VB;
//	//std::string A;
//	//A.~basic_string();
//	system("pause");
//	return 0;
//}