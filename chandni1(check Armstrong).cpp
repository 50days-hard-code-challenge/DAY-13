bool checkArmstrong(int n){
	int original=n;
	int digits=0;
	  int sum = 0;
	  int temp=n;
     while (temp != 0) {
        digits++;
        temp= temp/10;
    }
    while (n > 0) {
        int rem = n % 10;
        sum = sum + std::pow(rem, digits);
        n = n / 10;
    }
                if(sum==original){
			return true;
		}
		else{
			return false;
		}
	while(n<0){
		return false;
	}
}
