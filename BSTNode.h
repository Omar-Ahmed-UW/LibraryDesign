/** @file BSTNode.h
 *  @author Joseph Collora
 * 
 *  Description:
 *  - Node object that exists within the Binary Search trees
 *  - Keeps track of the left and right children of the current instance
 *  - Stores an object with the BSTData interface as the "data"
 *  - Includes no funcitons
 * 
 *  Implementation:
 *  - Left BSTNode defaults to nullptr
 *  - Right BSTNode defaults to nullptr
 *  - Data is of 'BSTData' type
 */

#ifndef BSTNODE_H
#define BSTNODE_H

#include "BSTData.h"

using namespace std;

class BSTNode {
    public:
    // Pointer to left child
    BSTNode* left;

    // Pointer to right child
    BSTNode* right;

    // Pointer to the data object
    BSTData* data;
};  

#endif BSTNode