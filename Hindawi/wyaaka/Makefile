#Copyright (C) 2003-2023 Abhishek Choudhary
#This file is part of the Hindawi Indic Programming System.
#
#The Hindawi Indic Programming System is free software; 
#you can redistribute it and/or modify it under the terms of the 
#GNU General Public License as published by the 
#Free Software Foundation; either version 2 of the License, or 
#(at your option) any later version.
#
#The Hindawi Indic Programming System is distributed in the hope 
#that it will be useful, but WITHOUT ANY WARRANTY; without 
#even the implied warranty of MERCHANTABILITY or FITNESS FOR 
#A PARTICULAR PURPOSE. See the GNU General Public License for 
#more details.
#
#You should have received a copy of the GNU General Public
#License along with this file; see the file COPYING. If
#not, write to the Free Software Foundation,
#51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
#
#Modifications: (Please maintain in reverse chronological order)
#
#  dd-mmm-yyyy, Nature of change,
#                 Changed by <alias>,
#                 email@server.tld
#
#  31-Jul-2006, Created makefile, Ver. 0.2.0,
#                 Abhishek Choudhary <hi_pedler>,
#                 choudhary@indicybers.net

#Makefile for Hindawi Indic Programming System Ver. 0.2.0 - Shaili Wyaakaran

EXECDIR=/usr/bin

all:
	cat h2yacc.uhin | iconv -f utf-8 -t utf-16 | uni2acii | acii2cf > h2yacc.lex
	flex -olexyy.c -8 h2yacc.lex
	gcc -oh2yacc lexyy.c -lfl
	cat yacc2h.uhin | iconv -f utf-8 -t utf-16 | uni2acii | acii2cf > yacc2h.lex
	flex -olexyy.c -8 h2yacc.lex
	gcc -oyacc2h lexyy.c -lfl

clean_all: clean

clean:
	rm lexyy.c
	rm *.lex
	rm h2yacc
	rm yacc2h

install:
	install h2yacc $(INSTROOT)$(EXECDIR)/h2yacc
	install yacc2h $(INSTROOT)$(EXECDIR)/yacc2h
	install wyaakacc $(INSTROOT)$(EXECDIR)/wyaakacc

uninstall:
	rm $(INSTROOT)$(EXECDIR)/h2yacc
	rm $(INSTROOT)$(EXECDIR)/yacc2h
	rm $(INSTROOT)$(EXECDIR)/wyaakacc
