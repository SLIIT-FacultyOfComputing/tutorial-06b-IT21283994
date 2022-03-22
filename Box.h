class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setWidth(width w);
       void setLength(length l);
       void setHeight(height h);
       int getWidth();
       int getLength();
       int getHeight(); 

       int calcVolume();
};
