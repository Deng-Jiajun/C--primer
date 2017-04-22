#ifndef DISC_QUOTE_H
#define	DISC_QUOTE_H
#include"Quote.h"
class disc_quote:public Quote
{
public:
	disc_quote()=default;
	disc_quote(const std::string &book,double price,std::size_t qty,double disc):Quote(book,price),quantity(qty),discount(disc){}
	double net_price(std::size_t)const = 0;
	virtual ~disc_quote()=default;

protected:
	std::size_t quantity = 0;
	double discount = 0.0;

};

#endif // !DISC_QUOTE_H
