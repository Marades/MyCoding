////
////  14888.cpp
////  algorithm_20210417
////
////  Created by 김건회 on 2021. 4. 17..
////  Copyright © 2021년 김건회. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> arr;
//int MIN=1000000000, MAX=-1000000000;
//
//void swap(char & a, char & b) {
//    char temp = a;
//    a = b;
//    b = temp;
//}
//
//void permutation(vector<int> data, int depth, int n, int r) {
//    if (depth == r) {
//        int temp_sum = arr[0];
//        for(int i=1, len=arr.size(); i<len; i++) {
//            switch (data[i-1]) {
//                case 0:
//                    temp_sum += arr[i];
//                    break;
//                case 1:
//                    temp_sum -= arr[i];
//                    break;
//                case 2:
//                    temp_sum *= arr[i];
//                    break;
//                case 3:
//                    temp_sum /= arr[i];
//                    break;
//            }
//        }
//        if(MAX < temp_sum) {
//            MAX = temp_sum;
//        }
//        if(MIN > temp_sum) {
//            MIN = temp_sum;
//        }
//    }
//    
//    for(int i = depth; i < n; i++) {
//        swap(data[depth], data[i]);
//        permutation(data, depth + 1, n, r);
//        swap(data[depth], data[i]);
//    }
//    
//    
//}
//
//int main() {
//    int N;
//    cin >> N;
//
//    vector<int> operator_list;
//    
//    for(int i=0; i<N; i++) {
//        int temp;
//        cin >> temp;
//        arr.push_back(temp);
//    }
//    for(int i=0; i<4; i++) {
//        int temp;
//        cin >> temp;
//        
//        for(int j=0; j<temp; j++) {
//            operator_list.push_back(i);
//        }
//    }
//    
//    permutation(operator_list, 0, N-1, N-1);
//    
//    cout << MAX << endl << MIN;
//}
