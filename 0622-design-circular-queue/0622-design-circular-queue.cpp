class MyCircularQueue {
public:
    int front=0;
    int back=0;
    int count=0;
    int size;
    vector<int>dq;
    MyCircularQueue(int k) {
        this->dq=vector<int>(k);
        this->size=k;
    }
    
    bool enQueue(int value) {
        if(count!=size) {this->dq[(back)%size]=value;
        count++;
        back++;
        return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(count!=0) {
            front++;
            count--;
            return true;
        }
        return false;
    }
    
    int Front() {
        if(count==0) return -1;
        else
        return dq[front%size];
    }
    
    int Rear() {
        if(count!=0)
        return dq[(back-1)%size];
        else return -1;
    }
    
    bool isEmpty() {
        return count==0;
    }
    
    bool isFull() {
        return count==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */