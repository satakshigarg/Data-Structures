import java.util.HashSet;
import java.lang.*;
import java.io.*;

class FindPairsSum
{
    static void findPairs(int a[], int sum) {
        HashSet<Integer> store = new HashSet<Integer>();
        int n = a.length;
        for (int i = 0; i < n;i += 1) {
            int addendum = sum - a[i];
            if (store.contains(addendum)) {
                System.out.println(a[i] + " " + addendum);
            }
            store.add(a[i]);
        }
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
		int sum = Integer.parseInt(in.readLine());
		findPairs(a, sum);
	}
}
