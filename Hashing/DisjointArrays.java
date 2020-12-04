public boolean isDisjoint(int arr1[], int arr2[], int size1, int size2) {
		HashSet<Integer> superSet = new HashSet<Integer>();
		for (int i = 0; i < size1; i += 1) {
			superSet.add(arr1[i]);
		}
		for (int i = 0 ; i < size2; i += 1) {
			if (superSet.contains(arr2[i])) {
				return false;
			}
		}
		return true;
	}
