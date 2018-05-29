
/*
 * Developed in May 2018 @UNIPD by:
 * - Brian Federico
 * - Schiabel Alberto
 */


// Generated from swlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "swlParserListener.h"


/**
 * This class provides an empty implementation of swlParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  swlParserBaseListener : public swlParserListener {
public:

  virtual void enterProgram(swlParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(swlParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(swlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(swlParser::StatementContext * /*ctx*/) override { }

  virtual void enterBinaryLogicalOperator(swlParser::BinaryLogicalOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryLogicalOperator(swlParser::BinaryLogicalOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryLogicalOperator(swlParser::UnaryLogicalOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryLogicalOperator(swlParser::UnaryLogicalOperatorContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(swlParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(swlParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterOpenRoundBracket(swlParser::OpenRoundBracketContext * /*ctx*/) override { }
  virtual void exitOpenRoundBracket(swlParser::OpenRoundBracketContext * /*ctx*/) override { }

  virtual void enterClosedRoundBracket(swlParser::ClosedRoundBracketContext * /*ctx*/) override { }
  virtual void exitClosedRoundBracket(swlParser::ClosedRoundBracketContext * /*ctx*/) override { }

  virtual void enterExpression(swlParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(swlParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterNumberOrIdPartial(swlParser::NumberOrIdPartialContext * /*ctx*/) override { }
  virtual void exitNumberOrIdPartial(swlParser::NumberOrIdPartialContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(swlParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(swlParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterPrintArg(swlParser::PrintArgContext * /*ctx*/) override { }
  virtual void exitPrintArg(swlParser::PrintArgContext * /*ctx*/) override { }

  virtual void enterPrintVariadic(swlParser::PrintVariadicContext * /*ctx*/) override { }
  virtual void exitPrintVariadic(swlParser::PrintVariadicContext * /*ctx*/) override { }

  virtual void enterDeclare(swlParser::DeclareContext * /*ctx*/) override { }
  virtual void exitDeclare(swlParser::DeclareContext * /*ctx*/) override { }

  virtual void enterDefine(swlParser::DefineContext * /*ctx*/) override { }
  virtual void exitDefine(swlParser::DefineContext * /*ctx*/) override { }

  virtual void enterAssign(swlParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(swlParser::AssignContext * /*ctx*/) override { }

  virtual void enterInput(swlParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(swlParser::InputContext * /*ctx*/) override { }

  virtual void enterPrint(swlParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(swlParser::PrintContext * /*ctx*/) override { }

  virtual void enterAdd(swlParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(swlParser::AddContext * /*ctx*/) override { }

  virtual void enterSub(swlParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(swlParser::SubContext * /*ctx*/) override { }

  virtual void enterMul(swlParser::MulContext * /*ctx*/) override { }
  virtual void exitMul(swlParser::MulContext * /*ctx*/) override { }

  virtual void enterDiv(swlParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(swlParser::DivContext * /*ctx*/) override { }

  virtual void enterDoPartialStatement(swlParser::DoPartialStatementContext * /*ctx*/) override { }
  virtual void exitDoPartialStatement(swlParser::DoPartialStatementContext * /*ctx*/) override { }

  virtual void enterConditionalPartialStatement(swlParser::ConditionalPartialStatementContext * /*ctx*/) override { }
  virtual void exitConditionalPartialStatement(swlParser::ConditionalPartialStatementContext * /*ctx*/) override { }

  virtual void enterConditionalBodyPartial(swlParser::ConditionalBodyPartialContext * /*ctx*/) override { }
  virtual void exitConditionalBodyPartial(swlParser::ConditionalBodyPartialContext * /*ctx*/) override { }

  virtual void enterWhileStatement(swlParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(swlParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterElseIfPartialStatement(swlParser::ElseIfPartialStatementContext * /*ctx*/) override { }
  virtual void exitElseIfPartialStatement(swlParser::ElseIfPartialStatementContext * /*ctx*/) override { }

  virtual void enterElsePartialStatement(swlParser::ElsePartialStatementContext * /*ctx*/) override { }
  virtual void exitElsePartialStatement(swlParser::ElsePartialStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(swlParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(swlParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterRangeIncrementPartial(swlParser::RangeIncrementPartialContext * /*ctx*/) override { }
  virtual void exitRangeIncrementPartial(swlParser::RangeIncrementPartialContext * /*ctx*/) override { }

  virtual void enterRange(swlParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(swlParser::RangeContext * /*ctx*/) override { }

  virtual void enterForDeclaration(swlParser::ForDeclarationContext * /*ctx*/) override { }
  virtual void exitForDeclaration(swlParser::ForDeclarationContext * /*ctx*/) override { }

  virtual void enterForRangeStatement(swlParser::ForRangeStatementContext * /*ctx*/) override { }
  virtual void exitForRangeStatement(swlParser::ForRangeStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

