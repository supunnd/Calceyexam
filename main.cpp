#include "libraries.h"
#include "audiobook.h"
#include "book.h"


int main()
{
    Book book;
    AudioBook Abook;

    string title;
    cout <<"Title of the Book: "<<endl;
    cin >> title;
    book.setTitle(title);

    //cout << book.getTitle();

    string prompt;
    cout <<"Is it a Book or Audiobook: "<<endl;
    cin >> prompt;

   
    if (prompt == "Book" || prompt == "book")
    {
        string author;
        cout <<"Type Author's name: "<<endl;
        cin >> author;
        book.setAuthorName(author);
    }
    else if (prompt == "Audiobook" || prompt == "audiobook")
    {
        string va;
        cout <<"Type Voice Actor's name: "<<endl;
        cin >> va;
        Abook.setVoiceActor(va);        
    }
    else
    {
        cout <<"invalid type" <<endl;
    }


    cout << book.printDescription();
  
    return 0;
}