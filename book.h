#pragma once
#include "libraries.h"


class Book
{
    private: 
        string title; 
        string authorName;
       
    public :
        void setTitle(string title){
            this->title = title;
        }
        void setAuthorName(string a){
            authorName = a;
        }
        string getTitle(){
            return title;
        }
        string getAuthorName(){
            return authorName;
        }
        string printDescription(){
            cout <<"Title of the Book: " << title <<endl;
            cout <<"author Name: "<< authorName <<endl;;
        }
       
};

