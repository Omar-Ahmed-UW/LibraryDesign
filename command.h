/** @file command.h
 * @author Josh Helzerman
 * 
 * Description:
 *   - Class that encapsulates a variety of commands that the library manager can execute
 * 
 * Implementation:
 *   - this is an abstract class and must be implemented in the child classes
 *   - this class is similar to an interface in Java
 * 
*/

#ifndef COMMAND_H
#define COMMAND_H

using namespace std;

class Command {
public:
// ----------------------------------------------------------------------------
   /** Command()
    * Defaul Constructor
    * 
    * Constructs a Command object.
    * @pre None.
    * @post Command object exists
   */
   Command();

// ----------------------------------------------------------------------------
   /** execute()
    * Execute command
    * 
    * Executes this command object. This is pure virtual and must be implemented
    * in derived classes
    * @pre TBD
    * @post TBD
   */
   virtual void execute() = 0;
};

#endif