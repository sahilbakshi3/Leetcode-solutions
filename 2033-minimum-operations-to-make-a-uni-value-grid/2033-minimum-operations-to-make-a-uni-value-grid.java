class Solution {
    public int minOperations(int[][] grid, int x) {
        int n = grid.length;
        int m = grid[0].length;

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr.add(grid[i][j]);
            }
        }

        Collections.sort(arr);

        int l = arr.size();
        int median = arr.get(l / 2);
        int result = 0;

        for (int i = 0; i < l; i++) {
            if (arr.get(i) % x != median % x) {
                return -1;
            }

            result += Math.abs(arr.get(i) - median) / x;
        }

        return result;
    }
}