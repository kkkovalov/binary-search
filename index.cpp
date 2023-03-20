#include <iostream>
//               0 1 2 3 4  5  6  7  8  9
int array[10] = {1,2,7,9,16,19,20,65,78,91};

int binary_search(int left, int right, int queryValue){
    int mid = (right+left)/2;
    std::cout<<"Left: "<<left<<" Mid: "<<mid<<" Right: "<<right<<std::endl;

    if(array[mid] == queryValue) {std::cout<<"Found: "<<mid<<std::endl; return mid;}
    else if(left == right) return -1;
    else if(queryValue > array[mid]) {
        std::cout<<"Move right"<<std::endl;
        return binary_search(mid + 1, right, queryValue);
    } else if(queryValue < array[mid]){
        std::cout<<"Move left"<<std::endl;
        return binary_search(left, mid - 1, queryValue);
    }
    return -1;
};

int main(void){
    int searchValue = 16;
    std::cout<<binary_search(0, (sizeof(array)/4)-1, searchValue)<<std::endl;
};