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
	// This is fine to display the result of the function
        cout<<x<<endl;
	// But you should always return the value at the bottom of the function
	      return x;
	// This makes it so that when you call the function later, you can setup
	// something like this
	// int placeholder = wordDistance("someword","someotherword")
	// and the result of the function will be stored in the placeholder variable
	// OR, it can be a part of an if function like this
	// if (wordDistance("someword","someotherword")==0){//stuff}
}
