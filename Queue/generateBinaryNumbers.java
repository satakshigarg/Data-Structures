public String getBinNum(int n) {
		Queue<String> bin = new LinkedList<String>();
		bin.add("0");
		for (int i = 1; i <= n; i += 1) {
			String prevBin = bin.peek();
			bin.add(prevBin + "0");
			bin.add(prevBin + "1");
		}

	}
