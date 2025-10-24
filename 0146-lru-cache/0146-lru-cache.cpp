#include <unordered_map>
#include <utility>
#include <iostream>

using namespace std;

struct LL {
    std::pair<int, int> p;
    LL *next;
    LL *prev;

    LL(int key, int value) {
        this->p = {key, value};
        this->next = nullptr;
        this->prev = nullptr;
    }
    ~LL() = default;
};

class LRUCache {
private:
    LL *head;
    LL *tail;
    int cap;
    int size;
    unordered_map<int, LL *> keys;

    void remove_node(LL *node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        size--;
    }

    void add_to_head(LL *node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
        size++;
    }

    LL *remove_tail() {
        LL *lru_node = tail->prev;
        remove_node(lru_node);
        return lru_node;
    }

public:
    LRUCache(int capacity) {
        this->cap = capacity;
        this->size = 0;
        
        this->head = new LL(0, 0); 
        this->tail = new LL(0, 0);
        head->next = tail;
        tail->prev = head;
    }

    ~LRUCache() {
        LL *current = head;
        while (current != nullptr) {
            LL *next = current->next;
            delete current;
            current = next;
        }
    }

    int get(int key) {
        if (keys.find(key) == keys.end()) {
            return -1;
        }

        LL *node = keys[key];
        int value = node->p.second;

        remove_node(node);
        add_to_head(node);

        return value;
    }

    void put(int key, int value) {
        if (keys.count(key)) {
            LL *node = keys[key];
            
            node->p.second = value;

            remove_node(node);
            add_to_head(node);
            
            return;
        }

        if (size == cap) {
            LL *lru_node = remove_tail();
            
            keys.erase(lru_node->p.first);
            delete lru_node; 
        }

        LL *new_node = new LL(key, value);
        add_to_head(new_node);
        
        keys[key] = new_node;
    }
};