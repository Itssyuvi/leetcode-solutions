class Solution {
public:
    double average(vector<int>& salary) {
        int mini = *min_element(salary.begin(), salary.end());
        int maxi = *max_element(salary.begin(), salary.end());

        int sum = 0;

        for (int i = 0; i < salary.size(); i++) {
            sum += salary[i];
        }

        sum = sum - mini - maxi;

        return (double)sum / (salary.size() - 2);
    }
};
