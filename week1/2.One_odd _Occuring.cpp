// One odd Occuring
// https://www.geeksforgeeks.org/problems/find-the-odd-occurence4820/1
int getOddOccurrence(vector<int>& arr) {
        // code here
        int required=0;
        for(auto it:arr){
            required^=it;
        }
        return required;
    }
