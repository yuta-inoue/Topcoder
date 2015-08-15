class Time {

    public:

    string whatTime(int seconds) {
      int h,m,s;
      s = seconds % (60);
      m = ((seconds -s) % (60*60)) / 60;
      h = (seconds -s -m) / (60*60);
      return to_string(h) + ":" + to_string(m) + ":" + to_string(s);
    }
}
