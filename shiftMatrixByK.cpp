import java.io.*;
import java.util.*;
public class GFG {
    static void shiftMatrixByK(int [][]a,int n,int m, int k)
    {
        if (k > n) {
            System.out.print(-1);
            return;
        }

        int j = 0;
        while (j < n) {

            for (int i = k; i < n; i++)
                System.out.print(mat[j][i] + " ");
            for (int i = 0; i < k; i++)
                System.out.print(mat[j][i] + " ");

            System.out.println();
            j++;
        }
    }

    public static void main(String args[])
    {
        Scanner kb=new Scanner(System.in);
        int n=kb.nextInt();
        int m=kb.nextInt();
        int k=kb.nextInt();
        int [][]arr = new int [n][m]
                for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                       arr[i][j]=kb.nextInt();
                    }
                }

        shiftMatrixByK(a,n,m, k);
    }
}
