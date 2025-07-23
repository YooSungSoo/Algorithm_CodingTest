#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1000;

int N;
ll B;
vector<vector<int>> A;

// 행렬 곱셈 함수
// a × b 결과를 반환. 각 연산은 MOD 1000으로 나눈다.
vector<vector<int>> multiply(const vector<vector<int>>& a, const vector<vector<int>>& b) {
    vector<vector<int>> result(N, vector<int>(N, 0)); // 결과 행렬 초기화

    // 표준적인 행렬 곱셈
    for (int i = 0; i < N; i++) {         // 행
        for (int k = 0; k < N; k++) {     // a의 열, b의 행
            for (int j = 0; j < N; j++) { // 열
                result[i][j] += (a[i][k] * b[k][j]) % MOD;
                result[i][j] %= MOD; // 오버플로 방지
            }
        }
    }

    return result;
}

// 분할 정복을 이용한 행렬 거듭제곱
vector<vector<int>> power(vector<vector<int>> base, ll exp) {
    // 기저 조건: A^1은 A 자체
    if (exp == 1) {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                base[i][j] %= MOD; // 모듈러 연산 적용
        return base;
    }

    // 재귀적으로 A^(exp/2)를 계산
    vector<vector<int>> half = power(base, exp / 2);
    vector<vector<int>> result = multiply(half, half); // 제곱

    // 지수가 홀수면 A를 한 번 더 곱함
    if (exp % 2 == 1)
        result = multiply(result, base);

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력 받기
    cin >> N >> B;
    A.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    // A^B 계산
    vector<vector<int>> answer = power(A, B);

    // 결과 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << answer[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
