public String pairWithGivenSum(int arr[], int sum, int n) {
		HashSet<Integer> arrSet = new HashSet<Integer>();
		for (int i = 0; i < n; i += 1) {
			arrSet.add(arr[i]);
		}
		for (int i = 0; i < n; i += 1) {
			int tar = sum - arr[i];
			if (arrSum.contains(tar)) {
				return arr[i] + " " + tar;
			}
		}
		return "-1";
	}
