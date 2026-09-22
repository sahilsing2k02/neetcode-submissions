class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap; // create max heap
        for (int s : stones) maxHeap.push(s); // insert all element in maxheap
        
        while (maxHeap.size() > 1) {
            int first = maxHeap.top(); //first largest element
            maxHeap.pop();
            int second = maxHeap.top(); //second largest element
            maxHeap.pop();
            if (second < first) { 
                maxHeap.push(first - second);//adding first -second
            }
        }
        maxHeap.push(0);//incase every thing is destroyed
        return maxHeap.top();
    }
};