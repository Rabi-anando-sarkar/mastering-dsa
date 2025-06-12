#include <iostream>
#include <vector>

using namespace std;

class RemoveDuplicates {
    public:
        int removeDupMethod1 (vector<int>& num) {
            if(num.size() <= 1) return num.size();
            
            vector<int> a;
            int k=1;

            a.push_back(num[0]);

            for(int i=1; i < num.size(); i++) {
                if(num[i-1] == num[i]) {
                    continue;
                } else {
                    a.push_back(num[i]);
                    k++;
                }
            }

            num = a;
            return k;
        }

        int removeDupMethod2 (vector<int>& vec) {
            if (vec.size() <= 1) return vec.size();
            int k=1;

            for(int i=1; i<vec.size(); i++) {
                if(vec[i] > vec[i-1]){
                    vec[k] = vec[i];
                    k++;
                }
            }

            return k;
        }
};

int main() {
    
    RemoveDuplicates rd;
    
    vector<int> num = {1,1,1,2,2,3,3,3,4,4,4,5,5,6,6,6,6,6,6,6};

    int result1 = rd.removeDupMethod1(num);
    int result2 = rd.removeDupMethod1(num);

    cout << "Number of unique elements | Method 1 : " << result1 << endl;
    cout << "Number of unique elements | Method 2 : " << result2 << endl;

    return 0; 
}