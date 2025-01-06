class Solution {
public:
    vector<int> minOperations(std::string boxes) {
        int numberOfBoxes = boxes.size();
        vector<int> operations(numberOfBoxes); 
      
        for (int i = 1, ballCount = 0; i < numberOfBoxes; ++i) {
            if (boxes[i - 1] == '1') {
                ballCount++; 
            }
            operations[i] = operations[i - 1] + ballCount;
        }  
        for (int i = numberOfBoxes - 2, ballCount = 0, operationSum = 0; i >= 0; --i) {
            if (boxes[i + 1] == '1') {
                ballCount++; 
            }
            operationSum += ballCount; 
            operations[i] += operationSum;
        }    
        return operations; 
    }
};
