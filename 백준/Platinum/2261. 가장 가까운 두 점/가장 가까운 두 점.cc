#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point {
    int x, y;
};

bool cmpX(const Point& a, const Point& b) {
    return a.x < b.x;
}
bool cmpY(const Point& a, const Point& b) {
    return a.y < b.y;
}

// 두 점 사이 거리의 제곱 반환
ll dist(const Point& a, const Point& b) {
    ll dx = (ll)(a.x - b.x);
    ll dy = (ll)(a.y - b.y);
    return dx * dx + dy * dy;
}

// 가장 가까운 두 점 거리 제곱값 계산 (분할 정복)
ll closest(vector<Point>& pts, int left, int right) {
    if (right - left + 1 <= 3) {  // 점이 3개 이하면 브루트포스
        ll minDist = LLONG_MAX;
        for (int i = left; i < right; ++i) {
            for (int j = i + 1; j <= right; ++j) {
                minDist = min(minDist, dist(pts[i], pts[j]));
            }
        }
        sort(pts.begin() + left, pts.begin() + right + 1, cmpY);  // y정렬 필요
        return minDist;
    }

    int mid = (left + right) / 2;
    int midX = pts[mid].x;

    // 왼쪽과 오른쪽에서 각각 최소 거리
    ll d = min(closest(pts, left, mid), closest(pts, mid + 1, right));

    // y좌표 기준 병합
    vector<Point> tmp(right - left + 1);
    merge(pts.begin() + left, pts.begin() + mid + 1,
          pts.begin() + mid + 1, pts.begin() + right + 1,
          tmp.begin(), cmpY);
    copy(tmp.begin(), tmp.end(), pts.begin() + left);

    // midX 근처 strip에 있는 점들 중 거리 확인
    vector<Point> strip;
    for (int i = left; i <= right; ++i) {
        if ((ll)(pts[i].x - midX) * (pts[i].x - midX) < d) {
            for (int j = (int)strip.size() - 1; j >= 0; --j) {
                ll dy = pts[i].y - strip[j].y;
                if (dy * dy >= d) break;
                d = min(d, dist(pts[i], strip[j]));
            }
            strip.push_back(pts[i]);
        }
    }

    return d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Point> pts(n);

    for (int i = 0; i < n; ++i) {
        cin >> pts[i].x >> pts[i].y;
    }

    sort(pts.begin(), pts.end(), cmpX);

    cout << closest(pts, 0, n - 1) << "\n";

    return 0;
}
