                                                                         (*O/*_/
Cu  #%* )pop mark/CuG 4 def/# 2 def%%%%@@P[TX---P\P_SXPY!Ex(mx2ex("SX!Ex4P)Ex=
CuG #%*                                                                  *+Ex=
CuG #%*------------------------------------------------------------------*+Ex=
CuG #%*   POLYGLOT - a program in eight languages      15 February 1991  *+Ex=
CuG #%*   10th Anniversary Edition                      1 December 2001  *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*   Written by Kevin Bungard, Peter Lisle, and Chris Tham          *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*   Polyglot suports the following languages:                      *+Ex=
CuG #%*     1. COBOL (ANSI)                                              *+Ex=
CuG #%*     2. Pascal (ISO)                                              *+Ex=
CuG #%*     3. Fortran (ANSI, f77)                                       *+Ex=
CuG #%*     4. C (ANSI-ish)                                              *+Ex=
CuG #%*     5. PostScript                                                *+Ex=
CuG #%*     6. Linux/Unix shell script (bash, sh, csh)                   *+Ex=
CuG #%*     7. x86 machine language (MS-DOS, Win32, Linux)               *+Ex=
CuG #%*     8. Perl (version 5)                                          *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*   Usage:                                                         *+Ex=
CuG #%*     1. Rename this file to polyglot.[cob|pas|f77|c|ps|sh|com|pl] *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*     2. Compile and run with your favorite compiler and operating *+Ex=
CuG #%*        system.                                                   *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*   Notes:                                                         *+Ex=
CuG #%*     1. We have attempted to use only standard language features. *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*     2. Without the -traditional flag gcc will issue a warning.   *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*     3. When transferring from Unix to DOS make sure that a LF    *+Ex=
CuG #%*        is correctly translated into a CR/LF.                     *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*     4. Keep the blank lines at the start of the program. They    *+Ex=
CuG #%*        are important.                                            *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*     5. This text is a comment block in all eight languages.      *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*   Please mail any comments, corrections or additions to          *+Ex=
CuG #%*   polyglot@ideology.com.au                                       *+Ex=
CuG #%*                                                                  *+Ex=
CuG #%*------------------------------------------------------------------*QuZ=
CuG #%*                                                                  *+Ex=
CuG #%*!Mx)ExQX5ZZ5SSP5n*5X!)Ex+ExPQXH,B+ExP[-9A-9B(g?(gA'UTTER_XYZZXX!X *+
CuG #(*                                                                  *(
C   # */);                                                              /*(
C   # *)  program        polyglot (output);                             (*+
C   #     identification division.
C   #     program-id.    polyglot.
C   #
C   #     data           division.
C   #     procedure      division.
C   #
C   # * ))cleartomark   /Bookman-Demi findfont 36 scalefont setfont     (
C   # *                                                                 (
C   #
C   # *                  hello polyglots$
C   #     main.
C   #         perform
C  /# * ) 2>_$$; echo   "hello polyglots"; rm _$$; exit;
C   # * (
C   #
C     *0 ) unless print "hello polyglots\n"; __END__
              print
C             stop run.
     -*,                'hello polyglots'
C
C         print.
C             display   "hello polyglots".                              (
C     */  int i;                                                        /*
C     */  main () {                                                     /*
C     */      i=printf ("hello polyglots\n"); O= &i; return *O;         /*
C     *)                                                                (*
C     *)  begin                                                         (*
C     *)      writeln  ('hello polyglots');                             (*
C     *)                                                                (* )
C     * ) pop 60 360                                                    (
C     * ) pop moveto    (hello polyglots) show                          (
C     * ) pop showpage                                                  ((
C     *)
           end                                                          .(* )
C)pop%     program       polyglot.                                      *){*/}
