int compareasc(const void* const p1, const void* const p2){
    const int *const P1 = p1;
    const int *const P2 = p2;
    
    if(*P1 > *P2){
        return 1;
    }
    else if(*P2 > *P1){
        return -1;
    }
    else{
        return 0;
    }
}

int comparedesc(const void* const p1, const void* const p2){
    const int *const P1 = p1;
    const int *const P2 = p2;
    
    if(*P1 > *P2){
        return -1;
    }
    else if(*P2 > *P1){
        return 1;
    }
    else{
        return 0;
    }
}
