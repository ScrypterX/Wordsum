#include <vector>
void subset_sum_recursive_pi7(std::list<int> numbers, int target, std::list<int> partial)
{       
        int s = 0;
        for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
        {
            s += *cit;
        }
        // std::vector<std::string> numbersList;
        if(s == target)
        {       //add code here
                std::cout << "Words[";
                
                for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
                {   if(*cit==1){
                    // numbersList.push_back("amnz,");
                        std::cout << "amnz,";
                    }
                    if(*cit==2){
                        // numbersList.push_back("bloy,");
                        std::cout << "bloy,";
                    }
                    if(*cit==3){
                        std::cout << "ckpx,";
                    }
                    if(*cit==4){
                        std::cout << "djqw,";
                    }
                    if(*cit==5){
                        std::cout << "eirv,";
                    }
                    if(*cit==6){
                        std::cout << "fhsu,";
                    }
                    if(*cit==7){
                        std::cout << "gt,";
                    }
                }
                std::cout << "] ";
                std::cout << " Sum[";

                for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
                {   
                    std::cout << *cit << ",";
                }
                std::cout << "]=" << target << std::endl;
                // std::cout << "]=" << target << std::endl;
                // for (int i=0;i<numbersList.size();i++)
                //      std::cout << numbersList[i] << std::endl;
                // }
                // std::cout << numbersList[1];
        }
        if(s >= target)
            return;
        int n;
        for (std::list<int>::const_iterator ai = numbers.begin(); ai != numbers.end(); ai++)
        {
            n = *ai;
            std::list<int> remaining;
            for(std::list<int>::const_iterator aj = ai; aj != numbers.end(); aj++)
            {
                if(aj == ai)continue;
                remaining.push_back(*aj);
            }
            std::list<int> partial_rec=partial;
            partial_rec.push_back(n);
            subset_sum_recursive_pi7(remaining,target,partial_rec);
        }
    
}
void subset_sum_pi7(std::list<int> numbers,int target)
{
    subset_sum_recursive_pi7(numbers,target,std::list<int>());
}
