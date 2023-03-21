/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/Parser.y"

    #include "../include/ast.hpp"

	#include <cassert>

	// rename expression later
    extern const Block *g_root;


    int yylex(void);
    void yyerror(const char *);

#line 62 "src/Parser.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SIZEOF = 258,                  /* SIZEOF  */
    PTR_OP = 259,                  /* PTR_OP  */
    INC_OP = 260,                  /* INC_OP  */
    DEC_OP = 261,                  /* DEC_OP  */
    LEFT_OP = 262,                 /* LEFT_OP  */
    RIGHT_OP = 263,                /* RIGHT_OP  */
    LE_OP = 264,                   /* LE_OP  */
    GE_OP = 265,                   /* GE_OP  */
    EQ_OP = 266,                   /* EQ_OP  */
    NE_OP = 267,                   /* NE_OP  */
    AND_OP = 268,                  /* AND_OP  */
    OR_OP = 269,                   /* OR_OP  */
    LEFT_ASSIGN = 270,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 271,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 272,              /* AND_ASSIGN  */
    XOR_ASSIGN = 273,              /* XOR_ASSIGN  */
    OR_ASSIGN = 274,               /* OR_ASSIGN  */
    TYPEDEF = 275,                 /* TYPEDEF  */
    EXTERN = 276,                  /* EXTERN  */
    STATIC = 277,                  /* STATIC  */
    AUTO = 278,                    /* AUTO  */
    REGISTER = 279,                /* REGISTER  */
    CONST = 280,                   /* CONST  */
    VOLATILE = 281,                /* VOLATILE  */
    STRUCT = 282,                  /* STRUCT  */
    UNION = 283,                   /* UNION  */
    ENUM = 284,                    /* ENUM  */
    ELLIPSIS = 285,                /* ELLIPSIS  */
    CASE = 286,                    /* CASE  */
    DEFAULT = 287,                 /* DEFAULT  */
    IF = 288,                      /* IF  */
    ELSE = 289,                    /* ELSE  */
    SWITCH = 290,                  /* SWITCH  */
    WHILE = 291,                   /* WHILE  */
    DO = 292,                      /* DO  */
    FOR = 293,                     /* FOR  */
    GOTO = 294,                    /* GOTO  */
    CONTINUE = 295,                /* CONTINUE  */
    BREAK = 296,                   /* BREAK  */
    MUL_ASSIGN = 297,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 298,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 299,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 300,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 301,              /* SUB_ASSIGN  */
    IDENTIFIER = 302,              /* IDENTIFIER  */
    CONSTANT = 303,                /* CONSTANT  */
    STRING_LITERAL = 304,          /* STRING_LITERAL  */
    CHAR = 305,                    /* CHAR  */
    SHORT = 306,                   /* SHORT  */
    INT = 307,                     /* INT  */
    LONG = 308,                    /* LONG  */
    SIGNED = 309,                  /* SIGNED  */
    UNSIGNED = 310,                /* UNSIGNED  */
    FLOAT = 311,                   /* FLOAT  */
    DOUBLE = 312,                  /* DOUBLE  */
    VOID = 313,                    /* VOID  */
    TYPE_NAME = 314,               /* TYPE_NAME  */
    RETURN = 315,                  /* RETURN  */
    LOWER_THAN_ELSE = 316          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "src/Parser.y"

    /*rename pointer ^*/
	const Block *block;
	std::vector<BlockPtr> *list;
    std::string *string;

#line 147 "src/Parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */