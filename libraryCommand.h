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
};

#endif