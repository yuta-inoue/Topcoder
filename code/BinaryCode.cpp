class BinaryCode {

    public:
    string dec(string m,int st){
      string r;
      r += '0';
      r += ('0' + st);
      for(int i=0;i<m.size();i++){
        int t = (r[i] - '0') + (r[i + 1] - '0');
        int n = (m[i] - '0') - t;
        if(n!=0&&n!=1)
          return "NONE";
        r += ('0' + n);
      }
      if(r[r.size()-1]!='0')
        return "NONE";
      return r.substr(1,m.size());
    }
    vector <string> decode(string message) {
      vector<string> r(2);
      r[0] = dec(message,0);
      r[1] = dec(message,1);
      return r;
    }
};
