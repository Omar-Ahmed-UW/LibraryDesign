/** @file fiction.h
 * @author Josh Helzerman
 *
 * Description:
 *   - A Fiction book type
 *
 * Implementation:
 *   - implements the pure virtual comparison functions from Book class
 */

#ifndef FICTION_H
#define FICTION_H

#include "book.h"

using namespace std;

class Fiction : public Book
{
public:
   // -------------------------------------------------------------------------
   /** Fiction()
    * Default constructor
    *
    * Creates a fiction book object
    * @pre None.
    * @post Fiction book object exists
    */
   Fiction();

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
    * @param rhs Book to be compared
    * @pre None.
    * @post None. const
    * @return true if this book is less than rhs, else false
    */
   virtual bool operator<(const Book& rhs) const;

   // -------------------------------------------------------------------------
   /** operator>()
    * Operator greater than overload
    *
    * Compares this book to right-hand book to see if this is greater than rhs
    * @param rhs Book to be compared
    * @pre None.
    * @post None. const
    * @return true if this book is greater than rhs, else false
    */
   virtual bool operator>(const Book& rhs) const;

   // -------------------------------------------------------------------------
   /** operator==()
    * Operator equal to overload
    *
    * Compares this book to right-hand book to see if this is equal to rhs
    * @param rhs Book to be compared
    * @pre None.
    * @post None. const
    * @return true if this book is equal to rhs, else false
    */
   virtual bool operator==(const Book& rhs) const;

   // -------------------------------------------------------------------------
   /** create()
    * Create Fiction book
    *
    * Creates a Fiction book instance
    * @pre None
    * @post new Fiction book object exists
    * @return reference to new children's book
    *
    */
   Book* create() const;
};

#endif