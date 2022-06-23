long long int squareINT(long long int N){
    long long int ans=-1;
    int s = 0 ; int e = N ;
   while(s <= e){
      long long int mid = s + (e-s )/2 ;
      long long int square = mid*mid ;
      if (square==N){
          return mid;
      }
      else if (square < N ){
          ans = mid;
          s = mid + 1;
      }
      else {
          e = mid-1;
      }
  }
    return ans;
}

double squareRoot(long long n, int d)  
{	int tempsol = squareINT(n);
    double factor = 1;
	double ans = tempsol;
    for(int i = 0 ; i < d; i++){
        factor= factor/10 ;
        for(double j = ans ; j * j < n ; j+=factor)
        ans = j ;
    }
        return ans ;
         
}