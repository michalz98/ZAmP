DOCNAME=xmlinterpreter

__start__:
	doxygen ${DOCNAME}.doxy 2> doxygen.log
	echo >> doxygen.log
	echo "Nacisnij Q, aby zakonczyc przegladanie" >> doxygen.log
	less doxygen.log

#	less -P " Aby zakonczyc, nacisnij klawisz Q " doxy.log
#	@echo
	@echo " Wygenerowana dokumentacja znajduje sie w katalogu: doc/html"
	@echo


view:
	less doxygen.log

clean:
	rm -fr doc/html doxy.log
	rm -rf html latex doxygen.log

cleanall: clean
	find . -name \*~ -print -exec rm {} \;

help:
	@echo
	@echo " Dodatkowe opcje:"
	@echo
	@echo "  clean - usuwa wygenerowana dokumentacje"
	@echo "  view  - uruchamia przegladanie logu"
	@echo "  help  - wyswietla niniejsza informacje"
	@echo
