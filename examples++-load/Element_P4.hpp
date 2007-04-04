const int TypeOfFE_P4Lagrange::nn[15][4] =  { 
                 { 0 ,0 ,0 ,0 } ,
                 { 1 ,1 ,1 ,1 } ,
                 { 2 ,2 ,2 ,2 } ,
                 { 1 ,1 ,1 ,2 } ,
                 { 1 ,1 ,2 ,2 } ,
                 { 1 ,2 ,2 ,2 } ,
                 { 0 ,2 ,2 ,2 } ,
                 { 0 ,0 ,2 ,2 } ,
                 { 0 ,0 ,0 ,2 } ,
                 { 0 ,0 ,0 ,1 } ,
                 { 0 ,0 ,1 ,1 } ,
                 { 0 ,1 ,1 ,1 } ,
                 { 0 ,1 ,2 ,2 } ,
                 { 0 ,1 ,1 ,2 } ,
                 { 0 ,0 ,1 ,2 } }
;
const int TypeOfFE_P4Lagrange::aa[15][4] =  { 
                 { 0 ,1 ,2 ,3 } ,
                 { 0 ,1 ,2 ,3 } ,
                 { 0 ,1 ,2 ,3 } ,
                 { 0 ,1 ,2 ,0 } ,
                 { 0 ,1 ,0 ,1 } ,
                 { 0 ,0 ,1 ,2 } ,
                 { 0 ,0 ,1 ,2 } ,
                 { 0 ,1 ,0 ,1 } ,
                 { 0 ,1 ,2 ,0 } ,
                 { 0 ,1 ,2 ,0 } ,
                 { 0 ,1 ,0 ,1 } ,
                 { 0 ,0 ,1 ,2 } ,
                 { 0 ,0 ,0 ,1 } ,
                 { 0 ,0 ,1 ,0 } ,
                 { 0 ,1 ,0 ,0 } }
;
const int TypeOfFE_P4Lagrange::ff[15] =  { 24 ,24 ,24 ,6 ,4 ,6 ,6 ,4 ,6 ,6 ,4 ,6 ,2 ,2 ,2 };
const int TypeOfFE_P4Lagrange::il[15] =  { 4 ,0 ,0 ,0 ,0 ,0 ,1 ,2 ,3 ,3 ,2 ,1 ,1 ,1 ,2 };
const int TypeOfFE_P4Lagrange::jl[15] =  { 0 ,4 ,0 ,3 ,2 ,1 ,0 ,0 ,0 ,1 ,2 ,3 ,1 ,2 ,1 };
const int TypeOfFE_P4Lagrange::kl[15] =  { 0 ,0 ,4 ,1 ,2 ,3 ,3 ,2 ,1 ,0 ,0 ,0 ,2 ,1 ,1 };