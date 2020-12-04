public int[] kLargestEle(int a[], int n) {
		PriorityQueue<Integer> maxHeap = new PriorityQueue<Integer>(Collections.reverseOrder());
		for (int i = 0; i < n; i += 1) {
			maxHeap.add(a[i]);
		}
		int kLarge[] = new int[k];
		Object[] maxHeapArr = maxHeap.toArray();
		for (int i = 0; i < k; i += 1) {
			kLarge[i] = maxHeapArr[i];
		}
		return kLarge;
	}
