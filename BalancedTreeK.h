//
// Created by alonj on 23-Dec-17.
//
#ifndef HW4_KTREE_H
#define HW4_KTREE_H

#include "Node.h"
#include <cstddef>
#include "ParameterK.h"

using namespace std;

class BalancedTreeK{
private:
    Node* _root;
    Node* minNode;
    Node* maxNode;
public:
    BalancedTreeK(const Key* min, const Key* max);
    ~BalancedTreeK(); // TODO: BOM
    Node* search_key(const Key* key) const;
    void Insert(const Key* nkey, const Value* nval);
    void Delete(const Key* dkey);
    Value* Search(const Key* key) const;
    unsigned Rank(const Key* key) const;
    const Key* Select(unsigned index) const;
    const Value* GetMaxValue(const Key* key1, const Key* key2) const;
};

#endif //HW4_KTREE_H
