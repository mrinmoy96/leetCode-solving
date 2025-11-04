import java.util.PriorityQueue;

class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for (int num : nums) {
            minHeap.add(num); // Add current number
            if (minHeap.size() > k) {
                minHeap.poll(); // Remove smallest if heap too large
            }
        }

        // The root of heap is the kth largest element
        return minHeap.peek();
    }
}