#include <iostream>
#include <vector>

using namespace std;

class RemoveDuplicates {
    public:
        int removeDupMethod1 (vector<int>& vec) {
            if(vec.size() <= 1) return vec.size();
            int k = 1;
            for(int i=1; i<vec.size(); i++) {
                if(vec[i] > vec[i-1]) {
                    vec[k] = vec[i];
                    k++;
                }
            }
            return k;
        }

        int removeDupMethod2(vector<int>& vec) {
            if(vec.size() <= 1) return vec.size();
            
            int k = 1;
            vector<int> temp;

            temp.push_back(vec[0]);

            for(int i=1; i < vec.size() ; i++) {
                if(vec[i] == vec[i-1]) {
                    continue;
                } else {
                    temp.push_back(vec[i]);
                    k++;
                }
            }

            vec=temp;
            return k;
        }
};

int main() {
    RemoveDuplicates rd;
    
    vector<int> num = {1,1,1,2,2,3,3,3,4,4,4,5,5,6,6,6,6,6,6,6};

    int result2 = rd.removeDupMethod2(num);
    int result1 = rd.removeDupMethod1(num);

    cout << "Number of unique elements | Method 1 : " << result1 << endl;
    cout << "Number of unique elements | Method 2 : " << result2 << endl;
    return 0;
}