public Vector<Integer> maxToMin(Vector<Integer> v) {
		Object[] maxHeap = v.toArray();
		PriorityQueue<Integer> minHeap = new PriorityQueue<Integer>();
		for (int i = 0; i < maxHeap.length; i += 1) {
			minHeap.add(maxHeap[i]);
		}
		Vector<Integer> minHeapVec = new Vector<Integer>();
		return Collections.addAll(minHeapVect, minHeap.toArray());
	}
