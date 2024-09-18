#include <iostream>
#include <vector>

class MaxHeap {
private:
    std::vector<int> heap;

    void bubbleUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index] > heap[parentIndex]) {
                std::swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    void bubbleDown(int index) {
        int size = heap.size();
        while (true) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int largest = index;

            if (left < size && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < size && heap[right] > heap[largest]) {
                largest = right;
            }

            if (largest != index) {
                std::swap(heap[index], heap[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

public:
    MaxHeap() {}

    void insert(int key) {
        heap.push_back(key);
        bubbleUp(heap.size() - 1);
    }

    int deleteRoot() {
        if (heap.empty()) {
            throw std::out_of_range("Heap is empty");
        }
        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        if (!heap.empty()) {
            bubbleDown(0);
        }
        return root;
    }

    int extractMax() {
        return deleteRoot();
    }

    void heapify(std::vector<int>& array) {
        heap = array;
        for (int i = (heap.size() - 2) / 2; i >= 0; --i) {
            bubbleDown(i);
        }
    }

    void printHeap() const {
        for (int value : heap) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MaxHeap maxHeap;

    // Insert elements
    maxHeap.insert(3);
    maxHeap.insert(9);
    maxHeap.insert(2);
    maxHeap.insert(1);
    maxHeap.insert(4);
    maxHeap.insert(5);

    std::cout << "Heap after insertions: ";
    maxHeap.printHeap();

    // Extract max
    std::cout << "Extracted max: " << maxHeap.extractMax() << std::endl;
    std::cout << "Heap after extracting max: ";
    maxHeap.printHeap();

    // Heapify an array
    std::vector<int> array = {10, 20, 5, 6, 1, 8};
    maxHeap.heapify(array);
    std::cout << "Heap after heapifying an array: ";
    maxHeap.printHeap();

    return 0;
}
