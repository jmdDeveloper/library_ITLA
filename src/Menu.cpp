/*
 * Menu.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Menu.h"
#include <iostream>
#include "Stack.h"
#include <string>
using namespace std;
Stack* myStack = new Stack();

void Menu::show()
{
	//TODO: Implement this method.
	cout << "Implement the menu" << endl;
	int election= 0;
	do{
		system("cls");
		cout << "       ITLA Library" << endl;
		cout << "1- List Books" << endl;
		cout << "2- Insert Book (push)" << endl;
		cout << "3- Last Book of the stack" << endl;
		cout << "4- Find book by categories" << endl;
		cout << "5- Exit" << endl;
		cout << "     Select an option => ";
		cin >> election;
		
		if(election >= 1 && election <= 5){
			
			switch(election){
				case 1:{
					myStack->listBook();
				      system("pause");
					  }
				      
					break;
					
				case 2:{
				    system("cls");
					string t_title = ""; // = "";
					string t_date = ""; 
					string t_category = "";
					string t_author = ""; 
					string t_editoral = "";
					cout<<"Entry the title: ";
					cin>>t_title;
					
					cout<<"Entry the author: ";
					cin>>t_author;
					
					cout<<"Entry the editoral: ";
					cin>>t_editoral;
					
					cout<<"Entry the date of publication: ";
					cin>>t_date;
					
					cout<<"Entry the category: ";
					cin>>t_category;
					
					Element* newBook = new Element(t_title, t_author, t_editoral, t_date, t_category);
					myStack->push(newBook);
					system("pause");
				}
					break;	
				case 3:{
					cout<<"Opction No avilable yet"<<endl;
				
				}
					break;
				case 4:{
					cout<<"Opction No avilable yet"<<endl;
					
				}
					break;
				case 5:{
					election = 5;
				}
					break;
				
				default: break;
			}
		}
		
	}while(election != 5);
	
}
Menu::Menu()
{

}

