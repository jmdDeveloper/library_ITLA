/*
 * Stack.cpp
 *
 *  Created on: Jun 20, 2016
 *      Author: John Michel Delibua
 */

#include "Stack.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void Stack::push(Element* element)
{
	//TODO: Implement this method.
	_last = NULL; //we inicilaze the variable "_last"
	
	if(_last == NULL){ // if _last is null then the stack is empty
		_last = element;
	}else{ // if exit one or more, _last will be who come and it _next will be the _last before it.
		element->_next = _last;
		_last = element;
	}
}

Element* Stack::pop()
{
	//TODO: Implement this method.
	if(_last == NULL){
		return NULL;
	}
	
	Element* element_return = _last;
	_last = element_return->_next;
	
	return element_return;
}
void Stack::listBook(){
    
	Element* x = _last;
	
		while(x != NULL){
			cout<<"  Title: "<<x->_title<<", Category: "<<x->_categories<<endl;
			x = pop();
		}
}

Stack::Stack(): _last(NULL)
{

}

