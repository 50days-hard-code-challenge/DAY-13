bool checkArmstrong(int n){

    int power=0;

    int temp=n;

    int arm=0;

    while(temp){

        temp/=10;

        power++;

    }

    temp=n;

    while(temp){

        int t=temp%10;

        arm+=pow(t,power);

        temp/=10;

    }

    if(arm==n){

        return true;

 

    }

    else{

        return false;

    }

}
