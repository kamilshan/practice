//this code will output the largest run of the increasing digits in a number
//also prints the length of that run 
// for example if you type 123452345 
// it will output 12345 with the length 5



#include <iostream>

using namespace std;


int main() {
    unsigned long long N;
    cout<<"enter your N \n";
    
    if (!(cin >> N)) return 0;

  
    if (N == 0) {
        cout << 0 << " " << 1 << "\n";
        return 0;
    }

    unsigned long long n = N;

  
    unsigned int prev = n % 10;
    n /= 10;

  
    unsigned long long cur_rev = prev;
    unsigned int cur_len = 1;

 
    unsigned long long best_rev = 0;
    unsigned int best_len = 0;


    while (n > 0) {
        unsigned int cur = n % 10;
        n /= 10;

      
        if (cur < prev) {
  
            cur_rev = cur_rev * 10 + cur;
            cur_len++;
        } else {
          
            if (cur_len >= best_len) {
                best_len = cur_len;
                best_rev = cur_rev;
            }
     
            cur_rev = cur;
            cur_len = 1;
        }

        prev = cur;
    }

 
    if (cur_len >= best_len) {
        best_len = cur_len;
        best_rev = cur_rev;
    }


    unsigned long long best_num = 0;
    unsigned long long tmp = best_rev;
    while (tmp > 0) {
        best_num = best_num * 10 + (tmp % 10);
        tmp /= 10;
    }

    cout << best_num << " " << best_len << "\n";
    return 0;
}