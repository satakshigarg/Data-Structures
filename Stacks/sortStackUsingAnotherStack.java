public Stack<Integer> sortStack(Stack<Integer> s) {
		Stack<Integer> sortedStack = new Stack<Integer>();
		while ( !(s.isEmpty())) {
			int topEle = s.pop();
			while (!(sortedStack.isEmpty()) && sortedStack.peek >= topEle) {
					s.push(sortedStack.pop());
			}
			sortedStack.push(topEle);
		}

	}

