public boolean findSubZero(int arr, int n) {
		int sum = 0;
		HashSet<Integer> preSum = new HashSet<Integer>();
		for (int i = 0; i < n; i += 1) {
			sum += arr[i];
			if (sum == 0 || preSum.contains(sum)) {
				return true;
			}
			preSum.add(sum);
		}
		return false;
	}
