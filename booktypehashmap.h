/** @file booktypehashmap.h
 * @author Omar Ahmed
 *
 * Description:
 *   - A BookTypeHashmap object represents a specifically made hashmap
 * ADT used to store the various books that are in a library 
 * corresponding with the letters in the Alphabet. 
 *   - Can store any book name of any subtype of Book.
 *   - Can retrieve the ID of a certain Book object in a library.
 *
 *
 * Implementation:
 *   - This is a hashmap ADT of Books. 
 *   - It contains an int array of size 26 holding all booktype IDs.
 *   - Retreives any ID of a book using bookTypeID array.
 */

#ifndef BOOKTYPEHASHMAP_H
#define BOOKTYPEHASHMAP_H

using namespace std;

#include "book.h"

class BookTypeHashMap
{
public:

// -------------------------------------------------------------------------
   /** getID()
    * Accessor Function
    *
    * Retreives the ID of any provided Book object fromt the bookTypeID
    *   int array and returns the id as an int.
    * Returns -1 if not found.
    * @pre Book book.
    * @post int.
    */
    int getID(Book book);

private:

    // int array of bookIDs that can be searched to retrieve any id for a book
    //  the exists in it.
    int bookTypeID[26];
};

#endif