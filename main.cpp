#include <iostream>

int main() {
    std::initializer_list<int> n = {1, 2, 3, 4, 5};

    for(auto i:n){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
