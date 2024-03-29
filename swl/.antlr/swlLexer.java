// Generated from /home/jkomyno/antlr4/swl/swlLexer.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class swlLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		BEGIN=1, END=2, INPUT=3, PRINT=4, WHILE=5, IF=6, THEN=7, ELSE=8, ELIF=9, 
		FOR=10, VARIABLE=11, ASSIGN=12, TO=13, DO=14, BASIC_SEPARATOR=15, EQUAL=16, 
		N_EQUAL=17, GT_EQUAL=18, LT_EQUAL=19, GT=20, LT=21, AND=22, OR=23, NOT=24, 
		ADD=25, SUB=26, MUL=27, DIV=28, RANGE=29, OPEN_ROUND_BRACKET=30, CLOSED_ROUND_BRACKET=31, 
		STRING=32, BOOL=33, ID=34, NUMBER=35, WS=36, ErrorChar=37, SINGLE_LINE_COMMENT=38, 
		MULTI_LINE_COMMENT=39;
	public static final int
		COMMENTS=2;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN", "COMMENTS"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"BEGIN", "END", "INPUT", "PRINT", "WHILE", "IF", "THEN", "ELSE", "ELIF", 
		"FOR", "VARIABLE", "ASSIGN", "TO", "DO", "BASIC_SEPARATOR", "EQUAL", "N_EQUAL", 
		"GT_EQUAL", "LT_EQUAL", "GT", "LT", "AND", "OR", "NOT", "ADD", "SUB", 
		"MUL", "DIV", "RANGE", "OPEN_ROUND_BRACKET", "CLOSED_ROUND_BRACKET", "STRING", 
		"BOOL", "ID", "NUMBER", "WS", "ErrorChar", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", 
		"STR_ESCAPE"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'begin'", "'end'", "'input'", "'print'", "'while'", "'if'", "'then'", 
		"'else'", "'elif'", "'for'", "'let'", "'be'", "'to'", "'do'", "','", "'eq'", 
		"'neq'", "'gte'", "'lte'", "'gt'", "'lt'", "'and'", "'or'", "'not'", "'add'", 
		"'sub'", "'mul'", "'div'", "'..'", "'('", "')'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "BEGIN", "END", "INPUT", "PRINT", "WHILE", "IF", "THEN", "ELSE", 
		"ELIF", "FOR", "VARIABLE", "ASSIGN", "TO", "DO", "BASIC_SEPARATOR", "EQUAL", 
		"N_EQUAL", "GT_EQUAL", "LT_EQUAL", "GT", "LT", "AND", "OR", "NOT", "ADD", 
		"SUB", "MUL", "DIV", "RANGE", "OPEN_ROUND_BRACKET", "CLOSED_ROUND_BRACKET", 
		"STRING", "BOOL", "ID", "NUMBER", "WS", "ErrorChar", "SINGLE_LINE_COMMENT", 
		"MULTI_LINE_COMMENT"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public swlLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "swlLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2)\u0112\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\3\2\3\2\3\2\3"+
		"\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5"+
		"\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3"+
		"\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\r"+
		"\3\r\3\r\3\16\3\16\3\16\3\17\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\22\3"+
		"\22\3\22\3\22\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3"+
		"\26\3\26\3\26\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3"+
		"\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\35\3\35\3"+
		"\35\3\35\3\36\3\36\3\36\3\37\3\37\3 \3 \3!\3!\3!\7!\u00cf\n!\f!\16!\u00d2"+
		"\13!\3!\3!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u00df\n\"\3#\6#\u00e2"+
		"\n#\r#\16#\u00e3\3$\6$\u00e7\n$\r$\16$\u00e8\3%\6%\u00ec\n%\r%\16%\u00ed"+
		"\3%\3%\3&\3&\3\'\3\'\7\'\u00f6\n\'\f\'\16\'\u00f9\13\'\3\'\3\'\3\'\3\'"+
		"\3(\3(\3(\3(\7(\u0103\n(\f(\16(\u0106\13(\3(\3(\3(\3(\3(\3)\3)\5)\u010f"+
		"\n)\3)\3)\4\u00f7\u0104\2*\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32"+
		"\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q\2\3\2\6\4\2$$^^\3\2"+
		"c|\3\2\62;\5\2\13\f\17\17\"\"\2\u0119\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2"+
		"\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2"+
		"\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3"+
		"\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3"+
		"\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65"+
		"\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3"+
		"\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2"+
		"\2\2O\3\2\2\2\3S\3\2\2\2\5Y\3\2\2\2\7]\3\2\2\2\tc\3\2\2\2\13i\3\2\2\2"+
		"\ro\3\2\2\2\17r\3\2\2\2\21w\3\2\2\2\23|\3\2\2\2\25\u0081\3\2\2\2\27\u0085"+
		"\3\2\2\2\31\u0089\3\2\2\2\33\u008c\3\2\2\2\35\u008f\3\2\2\2\37\u0092\3"+
		"\2\2\2!\u0094\3\2\2\2#\u0097\3\2\2\2%\u009b\3\2\2\2\'\u009f\3\2\2\2)\u00a3"+
		"\3\2\2\2+\u00a6\3\2\2\2-\u00a9\3\2\2\2/\u00ad\3\2\2\2\61\u00b0\3\2\2\2"+
		"\63\u00b4\3\2\2\2\65\u00b8\3\2\2\2\67\u00bc\3\2\2\29\u00c0\3\2\2\2;\u00c4"+
		"\3\2\2\2=\u00c7\3\2\2\2?\u00c9\3\2\2\2A\u00cb\3\2\2\2C\u00de\3\2\2\2E"+
		"\u00e1\3\2\2\2G\u00e6\3\2\2\2I\u00eb\3\2\2\2K\u00f1\3\2\2\2M\u00f3\3\2"+
		"\2\2O\u00fe\3\2\2\2Q\u010c\3\2\2\2ST\7d\2\2TU\7g\2\2UV\7i\2\2VW\7k\2\2"+
		"WX\7p\2\2X\4\3\2\2\2YZ\7g\2\2Z[\7p\2\2[\\\7f\2\2\\\6\3\2\2\2]^\7k\2\2"+
		"^_\7p\2\2_`\7r\2\2`a\7w\2\2ab\7v\2\2b\b\3\2\2\2cd\7r\2\2de\7t\2\2ef\7"+
		"k\2\2fg\7p\2\2gh\7v\2\2h\n\3\2\2\2ij\7y\2\2jk\7j\2\2kl\7k\2\2lm\7n\2\2"+
		"mn\7g\2\2n\f\3\2\2\2op\7k\2\2pq\7h\2\2q\16\3\2\2\2rs\7v\2\2st\7j\2\2t"+
		"u\7g\2\2uv\7p\2\2v\20\3\2\2\2wx\7g\2\2xy\7n\2\2yz\7u\2\2z{\7g\2\2{\22"+
		"\3\2\2\2|}\7g\2\2}~\7n\2\2~\177\7k\2\2\177\u0080\7h\2\2\u0080\24\3\2\2"+
		"\2\u0081\u0082\7h\2\2\u0082\u0083\7q\2\2\u0083\u0084\7t\2\2\u0084\26\3"+
		"\2\2\2\u0085\u0086\7n\2\2\u0086\u0087\7g\2\2\u0087\u0088\7v\2\2\u0088"+
		"\30\3\2\2\2\u0089\u008a\7d\2\2\u008a\u008b\7g\2\2\u008b\32\3\2\2\2\u008c"+
		"\u008d\7v\2\2\u008d\u008e\7q\2\2\u008e\34\3\2\2\2\u008f\u0090\7f\2\2\u0090"+
		"\u0091\7q\2\2\u0091\36\3\2\2\2\u0092\u0093\7.\2\2\u0093 \3\2\2\2\u0094"+
		"\u0095\7g\2\2\u0095\u0096\7s\2\2\u0096\"\3\2\2\2\u0097\u0098\7p\2\2\u0098"+
		"\u0099\7g\2\2\u0099\u009a\7s\2\2\u009a$\3\2\2\2\u009b\u009c\7i\2\2\u009c"+
		"\u009d\7v\2\2\u009d\u009e\7g\2\2\u009e&\3\2\2\2\u009f\u00a0\7n\2\2\u00a0"+
		"\u00a1\7v\2\2\u00a1\u00a2\7g\2\2\u00a2(\3\2\2\2\u00a3\u00a4\7i\2\2\u00a4"+
		"\u00a5\7v\2\2\u00a5*\3\2\2\2\u00a6\u00a7\7n\2\2\u00a7\u00a8\7v\2\2\u00a8"+
		",\3\2\2\2\u00a9\u00aa\7c\2\2\u00aa\u00ab\7p\2\2\u00ab\u00ac\7f\2\2\u00ac"+
		".\3\2\2\2\u00ad\u00ae\7q\2\2\u00ae\u00af\7t\2\2\u00af\60\3\2\2\2\u00b0"+
		"\u00b1\7p\2\2\u00b1\u00b2\7q\2\2\u00b2\u00b3\7v\2\2\u00b3\62\3\2\2\2\u00b4"+
		"\u00b5\7c\2\2\u00b5\u00b6\7f\2\2\u00b6\u00b7\7f\2\2\u00b7\64\3\2\2\2\u00b8"+
		"\u00b9\7u\2\2\u00b9\u00ba\7w\2\2\u00ba\u00bb\7d\2\2\u00bb\66\3\2\2\2\u00bc"+
		"\u00bd\7o\2\2\u00bd\u00be\7w\2\2\u00be\u00bf\7n\2\2\u00bf8\3\2\2\2\u00c0"+
		"\u00c1\7f\2\2\u00c1\u00c2\7k\2\2\u00c2\u00c3\7x\2\2\u00c3:\3\2\2\2\u00c4"+
		"\u00c5\7\60\2\2\u00c5\u00c6\7\60\2\2\u00c6<\3\2\2\2\u00c7\u00c8\7*\2\2"+
		"\u00c8>\3\2\2\2\u00c9\u00ca\7+\2\2\u00ca@\3\2\2\2\u00cb\u00d0\7$\2\2\u00cc"+
		"\u00cf\5Q)\2\u00cd\u00cf\n\2\2\2\u00ce\u00cc\3\2\2\2\u00ce\u00cd\3\2\2"+
		"\2\u00cf\u00d2\3\2\2\2\u00d0\u00ce\3\2\2\2\u00d0\u00d1\3\2\2\2\u00d1\u00d3"+
		"\3\2\2\2\u00d2\u00d0\3\2\2\2\u00d3\u00d4\7$\2\2\u00d4B\3\2\2\2\u00d5\u00d6"+
		"\7v\2\2\u00d6\u00d7\7t\2\2\u00d7\u00d8\7w\2\2\u00d8\u00df\7g\2\2\u00d9"+
		"\u00da\7h\2\2\u00da\u00db\7c\2\2\u00db\u00dc\7n\2\2\u00dc\u00dd\7u\2\2"+
		"\u00dd\u00df\7g\2\2\u00de\u00d5\3\2\2\2\u00de\u00d9\3\2\2\2\u00dfD\3\2"+
		"\2\2\u00e0\u00e2\t\3\2\2\u00e1\u00e0\3\2\2\2\u00e2\u00e3\3\2\2\2\u00e3"+
		"\u00e1\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4F\3\2\2\2\u00e5\u00e7\t\4\2\2"+
		"\u00e6\u00e5\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e8\u00e9"+
		"\3\2\2\2\u00e9H\3\2\2\2\u00ea\u00ec\t\5\2\2\u00eb\u00ea\3\2\2\2\u00ec"+
		"\u00ed\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee\u00ef\3\2"+
		"\2\2\u00ef\u00f0\b%\2\2\u00f0J\3\2\2\2\u00f1\u00f2\13\2\2\2\u00f2L\3\2"+
		"\2\2\u00f3\u00f7\7%\2\2\u00f4\u00f6\13\2\2\2\u00f5\u00f4\3\2\2\2\u00f6"+
		"\u00f9\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f8\u00fa\3\2"+
		"\2\2\u00f9\u00f7\3\2\2\2\u00fa\u00fb\7\f\2\2\u00fb\u00fc\3\2\2\2\u00fc"+
		"\u00fd\b\'\3\2\u00fdN\3\2\2\2\u00fe\u00ff\7\61\2\2\u00ff\u0100\7,\2\2"+
		"\u0100\u0104\3\2\2\2\u0101\u0103\13\2\2\2\u0102\u0101\3\2\2\2\u0103\u0106"+
		"\3\2\2\2\u0104\u0105\3\2\2\2\u0104\u0102\3\2\2\2\u0105\u0107\3\2\2\2\u0106"+
		"\u0104\3\2\2\2\u0107\u0108\7,\2\2\u0108\u0109\7\61\2\2\u0109\u010a\3\2"+
		"\2\2\u010a\u010b\b(\3\2\u010bP\3\2\2\2\u010c\u010e\7^\2\2\u010d\u010f"+
		"\7\17\2\2\u010e\u010d\3\2\2\2\u010e\u010f\3\2\2\2\u010f\u0110\3\2\2\2"+
		"\u0110\u0111\7\f\2\2\u0111R\3\2\2\2\f\2\u00ce\u00d0\u00de\u00e3\u00e8"+
		"\u00ed\u00f7\u0104\u010e\4\b\2\2\2\4\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}