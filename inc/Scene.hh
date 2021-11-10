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

  /*!
   *\brief Lista obiektów sceny.
   *
   *Lista wskaźników dzielonych dla obiektów sceny.
   *
   */
  std::list<std::shared_ptr> ObjectList;

public:

  /*!
   *\brief Znajdowanie obiektu sceny.
   *
   *Przeszukuje listę wskaźników w celu znaleniecia konkretnego obiektu.
   *
   *\param[in] sName - nazwa szukanego obiektu.
   */
  MobileObj* FindMobileObj(const char *sName);

  /*!
   *\brief Dodawanie obiektu sceny.
   *
   *Dodaje nowy element do listy elementów.
   *
   *\param[in] pMobObj - wskaźnik nowego obiektu sceny.
   */
  void AddMobileObj(MobileObj *pMobObj);
};

#endif
