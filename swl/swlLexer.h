
// Generated from swlLexer.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  swlLexer : public antlr4::Lexer {
public:
  enum {
    BEGIN = 1, END = 2, INPUT = 3, PRINT = 4, WHILE = 5, IF = 6, THEN = 7, 
    ELSE = 8, ELIF = 9, FOR = 10, VARIABLE = 11, DECLARE = 12, ASSIGN = 13, 
    TO = 14, DO = 15, BASIC_SEPARATOR = 16, EQUAL = 17, N_EQUAL = 18, GT_EQUAL = 19, 
    LT_EQUAL = 20, GT = 21, LT = 22, AND = 23, OR = 24, NOT = 25, ADD = 26, 
    SUB = 27, MUL = 28, DIV = 29, RANGE = 30, OPEN_ROUND_BRACKET = 31, CLOSED_ROUND_BRACKET = 32, 
    STRING = 33, BOOL = 34, ID = 35, NUMBER = 36, WS = 37, ErrorChar = 38, 
    SINGLE_LINE_COMMENT = 39, MULTI_LINE_COMMENT = 40
  };

  enum {
    COMMENTS = 2
  };

  swlLexer(antlr4::CharStream *input);
  ~swlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

