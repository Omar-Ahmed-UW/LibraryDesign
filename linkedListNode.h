/**
 * @file linkedListNode.h
 * @author Mogul Solutions
 *
 * Description:
 *   -Stores a command and the next link in the list
 *   -Allows for the command to be executed, but never changed
 *
 * Assumptions/Implementation:
 *   -A linked list node shouldn't exist without pointing to a command
 *   -The command will be deleted when this node is deleted
 */

#ifndef ASS4_LLNODE_H
#define ASS4_LLNODE_H

#include "libraryCommand.h"

using namespace std;

class LinkedListNode {

public:
    LinkedListNode* next;

    /** LinkedListNode
    * Linked List Node Constructor
    *
    * Creates a Linked List Node with the given command
    * @param command The command to be executed when the queue is ready
    * @pre Command is complete, even if it is not valid
    * @post next is set to nullptr, stores the command
    */
    LinkedListNode(LibraryCommand* command);

    /** ~LinkedListNode
    * Linked List Node Destructor
    *
    * Destroys the Linked List Node
    * second line of description if needed
    * @pre None
    * @post Deallocates this node and its enclosed Library Command
    */
    ~LinkedListNode();

    /** execute
    * Execute Command
    *
    * Executes the enclosed Library Command
    * @pre None
    * @post The library command executed, this is unchanged
    * @return None
    */
    void execute();

private:
    LibraryCommand* command;
};

#endif