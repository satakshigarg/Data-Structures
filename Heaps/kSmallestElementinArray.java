public int[] kSmallestEle(int a[], int n) {
		PriorityQueue<Integer> minHeap = new PriorityQueue<Integer>();
		for (int i = 0; i < n; i += 1) {
			minHeap.add(a[i]);
		}
		int kSmall[] = new int[k];
		Onject[] minHeapArr = minHeap.toArray();
		for (int i = 0; i < k; i += 1) {
			kSmall[i] = minHeapArr[i];
		}
		return kSmall;
	}
