public int firstUnique(int arr[], int n) {
		HashMap<Integer, Integer> count = new HashSet<Integer, Integer>();
		for (int i = 0; i < n; i += 1) {
			if (count.containsKey(arr[i])) {
				count.put(arr[i], count.get(arr[i]) + 1);
			}
			else {
				count.put(arr[i], 1);
			}
		}
		for (int i = 0; i < n; i += 1) {
			if (count.get(arr[i]) == 1) {
				return arr[i];
			}
		}
		return -1;

	}
