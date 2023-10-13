class Solution {
public:
    int getpeak(MountainArray &m, int n, int s, int e) {
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (m.get(mid) < m.get(mid + 1)) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    int findInMountainArray(int target, MountainArray &m) {
        int n = m.length();
        int s = 0;
        int e = n - 1;
        int mid;

        // Find the peak
        int peakIndex = getpeak(m, n, s, e);

        // Binary search in the left part
        s = 0;
        e = peakIndex;
        while (s <= e) {
            mid = s + (e - s) / 2;
            int midValue = m.get(mid);
            if (midValue == target) {
                return mid;
            } else if (midValue < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        // Binary search in the right part
        s = peakIndex;
        e = n - 1;
        while (s <= e) {
            mid = s + (e - s) / 2;
            int midValue = m.get(mid);
            if (midValue == target) {
                return mid;
            } else if (midValue > target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return -1;
    }
};
