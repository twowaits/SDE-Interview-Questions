```Java

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

class TestClass {
    static int map[][], ans=0,n,m,r,c,l;
    static boolean compat(int x,int y,int i,int j)
    {if(x==i&&y==j)return true;
     //System.out.println(ans+" "+x+" "+y+" "+i+" "+j+" ");
        if(map[x][y]==1)
        {
            if((i==x-1&&j==y)||(i==x&&j==y-1)||(i==x+1&&j==y)||(i==x&&j==y+1))return true;
            else return false;
        }
    else if(map[x][y]==2)
    {
        if((i==x+1&&j==y)||(i==x-1&&j==y))return true;
        return false;
        
    }
    else if(map[x][y]==3)
    {
        if((i==x&&j==y-1)||(i==x&&j==y+1))return true;
        return false;
        
    }
        else if(map[x][y]==4)
    {
        if((i==x-1&&j==y)||(i==x&&j==y+1))return true;
        return false;
        
    }
        else if(map[x][y]==5)
    {
        if((i==x+1&&j==y)||(i==x&&j==y+1))return true;
        return false;
        
    }
        else if(map[x][y]==6)
    {
        if((i==x+1&&j==y)||(i==x&&j==y-1))return true;
        return false;
        
    }
        else if(map[x][y]==7)
    {
        if((i==x&&j==y-1)||(i==x-1&&j==y))return true;
        return false;
        
    }




return false;
        
        
    }
    static boolean cmap[][];
    public static void main(String args[] ) throws Exception {
        Scanner s = new Scanner(System.in);
        int t=s.nextInt();
        while((--t)>=0)
        {n = s.nextInt();
        m =s.nextInt();
        r =s.nextInt();
         c =s.nextInt();
        l =s.nextInt();
        
        
map=new int[n][m];
cmap=new boolean[n][m];
        for (int i = 0; i <n; i++) 
            for(int j=0;j<m;j++)
            map[i][j]=s.nextInt();
    ans=0;    
    solve(r,c,r,c,l);
    System.out.println(ans);
    }
    }
    static void solve(int i,int j,int px,int py,int len)
    {if(len<=0)return ;
        if(i<0||i>=n||j<0||j>=m)return ;
        if(map[i][j]==0)return ;
        
        if(!compat(i,j,px,py))return ;
        if(cmap[i][j]){}
        else ans++;
        cmap[i][j]=true;
       
        if(map[i][j]==1)
        {solve(i-1,j,i,j,len-1);
            solve(i,j-1,i,j,len-1);
            solve(i+1,j,i,j,len-1);
            solve(i,j+1,i,j,len-1);
        }
        else if(map[i][j]==2)
        {solve(i-1,j,i,j,len-1);
            solve(i+1,j,i,j,len-1);
        }
        else if(map[i][j]==3)
        {solve(i,j+1,i,j,len-1);
            solve(i,j-1,i,j,len-1);
        }
        else if(map[i][j]==4)
        {
            
            solve(i,j+1,i,j,len-1);
            solve(i-1,j,i,j,len-1);
        }
    else if(map[i][j]==5)
        {
            
            solve(i,j+1,i,j,len-1);
            solve(i+1,j,i,j,len-1);
        }
        else if(map[i][j]==6)
        {
            
            solve(i,j-1,i,j,len-1);
            solve(i+1,j,i,j,len-1);
        }
        else if(map[i][j]==7)
        {
            
            solve(i,j-1,i,j,len-1);
            solve(i-1,j,i,j,len-1);
        }
    }
    

}
```
