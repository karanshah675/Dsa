class ProductOfNumbers {
public:

    vector<int> prefix; 
    ProductOfNumbers() {
       prefix={1};
    }
    
    void add(int num) {
     
        prefix.push_back(num);
       
    }
    
    int getProduct(int k) {
        long long prod=1;
        while(k>0){
            prod*=prefix[prefix.size()-k];
            k--;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
