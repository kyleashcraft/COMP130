class Time{
	public:
		Time();
		Time(int);
		Time(int, int, int);
		int getHours();
		int getMinutes();
		int getSeconds();
		void setTime(int);
		
	private: 
		int hours;
		int minutes;
		int seconds;
};
