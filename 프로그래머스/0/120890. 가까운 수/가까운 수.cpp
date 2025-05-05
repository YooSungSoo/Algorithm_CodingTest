#include <vector>
#include <cstdlib>  // abs

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int minDiff = abs(array[0] - n);

    for (int i = 1; i < array.size(); i++) {
        int diff = abs(array[i] - n);
        if (diff < minDiff || (diff == minDiff && array[i] < answer)) {
            minDiff = diff;
            answer = array[i];
        }
    }

    return answer;
}
