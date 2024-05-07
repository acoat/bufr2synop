/***************************************************************************
 *   Copyright (C) 2013-2022 by Guillermo Ballester Valor                  *
 *   gbv@ogimet.com                                                        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
/*!
 \file bufrtotac.h
 \brief Include header file for binary bufrtotac
*/
#include "bufrdeco.h"
#include "bufr2tac.h"

/*! \def ERR_SIZE
 *  \brief Size (in bytes) of error strings 
 */
#define ERR_SIZE (512U)

extern struct bufrdeco BUFR;
extern struct bufrdeco_subset_sequence_data SEQ;
extern struct bufrdeco_compressed_data_references REF;
extern struct metreport REPORT;
extern struct bufr2tac_subset_state STATE;
extern struct bufr2tac_error_stack ERRS;

extern const char SELF[];
extern char ERR[ERR_SIZE];
extern char INPUTFILE[BUFRDECO_PATH_LENGTH];
extern char OUTPUTFILE[BUFRDECO_PATH_LENGTH];
extern char BUFR_XFILE[BUFRDECO_PATH_LENGTH];
extern char OFFSETFILE[BUFRDECO_PATH_LENGTH + 8]; 
extern char BUFRTABLES_DIR[BUFRDECO_PATH_LENGTH];
extern char LISTOFFILES[BUFRDECO_PATH_LENGTH];
extern int NFILES;
extern int SUBSET;
extern int GTS_HEADER;
extern int XML;
extern int JSON;
extern int CSV;
extern int EXTRACT;
extern int DEBUG;
extern int VERBOSE;
extern int SHOW_SEQUENCE;
extern int HTML;
extern int NOTAC;
extern int PRINT_WIGOS_ID;
extern int PRINT_GEO;
extern int FIRST_SUBSET, LAST_SUBSET;
extern int READ_OFFSETS;
extern int WRITE_OFFSETS;
extern int USE_CACHE;
extern int PRINT_JSON_DATA;
extern int PRINT_JSON_SEC0;
extern int PRINT_JSON_SEC1;
extern int PRINT_JSON_SEC2;
extern int PRINT_JSON_SEC3;
extern int PRINT_JSON_EXPANDED_TREE;
extern FILE *FL;
extern FILE *OUT;

// functions
void bufrtotac_print_version( void );
void bufrtotac_print_usage ( void );
int bufrtotac_set_bufrdeco_bitmask (struct bufrdeco *b);
int bufrtotac_read_args ( int _argc, char * _argv[] );
char * get_bufrfile_path ( char *filename, char *fileoffset, char *err );
int bufrtotac_parse_subset_sequence ( struct metreport *m, struct bufr2tac_subset_state *st, struct bufrdeco *b,
                                     char *err );
