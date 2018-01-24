//
// Created by alonj on 23-Dec-17.
//

#include "ParameterK.h"
#include "Key.h"
#include "Value.h"
#include <cstddef>
#include <iostream>

#ifndef HW4_NODE_H
#define HW4_NODE_H

#define nullptr NULL

class Node{
private:
    Value* _value;
    Key* _key;
    Key* _minKey;
    Node* _children[2*K-1];
    Node* _parent;
public:
    unsigned direct_children;
    unsigned total_children;
    bool isLeaf;
    bool sentinel;
    Node(Value* nvalue = nullptr, Key* nkey = nullptr){
            if(nvalue != nullptr){
                    _value = nvalue;
            }
            if(nkey != nullptr){
                    _key = nkey;
            }
            _parent = nullptr;
            for (int i = 0; i < 2*K-1; i++) {
                    _children[i] = nullptr;
            }
            direct_children = 0;
            total_children = 1;
            isLeaf = true;
            sentinel = false;
            _minKey = _key; };
    ~Node();
    void add_child(Node* child, int place);
    void remove_child(Node* child);
    void set_parent(Node *newParent, bool init = false);
    void set_key(Key* key){_key = key;};
    void set_value(Value* val){_value = val;};
    void set_minkey(Key* key){_minKey = key;};
    void null_p(){_parent=nullptr;};
    void update_key();
    void update_val();
    void update_attributes();
    void update_direct_children();
    void update_total_children();
    Key* get_key(){return _key;};
    Key* get_minKey(){return _minKey;};
    Value* get_value(){return _value;};
    Node* get_child(int index){return _children[index];};
    Node* get_parent(){return _parent;};
    bool compare_key(const Key* other) const;
    //const int get_child_count(){return direct_children;}; // returns number of direct children
    //const int get_total_child(){return total_children;}; // returns total number of leaves in subtree
};

#endif //HW4_NODE_H
