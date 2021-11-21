/** @file returnBook.h
 * @author Josh Helzerman
 *
 * Description:
 *   - Command for library manager. returns book from patron to library
 *
 * Implementation
 *   - inherits from Command interface.
 *   - adds a copy of an existing book to the library
 */

#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include "libraryCommand.h"
#include <string>

using namespace std;

class ReturnBook : public LibraryCommand
{
public:
   // -------------------------------------------------------------------------
   /** ReturnBook()
    * Default Constructor
    *
    * Constructs a return book command object with default values
    * @pre None.
    * @post ReturnBook command object exists
    */
   ReturnBook();

   // -------------------------------------------------------------------------
   /** execute()
    * Execute return book command
    *
    * updates the patron's current books and increments the book's count
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