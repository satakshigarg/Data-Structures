public void pairsSameSum(int arr[], int n) {
		HashMap<Integer, Pair<Integer, Integer>> pairSum = new HashMap<Integer, Pair<Integer, Integer>>();
		int sum = 0;
		for (int i = 0; i < n; i += 1) {
			for (int j = (i + 1); i < n; i += 1) {
				Pair<Integer, Integer> nums = new Pair<Integer, Integer>(arr[i], arr[j]);
				sum = arr[i] + arr[j];
				if (pairSum.contains(sum)) {
					System.out.println(pairSum.get(sum));
				}
				else {
			pairSum.put(sum, nums);
		}
				
			}
		}
	}
