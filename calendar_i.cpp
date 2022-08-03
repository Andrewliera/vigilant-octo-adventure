
class MyCalendar {
    
private: 
    
    map<int,int> calendar;
    
public:
    
    MyCalendar() {
            
    }
    
    bool book(int start, int end) {
    
       for( auto i = calendar.begin(); i != calendar.end(); i++){
           
           if(end <= i->first){
               calendar[start] = end;
               return true;
               
           }
           else if(start < i->second){
               return false;
           }
           
        }
        calendar[start] = end;
        return true;
    }
};
