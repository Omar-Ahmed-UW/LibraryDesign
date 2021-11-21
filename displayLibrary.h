/** @file displayLibrary.h
 * @author Josh Helzerman
 * 
 * Description:
 *   - Command for library manager. displays all books in library, sorted
 * 
 * Implementation
 *   - inherits from Command interface.
 *   - displays all books in library in sorted order
*/

#ifndef DISPLAYLIBRARY_H
#define DISPLAYLIBRARY_H

#include "command.h"
#include <string>

using namespace std;

class DisplayLibrary : public Command {
public:
   // -------------------------------------------------------------------------
   /** DisplayLibrary()
    * Default Constructor
    * 
    * Constructs a display library command object with default values
    * @pre None.
    * @post DisplayLibrary command object exists
    */
    DisplayLibrary();

   // -------------------------------------------------------------------------
   /** execute()
    * Execute display library command
    * 
    * Prints all books in library in sorted order
    * @pre The library object should have books inputed
    * @post None. library is unchanged
   */
   virtual void execute();

private:

   // pointer to library object that this command exists in
   // Library* library;
   


};

#endif