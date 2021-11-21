/**
 * @file commandTypeHashmap.h
 * @author Mogul Solutions
 * 
 * Description:
 *   -Returns a LibraryCommand object described the desired type name
 *
 * Assumptions/Implementation:
 *   -Written entirely as static methods
 *   -Uses a hashtable to choose which command object to return in O(1)
 *   -Only capital single letters are valid to be the names of commands
*/

#ifndef ASS4_COMMANDTYPEHASHMAP_H
#define ASS4_COMMANDTYPEHASHMAP_H
#include <libraryCommand.h>
using namespace std;

class CommandTypeHashmap {

public:
    /** getCommand
     * Create Command Object
     * 
     * Returns the type of command indicated by the type given
     * @param type A 1 capital character string indicating the type of command 
     * @pre None
     * @post Creates the object and returns it, nothing else
     * @return The library command if type was valid, or nullptr otherwise
    */
    static LibraryCommand* getCommand(String type) const;

private:
    static String[4] commandIDs { "R", "C", "D", "H" };
};

#endif