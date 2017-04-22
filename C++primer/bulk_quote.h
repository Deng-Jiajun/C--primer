#ifndef BULK_QUOTE
#define	BULK_QUOTE
#include"disc_quote.h"
class Bulk_quote :public disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string&, double, std::size_t, double);
	double net_price(std::size_t n) const override;
	~Bulk_quote() = default;
};
Bulk_quote::Bulk_quote(const std::string &book, double price, std::size_t qty, double disc) :disc_quote(book, price,qty,disc) {}

double Bulk_quote::net_price(std::size_t n) const
{
	return n * price * (n >= quantity ? 1 - discount : 1);
}

#endif // !BULK_QUOTE

