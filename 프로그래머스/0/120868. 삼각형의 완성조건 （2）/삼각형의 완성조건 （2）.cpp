#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> sides) {
    int a = sides[0], b = sides[1];
    return (a + b - 1) - abs(a - b);
}
