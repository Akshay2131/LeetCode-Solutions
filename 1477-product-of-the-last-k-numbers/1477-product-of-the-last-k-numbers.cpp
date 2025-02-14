class ProductOfNumbers {
public:

    vector<int> v;
    int lastZero = -1;

    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num == 0) lastZero = v.size();
        cout<<num<<" ";
        if(v.empty() || (v.back() == 0)) {
            v.push_back(num);
            return;
        }
        v.push_back(v.back() * num);
    }
    
    int getProduct(int k) {
        int n = v.size(); 
        if(lastZero > n - k - 1) return 0;
        if(n == k || v[n - k - 1] == 0) return v.back();
     return v.back() / v[n - k - 1]; 
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */