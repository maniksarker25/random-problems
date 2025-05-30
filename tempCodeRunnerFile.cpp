 for(int i = 0;i<p.size();i++){
        if(p[i] != 'H' && p[i] != 'Q' && p[i] != '9' && p[i] != '+'){
            int ascivalue = p[i] +0;
            if(ascivalue < 33 || ascivalue > 126){
                isExecute = false;
                break;
            }
        }
    }