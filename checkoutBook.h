/** @file checkoutBook.h
 * @author Josh Helzerman
 *
 * Description:
 *   - Command for library manager. checks out book for patron from library
 *
 * Implementation
 *   - inherits from Command interface.
 *   - removes a copy of an existing book to the library
 */

#ifndef CHECKOUTBOOK_H
#define CHECKOUTBOOK_H

#include "library.h"
#include "libraryCommand.h"
#include <string>

using namespace std;

class CheckoutBook : public LibraryCommand
{
public:
   // ------------------------------------------------------------------------
   /** CheckoutBook()
    * Default Constructor
    *
    * Constructs a checkout book command object with default values
    * @pre None.
    * @post CheckoutBook command object exists
    */
   CheckoutBook();

   // -------------------------------------------------------------------------
   /** execute()
    * Execute checkout book command
    *
    * adds selected book to the patron's current books and decrements the 
    * book's count. It searches for the book by creating a book with the 
    * bookID. then comparing that to books in the BST
    * @pre The patron and book should exist in the system
    * @post patron and book are updated accordingly
    */
   virtual void execute();

private:


   // ID of patron this command uses
   string patronID;

   // ID of book this command uses
   string bookID;
};

#endif