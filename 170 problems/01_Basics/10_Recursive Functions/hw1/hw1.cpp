#include <iostream>

using namespace std;

// power Function
uint64_t my_Pow(uint8_t val, uint8_t p=2) {
    if(p == 0) {
        return 1;
    }

    // base case 
    if(p == 1){
        return val;
    }
    return val * my_Pow(val, p-1);
}

// Array Maximum
int arr_max(int arr[], int len) {
    int size = len-1, i = 0; 

    // base case 
    if(len == 2)
    {
        if(arr[size] >arr[size-1])
            return arr[size];
        else    
            return arr[size-1];
    }

    if(arr[len-1] > arr_max(arr, len-1))
        return arr[len-1];
    else    
        return arr_max(arr, len-1);
}

// Array Sum
int arr_sum(int arr[], int len) {
    int size = len-1; 

    // base case 
    if(len == 0)
    {
        return arr[size];
    }
    return arr[len-1] + arr_sum(arr, len-1);
}

//  Array average
double arr_avg(int arr[], int len) {
    int size = len-1; 

    // base case 
    if(len == 0)
    {
        return arr[size];
    }

    double sum =  arr[len-1] + arr_sum(arr, len-1);
    return sum /size;
}

void arr_increment(int arr[], int len) {
    if(len == -1)
        return;
    
    arr_increment(arr, len -1);
    arr[len]++;
}

void accumulate_arr(int arr[], int len) {
    static int accumulate = 0; 

    if (len == -1) {
        return;
    }

    accumulate_arr(arr, len - 1); 
    accumulate += arr[len];
    cout<<accumulate<<" ";
}

void left_max(int arr[], int len) {
    static int maxVal = 0;
    if(len == -1){
        return;
    }
    left_max(arr, len -1);

    if(maxVal <= arr[len])
        maxVal = arr[len];
    cout<<maxVal<<" ";
}


//////////////////////////testing/////////////////////////////////////
void test1() {
    cout<< my_Pow(7)<<"\n";
    cout<< my_Pow(7, 0)<<"\n";
    cout<< my_Pow(7, 1)<<"\n";
    cout<< my_Pow(7, 3)<<"\n";
    cout<< my_Pow(2, 8)<<"\n";
    cout<< my_Pow(2, 16)<<"\n";
    cout<< my_Pow(2, 32)<<"\n";
}

void test2() {
    int arr1[] = {1,80,2,10,3};
    cout<<arr_max(arr1, 5)<<"\n";
}

void test3() {
    int arr1[] = {1,8,2,10,3};
    cout<<arr_sum(arr1, 5)<<"\n";
}

void test4() {
    int arr1[]= {1,8,2,10,3};
    cout<<arr_avg(arr1, 5)<<"\n";
}

void test5() {
    int arr1[]= {1,8,2,10,3};
    // for(int i = 0 ; i < 5; i++) 
    //     cout <<arr1[i]<<" ";
    // cout <<"\n";

    arr_increment(arr1, 5);

    for(int i = 0 ; i < 5; i++) {
        cout <<arr1[i]<<" ";
    }
    cout <<"\n";
}

void test6() {
    int arr1[]= {1,8,2,10,3};
    accumulate_arr(arr1, 5);

    // for(int i = 0 ; i < 5; i++) {
    //     cout <<arr1[i]<<" ";
    // }
    // cout <<"\n";
}

void test7() {
    int arr1[] = {1, 3, 5 , 7 , 4, 2};
    left_max(arr1, 5);
}


int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();
    test7();
    return 0;
}