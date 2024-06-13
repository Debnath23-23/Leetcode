class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        vector<int>ans;

        for(int i=0; i<seats.size(); i++){
            for(int j=i+1; j<seats.size(); j++){
                if( seats[i]>seats[j]){
                    swap(seats[i],seats[j]);
                }
            }
        }


            for(int m=0; m<students.size(); m++){
            for(int n=m+1; n<students.size(); n++){
                if (students[m]>students[n]){
                    swap(students[m],students[n]);
                }
            }
        }
        int sum=0;
                for(int k=0; k<students.size(); k++){
             sum+=abs(seats[k]-students[k]);
        }
        return sum;
    }

};