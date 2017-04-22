//#pragma once
#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>
class Person;
std::istream &read(std::istream &is, Person&item);
class Person
{
	friend std::istream &read(std::istream &is, Person&item);
	friend std::ostream &print(std::ostream &os, const Person&item);
private:
	std::string name;
	std::string address;
	unsigned ID = 0;

public:
	Person() = default;

	Person(const std::string &s) :name(s) {}
	Person(const std::string &s, const std::string &s2)
		:name(s), address(s2) {}
	Person(const std::string  &s, const unsigned &n)
		:name(s), ID(n) {}
	Person(const std::string  &s, const unsigned &n, const std::string &s2)
		:name(s), ID(n), address(s2) {}

	Person(std::istream &is) { read(is, *this); }


	std::string _Name()const { return name; }
	//std::string Address()const { return address; }
	unsigned _ID()const { return ID; }
};

std::istream &read(std::istream &is, Person&item);
std::ostream&print(std::ostream &os, const Person&item);

std::istream &read(std::istream &is, Person&item)
{
	is >> item.name >> item.ID >> item.address;
	return is;
}

std::ostream&print(std::ostream &os, const Person&item)
{
	os << item.name << " " << item.ID << " " << item.address;
	return os;
}
































#endif // !PERSON_H