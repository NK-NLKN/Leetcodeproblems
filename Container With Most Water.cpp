Class Solution {
public:
 int maxArea(vector<int> height) {
  int n = height.size(), i = 0, j = n-1;
  int max = 0, nv;
  while (i<j) {
    int h1 =  height[i], h2 = height[j];
    if (h1 > h2) { nv = h2 * (j-i); j--; } 
    else         { nv = h1 * (j-i); i++; }
    if (nv > max)   max = nv;
  }
  return max;
}

};
