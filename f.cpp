 if(count<=freq[input[i]])
        {
        	if(count==freq[input[i]] )  {
        		output=min(output,input[i]);
        	} else {
            count = freq[input[i]];
            output = input[i];
        }
        }