/** @file displayPatronHistory.h
 * @author Josh Helzerman
 * 
 * Description:
 *   - Command for library manager. displays patron's book history
 * 
 * Implementation
 *   - inherits from Command interface.
 *   - displays patron book history
*/

#ifndef DISPLAYPATRONHISTORY_H
#define DISPLAYPATRONHISTORY_H

#include "librarycommand.h"
#include <string>
#include "library.h"

using namespace std;

class DisplayPatronHistory : public LibraryCommand {
public:
   // -------------------------------------------------------------------------
   /** DisplayPatronHistory()
    * Default Constructor
    * 
    * Constructs a display patron book history command object with default values
    * @pre None.
    * @post DisplayPatronHistory command object exists
    */
    DisplayPatronHistory();

   // -------------------------------------------------------------------------
   /** execute()
    * Execute display patron history command
    * 
    * Prints patron history
    * @pre The patron should exist in the system
    * @post None. patron is unchanged
   */
   virtual void execute();

private:

   // pointer to library object that this command exists in
   Library* library;
   
   // ID of patron this command uses
   string patronID;


};

#endif