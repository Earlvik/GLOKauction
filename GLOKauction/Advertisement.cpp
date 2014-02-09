#include "Advertisement.h"

/***************
* Constructors *
****************/

Advertisement::Advertisement(void) : 
number(0), quantity(0), title(""), seller_email(""), body(""), start(), close()
{
}

Advertisement::Advertisement(const Advertisement &a) : 
number(a.number), quantity(a.quantity), title(a.title), seller_email(a.seller_email), body(a.body), start(a.start), close(a.close)
{
}

Advertisement::Advertisement(string title, string seller_email, string body, Date start, Date close, int quantity) : 
number(number), quantity(quantity), title(title), seller_email(seller_email), body(body), start(start), close(close)
{
}

/****************
* Set accessors *
*****************/

void Advertisement::setStart (const Date &start)
{
	(*this).start=start;
}

void Advertisement::setClose (const Date &close)
{
	(*this).close=close;
}

void Advertisement::setTitle (string title)
{
	(*this).title=title;
}

void Advertisement::setBody (string body)
{
	(*this).body=body;
}

void Advertisement::setNumber (int number)
{
	(*this).number=number;
}

void Advertisement::setEmail (string email)
{
	(*this).seller_email=email;
}

void Advertisement::setQuantity (int quantity)
{
	(*this).quantity=quantity;
}

/****************
* Get accessors *
*****************/

Date Advertisement::getStart() const
{
	return start;
}

Date Advertisement::getClose() const
{
	return close;
}

string Advertisement::getTitle() const
{
	return title;
}

string Advertisement::getBody() const
{
	return body;
}

string Advertisement::getEmail() const
{
	return seller_email;
}

int Advertisement::getNumber() const
{
	return number;
}

int Advertisement::getQuantity() const
{
	return quantity;
}



bool Advertisement::operator==(const Advertisement& a) const
{
	return number==a.number &&
		quantity==a.quantity &&
		title==a.title &&
		seller_email==a.seller_email &&
		body==a.body &&
		start==a.start &&
		close == a.close;
}



