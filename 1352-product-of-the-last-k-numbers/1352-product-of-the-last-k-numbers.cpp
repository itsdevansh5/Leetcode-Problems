class ProductOfNumbers {
public:
    vector<long long> l;

    ProductOfNumbers() : l{1} {}

    void add(int num) {
        if (num == 0)
            l = {1};
        else
            l.push_back(l.back() * num);
    }

    int getProduct(int k) {
        if (k >= l.size()) return 0;
        return l.back() / l[l.size() - 1 - k];
    }
};
