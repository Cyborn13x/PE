import java.util.*;

public class PE32 {
	static boolean isPandigital(String s) {
		int[] a = new int[10];
		if(s.length() != 9) return false;
		for(int i = 0; i < 9; i++) a[s.charAt(i)-48]++;
		for(int i = 1; i < 10; i++) if(a[i]!=1) return false;
		return true;
	}
	public static void main(String[] args) {
		Set<Integer> S = new HashSet<Integer>();
		for(int i = 1; i < 2000; i++) {
			for(int j = 1; j < i; j++) {
				int p = i * j;
				if(isPandigital(Integer.toString(i)+Integer.toString(j)+Integer.toString(p))) {
					S.add(p);
				}
			}
		}
		int sum = 0;
		for(Integer i : S) {
			sum += i;
		}
		System.out.println(sum);
	}
}