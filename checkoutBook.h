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

#include "command.h"
#include <string>

using namespace std;

class CheckoutBook : public Command {
public:
   // -------------------------------------------------------------------------
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
    * adds selected book to the patron's current books and decrements the book's count
    * @pre The patron and book should exist in the system
    * @post patron and book are updated accordingly
   */
   virtual void execute();

private:

   // pointer to library object that this command exists in
   // Library* library;
   
   // ID of patron this command uses
   string patronID;

   //ID of book this command uses
   string bookID;
};

#endif