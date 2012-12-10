//	Copyright 2012 Dmitri Pervouchine (dp@crg.eu), Lab Roderic Guigo
//	Bioinformatics and Genomics Group @ Centre for Genomic Regulation
//	Parc de Recerca Biomedica: Dr. Aiguader, 88, 08003 Barcelona
//	
//	This file is a part of the 'bamsuite' package.
//	'bamsuite' package is free software: you can redistribute it and/or modify
//	it under the terms of the GNU General Public License as published by
//	the Free Software Foundation, either version 3 of the License, or
//	(at your option) any later version.
//	
//	'bamsuite' package is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//	GNU General Public License for more details.
//	
//	You should have received a copy of the GNU General Public License
//	along with 'bamsuite' package.  If not, see <http://www.gnu.org/licenses/>.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elem {
    char character;
    int  count[2];
    struct elem* next;
    struct elem* tree;
};

typedef struct elem node_type;
 
void add_str(node_type **node, char *str, int strand);
void retrieve(node_type *node, char *pref);
int  recall_count(node_type *node, char *str, int strand);
void destroy(node_type *node);
