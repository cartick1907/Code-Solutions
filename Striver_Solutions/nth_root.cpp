double findNthRootOfM(int n, int m) {
	// Write your code here.
    double l=1;
    double r=m;
    double lim=1/1e8;
    while((r-l)>lim){
        double mid=(l+r)/2.0;
        //cout<<pow(mid,n)<<endl;
        if(pow(mid,n)==m){
            return mid;
        }
        else if(pow(mid,n)>m)
            r=mid;
        else
            l=mid;
    }
    return l;
}