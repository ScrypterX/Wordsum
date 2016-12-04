void subset_sum_recursive_eng(std::list<int> numbers, int target, std::list<int> partial)
{       
        int s = 0;
        for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
        {
            s += *cit;
        }
        if(s == target)
        {       //add code here
                std::cout << "Words[";
                for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
                {   if(*cit==6){
                        std::cout << "a,";
                    }
                    if(*cit==12){
                        std::cout << "b,";
                    }
                    if(*cit==18){
                        std::cout << "c,";
                    }
                    if(*cit==24){
                        std::cout << "d,";
                    }
                    if(*cit==30){
                        std::cout << "e,";
                    }
                    if(*cit==36){
                        std::cout << "f,";
                    }
                    if(*cit==42){
                        std::cout << "g,";
                    }
                    if(*cit==48){
                        std::cout << "h,";
                    }
                    if(*cit==54){
                        std::cout << "i,";
                    }
                    if(*cit==60){
                        std::cout << "j,";
                    }
                    if(*cit==66){
                        std::cout << "k,";
                    }
                    if(*cit==72){
                        std::cout << "l,";
                    }
                    if(*cit==78){
                        std::cout << "m,";
                    }
                    if(*cit==84){
                        std::cout << "n,";
                    }
                    if(*cit==90){
                        std::cout << "o,";
                    }
                    if(*cit==96){
                        std::cout << "p,";
                    }
                    if(*cit==102){
                        std::cout << "q,";
                    }
                    if(*cit==108){
                        std::cout << "r,";
                    }
                    if(*cit==114){
                        std::cout << "s,";
                    }
                    if(*cit==120){
                        std::cout << "t,";
                    }
                    if(*cit==126){
                        std::cout << "u,";
                    }
                    if(*cit==132){
                        std::cout << "v,";
                    }
                    if(*cit==138){
                        std::cout << "w,";
                    }
                    if(*cit==144){
                        std::cout << "x,";
                    }
                    if(*cit==150){
                        std::cout << "y,";
                    }
                    if(*cit==156){
                        std::cout << "z,";
                    }
                }
                std::cout << "] ";
                std::cout << " Sum[";

                for (std::list<int>::const_iterator cit = partial.begin(); cit != partial.end(); cit++)
                {   
                    std::cout << *cit << ",";
                }
                std::cout << "]=" << target << std::endl;
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
            subset_sum_recursive_eng(remaining,target,partial_rec);
            
        }
}

void subset_sum_eng(std::list<int> numbers,int target)
{
    subset_sum_recursive_eng(numbers,target,std::list<int>());
}
