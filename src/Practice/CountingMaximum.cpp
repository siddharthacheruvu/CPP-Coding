#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> frequencyOfMaxValue(vector<int> numbers, vector<int> q){
    int len = numbers.size();
    vector<int> result;
    int arr[len];
    int max = 0, max_count = 0;
    for (int i = len-1; i>=0;i--)
    {
        if (numbers[i]>max){
            max = numbers[i];
            max_count = 1;            
        }else if (numbers[i] < max){  
            //    Do Nothing
        }else{
            max_count++;
        }
        arr[i] =  max_count;
    }
    for (int j = 0; j < q.size(); j++)
    {
        result.push_back(arr[q[j]-1]);
    }
    return result;
}

int main(){
    int numbers[] = {5,4,5,3,2};
    vector <int> numbersvec(numbers, numbers + sizeof(numbers) / sizeof(int));
    int q[] = {1,2,3,4,5};
    vector <int> qvec(q, q + sizeof(q) / sizeof(int));
    vector <int> result;
    result = frequencyOfMaxValue(numbersvec,qvec);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }       
   return 0; 
}