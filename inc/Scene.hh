#ifndef SCENA_HH
#define SCENE_HH


/*!
 *\file
 *\brief Zawiera definicję klasy Scena
 *
 *Plik zawiera definicje klasy scena oraz 
 *definicje metoda należących do klasy.
 */



/*!
 *Definicja klasy Scena
 */
class Scena {

public:

  MobileObj* FindMobileObj(const char *sName);
  void AddMobileObj(MobileObj *pMobObj);
};

#endif
