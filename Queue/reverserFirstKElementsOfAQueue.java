public void reverseFirstKItems(int k) {
		Stack<Integer> storekEle = new Stack<Integer>();
		for (int i = 0; i < k; i += 1) {
			storeKEle.push(queue.peek());
			queue.remove();
		}

		for (int i = 0; i < k; i += 1) {
			queue.add(storeKEle.peek());
			storeKEle.pop();
		}

		for (int i = 0; i < queue.size() - k; i += 1) {
			queue.add(queue.peek());
			queue.remove();
		}
	}
