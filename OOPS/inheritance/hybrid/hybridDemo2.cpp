#include <iostream>
using namespace std;

class Library
{
    string libraryName;
    string address;
    int totalBooks;

protected:
    Library() {}
    Library(string ln, string ad, int tb)
    {
        libraryName = ln;
        address = ad;
        totalBooks = tb;
        cout << "Library Class Initialised...\n";
    }

    void showLibraryInfo()
    {
        cout << "\nLibrary Name : " << libraryName << endl;
        cout << "Address : " << address << endl;
        cout << "Total Books : " << totalBooks << endl;
    }
};

class Book : virtual protected Library
{
    string title;
    string author;
    string isbn;
    int pages;

protected:
    Book(string ti, string au, string isbn, int pa)
    {
        title = ti;
        author = au;
        this->isbn = isbn;
        pages = pa;
        cout << "Book Class Initialised..\n";
    }
    void showBook()
    {
        cout << "Title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "ISBN : " << isbn << endl;
        cout << "Pages : " << pages << endl;
    }
};

class Member : virtual protected Library
{
    string memberName;
    int memberId;
    string membershipType;
    int borrowedCount;

protected:
    Member(string mn, int mi, string mt, int bc)
    {
        memberName = mn;
        memberId = mi;
        membershipType = mt;
        borrowedCount = bc;
        cout << "Member Class Initialised..\n";
    }
    void showMember()
    {
        cout << "Member Name : " << memberName << endl;
        cout << "Member Id : " << memberId << endl;
        cout << "Membership Type : " << membershipType << endl;
        cout << "Borrowed Count : " << borrowedCount << endl;
    }
};

class BorrowTransaction : protected Book, protected Member
{
    string borrowDate;
    string returnDate;
    int fineAmount;

public:
    BorrowTransaction(string ln, string ad, int tb, string ti, string au, string isbn, int pa, string mn, int mi, string mt, int bc, string bd, string rd, int fa) : Book(ti, au, isbn, pa), Member(mn, mi, mt, bc), Library(ln, ad, tb)
    {
        borrowDate = bd;
        returnDate = rd;
        fineAmount = fa;
        cout << "Borrow Transaction Class Initialised....\n";
    }

    void showTransaction()
    {
        showLibraryInfo();
        showBook();
        showMember();
        cout << "Borrow Date : " << borrowDate << endl;
        cout << "Return Date : " << returnDate << endl;
        cout << "Fine Amount : " << fineAmount << endl;
    }
};

int main()
{
    BorrowTransaction bt("City Library", "Main Road", 1000, "C++ Programming", "Bjarne Stroustrup", "ISBN12345", 350, "Harsh Patel", 101, "Premium", 3, "12-11-2025", "20-11-2025", 100);

    bt.showTransaction();
    return 0;
}

/*
^1.   Library
^       |
^       |
^      Book (Single Inheritance)

*2.   Library
*        |
*    ----------
*    |        |
*    Member  Book (Hierarchical Inheritance)

^3.   Library
^        |
^    ----------
^    |        |
^    Member  Book (Hierarchical Inheritance)
^    |        |
^    ----------
^        |
^  BorrowTransaction (Multiple Inheritance) (multilevel inheritance)

! Error : BorrowTransaction::showLibraryInfo\" is ambiguous"
& Ambigous : having Multiple copies
*/