  while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
                
            }   
            else{
                v.push_back(nums2[j])
                 j++;   
                }   
                
        }
        for(;i<m;i++){
            v.push_back(nums1[i]);
        }
        for(;j<n;j++)
            v.push_back(nums2[j]);
        
        for(int k=0;k<nums1.size();k++){
            nums1[k]=0;
            nums1.push_back(v[k]);
        }
        
        
        