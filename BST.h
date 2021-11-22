/** @file BST.h
 *  @author Joseph Collora
 * 
 *  Description:
 *  - A binary search tree that exists as a contains BSTData ype objects
 *  - Can be used to insert objects into itself
 *  - Can be cleared of all nodes
 *  - Can retrieve a pointer to a designated item in the structure
 * 
 *  Implementation:
 *  - Each binary tree stores one type of item at a time for comparison (e.g. 
 *    fiction book vs children book)
 *  - Contains a root node to the root of the BST
 *  - Initial root value is 'nullptr'
 */

#ifndef BST_H
#define BST_H

#include "BSTNode.h"

using namespace std;

template <typename T>
class BST {
    public:
    // -------------------------------------------------------------------------
    /** BST()
     * Default Constructor
     * 
     * Creates a book object and instantiats it members to default values
     * @pre None.
     * @post BST object exists
     */
    BST();

    // -------------------------------------------------------------------------
    /** insert()
     * BST Insert Function
     * 
     * Inserts given object into the current instance of BST, returning a bool 
     * value indicating the success of the insert
     * @pre must have a BST available to use with method
     * @post target item is inserted into the BST if not a duplicate
     * @return returns true if no duplicate is found, false otherwise
     */
    bool insert(T);

    // -------------------------------------------------------------------------
    /** retrieve()
     * 
     * Retrieves the target node within the current instance of BST, returned
     * in the form of a  pointer
     * @pre must have a BST available to use with method
     * @post None.
     * @return Object pointer returned, if object is nonexistant then = nullptr
     */
    T* retrieve(T);

    // -------------------------------------------------------------------------
    /** clear()
     * 
     * Clears the current BST of all its nodes making it empty
     * @pre must have a BST available to use with method
     * @post the BST is empty and root is set to nullptr
     */
    void clear();

    private:

    // root of the Binary Search Tree
    BSTNode* root;

};

#endif BST