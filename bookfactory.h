/** @file bookfactory.h
 * @author Omar Ahmed
 *
 * Description:
 *   - A BookFactory object represents the factory class that creates Book
 *  objects in their different subtypes to be stored in the books database.
 *   - Can create a book and correctly classify it as the right type using
 * string data provided by the LibraryBuilder.
 *   - Holds three types of books: Fiction, Periodicals, and Children.
 * 
 *
 * Implementation:
 *   - This a factory class following the factory design pattern.
 *   - Contains one function used to create and classify a book using
 * string data.
 *   - Classifies each type of book and creates the correct sub-class of 
 * book for each string passed in.
 */

#ifndef BOOKFACTORY_H
#define BOOKFACTORY_H

#include "book.h"

using namespace std;

class BookFactory
{
public:

// -------------------------------------------------------------------------
   /** createBook()
    * Builder Function
    *
    * Creates a Book using the data provided as string input and creates it 
    * using the correct book subclass. Inserts in to the bookTypes array and 
    * returns a pointer to the Book just inserted. 
    * @pre string bookString.
    * @post Book pointer.
    */
    Book* createBook(string bookString);

private:

    // Array of subclasses of Book object to classify each book as its correct
    //  type.
    Book bookTypes[3];
};

#endif