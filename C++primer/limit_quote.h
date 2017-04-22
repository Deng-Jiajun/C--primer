#ifndef LIMIT_QUOTE
#define	LIMIT_QUOTE
#include"disc_quote.h"
class limit_quote :public disc_quote
{
public:
	limit_quote() = default;
	limit_quote(const std::string&, double, std::size_t, double);
	double net_price(std::size_t n) const override;
	virtual void debug(void)
	{
		Quote::debug();
		std::cout << "quantity: " << quantity << std::endl;
		std::cout << "discount: " << discount << std::endl;
	}
	~limit_quote()=default;
};

limit_quote::limit_quote(const std::string &book, double price, std::size_t qty, double disc) :disc_quote(book, price,qty,disc) {}

double limit_quote::net_price(std::size_t n) const
{
	return n*price*(n < quantity ? 1 - discount : 1);
}

#endif // !LIMIT_QUOTE
