#include <iostream>
#include <vector>

using namespace std;

int getTotalDroppedPackets(vector<vector<int>>& requests, int max_packets, int rate) {
    int total_dropped = 0;
    int current_packets = 0;

    for (auto& request : requests) {
        int start_time = request[0];
        int end_time = request[1];
        int packets = end_time - start_time;

        // Update the current number of packets in the pipeline
        current_packets -= rate * (start_time - (current_packets / rate));

        // Drop packets if the current number exceeds the maximum limit
        if (current_packets + packets > max_packets) {
            int dropped = current_packets + packets - max_packets;
            total_dropped += dropped;
            current_packets = max_packets;
        }

        // Update the current number of packets after delivering
        current_packets += packets;
    }

    return total_dropped;
}

int main() {
    vector<vector<int >> requests ;
    int requests_arr[][2] = {{0, 1}, {0, 1}, {0, 1}, {0, 1}, {
        0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}};
    for (int i = 0; i < 10; i++) {
        requests.push_back(vector<int>(requests_arr[i], requests_arr[i] + 2));
    }
    int max_packets = 10;
    int rate = 2;

    int total_dropped = getTotalDroppedPackets(requests, max_packets, rate);
    cout << "Total number of dropped packets: " << total_dropped << endl;

    return 0;
}
