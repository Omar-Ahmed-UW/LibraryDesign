/** @file librarybuilder.h
 * @author Omar Ahmed
 *
 * Description:
 *   - A LibraryBuilder object represents the builder class that creates
 * and fills up a Library object with books as well as patrons.
 *   - Can be given any type of book in ifstream
 *   - Can handle new books or book types added to the library.
 *   - Initializes all library components.
 *
 *
 * Implementation:
 *   - This is a builder class following the builder design pattern
 *   - It contains one function that initializes all library data into
 * the book database and patron database using ifstream as inputs from files.
 *   - It has bookFactory and uses the library to initialize both its
 * databases.
 *   - Each instance of Library only has one builder.
 */

#ifndef LIBRARYBUILDER_H
#define LIBRARYBUILDER_H

#include "bookfactory.h"
#include "library.h"
#include <fstream>

using namespace std;

class LibraryBuilder
{
public:
   // -------------------------------------------------------------------------
   /** createLibrary()
    * Builder Function
    *
    * Creates a Library object by initializing one and returning it. It
    * requires file input formatted in a specific format to parse and read
    * data from the file. Initializes the Library object through filling up
    * the BookDatabase and PatronDatabase associated with the Library.
    * @pre ifstream books and ifstream patrons.
    * @post Library object.
    */
   Library createLibrary(ifstream books, ifstream patrons);

private:
   // Instance of bookFactor used to fill up BookTypeHashmap used by
   //  the BookDatabase.
   BookFactory bookFactory;
};

#endif