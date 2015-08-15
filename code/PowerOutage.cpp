class PowerOutage {

    public:

    int estimateTimeOut(vector <int> fromJunction, vector <int> toJunction, vector <int> ductLength) {
      vector<int> wl(50);
      int k=fromJunction.size();
      int i,j;
      int sm=0;
      for(i=0;i<k;i++) sm+=ductLength[i];
      int ml=0;
      wl[0]=0;
      for(i=1;i<50;i++){
        for(j=0;j<k;j++){
          if(toJunction[j]==i){
            wl[i]=wl[fromJunction[j]]+ductLength[j];
            break;
          }
        }
        ml=max(ml,wl[i]);
      }
      return 2*sm-ml;
    }
};
