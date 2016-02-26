#ifndef Friend_H
#define Friend_H

class Friend{
  private:
	char* nombre;
	int numero;
  public:
	Friend(char*, int);
	void set_nombre(char*);
	void set_numero(int);
	char* get_nombre();
	int get_numero();
	
};



#endif
