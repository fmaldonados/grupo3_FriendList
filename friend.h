#ifndef Friend_H
#define Friend_H

class Friend{
  private:
	char* nombre;
	char* numero;
  public:
	Friend(char*, char*);
	void set_nombre(char*);
	void set_numero(char*);
	char* get_nombre();
	char* get_numero();
	
};



#endif
