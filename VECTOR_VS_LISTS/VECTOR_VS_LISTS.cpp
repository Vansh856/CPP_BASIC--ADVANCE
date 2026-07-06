#include <iostream>
#include <vector> // Required for vectors
using namespace std;

int main() {
    // Create a vector to hold active Process IDs (PIDs)
    vector<int> readyQueue;

    // 1. Add processes to the end of our queue using .push_back()
    readyQueue.push_back(1001); // Adds PID 1001
    readyQueue.push_back(1002); // Adds PID 1002
    readyQueue.push_back(1003); // Adds PID 1003

    // 2. We can easily check the size of the queue
    cout << "Active processes in queue: " << readyQueue.size() << endl;

    // 3. We can access elements just like a normal array
    cout << "First process to run: PID " << readyQueue.front() << endl;

    // 4. Remove the last process using .pop_back()
    readyQueue.pop_back(); 

    cout << "Queue size after termination: "<< readyQueue.size() << endl;

    return 0;
}