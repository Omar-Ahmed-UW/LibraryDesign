/** @file librarycommand.h
 * @author Josh Helzerman
 *
 * Description:
 *   - Class that encapsulates a variety of LibraryCommands that the library
 * manager can execute
 *
 * Implementation:
 *   - this is an abstract class and must be implemented in the child classes
 *   - this class is similar to an interface in Java
 *
 */

#ifndef LIBRARYCOMMAND_H
#define LIBRARYCOMMAND_H

#include "library.h"


using namespace std;

class LibraryCommand
{
public:
   // -------------------------------------------------------------------------
   /** LibraryCommand()
    * Defaul Constructor
    *
    * Constructs a LibraryCommand object.
    * @pre None.
    * @post LibraryCommand object exists
    */
   LibraryCommand();

   // -------------------------------------------------------------------------
   /** execute()
    * Execute LibraryCommand
    *
    * Executes this LibraryCommand object. This is pure virtual and must be
    * implemented in derived classes
    * @pre TBD
    * @post TBD
    */
   virtual void execute() = 0;

protected:

   // pointer to library object that this command exists in
   Library* library;

   /** getBookDB()
    * get Book database
    * 
    * retrieves the book database from the library object.
    * LibraryCommand is a friend of Library object, so it 
    * can access these private member variables. These references
    * are used by LibraryCommand's children to edit the DB and
    * their objects.
    * @pre None.
    * @post None.
    * @return pointer to the BookDatabase inside of library
   */
   BookDatabase* getBookDB() const;

   /** getPatronDB()
    * get Patron database
    * 
    * retrieves the Patron database from the library object.
    * LibraryCommand is a friend of Library object, so it 
    * can access these private member variables. These references
    * are used by LibraryCommand's children to edit the DB and
    * their objects.
    * @pre None.
    * @post None.
    * @return pointer to the PatronDatabase inside of library
   */
   PatronDatabase* getPatronDB() const;
};

#endif