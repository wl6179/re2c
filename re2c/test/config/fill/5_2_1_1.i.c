/* Generated by re2c */
/* autogen */
// re2c:define:YYFILL = "{ YYFILL (need); }";
// re2c:define:YYFILL@len = @@;


{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) { YYFILL (need); }(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
	{ def }
yy4:
	++YYCURSOR;
	{ code }
}

