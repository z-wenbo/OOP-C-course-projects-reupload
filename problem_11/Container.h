#ifndef CONTAINER_H
#define CONTAINER_H
#include "BasicContainer.h"
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <iostream>

template<class A, class C>
class Container : public BasicContainer<A>
{
    C base;
public:
    void insert(const A &x)
    {
        for(auto t = base.begin(); t != base.end(); ++t)
            if(*t > x)
            {
                base.insert(t, x);
                return;
            }
        base.insert(base.end(), x);
    }
     A find(int k)
    {
        auto t = base.begin();
        while(--k)
            ++t;
        return *t;
    }
};

template<class A>
class Container <A, std::vector<A>> : public BasicContainer<A>
{
    std::vector<A> base;
    int m=0;
public:
    void insert(const A &x)
    {
       base.push_back(x) ;
    }
    A find(int k)
    {
        if (m==0){
            sort(base.begin(),base.end());
            m=1;
        }
        return base[k-1];
    }
};

template<class A>
class Container <A, std::multiset<A>> : public BasicContainer<A>
{
    std::multiset<A> base;
    
public:
    void insert(const A &x)
    {
       base.insert(x) ;
    }
    A find(int k)
    {
        int m=0;
       for(auto i=base.begin(); i != base.end(); ++i){
           ++m;
           if(m==k){
               return *i;
           }

       }
    }
};

#endif
