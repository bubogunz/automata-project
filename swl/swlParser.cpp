
/*
 * Developed in May 2018 @UNIPD by:
 * - Brian Federico
 * - Schiabel Alberto
 */


// Generated from swlParser.g4 by ANTLR 4.7.1


#include "swlParserListener.h"

#include "swlParser.h"


using namespace antlrcpp;
using namespace antlr4;

swlParser::swlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

swlParser::~swlParser() {
  delete _interpreter;
}

std::string swlParser::getGrammarFileName() const {
  return "swlParser.g4";
}

const std::vector<std::string>& swlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& swlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

swlParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::ProgramContext::BEGIN() {
  return getToken(swlParser::BEGIN, 0);
}

tree::TerminalNode* swlParser::ProgramContext::END() {
  return getToken(swlParser::END, 0);
}

std::vector<swlParser::StatementContext *> swlParser::ProgramContext::statement() {
  return getRuleContexts<swlParser::StatementContext>();
}

swlParser::StatementContext* swlParser::ProgramContext::statement(size_t i) {
  return getRuleContext<swlParser::StatementContext>(i);
}


size_t swlParser::ProgramContext::getRuleIndex() const {
  return swlParser::RuleProgram;
}

void swlParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void swlParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

swlParser::ProgramContext* swlParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, swlParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(swlParser::BEGIN);
    setState(66); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(65);
      statement();
      setState(68); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << swlParser::INPUT)
      | (1ULL << swlParser::PRINT)
      | (1ULL << swlParser::WHILE)
      | (1ULL << swlParser::IF)
      | (1ULL << swlParser::FOR)
      | (1ULL << swlParser::VARIABLE)
      | (1ULL << swlParser::DECLARE)
      | (1ULL << swlParser::ADD)
      | (1ULL << swlParser::SUB)
      | (1ULL << swlParser::MUL)
      | (1ULL << swlParser::DIV)
      | (1ULL << swlParser::ID))) != 0));
    setState(70);
    match(swlParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

swlParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::DeclareContext* swlParser::StatementContext::declare() {
  return getRuleContext<swlParser::DeclareContext>(0);
}

swlParser::DefineContext* swlParser::StatementContext::define() {
  return getRuleContext<swlParser::DefineContext>(0);
}

swlParser::AssignContext* swlParser::StatementContext::assign() {
  return getRuleContext<swlParser::AssignContext>(0);
}

swlParser::AddContext* swlParser::StatementContext::add() {
  return getRuleContext<swlParser::AddContext>(0);
}

swlParser::SubContext* swlParser::StatementContext::sub() {
  return getRuleContext<swlParser::SubContext>(0);
}

swlParser::MulContext* swlParser::StatementContext::mul() {
  return getRuleContext<swlParser::MulContext>(0);
}

swlParser::DivContext* swlParser::StatementContext::div() {
  return getRuleContext<swlParser::DivContext>(0);
}

swlParser::PrintContext* swlParser::StatementContext::print() {
  return getRuleContext<swlParser::PrintContext>(0);
}

swlParser::InputContext* swlParser::StatementContext::input() {
  return getRuleContext<swlParser::InputContext>(0);
}

swlParser::WhileStatementContext* swlParser::StatementContext::whileStatement() {
  return getRuleContext<swlParser::WhileStatementContext>(0);
}

swlParser::IfStatementContext* swlParser::StatementContext::ifStatement() {
  return getRuleContext<swlParser::IfStatementContext>(0);
}

swlParser::ForRangeStatementContext* swlParser::StatementContext::forRangeStatement() {
  return getRuleContext<swlParser::ForRangeStatementContext>(0);
}


size_t swlParser::StatementContext::getRuleIndex() const {
  return swlParser::RuleStatement;
}

void swlParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void swlParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

swlParser::StatementContext* swlParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, swlParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::DECLARE: {
        enterOuterAlt(_localctx, 1);
        setState(72);
        declare();
        break;
      }

      case swlParser::VARIABLE: {
        enterOuterAlt(_localctx, 2);
        setState(73);
        define();
        break;
      }

      case swlParser::ID: {
        enterOuterAlt(_localctx, 3);
        setState(74);
        assign();
        break;
      }

      case swlParser::ADD: {
        enterOuterAlt(_localctx, 4);
        setState(75);
        add();
        break;
      }

      case swlParser::SUB: {
        enterOuterAlt(_localctx, 5);
        setState(76);
        sub();
        break;
      }

      case swlParser::MUL: {
        enterOuterAlt(_localctx, 6);
        setState(77);
        mul();
        break;
      }

      case swlParser::DIV: {
        enterOuterAlt(_localctx, 7);
        setState(78);
        div();
        break;
      }

      case swlParser::PRINT: {
        enterOuterAlt(_localctx, 8);
        setState(79);
        print();
        break;
      }

      case swlParser::INPUT: {
        enterOuterAlt(_localctx, 9);
        setState(80);
        input();
        break;
      }

      case swlParser::WHILE: {
        enterOuterAlt(_localctx, 10);
        setState(81);
        whileStatement();
        break;
      }

      case swlParser::IF: {
        enterOuterAlt(_localctx, 11);
        setState(82);
        ifStatement();
        break;
      }

      case swlParser::FOR: {
        enterOuterAlt(_localctx, 12);
        setState(83);
        forRangeStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryLogicalOperatorContext ------------------------------------------------------------------

swlParser::BinaryLogicalOperatorContext::BinaryLogicalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::BinaryLogicalOperatorContext::AND() {
  return getToken(swlParser::AND, 0);
}

tree::TerminalNode* swlParser::BinaryLogicalOperatorContext::OR() {
  return getToken(swlParser::OR, 0);
}


size_t swlParser::BinaryLogicalOperatorContext::getRuleIndex() const {
  return swlParser::RuleBinaryLogicalOperator;
}

void swlParser::BinaryLogicalOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryLogicalOperator(this);
}

void swlParser::BinaryLogicalOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryLogicalOperator(this);
}

swlParser::BinaryLogicalOperatorContext* swlParser::binaryLogicalOperator() {
  BinaryLogicalOperatorContext *_localctx = _tracker.createInstance<BinaryLogicalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 4, swlParser::RuleBinaryLogicalOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _la = _input->LA(1);
    if (!(_la == swlParser::AND

    || _la == swlParser::OR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryLogicalOperatorContext ------------------------------------------------------------------

swlParser::UnaryLogicalOperatorContext::UnaryLogicalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::UnaryLogicalOperatorContext::NOT() {
  return getToken(swlParser::NOT, 0);
}


size_t swlParser::UnaryLogicalOperatorContext::getRuleIndex() const {
  return swlParser::RuleUnaryLogicalOperator;
}

void swlParser::UnaryLogicalOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryLogicalOperator(this);
}

void swlParser::UnaryLogicalOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryLogicalOperator(this);
}

swlParser::UnaryLogicalOperatorContext* swlParser::unaryLogicalOperator() {
  UnaryLogicalOperatorContext *_localctx = _tracker.createInstance<UnaryLogicalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 6, swlParser::RuleUnaryLogicalOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(swlParser::NOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

swlParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::ComparisonOperatorContext::EQUAL() {
  return getToken(swlParser::EQUAL, 0);
}

tree::TerminalNode* swlParser::ComparisonOperatorContext::N_EQUAL() {
  return getToken(swlParser::N_EQUAL, 0);
}

tree::TerminalNode* swlParser::ComparisonOperatorContext::GT_EQUAL() {
  return getToken(swlParser::GT_EQUAL, 0);
}

tree::TerminalNode* swlParser::ComparisonOperatorContext::LT_EQUAL() {
  return getToken(swlParser::LT_EQUAL, 0);
}

tree::TerminalNode* swlParser::ComparisonOperatorContext::GT() {
  return getToken(swlParser::GT, 0);
}

tree::TerminalNode* swlParser::ComparisonOperatorContext::LT() {
  return getToken(swlParser::LT, 0);
}


size_t swlParser::ComparisonOperatorContext::getRuleIndex() const {
  return swlParser::RuleComparisonOperator;
}

void swlParser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void swlParser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}

swlParser::ComparisonOperatorContext* swlParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 8, swlParser::RuleComparisonOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << swlParser::EQUAL)
      | (1ULL << swlParser::N_EQUAL)
      | (1ULL << swlParser::GT_EQUAL)
      | (1ULL << swlParser::LT_EQUAL)
      | (1ULL << swlParser::GT)
      | (1ULL << swlParser::LT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpenRoundBracketContext ------------------------------------------------------------------

swlParser::OpenRoundBracketContext::OpenRoundBracketContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::OpenRoundBracketContext::OPEN_ROUND_BRACKET() {
  return getToken(swlParser::OPEN_ROUND_BRACKET, 0);
}


size_t swlParser::OpenRoundBracketContext::getRuleIndex() const {
  return swlParser::RuleOpenRoundBracket;
}

void swlParser::OpenRoundBracketContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpenRoundBracket(this);
}

void swlParser::OpenRoundBracketContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpenRoundBracket(this);
}

swlParser::OpenRoundBracketContext* swlParser::openRoundBracket() {
  OpenRoundBracketContext *_localctx = _tracker.createInstance<OpenRoundBracketContext>(_ctx, getState());
  enterRule(_localctx, 10, swlParser::RuleOpenRoundBracket);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(swlParser::OPEN_ROUND_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClosedRoundBracketContext ------------------------------------------------------------------

swlParser::ClosedRoundBracketContext::ClosedRoundBracketContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::ClosedRoundBracketContext::CLOSED_ROUND_BRACKET() {
  return getToken(swlParser::CLOSED_ROUND_BRACKET, 0);
}


size_t swlParser::ClosedRoundBracketContext::getRuleIndex() const {
  return swlParser::RuleClosedRoundBracket;
}

void swlParser::ClosedRoundBracketContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClosedRoundBracket(this);
}

void swlParser::ClosedRoundBracketContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClosedRoundBracket(this);
}

swlParser::ClosedRoundBracketContext* swlParser::closedRoundBracket() {
  ClosedRoundBracketContext *_localctx = _tracker.createInstance<ClosedRoundBracketContext>(_ctx, getState());
  enterRule(_localctx, 12, swlParser::RuleClosedRoundBracket);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(swlParser::CLOSED_ROUND_BRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

swlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::OpenRoundBracketContext* swlParser::ExpressionContext::openRoundBracket() {
  return getRuleContext<swlParser::OpenRoundBracketContext>(0);
}

std::vector<swlParser::ExpressionContext *> swlParser::ExpressionContext::expression() {
  return getRuleContexts<swlParser::ExpressionContext>();
}

swlParser::ExpressionContext* swlParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<swlParser::ExpressionContext>(i);
}

swlParser::ClosedRoundBracketContext* swlParser::ExpressionContext::closedRoundBracket() {
  return getRuleContext<swlParser::ClosedRoundBracketContext>(0);
}

std::vector<swlParser::UnaryLogicalOperatorContext *> swlParser::ExpressionContext::unaryLogicalOperator() {
  return getRuleContexts<swlParser::UnaryLogicalOperatorContext>();
}

swlParser::UnaryLogicalOperatorContext* swlParser::ExpressionContext::unaryLogicalOperator(size_t i) {
  return getRuleContext<swlParser::UnaryLogicalOperatorContext>(i);
}

tree::TerminalNode* swlParser::ExpressionContext::ID() {
  return getToken(swlParser::ID, 0);
}

tree::TerminalNode* swlParser::ExpressionContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}

tree::TerminalNode* swlParser::ExpressionContext::BOOL() {
  return getToken(swlParser::BOOL, 0);
}

swlParser::ComparisonOperatorContext* swlParser::ExpressionContext::comparisonOperator() {
  return getRuleContext<swlParser::ComparisonOperatorContext>(0);
}

swlParser::BinaryLogicalOperatorContext* swlParser::ExpressionContext::binaryLogicalOperator() {
  return getRuleContext<swlParser::BinaryLogicalOperatorContext>(0);
}


size_t swlParser::ExpressionContext::getRuleIndex() const {
  return swlParser::RuleExpression;
}

void swlParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void swlParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


swlParser::ExpressionContext* swlParser::expression() {
   return expression(0);
}

swlParser::ExpressionContext* swlParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  swlParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  swlParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, swlParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(110);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::NOT:
      case swlParser::OPEN_ROUND_BRACKET: {
        setState(100);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == swlParser::NOT) {
          setState(97);
          unaryLogicalOperator();
          setState(102);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(103);
        openRoundBracket();
        setState(104);
        expression(0);
        setState(105);
        closedRoundBracket();
        break;
      }

      case swlParser::ID: {
        setState(107);
        match(swlParser::ID);
        break;
      }

      case swlParser::NUMBER: {
        setState(108);
        match(swlParser::NUMBER);
        break;
      }

      case swlParser::BOOL: {
        setState(109);
        match(swlParser::BOOL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(121);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(112);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(115);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case swlParser::EQUAL:
          case swlParser::N_EQUAL:
          case swlParser::GT_EQUAL:
          case swlParser::LT_EQUAL:
          case swlParser::GT:
          case swlParser::LT: {
            setState(113);
            comparisonOperator();
            break;
          }

          case swlParser::AND:
          case swlParser::OR: {
            setState(114);
            binaryLogicalOperator();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(117);
        expression(5); 
      }
      setState(123);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- NumberOrIdPartialContext ------------------------------------------------------------------

swlParser::NumberOrIdPartialContext::NumberOrIdPartialContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::NumberOrIdPartialContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}

tree::TerminalNode* swlParser::NumberOrIdPartialContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::NumberOrIdPartialContext::getRuleIndex() const {
  return swlParser::RuleNumberOrIdPartial;
}

void swlParser::NumberOrIdPartialContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberOrIdPartial(this);
}

void swlParser::NumberOrIdPartialContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberOrIdPartial(this);
}

swlParser::NumberOrIdPartialContext* swlParser::numberOrIdPartial() {
  NumberOrIdPartialContext *_localctx = _tracker.createInstance<NumberOrIdPartialContext>(_ctx, getState());
  enterRule(_localctx, 16, swlParser::RuleNumberOrIdPartial);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _la = _input->LA(1);
    if (!(_la == swlParser::ID

    || _la == swlParser::NUMBER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

swlParser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::ExpressionContext* swlParser::ConditionalExpressionContext::expression() {
  return getRuleContext<swlParser::ExpressionContext>(0);
}


size_t swlParser::ConditionalExpressionContext::getRuleIndex() const {
  return swlParser::RuleConditionalExpression;
}

void swlParser::ConditionalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalExpression(this);
}

void swlParser::ConditionalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalExpression(this);
}

swlParser::ConditionalExpressionContext* swlParser::conditionalExpression() {
  ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, swlParser::RuleConditionalExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintArgContext ------------------------------------------------------------------

swlParser::PrintArgContext::PrintArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::PrintArgContext::STRING() {
  return getToken(swlParser::STRING, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::PrintArgContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}


size_t swlParser::PrintArgContext::getRuleIndex() const {
  return swlParser::RulePrintArg;
}

void swlParser::PrintArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintArg(this);
}

void swlParser::PrintArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintArg(this);
}

swlParser::PrintArgContext* swlParser::printArg() {
  PrintArgContext *_localctx = _tracker.createInstance<PrintArgContext>(_ctx, getState());
  enterRule(_localctx, 20, swlParser::RulePrintArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case swlParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(128);
        match(swlParser::STRING);
        break;
      }

      case swlParser::ID:
      case swlParser::NUMBER: {
        enterOuterAlt(_localctx, 2);
        setState(129);
        numberOrIdPartial();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintVariadicContext ------------------------------------------------------------------

swlParser::PrintVariadicContext::PrintVariadicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::PrintVariadicContext::BASIC_SEPARATOR() {
  return getToken(swlParser::BASIC_SEPARATOR, 0);
}

swlParser::PrintArgContext* swlParser::PrintVariadicContext::printArg() {
  return getRuleContext<swlParser::PrintArgContext>(0);
}


size_t swlParser::PrintVariadicContext::getRuleIndex() const {
  return swlParser::RulePrintVariadic;
}

void swlParser::PrintVariadicContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintVariadic(this);
}

void swlParser::PrintVariadicContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintVariadic(this);
}

swlParser::PrintVariadicContext* swlParser::printVariadic() {
  PrintVariadicContext *_localctx = _tracker.createInstance<PrintVariadicContext>(_ctx, getState());
  enterRule(_localctx, 22, swlParser::RulePrintVariadic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(swlParser::BASIC_SEPARATOR);
    setState(133);
    printArg();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclareContext ------------------------------------------------------------------

swlParser::DeclareContext::DeclareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::DeclareContext::DECLARE() {
  return getToken(swlParser::DECLARE, 0);
}

tree::TerminalNode* swlParser::DeclareContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::DeclareContext::getRuleIndex() const {
  return swlParser::RuleDeclare;
}

void swlParser::DeclareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclare(this);
}

void swlParser::DeclareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclare(this);
}

swlParser::DeclareContext* swlParser::declare() {
  DeclareContext *_localctx = _tracker.createInstance<DeclareContext>(_ctx, getState());
  enterRule(_localctx, 24, swlParser::RuleDeclare);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(swlParser::DECLARE);
    setState(136);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineContext ------------------------------------------------------------------

swlParser::DefineContext::DefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::DefineContext::VARIABLE() {
  return getToken(swlParser::VARIABLE, 0);
}

tree::TerminalNode* swlParser::DefineContext::ID() {
  return getToken(swlParser::ID, 0);
}

tree::TerminalNode* swlParser::DefineContext::ASSIGN() {
  return getToken(swlParser::ASSIGN, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::DefineContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}


size_t swlParser::DefineContext::getRuleIndex() const {
  return swlParser::RuleDefine;
}

void swlParser::DefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefine(this);
}

void swlParser::DefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefine(this);
}

swlParser::DefineContext* swlParser::define() {
  DefineContext *_localctx = _tracker.createInstance<DefineContext>(_ctx, getState());
  enterRule(_localctx, 26, swlParser::RuleDefine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(swlParser::VARIABLE);
    setState(139);
    match(swlParser::ID);
    setState(140);
    match(swlParser::ASSIGN);
    setState(141);
    numberOrIdPartial();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

swlParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::AssignContext::ID() {
  return getToken(swlParser::ID, 0);
}

tree::TerminalNode* swlParser::AssignContext::ASSIGN() {
  return getToken(swlParser::ASSIGN, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::AssignContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}


size_t swlParser::AssignContext::getRuleIndex() const {
  return swlParser::RuleAssign;
}

void swlParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void swlParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

swlParser::AssignContext* swlParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 28, swlParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    match(swlParser::ID);
    setState(144);
    match(swlParser::ASSIGN);
    setState(145);
    numberOrIdPartial();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

swlParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::InputContext::INPUT() {
  return getToken(swlParser::INPUT, 0);
}

tree::TerminalNode* swlParser::InputContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::InputContext::getRuleIndex() const {
  return swlParser::RuleInput;
}

void swlParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void swlParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}

swlParser::InputContext* swlParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 30, swlParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(swlParser::INPUT);
    setState(148);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

swlParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::PrintContext::PRINT() {
  return getToken(swlParser::PRINT, 0);
}

swlParser::PrintArgContext* swlParser::PrintContext::printArg() {
  return getRuleContext<swlParser::PrintArgContext>(0);
}

std::vector<swlParser::PrintVariadicContext *> swlParser::PrintContext::printVariadic() {
  return getRuleContexts<swlParser::PrintVariadicContext>();
}

swlParser::PrintVariadicContext* swlParser::PrintContext::printVariadic(size_t i) {
  return getRuleContext<swlParser::PrintVariadicContext>(i);
}


size_t swlParser::PrintContext::getRuleIndex() const {
  return swlParser::RulePrint;
}

void swlParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void swlParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

swlParser::PrintContext* swlParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 32, swlParser::RulePrint);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(swlParser::PRINT);
    setState(151);
    printArg();
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == swlParser::BASIC_SEPARATOR) {
      setState(152);
      printVariadic();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddContext ------------------------------------------------------------------

swlParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::AddContext::ADD() {
  return getToken(swlParser::ADD, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::AddContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}

tree::TerminalNode* swlParser::AddContext::TO() {
  return getToken(swlParser::TO, 0);
}

tree::TerminalNode* swlParser::AddContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::AddContext::getRuleIndex() const {
  return swlParser::RuleAdd;
}

void swlParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}

void swlParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

swlParser::AddContext* swlParser::add() {
  AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, getState());
  enterRule(_localctx, 34, swlParser::RuleAdd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(swlParser::ADD);
    setState(159);
    numberOrIdPartial();
    setState(160);
    match(swlParser::TO);
    setState(161);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubContext ------------------------------------------------------------------

swlParser::SubContext::SubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::SubContext::SUB() {
  return getToken(swlParser::SUB, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::SubContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}

tree::TerminalNode* swlParser::SubContext::TO() {
  return getToken(swlParser::TO, 0);
}

tree::TerminalNode* swlParser::SubContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::SubContext::getRuleIndex() const {
  return swlParser::RuleSub;
}

void swlParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}

void swlParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}

swlParser::SubContext* swlParser::sub() {
  SubContext *_localctx = _tracker.createInstance<SubContext>(_ctx, getState());
  enterRule(_localctx, 36, swlParser::RuleSub);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(swlParser::SUB);
    setState(164);
    numberOrIdPartial();
    setState(165);
    match(swlParser::TO);
    setState(166);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulContext ------------------------------------------------------------------

swlParser::MulContext::MulContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::MulContext::MUL() {
  return getToken(swlParser::MUL, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::MulContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}

tree::TerminalNode* swlParser::MulContext::TO() {
  return getToken(swlParser::TO, 0);
}

tree::TerminalNode* swlParser::MulContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::MulContext::getRuleIndex() const {
  return swlParser::RuleMul;
}

void swlParser::MulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul(this);
}

void swlParser::MulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul(this);
}

swlParser::MulContext* swlParser::mul() {
  MulContext *_localctx = _tracker.createInstance<MulContext>(_ctx, getState());
  enterRule(_localctx, 38, swlParser::RuleMul);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(swlParser::MUL);
    setState(169);
    numberOrIdPartial();
    setState(170);
    match(swlParser::TO);
    setState(171);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivContext ------------------------------------------------------------------

swlParser::DivContext::DivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::DivContext::DIV() {
  return getToken(swlParser::DIV, 0);
}

swlParser::NumberOrIdPartialContext* swlParser::DivContext::numberOrIdPartial() {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(0);
}

tree::TerminalNode* swlParser::DivContext::TO() {
  return getToken(swlParser::TO, 0);
}

tree::TerminalNode* swlParser::DivContext::ID() {
  return getToken(swlParser::ID, 0);
}


size_t swlParser::DivContext::getRuleIndex() const {
  return swlParser::RuleDiv;
}

void swlParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}

void swlParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

swlParser::DivContext* swlParser::div() {
  DivContext *_localctx = _tracker.createInstance<DivContext>(_ctx, getState());
  enterRule(_localctx, 40, swlParser::RuleDiv);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(swlParser::DIV);
    setState(174);
    numberOrIdPartial();
    setState(175);
    match(swlParser::TO);
    setState(176);
    match(swlParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoPartialStatementContext ------------------------------------------------------------------

swlParser::DoPartialStatementContext::DoPartialStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::DoPartialStatementContext::DO() {
  return getToken(swlParser::DO, 0);
}


size_t swlParser::DoPartialStatementContext::getRuleIndex() const {
  return swlParser::RuleDoPartialStatement;
}

void swlParser::DoPartialStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoPartialStatement(this);
}

void swlParser::DoPartialStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoPartialStatement(this);
}

swlParser::DoPartialStatementContext* swlParser::doPartialStatement() {
  DoPartialStatementContext *_localctx = _tracker.createInstance<DoPartialStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, swlParser::RuleDoPartialStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(swlParser::DO);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalPartialStatementContext ------------------------------------------------------------------

swlParser::ConditionalPartialStatementContext::ConditionalPartialStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::DoPartialStatementContext* swlParser::ConditionalPartialStatementContext::doPartialStatement() {
  return getRuleContext<swlParser::DoPartialStatementContext>(0);
}

std::vector<swlParser::StatementContext *> swlParser::ConditionalPartialStatementContext::statement() {
  return getRuleContexts<swlParser::StatementContext>();
}

swlParser::StatementContext* swlParser::ConditionalPartialStatementContext::statement(size_t i) {
  return getRuleContext<swlParser::StatementContext>(i);
}


size_t swlParser::ConditionalPartialStatementContext::getRuleIndex() const {
  return swlParser::RuleConditionalPartialStatement;
}

void swlParser::ConditionalPartialStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalPartialStatement(this);
}

void swlParser::ConditionalPartialStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalPartialStatement(this);
}

swlParser::ConditionalPartialStatementContext* swlParser::conditionalPartialStatement() {
  ConditionalPartialStatementContext *_localctx = _tracker.createInstance<ConditionalPartialStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, swlParser::RuleConditionalPartialStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    doPartialStatement();
    setState(182); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(181);
      statement();
      setState(184); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << swlParser::INPUT)
      | (1ULL << swlParser::PRINT)
      | (1ULL << swlParser::WHILE)
      | (1ULL << swlParser::IF)
      | (1ULL << swlParser::FOR)
      | (1ULL << swlParser::VARIABLE)
      | (1ULL << swlParser::DECLARE)
      | (1ULL << swlParser::ADD)
      | (1ULL << swlParser::SUB)
      | (1ULL << swlParser::MUL)
      | (1ULL << swlParser::DIV)
      | (1ULL << swlParser::ID))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalBodyPartialContext ------------------------------------------------------------------

swlParser::ConditionalBodyPartialContext::ConditionalBodyPartialContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::ConditionalExpressionContext* swlParser::ConditionalBodyPartialContext::conditionalExpression() {
  return getRuleContext<swlParser::ConditionalExpressionContext>(0);
}

swlParser::ConditionalPartialStatementContext* swlParser::ConditionalBodyPartialContext::conditionalPartialStatement() {
  return getRuleContext<swlParser::ConditionalPartialStatementContext>(0);
}


size_t swlParser::ConditionalBodyPartialContext::getRuleIndex() const {
  return swlParser::RuleConditionalBodyPartial;
}

void swlParser::ConditionalBodyPartialContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalBodyPartial(this);
}

void swlParser::ConditionalBodyPartialContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalBodyPartial(this);
}

swlParser::ConditionalBodyPartialContext* swlParser::conditionalBodyPartial() {
  ConditionalBodyPartialContext *_localctx = _tracker.createInstance<ConditionalBodyPartialContext>(_ctx, getState());
  enterRule(_localctx, 46, swlParser::RuleConditionalBodyPartial);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    conditionalExpression();
    setState(187);
    conditionalPartialStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

swlParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::WhileStatementContext::WHILE() {
  return getToken(swlParser::WHILE, 0);
}

swlParser::ConditionalBodyPartialContext* swlParser::WhileStatementContext::conditionalBodyPartial() {
  return getRuleContext<swlParser::ConditionalBodyPartialContext>(0);
}

tree::TerminalNode* swlParser::WhileStatementContext::END() {
  return getToken(swlParser::END, 0);
}


size_t swlParser::WhileStatementContext::getRuleIndex() const {
  return swlParser::RuleWhileStatement;
}

void swlParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void swlParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}

swlParser::WhileStatementContext* swlParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, swlParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    match(swlParser::WHILE);
    setState(190);
    conditionalBodyPartial();
    setState(191);
    match(swlParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfPartialStatementContext ------------------------------------------------------------------

swlParser::ElseIfPartialStatementContext::ElseIfPartialStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::ElseIfPartialStatementContext::ELIF() {
  return getToken(swlParser::ELIF, 0);
}

swlParser::ConditionalBodyPartialContext* swlParser::ElseIfPartialStatementContext::conditionalBodyPartial() {
  return getRuleContext<swlParser::ConditionalBodyPartialContext>(0);
}


size_t swlParser::ElseIfPartialStatementContext::getRuleIndex() const {
  return swlParser::RuleElseIfPartialStatement;
}

void swlParser::ElseIfPartialStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfPartialStatement(this);
}

void swlParser::ElseIfPartialStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfPartialStatement(this);
}

swlParser::ElseIfPartialStatementContext* swlParser::elseIfPartialStatement() {
  ElseIfPartialStatementContext *_localctx = _tracker.createInstance<ElseIfPartialStatementContext>(_ctx, getState());
  enterRule(_localctx, 50, swlParser::RuleElseIfPartialStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(swlParser::ELIF);
    setState(194);
    conditionalBodyPartial();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElsePartialStatementContext ------------------------------------------------------------------

swlParser::ElsePartialStatementContext::ElsePartialStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::ElsePartialStatementContext::ELSE() {
  return getToken(swlParser::ELSE, 0);
}

swlParser::ConditionalPartialStatementContext* swlParser::ElsePartialStatementContext::conditionalPartialStatement() {
  return getRuleContext<swlParser::ConditionalPartialStatementContext>(0);
}


size_t swlParser::ElsePartialStatementContext::getRuleIndex() const {
  return swlParser::RuleElsePartialStatement;
}

void swlParser::ElsePartialStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsePartialStatement(this);
}

void swlParser::ElsePartialStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsePartialStatement(this);
}

swlParser::ElsePartialStatementContext* swlParser::elsePartialStatement() {
  ElsePartialStatementContext *_localctx = _tracker.createInstance<ElsePartialStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, swlParser::RuleElsePartialStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(swlParser::ELSE);
    setState(197);
    conditionalPartialStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

swlParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::IfStatementContext::IF() {
  return getToken(swlParser::IF, 0);
}

swlParser::ConditionalBodyPartialContext* swlParser::IfStatementContext::conditionalBodyPartial() {
  return getRuleContext<swlParser::ConditionalBodyPartialContext>(0);
}

tree::TerminalNode* swlParser::IfStatementContext::END() {
  return getToken(swlParser::END, 0);
}

std::vector<swlParser::ElseIfPartialStatementContext *> swlParser::IfStatementContext::elseIfPartialStatement() {
  return getRuleContexts<swlParser::ElseIfPartialStatementContext>();
}

swlParser::ElseIfPartialStatementContext* swlParser::IfStatementContext::elseIfPartialStatement(size_t i) {
  return getRuleContext<swlParser::ElseIfPartialStatementContext>(i);
}

swlParser::ElsePartialStatementContext* swlParser::IfStatementContext::elsePartialStatement() {
  return getRuleContext<swlParser::ElsePartialStatementContext>(0);
}


size_t swlParser::IfStatementContext::getRuleIndex() const {
  return swlParser::RuleIfStatement;
}

void swlParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void swlParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

swlParser::IfStatementContext* swlParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, swlParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(swlParser::IF);
    setState(200);
    conditionalBodyPartial();
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == swlParser::ELIF) {
      setState(201);
      elseIfPartialStatement();
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == swlParser::ELSE) {
      setState(207);
      elsePartialStatement();
    }
    setState(210);
    match(swlParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeIncrementPartialContext ------------------------------------------------------------------

swlParser::RangeIncrementPartialContext::RangeIncrementPartialContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::RangeIncrementPartialContext::BASIC_SEPARATOR() {
  return getToken(swlParser::BASIC_SEPARATOR, 0);
}

tree::TerminalNode* swlParser::RangeIncrementPartialContext::NUMBER() {
  return getToken(swlParser::NUMBER, 0);
}


size_t swlParser::RangeIncrementPartialContext::getRuleIndex() const {
  return swlParser::RuleRangeIncrementPartial;
}

void swlParser::RangeIncrementPartialContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeIncrementPartial(this);
}

void swlParser::RangeIncrementPartialContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeIncrementPartial(this);
}

swlParser::RangeIncrementPartialContext* swlParser::rangeIncrementPartial() {
  RangeIncrementPartialContext *_localctx = _tracker.createInstance<RangeIncrementPartialContext>(_ctx, getState());
  enterRule(_localctx, 56, swlParser::RuleRangeIncrementPartial);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(swlParser::BASIC_SEPARATOR);
    setState(213);
    match(swlParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

swlParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<swlParser::NumberOrIdPartialContext *> swlParser::RangeContext::numberOrIdPartial() {
  return getRuleContexts<swlParser::NumberOrIdPartialContext>();
}

swlParser::NumberOrIdPartialContext* swlParser::RangeContext::numberOrIdPartial(size_t i) {
  return getRuleContext<swlParser::NumberOrIdPartialContext>(i);
}

tree::TerminalNode* swlParser::RangeContext::RANGE() {
  return getToken(swlParser::RANGE, 0);
}

swlParser::RangeIncrementPartialContext* swlParser::RangeContext::rangeIncrementPartial() {
  return getRuleContext<swlParser::RangeIncrementPartialContext>(0);
}


size_t swlParser::RangeContext::getRuleIndex() const {
  return swlParser::RuleRange;
}

void swlParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void swlParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}

swlParser::RangeContext* swlParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 58, swlParser::RuleRange);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    numberOrIdPartial();
    setState(216);
    match(swlParser::RANGE);
    setState(217);
    numberOrIdPartial();
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == swlParser::BASIC_SEPARATOR) {
      setState(218);
      rangeIncrementPartial();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForDeclarationContext ------------------------------------------------------------------

swlParser::ForDeclarationContext::ForDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* swlParser::ForDeclarationContext::FOR() {
  return getToken(swlParser::FOR, 0);
}

tree::TerminalNode* swlParser::ForDeclarationContext::ID() {
  return getToken(swlParser::ID, 0);
}

tree::TerminalNode* swlParser::ForDeclarationContext::ASSIGN() {
  return getToken(swlParser::ASSIGN, 0);
}


size_t swlParser::ForDeclarationContext::getRuleIndex() const {
  return swlParser::RuleForDeclaration;
}

void swlParser::ForDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForDeclaration(this);
}

void swlParser::ForDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForDeclaration(this);
}

swlParser::ForDeclarationContext* swlParser::forDeclaration() {
  ForDeclarationContext *_localctx = _tracker.createInstance<ForDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 60, swlParser::RuleForDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(swlParser::FOR);
    setState(222);
    match(swlParser::ID);
    setState(223);
    match(swlParser::ASSIGN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForRangeStatementContext ------------------------------------------------------------------

swlParser::ForRangeStatementContext::ForRangeStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

swlParser::ForDeclarationContext* swlParser::ForRangeStatementContext::forDeclaration() {
  return getRuleContext<swlParser::ForDeclarationContext>(0);
}

swlParser::RangeContext* swlParser::ForRangeStatementContext::range() {
  return getRuleContext<swlParser::RangeContext>(0);
}

swlParser::ConditionalPartialStatementContext* swlParser::ForRangeStatementContext::conditionalPartialStatement() {
  return getRuleContext<swlParser::ConditionalPartialStatementContext>(0);
}

tree::TerminalNode* swlParser::ForRangeStatementContext::END() {
  return getToken(swlParser::END, 0);
}


size_t swlParser::ForRangeStatementContext::getRuleIndex() const {
  return swlParser::RuleForRangeStatement;
}

void swlParser::ForRangeStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForRangeStatement(this);
}

void swlParser::ForRangeStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<swlParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForRangeStatement(this);
}

swlParser::ForRangeStatementContext* swlParser::forRangeStatement() {
  ForRangeStatementContext *_localctx = _tracker.createInstance<ForRangeStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, swlParser::RuleForRangeStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    forDeclaration();
    setState(226);
    range();
    setState(227);
    conditionalPartialStatement();
    setState(228);
    match(swlParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool swlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool swlParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> swlParser::_decisionToDFA;
atn::PredictionContextCache swlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN swlParser::_atn;
std::vector<uint16_t> swlParser::_serializedATN;

std::vector<std::string> swlParser::_ruleNames = {
  "program", "statement", "binaryLogicalOperator", "unaryLogicalOperator", 
  "comparisonOperator", "openRoundBracket", "closedRoundBracket", "expression", 
  "numberOrIdPartial", "conditionalExpression", "printArg", "printVariadic", 
  "declare", "define", "assign", "input", "print", "add", "sub", "mul", 
  "div", "doPartialStatement", "conditionalPartialStatement", "conditionalBodyPartial", 
  "whileStatement", "elseIfPartialStatement", "elsePartialStatement", "ifStatement", 
  "rangeIncrementPartial", "range", "forDeclaration", "forRangeStatement"
};

std::vector<std::string> swlParser::_literalNames = {
  "", "'begin'", "'end'", "'input'", "'print'", "'while'", "'if'", "'then'", 
  "'else'", "'elif'", "'for'", "'let'", "'declare'", "'be'", "'to'", "'do'", 
  "','", "'eq'", "'neq'", "'gte'", "'lte'", "'gt'", "'lt'", "'and'", "'or'", 
  "'not'", "'add'", "'sub'", "'mul'", "'div'", "'..'", "'('", "')'"
};

std::vector<std::string> swlParser::_symbolicNames = {
  "", "BEGIN", "END", "INPUT", "PRINT", "WHILE", "IF", "THEN", "ELSE", "ELIF", 
  "FOR", "VARIABLE", "DECLARE", "ASSIGN", "TO", "DO", "BASIC_SEPARATOR", 
  "EQUAL", "N_EQUAL", "GT_EQUAL", "LT_EQUAL", "GT", "LT", "AND", "OR", "NOT", 
  "ADD", "SUB", "MUL", "DIV", "RANGE", "OPEN_ROUND_BRACKET", "CLOSED_ROUND_BRACKET", 
  "STRING", "BOOL", "ID", "NUMBER", "WS", "ErrorChar", "SINGLE_LINE_COMMENT", 
  "MULTI_LINE_COMMENT"
};

dfa::Vocabulary swlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> swlParser::_tokenNames;

swlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2a, 0xe9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 
    0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x3, 0x2, 0x3, 
    0x2, 0x6, 0x2, 0x45, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x46, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x57, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x65, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x68, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x71, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x76, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x7a, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7d, 0xb, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x85, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x9c, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0x9f, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x6, 
    0x18, 0xb9, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0xba, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0xcd, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0xd0, 0xb, 
    0x1d, 0x3, 0x1d, 0x5, 0x1d, 0xd3, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0xde, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x2, 
    0x3, 0x10, 0x22, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x2, 0x5, 
    0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x13, 0x18, 0x3, 0x2, 0x25, 0x26, 0x2, 
    0xe0, 0x2, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4, 0x56, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x58, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x70, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x80, 0x3, 0x2, 0x2, 0x2, 0x16, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x86, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x8c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x20, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x98, 0x3, 0x2, 0x2, 0x2, 0x24, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x28, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x30, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x34, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0x38, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x7, 0x3, 
    0x2, 0x2, 0x43, 0x45, 0x5, 0x4, 0x3, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x49, 0x7, 0x4, 0x2, 0x2, 0x49, 0x3, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x57, 
    0x5, 0x1a, 0xe, 0x2, 0x4b, 0x57, 0x5, 0x1c, 0xf, 0x2, 0x4c, 0x57, 0x5, 
    0x1e, 0x10, 0x2, 0x4d, 0x57, 0x5, 0x24, 0x13, 0x2, 0x4e, 0x57, 0x5, 
    0x26, 0x14, 0x2, 0x4f, 0x57, 0x5, 0x28, 0x15, 0x2, 0x50, 0x57, 0x5, 
    0x2a, 0x16, 0x2, 0x51, 0x57, 0x5, 0x22, 0x12, 0x2, 0x52, 0x57, 0x5, 
    0x20, 0x11, 0x2, 0x53, 0x57, 0x5, 0x32, 0x1a, 0x2, 0x54, 0x57, 0x5, 
    0x38, 0x1d, 0x2, 0x55, 0x57, 0x5, 0x40, 0x21, 0x2, 0x56, 0x4a, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x56, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x56, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x51, 0x3, 0x2, 0x2, 0x2, 0x56, 0x52, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x9, 
    0x2, 0x2, 0x2, 0x59, 0x7, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x1b, 
    0x2, 0x2, 0x5b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x9, 0x3, 0x2, 
    0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x21, 0x2, 0x2, 
    0x5f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x22, 0x2, 0x2, 0x61, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x62, 0x66, 0x8, 0x9, 0x1, 0x2, 0x63, 0x65, 
    0x5, 0x8, 0x5, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x6a, 0x5, 0xc, 0x7, 0x2, 0x6a, 0x6b, 0x5, 0x10, 0x9, 0x2, 
    0x6b, 0x6c, 0x5, 0xe, 0x8, 0x2, 0x6c, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x71, 0x7, 0x25, 0x2, 0x2, 0x6e, 0x71, 0x7, 0x26, 0x2, 0x2, 0x6f, 0x71, 
    0x7, 0x24, 0x2, 0x2, 0x70, 0x62, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0xc, 0x6, 0x2, 
    0x2, 0x73, 0x76, 0x5, 0xa, 0x6, 0x2, 0x74, 0x76, 0x5, 0x6, 0x4, 0x2, 
    0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x5, 0x10, 0x9, 0x7, 0x78, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7f, 0x9, 0x4, 0x2, 0x2, 0x7f, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x5, 0x10, 0x9, 0x2, 0x81, 0x15, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x85, 0x7, 0x23, 0x2, 0x2, 0x83, 0x85, 0x5, 0x12, 0xa, 0x2, 0x84, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x12, 0x2, 0x2, 0x87, 0x88, 0x5, 0x16, 
    0xc, 0x2, 0x88, 0x19, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0xe, 0x2, 
    0x2, 0x8a, 0x8b, 0x7, 0x25, 0x2, 0x2, 0x8b, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8d, 0x7, 0xd, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x25, 0x2, 0x2, 0x8e, 
    0x8f, 0x7, 0xf, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x12, 0xa, 0x2, 0x90, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0x25, 0x2, 0x2, 0x92, 0x93, 0x7, 
    0xf, 0x2, 0x2, 0x93, 0x94, 0x5, 0x12, 0xa, 0x2, 0x94, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x96, 0x7, 0x5, 0x2, 0x2, 0x96, 0x97, 0x7, 0x25, 0x2, 
    0x2, 0x97, 0x21, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x6, 0x2, 0x2, 
    0x99, 0x9d, 0x5, 0x16, 0xc, 0x2, 0x9a, 0x9c, 0x5, 0x18, 0xd, 0x2, 0x9b, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x1c, 
    0x2, 0x2, 0xa1, 0xa2, 0x5, 0x12, 0xa, 0x2, 0xa2, 0xa3, 0x7, 0x10, 0x2, 
    0x2, 0xa3, 0xa4, 0x7, 0x25, 0x2, 0x2, 0xa4, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x7, 0x1d, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x12, 0xa, 0x2, 0xa7, 
    0xa8, 0x7, 0x10, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x25, 0x2, 0x2, 0xa9, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x1e, 0x2, 0x2, 0xab, 0xac, 0x5, 
    0x12, 0xa, 0x2, 0xac, 0xad, 0x7, 0x10, 0x2, 0x2, 0xad, 0xae, 0x7, 0x25, 
    0x2, 0x2, 0xae, 0x29, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0x1f, 0x2, 
    0x2, 0xb0, 0xb1, 0x5, 0x12, 0xa, 0x2, 0xb1, 0xb2, 0x7, 0x10, 0x2, 0x2, 
    0xb2, 0xb3, 0x7, 0x25, 0x2, 0x2, 0xb3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb5, 0x7, 0x11, 0x2, 0x2, 0xb5, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 
    0x5, 0x2c, 0x17, 0x2, 0xb7, 0xb9, 0x5, 0x4, 0x3, 0x2, 0xb8, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xbd, 0x5, 0x14, 0xb, 0x2, 0xbd, 0xbe, 0x5, 0x2e, 0x18, 0x2, 
    0xbe, 0x31, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x7, 0x2, 0x2, 0xc0, 
    0xc1, 0x5, 0x30, 0x19, 0x2, 0xc1, 0xc2, 0x7, 0x4, 0x2, 0x2, 0xc2, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0xb, 0x2, 0x2, 0xc4, 0xc5, 0x5, 
    0x30, 0x19, 0x2, 0xc5, 0x35, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0xa, 
    0x2, 0x2, 0xc7, 0xc8, 0x5, 0x2e, 0x18, 0x2, 0xc8, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xca, 0x7, 0x8, 0x2, 0x2, 0xca, 0xce, 0x5, 0x30, 0x19, 0x2, 
    0xcb, 0xcd, 0x5, 0x34, 0x1b, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xd0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xd3, 0x5, 0x36, 0x1c, 0x2, 0xd2, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd5, 0x7, 0x4, 0x2, 0x2, 0xd5, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd7, 0x7, 0x12, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x26, 0x2, 0x2, 0xd8, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x12, 0xa, 0x2, 0xda, 0xdb, 
    0x7, 0x20, 0x2, 0x2, 0xdb, 0xdd, 0x5, 0x12, 0xa, 0x2, 0xdc, 0xde, 0x5, 
    0x3a, 0x1e, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0xc, 0x2, 
    0x2, 0xe0, 0xe1, 0x7, 0x25, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0xf, 0x2, 0x2, 
    0xe2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x3e, 0x20, 0x2, 0xe4, 
    0xe5, 0x5, 0x3c, 0x1f, 0x2, 0xe5, 0xe6, 0x5, 0x2e, 0x18, 0x2, 0xe6, 
    0xe7, 0x7, 0x4, 0x2, 0x2, 0xe7, 0x41, 0x3, 0x2, 0x2, 0x2, 0xe, 0x46, 
    0x56, 0x66, 0x70, 0x75, 0x7b, 0x84, 0x9d, 0xba, 0xce, 0xd2, 0xdd, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

swlParser::Initializer swlParser::_init;
