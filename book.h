/** @file book.h
 * @author Josh Helzerman
 *
 * Description:
 *   - A book object represents a unique book and the number of copies available
 * for that book at any given time
 *   - Can be queried to display its information
 *   - Can be queried to see if there are any available copies
 *   - Can be compared with other books
 *   - number of available books can be changed
 *
 *
 * Implementation:
 *   - This is an abstract class
 *   - Some functions are virtual and some are pure virtual
 *   - One book object can represent multiple copies of the same book using the
 * count member variable
 *   - count can be decreased or increased
 */

#ifndef BOOK_H
#define BOOK_H

#include "BSTData.h"
#include <string>

using namespace std;

// needs inheritance to BST data. book factory should befriend book for
// instantiation
class Book : public BSTData
{
public:
   // -------------------------------------------------------------------------
   /** Book()
    * Default Constructor
    *
    * Creates a book object. Member variables are instantiated to default
    * values. Book requires a book factory in order to be properly instantiated
    * with data
    * @pre None.
    * @post Book object exists with default member variables
    */
   Book();

   // -------------------------------------------------------------------------
   /** addBook()
    * Add a copy of the book to the collection
    *
    * Adds 1 to the count variable of the book, representing a copy of the book
    * has been returned
    * @pre None.
    * @post count is incremented
    */
   void addBook();

   // -------------------------------------------------------------------------
   /** removeBook()
    * Remove a book from collection
    *
    * Subtracts 1 from count variable of book, a copy of the book has been
    * checked out.
    * @pre must have a copy of the book available. count > 0
    * @post count--
    * @return true if book was available, false otherwise
    */
   bool removeBook();

   // -------------------------------------------------------------------------
   /** checkAvailability()
    * Check if book is avaiable
    *
    * Checks if a copy of the book is available
    * @pre None.
    * @post None. CONST FUNCTION
    * @return if count > 0, return true, else false
    */
   bool checkAvailability() const;

   // -------------------------------------------------------------------------
   /** displayBook()
    * Display book information
    *
    * Display book information in easy-to-read columns.
    * Displayed in order: Title, author, type, month published, year published
    * Virtual function, can be overridden
    * @pre None.
    * @post None. const function
    * @return String representing book data
    */
   virtual string displayBook() const;

   // -------------------------------------------------------------------------
   /** operator<()
    * Operator less than overload
    *
    * Compares this book to right-hand book to see if this is less than rhs
    * Pure virtual. must be implemented in sub classes
    * @param rhs Book to be compared
    * @pre None.
    * @post None. const
    * @return true if this book is less than rhs, else false
    */
   virtual bool operator<(const Book& rhs) const = 0;

   // -------------------------------------------------------------------------
   /** operator>()
    * Operator greater than overload
    *
    * Compares this book to right-hand book to see if this is greater than rhs
    * Pure virtual. must be implemented in sub classes
    * @param rhs Book to be compared
    * @pre None.
    * @post None. const
    * @return true if this book is greater than rhs, else false
    */
   virtual bool operator>(const Book& rhs) const = 0;

   // -------------------------------------------------------------------------
   /** operator==()
    * Operator equal to overload
    *
    * Compares this book to right-hand book to see if this is equal to rhs
    * Pure virtual. must be implemented in sub classes
    * @param rhs Book to be compared
    * @pre None.
    * @post None. const
    * @return true if this book is equal to rhs, else false
    */
   virtual bool operator==(const Book& rhs) const = 0;

   // -------------------------------------------------------------------------
   /** create()
    * Create book (for factory)
    *
    * Creates a book instance
    * @pre None
    * @post new book object exists
    * @return reference to new children's book
    *
    */
   virtual Book* create() const = 0;

protected:
   // author of book
   string author;

   // title of book
   string title;

   // year book was published
   int year;

   // month book was published
   int month;

   // Id of the book
   string bookID;

   // copies of book available
   int count;

   // Total number of books available
   int maxCount;

   // format of book
   string format;

   // current patrons checking out the book. max size is maxCount
   Patron** checkouts;
};

#endif