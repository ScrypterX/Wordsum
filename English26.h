void subset_sum_recursive_num(std::list<int> numbers, int target, std::list<int> partial)
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
                {   if(*cit==1){
                        std::cout << "a,";
                    }
                    if(*cit==2){
                        std::cout << "b,";
                    }
                    if(*cit==3){
                        std::cout << "c,";
                    }
                    if(*cit==4){
                        std::cout << "d,";
                    }
                    if(*cit==5){
                        std::cout << "e,";
                    }
                    if(*cit==6){
                        std::cout << "f,";
                    }
                    if(*cit==7){
                        std::cout << "g,";
                    }
                    if(*cit==8){
                        std::cout << "h,";
                    }
                    if(*cit==9){
                        std::cout << "i,";
                    }
                    if(*cit==10){
                        std::cout << "j,";
                    }
                    if(*cit==11){
                        std::cout << "k,";
                    }
                    if(*cit==12){
                        std::cout << "l,";
                    }
                    if(*cit==13){
                        std::cout << "m,";
                    }
                    if(*cit==14){
                        std::cout << "n,";
                    }
                    if(*cit==15){
                        std::cout << "o,";
                    }
                    if(*cit==16){
                        std::cout << "p,";
                    }
                    if(*cit==17){
                        std::cout << "q,";
                    }
                    if(*cit==18){
                        std::cout << "r,";
                    }
                    if(*cit==19){
                        std::cout << "s,";
                    }
                    if(*cit==20){
                        std::cout << "t,";
                    }
                    if(*cit==21){
                        std::cout << "u,";
                    }
                    if(*cit==22){
                        std::cout << "v,";
                    }
                    if(*cit==23){
                        std::cout << "w,";
                    }
                    if(*cit==24){
                        std::cout << "x,";
                    }
                    if(*cit==25){
                        std::cout << "y,";
                    }
                    if(*cit==26){
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
            subset_sum_recursive_num(remaining,target,partial_rec);
        }
}
void subset_sum_num(std::list<int> numbers,int target)
{
    subset_sum_recursive_num(numbers,target,std::list<int>());
}
