/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Element.h"

Element::Element(std::string title, std::string author, std::string editorial, std::string date, std::string categories): _next(NULL)
{
	_title = title;
	_author = author;
	_editorial = editorial;
	_date = date;
	_categories = categories;
}
