#pragma once
#include "libraries.h"
#include "book.h"

class Bookshop : public Book
{
    private:
        
        
    public: 
        string bookCollection();
        string noOfBooksAded();
        void addBook(){
            bookCollection()+= printDescription();           
        }
       
    

};