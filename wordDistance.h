using namespace std;
int wordDistance(string str1, string str2){
  int x=0;
      if(str1=="END"&&str2=="END"){
        end();
      }
      char cstr1[str1.size()];
      char cstr2[str2.size()];
        if(str1.size()!=str2.size()){
            cout<<"error, must be equal length"<<endl;
            end();
        }
        else{
        }
        str1.copy(cstr1, str1.size());
        str2.copy(cstr2, str2.size());
        for(long unsigned int i=0; i<str1.size(); i++){
          x+=abs(int(cstr1[i])-int(cstr2[i]));
        }
        cout<<x<<endl;
	      return 0;
}