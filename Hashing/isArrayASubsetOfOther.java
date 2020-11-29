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
    
    static boolean isSubset(int arr1[], int arr2[], int size1, int size2) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < size1; i += 1) {
            set.add(arr1[i]);
        }
        for (int i = 0; i < size2; i += 1) {
            if (!(set.contains(arr2[i]))) {
                return(false);
            }
        }
        return(true);
    }

    public static void main(String[] args) throws IOException {
        int size1 = Int(input());
        int arr1[] = new int[size1];
        for(int i = 0; i < size1; i += 1) {
            arr1[i] = Int(input());
        }
        int size2 = Int(input());
        int arr2[] = new int[size2];
        for(int i = 0; i < size2; i += 1) {
            arr2[i] = Int(input());
        }
        System.out.println(isSubset(arr1, arr2, size1, size2));
        
    }
}
