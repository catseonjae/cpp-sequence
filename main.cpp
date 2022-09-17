#include <bits/stdc++.h>
template <class T>
class sequence{
    private:
    std::vector<T> v;
    public:
    sequence(){}
    sequence(int n){
        v.resize(n);
    }
    sequence(int n, T element){
        v.resize(n);
        fill(&v[0],sizeof(v),element);
    }
    sequence(std::vector<T> u){
        v=u;
    }
    void add(T a){
        v.push_back(a);
    }
    void pop(){
        v.pop_back();
    }
    T front(){
        return v.front();    
    }
    T back(){
        return v.back();
    }
    T operator [] (int order){
        if(order<0) return v[v.size()+order];
        if(order==0) return T();
        return v[order-1];
    }
    void sort(){
        std::sort(v.begin(),v.end());
    }
    void sort(auto f){
        std::sort(v.begin(),v.end(),f);
    }
    void print(bool endline=true){
        for(T a: v){
            a.output();
        }
        if(endline) std::cout<<"\n";
    }
    void output(bool endline=true){
        for(T a: v){
            std::cout<<a<<" ";
        }
        if(endline) std::cout<<"\n";
    }
    void fastio(){
        
        std::ios_base::sync_with_stdio(0); std::cin.tie(0);
    }
    void get(){
        for(int i=0;i<v.size();i++) v[i].input();
    }
    void input(){
        for(int i=0;i<v.size();i++) std::cin>>v[i];
    }
    
    void reverse(){
        std::reverse(v.begin(),v.end());
    }
    int lower_bound(T x){
        return std::lower_bound(v.begin(),v.end(),x)-v.begin()+1;
    }
    bool empty(){
        return v.empty();
    }
    sequence cut(int s, int e){
        std::vector<int> v2;
        for(int i=s;i<=e;i++) v2.push_back((*this)[i]);
        return sequence(v2);
    }
};
