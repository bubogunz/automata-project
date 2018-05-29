
/*
 * Developed in May 2018 @UNIPD by:
 * - Brian Federico
 * - Schiabel Alberto
 */


// Generated from swlParser.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "swlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by swlParser.
 */
class  swlParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(swlParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(swlParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(swlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(swlParser::StatementContext *ctx) = 0;

  virtual void enterBinaryLogicalOperator(swlParser::BinaryLogicalOperatorContext *ctx) = 0;
  virtual void exitBinaryLogicalOperator(swlParser::BinaryLogicalOperatorContext *ctx) = 0;

  virtual void enterUnaryLogicalOperator(swlParser::UnaryLogicalOperatorContext *ctx) = 0;
  virtual void exitUnaryLogicalOperator(swlParser::UnaryLogicalOperatorContext *ctx) = 0;

  virtual void enterComparisonOperator(swlParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(swlParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterOpenRoundBracket(swlParser::OpenRoundBracketContext *ctx) = 0;
  virtual void exitOpenRoundBracket(swlParser::OpenRoundBracketContext *ctx) = 0;

  virtual void enterClosedRoundBracket(swlParser::ClosedRoundBracketContext *ctx) = 0;
  virtual void exitClosedRoundBracket(swlParser::ClosedRoundBracketContext *ctx) = 0;

  virtual void enterExpression(swlParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(swlParser::ExpressionContext *ctx) = 0;

  virtual void enterNumberOrIdPartial(swlParser::NumberOrIdPartialContext *ctx) = 0;
  virtual void exitNumberOrIdPartial(swlParser::NumberOrIdPartialContext *ctx) = 0;

  virtual void enterConditionalExpression(swlParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(swlParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterPrintArg(swlParser::PrintArgContext *ctx) = 0;
  virtual void exitPrintArg(swlParser::PrintArgContext *ctx) = 0;

  virtual void enterPrintVariadic(swlParser::PrintVariadicContext *ctx) = 0;
  virtual void exitPrintVariadic(swlParser::PrintVariadicContext *ctx) = 0;

  virtual void enterDeclare(swlParser::DeclareContext *ctx) = 0;
  virtual void exitDeclare(swlParser::DeclareContext *ctx) = 0;

  virtual void enterDefine(swlParser::DefineContext *ctx) = 0;
  virtual void exitDefine(swlParser::DefineContext *ctx) = 0;

  virtual void enterAssign(swlParser::AssignContext *ctx) = 0;
  virtual void exitAssign(swlParser::AssignContext *ctx) = 0;

  virtual void enterInput(swlParser::InputContext *ctx) = 0;
  virtual void exitInput(swlParser::InputContext *ctx) = 0;

  virtual void enterPrint(swlParser::PrintContext *ctx) = 0;
  virtual void exitPrint(swlParser::PrintContext *ctx) = 0;

  virtual void enterAdd(swlParser::AddContext *ctx) = 0;
  virtual void exitAdd(swlParser::AddContext *ctx) = 0;

  virtual void enterSub(swlParser::SubContext *ctx) = 0;
  virtual void exitSub(swlParser::SubContext *ctx) = 0;

  virtual void enterMul(swlParser::MulContext *ctx) = 0;
  virtual void exitMul(swlParser::MulContext *ctx) = 0;

  virtual void enterDiv(swlParser::DivContext *ctx) = 0;
  virtual void exitDiv(swlParser::DivContext *ctx) = 0;

  virtual void enterDoPartialStatement(swlParser::DoPartialStatementContext *ctx) = 0;
  virtual void exitDoPartialStatement(swlParser::DoPartialStatementContext *ctx) = 0;

  virtual void enterConditionalPartialStatement(swlParser::ConditionalPartialStatementContext *ctx) = 0;
  virtual void exitConditionalPartialStatement(swlParser::ConditionalPartialStatementContext *ctx) = 0;

  virtual void enterConditionalBodyPartial(swlParser::ConditionalBodyPartialContext *ctx) = 0;
  virtual void exitConditionalBodyPartial(swlParser::ConditionalBodyPartialContext *ctx) = 0;

  virtual void enterWhileStatement(swlParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(swlParser::WhileStatementContext *ctx) = 0;

  virtual void enterElseIfPartialStatement(swlParser::ElseIfPartialStatementContext *ctx) = 0;
  virtual void exitElseIfPartialStatement(swlParser::ElseIfPartialStatementContext *ctx) = 0;

  virtual void enterElsePartialStatement(swlParser::ElsePartialStatementContext *ctx) = 0;
  virtual void exitElsePartialStatement(swlParser::ElsePartialStatementContext *ctx) = 0;

  virtual void enterIfStatement(swlParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(swlParser::IfStatementContext *ctx) = 0;

  virtual void enterRangeIncrementPartial(swlParser::RangeIncrementPartialContext *ctx) = 0;
  virtual void exitRangeIncrementPartial(swlParser::RangeIncrementPartialContext *ctx) = 0;

  virtual void enterRange(swlParser::RangeContext *ctx) = 0;
  virtual void exitRange(swlParser::RangeContext *ctx) = 0;

  virtual void enterForDeclaration(swlParser::ForDeclarationContext *ctx) = 0;
  virtual void exitForDeclaration(swlParser::ForDeclarationContext *ctx) = 0;

  virtual void enterForRangeStatement(swlParser::ForRangeStatementContext *ctx) = 0;
  virtual void exitForRangeStatement(swlParser::ForRangeStatementContext *ctx) = 0;


};

