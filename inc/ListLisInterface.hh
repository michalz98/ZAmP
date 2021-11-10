#ifndef LISTLISINTERFACE_HH
#define LISTLISINTERFACE_HH

#inclcude "lisInterface.hh"

class ListLisInterface: std::map<std::sting, LisInterface>{

  char * _cmdTab[];
  
public:
  ListLisInterface(){
    
  }
  
  ~ListLisInterface()
  {
    for(auto& [string, objPtr]: *this){
      delete objPtr;
  }
}

#endif
