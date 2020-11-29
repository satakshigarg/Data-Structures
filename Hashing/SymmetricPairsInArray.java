import java.io.*;
import java.util.*;

class Solution {
    static InputStreamReader read = new InputStreamReader(System.in);
    static BufferedReader in = new BufferedReader(read);

    static String input() throws IOException {
        return (in.readLine());
    }

    static int[] list(int n, String[] arr) {
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = Int(arr[i]);
        }
        return res;
    }

    static double[] listD(int n, String[] arr) {
        double[] res = new double[n];
        for (int i = 0; i < n; i++) {
            res[i] = Double(arr[i]);
        }
        return res;
    }


    static int count(int[] A, int size, int key) {
        int m, right = 0, left = 0;
        int r, l;
        r = size;
        l = 0;
        while (r - l > 1) {
            m = l + (r - l) / 2;
            if (A[m] <= key)
                l = m;
            else
                r = m;
        }
        right = l;
        r = size - 1;
        l = -1;
        while (r - l > 1) {
            m = l + (r - l) / 2;
            if (A[m] >= key)
                r = m;
            else
                l = m;
        }
        left = r;
        return (A[left] == key && key == A[right]) ? (right - left + 1) : 0;
    }

    static String str(int n) {
        return (Integer.toString(n));
    }

    static int Int(String str) {
        return (Integer.parseInt(str));
    }

    static double Double(String str) {
        return (Double.parseDouble(str));
    }

    static void println(String str) {
        System.out.println(str);
    }

    static void print(String str) {
        System.out.print(str);
    }

    static boolean isPrime(int n) {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    static boolean isEven(int n) {
        if (n % 2 == 1) {
            return false;
        }
        return true;
    }
    
    static String findSymPair(int arr[][], int size) {
        HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
        String symPairs = "";
        for (int i = 0; i < size; i += 1) {
            int first = arr[i][0];
            int sec = arr[i][1];
            Integer val = hm.get(sec);
            if (val != null && val == first) {
                symPairs += "{" + str(first) + ", " + str(sec) + "}";
                symPairs += "{" + str(sec) + ", " + str(first) + "}";
            }
            else {
                hm.put(first, sec);
            }
        }
        return(symPairs);
    }

    public static void main(String[] args) throws IOException {
        int size = Int(input());
        int arr[][] = new int[size][2];
        for(int i = 0; i < size; i += 1) {
            arr[i][0] = Int(input());
            arr[i][1] = Int(input());
        }
        System.out.println(findSymPair(arr, size));
        
    }
}
