import java.util.*;
import java.lang.*;
import java.io.*;

class FirstUniqueElementArray
{
    static Map<Integer, Integer> countElements(int a[]) {
        Map<Integer, Integer> count = new HashMap<>();
        int n = a.length;
        for (int i = 0; i < n;i += 1) {
            if (count.containsKey(a[i])) {
                count.put(a[i], count.get(a[i]) + 1);
            }
            else {
                count.put(a[i], 1);
            }
        }
        return(count);
    }
    static int findFirstUnique(int a[]) {
        Map<Integer, Integer> count = countElements(a);
        for(Map.Entry<Integer, Integer> x : count.entrySet()) {
            if (x.getValue() == 1) {
                return(x.getKey());
            }
        }
        return(-1);
    }
	public static void main (String[] args) throws IOException
	{
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String line[] = in.readLine().trim().split(" ");
		int n = line.length;
		int a[] = new int[n];
		int i;
		for(i = 0;i < n; i += 1) {
		    a[i] = Integer.parseInt(line[i]);
		}
		System.out.println(findFirstUnique(a));
	}
}
