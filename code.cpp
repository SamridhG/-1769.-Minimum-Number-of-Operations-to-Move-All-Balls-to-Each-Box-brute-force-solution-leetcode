class Solution {
public:
    vector<int> minOperations(string boxes) {
        int count;
        vector<int>operation;
        for(int i=0;i<boxes.size();i++)
        {
            count=0;
            for(int j=0;j<boxes.size();j++)
            {
                if(boxes[j]=='1' && j!=i)
                {
                    count+=abs(i-j);
                }
            }
            operation.push_back(count);
        }
        return operation;
    }
};
