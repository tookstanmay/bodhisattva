#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    struct point {
        int x, y;
    };

    int orientation(point p1, point p2, point p3) {
        int val1 = (p2.y - p1.y) * (p3.x - p2.x);
        int val2 = (p3.y - p2.y) * (p2.x - p1.x);

        int val = val1 - val2;

        if (val == 0) {
            return 0;
        }

        return (val > 0) ? 1 : 2;
    }

    bool on_segment(point p, point r, point q) {
        if (r.x <= max(p.x, q.x) && r.x >= min(p.x, q.x) &&
            r.y <= max(p.y, q.y) && r.y >= min(p.y, q.y)) {
            return true;
        }
        return false;
    }

    bool doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        point a, b, c, d;

        a.x = p1[0];
        b.x = q1[0];
        c.x = p2[0];
        d.x = q2[0];

        a.y = p1[1];
        b.y = q1[1];
        c.y = p2[1];
        d.y = q2[1];

        int o1 = orientation(a, b, c);
        int o2 = orientation(a, b, d);
        int o3 = orientation(c, d, a);
        int o4 = orientation(c, d, b);

        if (o1 != o2 && o3 != o4) {
            return true;
        }

        if (o1 == 0 && on_segment(a, c, b)) {
            return true;
        }

        if (o2 == 0 && on_segment(a, d, b)) {
            return true;
        }

        if (o3 == 0 && on_segment(c, a, d)) {
            return true;
        }

        if (o4 == 0 && on_segment(c, b, d)) {
            return true;
        }

        return false;
    }
};

int main() {
    Solution solution;
    int p1[] = {-927840, -884847};
    int q1[] = {922043, 574938};
    int p2[] = {742855, 69854};
    int q2[] = {-900866, -512854};

    if (solution.doIntersect(p1, q1, p2, q2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
