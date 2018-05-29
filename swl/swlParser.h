
/*
 * Developed in May 2018 @UNIPD by:
 * - Brian Federico
 * - Schiabel Alberto
 */


// Generated from swlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  swlParser : public antlr4::Parser {
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
    RuleProgram = 0, RuleStatement = 1, RuleBinaryLogicalOperator = 2, RuleUnaryLogicalOperator = 3, 
    RuleComparisonOperator = 4, RuleOpenRoundBracket = 5, RuleClosedRoundBracket = 6, 
    RuleExpression = 7, RuleNumberOrIdPartial = 8, RuleConditionalExpression = 9, 
    RulePrintArg = 10, RulePrintVariadic = 11, RuleDeclare = 12, RuleDefine = 13, 
    RuleAssign = 14, RuleInput = 15, RulePrint = 16, RuleAdd = 17, RuleSub = 18, 
    RuleMul = 19, RuleDiv = 20, RuleDoPartialStatement = 21, RuleConditionalPartialStatement = 22, 
    RuleConditionalBodyPartial = 23, RuleWhileStatement = 24, RuleElseIfPartialStatement = 25, 
    RuleElsePartialStatement = 26, RuleIfStatement = 27, RuleRangeIncrementPartial = 28, 
    RuleRange = 29, RuleForDeclaration = 30, RuleForRangeStatement = 31
  };

  swlParser(antlr4::TokenStream *input);
  ~swlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class BinaryLogicalOperatorContext;
  class UnaryLogicalOperatorContext;
  class ComparisonOperatorContext;
  class OpenRoundBracketContext;
  class ClosedRoundBracketContext;
  class ExpressionContext;
  class NumberOrIdPartialContext;
  class ConditionalExpressionContext;
  class PrintArgContext;
  class PrintVariadicContext;
  class DeclareContext;
  class DefineContext;
  class AssignContext;
  class InputContext;
  class PrintContext;
  class AddContext;
  class SubContext;
  class MulContext;
  class DivContext;
  class DoPartialStatementContext;
  class ConditionalPartialStatementContext;
  class ConditionalBodyPartialContext;
  class WhileStatementContext;
  class ElseIfPartialStatementContext;
  class ElsePartialStatementContext;
  class IfStatementContext;
  class RangeIncrementPartialContext;
  class RangeContext;
  class ForDeclarationContext;
  class ForRangeStatementContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclareContext *declare();
    DefineContext *define();
    AssignContext *assign();
    AddContext *add();
    SubContext *sub();
    MulContext *mul();
    DivContext *div();
    PrintContext *print();
    InputContext *input();
    WhileStatementContext *whileStatement();
    IfStatementContext *ifStatement();
    ForRangeStatementContext *forRangeStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  BinaryLogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    BinaryLogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinaryLogicalOperatorContext* binaryLogicalOperator();

  class  UnaryLogicalOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryLogicalOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryLogicalOperatorContext* unaryLogicalOperator();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *N_EQUAL();
    antlr4::tree::TerminalNode *GT_EQUAL();
    antlr4::tree::TerminalNode *LT_EQUAL();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  OpenRoundBracketContext : public antlr4::ParserRuleContext {
  public:
    OpenRoundBracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_ROUND_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OpenRoundBracketContext* openRoundBracket();

  class  ClosedRoundBracketContext : public antlr4::ParserRuleContext {
  public:
    ClosedRoundBracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSED_ROUND_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClosedRoundBracketContext* closedRoundBracket();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpenRoundBracketContext *openRoundBracket();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    ClosedRoundBracketContext *closedRoundBracket();
    std::vector<UnaryLogicalOperatorContext *> unaryLogicalOperator();
    UnaryLogicalOperatorContext* unaryLogicalOperator(size_t i);
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *BOOL();
    ComparisonOperatorContext *comparisonOperator();
    BinaryLogicalOperatorContext *binaryLogicalOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  NumberOrIdPartialContext : public antlr4::ParserRuleContext {
  public:
    NumberOrIdPartialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberOrIdPartialContext* numberOrIdPartial();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  PrintArgContext : public antlr4::ParserRuleContext {
  public:
    PrintArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    NumberOrIdPartialContext *numberOrIdPartial();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintArgContext* printArg();

  class  PrintVariadicContext : public antlr4::ParserRuleContext {
  public:
    PrintVariadicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_SEPARATOR();
    PrintArgContext *printArg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintVariadicContext* printVariadic();

  class  DeclareContext : public antlr4::ParserRuleContext {
  public:
    DeclareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DECLARE();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclareContext* declare();

  class  DefineContext : public antlr4::ParserRuleContext {
  public:
    DefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    NumberOrIdPartialContext *numberOrIdPartial();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineContext* define();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    NumberOrIdPartialContext *numberOrIdPartial();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignContext* assign();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputContext* input();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    PrintArgContext *printArg();
    std::vector<PrintVariadicContext *> printVariadic();
    PrintVariadicContext* printVariadic(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintContext* print();

  class  AddContext : public antlr4::ParserRuleContext {
  public:
    AddContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    NumberOrIdPartialContext *numberOrIdPartial();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddContext* add();

  class  SubContext : public antlr4::ParserRuleContext {
  public:
    SubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    NumberOrIdPartialContext *numberOrIdPartial();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubContext* sub();

  class  MulContext : public antlr4::ParserRuleContext {
  public:
    MulContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL();
    NumberOrIdPartialContext *numberOrIdPartial();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulContext* mul();

  class  DivContext : public antlr4::ParserRuleContext {
  public:
    DivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    NumberOrIdPartialContext *numberOrIdPartial();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DivContext* div();

  class  DoPartialStatementContext : public antlr4::ParserRuleContext {
  public:
    DoPartialStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoPartialStatementContext* doPartialStatement();

  class  ConditionalPartialStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalPartialStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DoPartialStatementContext *doPartialStatement();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalPartialStatementContext* conditionalPartialStatement();

  class  ConditionalBodyPartialContext : public antlr4::ParserRuleContext {
  public:
    ConditionalBodyPartialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    ConditionalPartialStatementContext *conditionalPartialStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalBodyPartialContext* conditionalBodyPartial();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ConditionalBodyPartialContext *conditionalBodyPartial();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileStatementContext* whileStatement();

  class  ElseIfPartialStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseIfPartialStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELIF();
    ConditionalBodyPartialContext *conditionalBodyPartial();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseIfPartialStatementContext* elseIfPartialStatement();

  class  ElsePartialStatementContext : public antlr4::ParserRuleContext {
  public:
    ElsePartialStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    ConditionalPartialStatementContext *conditionalPartialStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElsePartialStatementContext* elsePartialStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ConditionalBodyPartialContext *conditionalBodyPartial();
    antlr4::tree::TerminalNode *END();
    std::vector<ElseIfPartialStatementContext *> elseIfPartialStatement();
    ElseIfPartialStatementContext* elseIfPartialStatement(size_t i);
    ElsePartialStatementContext *elsePartialStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  RangeIncrementPartialContext : public antlr4::ParserRuleContext {
  public:
    RangeIncrementPartialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BASIC_SEPARATOR();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeIncrementPartialContext* rangeIncrementPartial();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NumberOrIdPartialContext *> numberOrIdPartial();
    NumberOrIdPartialContext* numberOrIdPartial(size_t i);
    antlr4::tree::TerminalNode *RANGE();
    RangeIncrementPartialContext *rangeIncrementPartial();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeContext* range();

  class  ForDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForDeclarationContext* forDeclaration();

  class  ForRangeStatementContext : public antlr4::ParserRuleContext {
  public:
    ForRangeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForDeclarationContext *forDeclaration();
    RangeContext *range();
    ConditionalPartialStatementContext *conditionalPartialStatement();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForRangeStatementContext* forRangeStatement();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

