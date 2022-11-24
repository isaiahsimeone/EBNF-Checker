#ifndef H_LOCATION
#define H_LOCATION

class Location {
    private:
        int row;
        int col;
    public:
        Location(int, int);
        int get_row();
        int get_col();
};

#endif /* H_LOCATION */