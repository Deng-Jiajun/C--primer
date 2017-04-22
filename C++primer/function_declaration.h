//#pragma once


#ifndef FUNCTION_DECLARATION_H
#define FUNCTION_DECLARATION_H 
#include<vector>
#include<string>
int fact(int val);

int absolute_value(int val);

void cfct(void);

void swap_reference(int &a, int &b);

void swap_pointer(int *a, int*b);

std::string::size_type find_char(const std::string &s, char c,
	std::string::size_type &occurs);

bool Judge_Wheather_Capital_Letter(const std::string &s);

std::string Transform_Capital_Letter(std::string &s);

int return_greater(int a, int *b);

void SwapPointer(int *a, int *b);

void reference_print_6_2_4(int(&arr)[2]);

void beg_end_print(const int *beg, const int *end);

void count_print(const int *arr, const size_t count);

int sum_6_27(std::initializer_list<int>init);

const std::string &shorterString(const std::string &s1, const std::string &s2);

char &get_val_202(std::string &str, std::string::size_type ix);

int factorial(int val);

void print_6_33_1(std::vector<int>::iterator beg, std::vector<int>::iterator end);

void print_6_33_1(std::vector<std::string>::iterator beg, std::vector<std::string>::iterator end);

//内联函数（inline）加上关键字 ‘inline’即可
inline const std::string & shorterString_6_5_2
(const std::string &s1, const std::string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

inline bool isShorter_6_46(const std::string &s1, const std::string &s2)
{
	return s1.size() < s2.size();
}


std::string pf_221(const std::string &s1, const std::string &s2);

int add_224(const int &a, const int &b);
int subtract_224(const int &a, const int &b);
int multiply_224(const int &a, const int &b);
int divide_224(const int &a, const int &b);


const unsigned range_based_random(const unsigned &a, const unsigned &b);

const int CompareLargeNumber(const std::string &N1, const std::string &N2);
const std::string LargeNumberCutZero(const std::string &N);
const std::string AddLargeNumber(const std::string &N1, const std::string &N2);
const std::string SubtractLargeNumber(const std::string &N1, const std::string &N2);
const std::string MultiplyLargeNumber(const std::string &N1, const std::string &N2);
const std::string DivideLargeNumber(const std::string &N1, const std::string &N2);
const std::string PesudoMultiplyLargeNumber(const std::string &N1, const std::string &N2);


















#endif // FUNCTION_DECLARATION_H