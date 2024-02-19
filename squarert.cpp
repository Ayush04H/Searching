 #include<bits/stdc++.h>
 using namespace std;
 long long int intsqrt(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }


int floorSqrt(int n)
{
    intsqrt(n);
}
double sqrtprecision(int n,int p,int tempsol){
    double fc=1;
    double ans=tempsol;
    for(int i=0;i<p;i++){
        fc=fc/10;
        for(double j=ans;j*j<n;j=j+fc){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value to be squar rooted"<<endl;
    cin>>n;
    int tempsol=floorSqrt(n);
    cout<<"The square root of the number will be "<<sqrtprecision(n,3,tempsol)<<"\n";
}
