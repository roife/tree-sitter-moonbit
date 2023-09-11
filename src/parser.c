#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 659
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_lowercase_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_ = 4,
  anon_sym_priv = 5,
  anon_sym_pub = 6,
  anon_sym_LPAREN = 7,
  anon_sym_readonly = 8,
  anon_sym_RPAREN = 9,
  anon_sym_type = 10,
  anon_sym_struct = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_enum = 15,
  anon_sym_COMMA = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_func = 19,
  anon_sym_interface = 20,
  anon_sym__ = 21,
  anon_sym_DQUOTE = 22,
  anon_sym_BSLASH_LPAREN = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_integer_literal = 26,
  sym_float_literal = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_char_literal_token1 = 29,
  sym_unescaped_string_fragment = 30,
  sym_escape_seqence = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_STAR_STAR = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_STAR_EQ = 37,
  anon_sym_SLASH_EQ = 38,
  anon_sym_PERCENT = 39,
  anon_sym_PLUS_EQ = 40,
  anon_sym_DASH_EQ = 41,
  anon_sym_GT = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_LT = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_AMP_AMP = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_DOT_DOT = 50,
  anon_sym_fn = 51,
  anon_sym_LBRACK = 52,
  anon_sym_RBRACK = 53,
  aux_sym_accessor_token1 = 54,
  anon_sym_match = 55,
  anon_sym_EQ_GT = 56,
  anon_sym_if = 57,
  anon_sym_else = 58,
  anon_sym_break = 59,
  anon_sym_continue = 60,
  anon_sym_COLON_EQ = 61,
  anon_sym_var = 62,
  anon_sym_while = 63,
  anon_sym_return = 64,
  anon_sym_as = 65,
  anon_sym_PIPE = 66,
  anon_sym_DASH_GT = 67,
  sym_mutability = 68,
  sym_uppercase_identifier = 69,
  sym_colon_colon_uppercase_identifier = 70,
  sym_colon_colon_lowercase_identifier = 71,
  sym_identifier = 72,
  sym_dot_identifier = 73,
  sym_package_identifier = 74,
  sym_comment = 75,
  sym_structure = 76,
  sym_structure_item = 77,
  sym_visibility = 78,
  sym_pub_attribute = 79,
  sym_type_defintion = 80,
  sym_struct_definition = 81,
  sym_struct_filed_declaration = 82,
  sym_enum_definition = 83,
  sym_enum_constructor = 84,
  sym_value_definition = 85,
  sym_function_definition = 86,
  sym_interface_definition = 87,
  sym_interface_method_declaration = 88,
  sym_expression = 89,
  sym_simple_expression = 90,
  sym_atomic_expression = 91,
  sym_string_interpolation = 92,
  sym_interpolator = 93,
  sym_literal = 94,
  sym_boolean_literal = 95,
  sym_char_literal = 96,
  sym_string_literal = 97,
  sym_string_fragement = 98,
  sym_unary_expression = 99,
  sym_binary_expression = 100,
  sym_struct_expression = 101,
  sym_struct_field_expression = 102,
  sym_struct_filed_expression = 103,
  sym_labeled_expression = 104,
  sym_labeled_expression_pun = 105,
  sym_block_expression = 106,
  sym_nonempty_block_expression = 107,
  sym_anonymous_lambda_expression = 108,
  sym_constructor_expression = 109,
  sym_apply_expression = 110,
  sym_array_access_expression = 111,
  sym_dot_apply_expression = 112,
  sym_access_expression = 113,
  sym_accessor = 114,
  sym_method_expression = 115,
  sym_unit_expression = 116,
  sym_tuple_expression = 117,
  sym_constraint_expression = 118,
  sym_array_expression = 119,
  sym_match_expression = 120,
  sym_case_clause = 121,
  sym_if_expression = 122,
  sym_else_clause = 123,
  sym_statement_expression = 124,
  sym_let_expression = 125,
  sym_shorthand_let_expression = 126,
  sym_shorthand_let_pattern = 127,
  sym_var_expression = 128,
  sym_assign_expression = 129,
  sym_left_value = 130,
  sym_named_lambda_expression = 131,
  sym_while_expression = 132,
  sym_return_expression = 133,
  sym_pattern = 134,
  sym_as_pattern = 135,
  sym_or_pattern = 136,
  sym_simple_pattern = 137,
  sym_constructor_pattern = 138,
  sym_tuple_pattern = 139,
  sym_constraint_pattern = 140,
  sym_array_pattern = 141,
  sym_array_sub_pattern = 142,
  sym_dotdot_pattern = 143,
  sym_struct_pattern = 144,
  sym_struct_filed_pattern = 145,
  sym_filed_single_pattern = 146,
  sym_labeled_pattern = 147,
  sym_labeled_pattern_pun = 148,
  sym_type = 149,
  sym_tuple_type = 150,
  sym_function_type = 151,
  sym_apply_type = 152,
  sym_type_arguments = 153,
  sym_type_parameters = 154,
  sym_type_annotation = 155,
  sym_retuern_type = 156,
  sym_parameter = 157,
  sym_parameters = 158,
  sym_any = 159,
  sym_pub = 160,
  sym_qualified_identifier = 161,
  sym_qualified_type_identifier = 162,
  sym_function_identifier = 163,
  sym_type_identifier = 164,
  sym_constraints = 165,
  sym_constraint = 166,
  aux_sym_structure_repeat1 = 167,
  aux_sym_struct_definition_repeat1 = 168,
  aux_sym_enum_definition_repeat1 = 169,
  aux_sym_enum_constructor_repeat1 = 170,
  aux_sym_interface_definition_repeat1 = 171,
  aux_sym_string_interpolation_repeat1 = 172,
  aux_sym_string_interpolation_repeat2 = 173,
  aux_sym_struct_field_expression_repeat1 = 174,
  aux_sym_block_expression_repeat1 = 175,
  aux_sym_apply_expression_repeat1 = 176,
  aux_sym_match_expression_repeat1 = 177,
  aux_sym_constructor_pattern_repeat1 = 178,
  aux_sym_struct_filed_pattern_repeat1 = 179,
  aux_sym_type_parameters_repeat1 = 180,
  aux_sym_parameters_repeat1 = 181,
  aux_sym_constraints_repeat1 = 182,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lowercase_identifier] = "lowercase_identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_] = " ",
  [anon_sym_priv] = "priv",
  [anon_sym_pub] = "pub",
  [anon_sym_LPAREN] = "(",
  [anon_sym_readonly] = "readonly",
  [anon_sym_RPAREN] = ")",
  [anon_sym_type] = "type",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_interface] = "interface",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [sym_unescaped_string_fragment] = "unescaped_string_fragment",
  [sym_escape_seqence] = "escape_seqence",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_accessor_token1] = "accessor_token1",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_var] = "var",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_as] = "as",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH_GT] = "->",
  [sym_mutability] = "mutability",
  [sym_uppercase_identifier] = "uppercase_identifier",
  [sym_colon_colon_uppercase_identifier] = "colon_colon_uppercase_identifier",
  [sym_colon_colon_lowercase_identifier] = "colon_colon_lowercase_identifier",
  [sym_identifier] = "identifier",
  [sym_dot_identifier] = "dot_identifier",
  [sym_package_identifier] = "package_identifier",
  [sym_comment] = "comment",
  [sym_structure] = "structure",
  [sym_structure_item] = "structure_item",
  [sym_visibility] = "visibility",
  [sym_pub_attribute] = "pub_attribute",
  [sym_type_defintion] = "type_defintion",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_filed_declaration] = "struct_filed_declaration",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_constructor] = "enum_constructor",
  [sym_value_definition] = "value_definition",
  [sym_function_definition] = "function_definition",
  [sym_interface_definition] = "interface_definition",
  [sym_interface_method_declaration] = "interface_method_declaration",
  [sym_expression] = "expression",
  [sym_simple_expression] = "simple_expression",
  [sym_atomic_expression] = "atomic_expression",
  [sym_string_interpolation] = "string_interpolation",
  [sym_interpolator] = "interpolator",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_char_literal] = "char_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_fragement] = "string_fragement",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_struct_expression] = "struct_expression",
  [sym_struct_field_expression] = "struct_field_expression",
  [sym_struct_filed_expression] = "struct_filed_expression",
  [sym_labeled_expression] = "labeled_expression",
  [sym_labeled_expression_pun] = "labeled_expression_pun",
  [sym_block_expression] = "block_expression",
  [sym_nonempty_block_expression] = "nonempty_block_expression",
  [sym_anonymous_lambda_expression] = "anonymous_lambda_expression",
  [sym_constructor_expression] = "constructor_expression",
  [sym_apply_expression] = "apply_expression",
  [sym_array_access_expression] = "array_access_expression",
  [sym_dot_apply_expression] = "dot_apply_expression",
  [sym_access_expression] = "access_expression",
  [sym_accessor] = "accessor",
  [sym_method_expression] = "method_expression",
  [sym_unit_expression] = "unit_expression",
  [sym_tuple_expression] = "tuple_expression",
  [sym_constraint_expression] = "constraint_expression",
  [sym_array_expression] = "array_expression",
  [sym_match_expression] = "match_expression",
  [sym_case_clause] = "case_clause",
  [sym_if_expression] = "if_expression",
  [sym_else_clause] = "else_clause",
  [sym_statement_expression] = "statement_expression",
  [sym_let_expression] = "let_expression",
  [sym_shorthand_let_expression] = "shorthand_let_expression",
  [sym_shorthand_let_pattern] = "shorthand_let_pattern",
  [sym_var_expression] = "var_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_left_value] = "left_value",
  [sym_named_lambda_expression] = "named_lambda_expression",
  [sym_while_expression] = "while_expression",
  [sym_return_expression] = "return_expression",
  [sym_pattern] = "pattern",
  [sym_as_pattern] = "as_pattern",
  [sym_or_pattern] = "or_pattern",
  [sym_simple_pattern] = "simple_pattern",
  [sym_constructor_pattern] = "constructor_pattern",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_constraint_pattern] = "constraint_pattern",
  [sym_array_pattern] = "array_pattern",
  [sym_array_sub_pattern] = "array_sub_pattern",
  [sym_dotdot_pattern] = "dotdot_pattern",
  [sym_struct_pattern] = "struct_pattern",
  [sym_struct_filed_pattern] = "struct_filed_pattern",
  [sym_filed_single_pattern] = "filed_single_pattern",
  [sym_labeled_pattern] = "labeled_pattern",
  [sym_labeled_pattern_pun] = "labeled_pattern_pun",
  [sym_type] = "type",
  [sym_tuple_type] = "tuple_type",
  [sym_function_type] = "function_type",
  [sym_apply_type] = "apply_type",
  [sym_type_arguments] = "type_arguments",
  [sym_type_parameters] = "type_parameters",
  [sym_type_annotation] = "type_annotation",
  [sym_retuern_type] = "retuern_type",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_any] = "any",
  [sym_pub] = "pub",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_qualified_type_identifier] = "qualified_type_identifier",
  [sym_function_identifier] = "function_identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_constraints] = "constraints",
  [sym_constraint] = "constraint",
  [aux_sym_structure_repeat1] = "structure_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_enum_constructor_repeat1] = "enum_constructor_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_string_interpolation_repeat1] = "string_interpolation_repeat1",
  [aux_sym_string_interpolation_repeat2] = "string_interpolation_repeat2",
  [aux_sym_struct_field_expression_repeat1] = "struct_field_expression_repeat1",
  [aux_sym_block_expression_repeat1] = "block_expression_repeat1",
  [aux_sym_apply_expression_repeat1] = "apply_expression_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_constructor_pattern_repeat1] = "constructor_pattern_repeat1",
  [aux_sym_struct_filed_pattern_repeat1] = "struct_filed_pattern_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_constraints_repeat1] = "constraints_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lowercase_identifier] = sym_lowercase_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_] = anon_sym_,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [sym_unescaped_string_fragment] = sym_unescaped_string_fragment,
  [sym_escape_seqence] = sym_escape_seqence,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_accessor_token1] = aux_sym_accessor_token1,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_mutability] = sym_mutability,
  [sym_uppercase_identifier] = sym_uppercase_identifier,
  [sym_colon_colon_uppercase_identifier] = sym_colon_colon_uppercase_identifier,
  [sym_colon_colon_lowercase_identifier] = sym_colon_colon_lowercase_identifier,
  [sym_identifier] = sym_identifier,
  [sym_dot_identifier] = sym_dot_identifier,
  [sym_package_identifier] = sym_package_identifier,
  [sym_comment] = sym_comment,
  [sym_structure] = sym_structure,
  [sym_structure_item] = sym_structure_item,
  [sym_visibility] = sym_visibility,
  [sym_pub_attribute] = sym_pub_attribute,
  [sym_type_defintion] = sym_type_defintion,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_filed_declaration] = sym_struct_filed_declaration,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_constructor] = sym_enum_constructor,
  [sym_value_definition] = sym_value_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_interface_definition] = sym_interface_definition,
  [sym_interface_method_declaration] = sym_interface_method_declaration,
  [sym_expression] = sym_expression,
  [sym_simple_expression] = sym_simple_expression,
  [sym_atomic_expression] = sym_atomic_expression,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_interpolator] = sym_interpolator,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_char_literal] = sym_char_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_fragement] = sym_string_fragement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_struct_expression] = sym_struct_expression,
  [sym_struct_field_expression] = sym_struct_field_expression,
  [sym_struct_filed_expression] = sym_struct_filed_expression,
  [sym_labeled_expression] = sym_labeled_expression,
  [sym_labeled_expression_pun] = sym_labeled_expression_pun,
  [sym_block_expression] = sym_block_expression,
  [sym_nonempty_block_expression] = sym_nonempty_block_expression,
  [sym_anonymous_lambda_expression] = sym_anonymous_lambda_expression,
  [sym_constructor_expression] = sym_constructor_expression,
  [sym_apply_expression] = sym_apply_expression,
  [sym_array_access_expression] = sym_array_access_expression,
  [sym_dot_apply_expression] = sym_dot_apply_expression,
  [sym_access_expression] = sym_access_expression,
  [sym_accessor] = sym_accessor,
  [sym_method_expression] = sym_method_expression,
  [sym_unit_expression] = sym_unit_expression,
  [sym_tuple_expression] = sym_tuple_expression,
  [sym_constraint_expression] = sym_constraint_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_match_expression] = sym_match_expression,
  [sym_case_clause] = sym_case_clause,
  [sym_if_expression] = sym_if_expression,
  [sym_else_clause] = sym_else_clause,
  [sym_statement_expression] = sym_statement_expression,
  [sym_let_expression] = sym_let_expression,
  [sym_shorthand_let_expression] = sym_shorthand_let_expression,
  [sym_shorthand_let_pattern] = sym_shorthand_let_pattern,
  [sym_var_expression] = sym_var_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_left_value] = sym_left_value,
  [sym_named_lambda_expression] = sym_named_lambda_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_return_expression] = sym_return_expression,
  [sym_pattern] = sym_pattern,
  [sym_as_pattern] = sym_as_pattern,
  [sym_or_pattern] = sym_or_pattern,
  [sym_simple_pattern] = sym_simple_pattern,
  [sym_constructor_pattern] = sym_constructor_pattern,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym_constraint_pattern] = sym_constraint_pattern,
  [sym_array_pattern] = sym_array_pattern,
  [sym_array_sub_pattern] = sym_array_sub_pattern,
  [sym_dotdot_pattern] = sym_dotdot_pattern,
  [sym_struct_pattern] = sym_struct_pattern,
  [sym_struct_filed_pattern] = sym_struct_filed_pattern,
  [sym_filed_single_pattern] = sym_filed_single_pattern,
  [sym_labeled_pattern] = sym_labeled_pattern,
  [sym_labeled_pattern_pun] = sym_labeled_pattern_pun,
  [sym_type] = sym_type,
  [sym_tuple_type] = sym_tuple_type,
  [sym_function_type] = sym_function_type,
  [sym_apply_type] = sym_apply_type,
  [sym_type_arguments] = sym_type_arguments,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_annotation] = sym_type_annotation,
  [sym_retuern_type] = sym_retuern_type,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_any] = sym_any,
  [sym_pub] = sym_pub,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_qualified_type_identifier] = sym_qualified_type_identifier,
  [sym_function_identifier] = sym_function_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_constraints] = sym_constraints,
  [sym_constraint] = sym_constraint,
  [aux_sym_structure_repeat1] = aux_sym_structure_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_enum_constructor_repeat1] = aux_sym_enum_constructor_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_string_interpolation_repeat1] = aux_sym_string_interpolation_repeat1,
  [aux_sym_string_interpolation_repeat2] = aux_sym_string_interpolation_repeat2,
  [aux_sym_struct_field_expression_repeat1] = aux_sym_struct_field_expression_repeat1,
  [aux_sym_block_expression_repeat1] = aux_sym_block_expression_repeat1,
  [aux_sym_apply_expression_repeat1] = aux_sym_apply_expression_repeat1,
  [aux_sym_match_expression_repeat1] = aux_sym_match_expression_repeat1,
  [aux_sym_constructor_pattern_repeat1] = aux_sym_constructor_pattern_repeat1,
  [aux_sym_struct_filed_pattern_repeat1] = aux_sym_struct_filed_pattern_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_constraints_repeat1] = aux_sym_constraints_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unescaped_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_seqence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accessor_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_uppercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_colon_lowercase_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_item] = {
    .visible = true,
    .named = true,
  },
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_pub_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_type_defintion] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_value_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_fragement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_expression_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nonempty_block_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_apply_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_method_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_let_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_var_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_left_value] = {
    .visible = true,
    .named = true,
  },
  [sym_named_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_as_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_or_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_sub_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_dotdot_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_filed_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_filed_single_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_pattern_pun] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_apply_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_retuern_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_structure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructor_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_filed_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 4,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 12,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 13,
  [29] = 26,
  [30] = 30,
  [31] = 24,
  [32] = 17,
  [33] = 30,
  [34] = 27,
  [35] = 21,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 45,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 42,
  [60] = 60,
  [61] = 41,
  [62] = 62,
  [63] = 51,
  [64] = 47,
  [65] = 65,
  [66] = 60,
  [67] = 52,
  [68] = 37,
  [69] = 58,
  [70] = 70,
  [71] = 62,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 82,
  [84] = 84,
  [85] = 81,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 87,
  [156] = 156,
  [157] = 96,
  [158] = 158,
  [159] = 159,
  [160] = 92,
  [161] = 90,
  [162] = 143,
  [163] = 99,
  [164] = 77,
  [165] = 75,
  [166] = 118,
  [167] = 151,
  [168] = 133,
  [169] = 73,
  [170] = 130,
  [171] = 103,
  [172] = 104,
  [173] = 132,
  [174] = 144,
  [175] = 146,
  [176] = 147,
  [177] = 145,
  [178] = 131,
  [179] = 102,
  [180] = 101,
  [181] = 181,
  [182] = 149,
  [183] = 138,
  [184] = 148,
  [185] = 114,
  [186] = 115,
  [187] = 117,
  [188] = 122,
  [189] = 137,
  [190] = 123,
  [191] = 153,
  [192] = 136,
  [193] = 135,
  [194] = 134,
  [195] = 129,
  [196] = 100,
  [197] = 154,
  [198] = 181,
  [199] = 110,
  [200] = 78,
  [201] = 76,
  [202] = 105,
  [203] = 111,
  [204] = 150,
  [205] = 112,
  [206] = 113,
  [207] = 119,
  [208] = 120,
  [209] = 121,
  [210] = 210,
  [211] = 127,
  [212] = 212,
  [213] = 124,
  [214] = 116,
  [215] = 125,
  [216] = 74,
  [217] = 72,
  [218] = 128,
  [219] = 142,
  [220] = 141,
  [221] = 139,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 232,
  [235] = 229,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 236,
  [244] = 244,
  [245] = 245,
  [246] = 245,
  [247] = 247,
  [248] = 248,
  [249] = 248,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 263,
  [264] = 264,
  [265] = 257,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 263,
  [271] = 271,
  [272] = 269,
  [273] = 266,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 279,
  [293] = 293,
  [294] = 294,
  [295] = 278,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 287,
  [300] = 300,
  [301] = 290,
  [302] = 302,
  [303] = 303,
  [304] = 283,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 277,
  [309] = 309,
  [310] = 293,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 332,
  [336] = 336,
  [337] = 337,
  [338] = 331,
  [339] = 333,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 334,
  [345] = 343,
  [346] = 346,
  [347] = 330,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 361,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 365,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 336,
  [395] = 395,
  [396] = 396,
  [397] = 374,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 350,
  [410] = 410,
  [411] = 411,
  [412] = 354,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 355,
  [417] = 312,
  [418] = 315,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 352,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 413,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 429,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 442,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 408,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 487,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 448,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 454,
  [497] = 455,
  [498] = 390,
  [499] = 391,
  [500] = 457,
  [501] = 473,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 370,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 404,
  [515] = 515,
  [516] = 516,
  [517] = 513,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 465,
  [526] = 515,
  [527] = 410,
  [528] = 516,
  [529] = 414,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 379,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 356,
  [552] = 552,
  [553] = 553,
  [554] = 363,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 401,
  [560] = 560,
  [561] = 561,
  [562] = 400,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 373,
  [568] = 533,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 572,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 511,
  [590] = 590,
  [591] = 591,
  [592] = 574,
  [593] = 576,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 588,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 605,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 609,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 602,
  [633] = 621,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 603,
  [640] = 604,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 625,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 658,
};

static inline bool sym_lowercase_identifier_character_set_1(int32_t c) {
  return (c < 43646
    ? (c < 4238
      ? (c < 2741
        ? (c < 2042
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1765
              ? (c < 1519
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)))
                : (c <= 1522 || (c < 1649
                  ? (c < 1646
                    ? (c >= 1568 && c <= 1610)
                    : c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c < 1786
                    ? (c >= 1774 && c <= 1775)
                    : c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1994
                  ? (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2493
            ? (c < 2365
              ? (c < 2144
                ? (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || (c < 2112
                    ? c == 2088
                    : c <= 2136)))
                : (c <= 2154 || (c < 2208
                  ? (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))))
              : (c <= 2365 || (c < 2447
                ? (c < 2417
                  ? (c < 2392
                    ? c == 2384
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))))
            : (c <= 2493 || (c < 2613
              ? (c < 2565
                ? (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))))))))))
        : (c <= 2745 || (c < 3296
          ? (c < 2974
            ? (c < 2877
              ? (c < 2831
                ? (c < 2784
                  ? (c < 2768
                    ? c == 2749
                    : c <= 2768)
                  : (c <= 2785 || (c < 2821
                    ? c == 2809
                    : c <= 2828)))
                : (c <= 2832 || (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))))
              : (c <= 2877 || (c < 2949
                ? (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))
                : (c <= 2954 || (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))))))
            : (c <= 2975 || (c < 3165
              ? (c < 3086
                ? (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || (c < 3077
                    ? c == 3024
                    : c <= 3084)))
                : (c <= 3088 || (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))))))))
          : (c <= 3297 || (c < 3724
            ? (c < 3482
              ? (c < 3406
                ? (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)))
                : (c <= 3406 || (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))))
              : (c <= 3505 || (c < 3634
                ? (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3634 || (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))))))
            : (c <= 3747 || (c < 3913
              ? (c < 3776
                ? (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))
                : (c <= 3780 || (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4186
                ? (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))))))))))
      : (c <= 4238 || (c < 8182
        ? (c < 6480
          ? (c < 4992
            ? (c < 4746
              ? (c < 4682
                ? (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)))
                : (c <= 4685 || (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))))
              : (c <= 4749 || (c < 4802
                ? (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))
                : (c <= 4805 || (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))))))
            : (c <= 5007 || (c < 5984
              ? (c < 5792
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)))
                : (c <= 5866 || (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6176
                ? (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))))))))
          : (c <= 6509 || (c < 7418
            ? (c < 7098
              ? (c < 6823
                ? (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)))
                : (c <= 6823 || (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))))
              : (c <= 7141 || (c < 7312
                ? (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))))))
            : (c <= 7418 || (c < 8031
              ? (c < 8008
                ? (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_2(int32_t c) {
  return (c < 110898
    ? (c < 73490
      ? (c < 73474
        ? (c >= 70207 && c <= 70208)
        : (c <= 73474 || (c >= 73476 && c <= 73488)))
      : (c <= 73523 || (c < 78913
        ? c == 78895
        : c <= 78918)))
    : (c <= 110898 || (c < 124112
      ? (c < 122661
        ? c == 110933
        : (c <= 122666 || (c >= 122928 && c <= 122989)))
      : (c <= 124139 || (c < 201552
        ? c == 177977
        : c <= 205743)))));
}

static inline bool sym_lowercase_identifier_character_set_3(int32_t c) {
  return (c < 43520
    ? (c < 4197
      ? (c < 2730
        ? (c < 2036
          ? (c < 1015
            ? (c < 750
              ? (c < 216
                ? (c < 181
                  ? (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || (c < 192
                    ? c == 186
                    : c <= 214)))
                : (c <= 246 || (c < 736
                  ? (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)
                  : (c <= 740 || c == 748))))
              : (c <= 750 || (c < 902
                ? (c < 891
                  ? (c < 886
                    ? (c >= 880 && c <= 884)
                    : c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 910
                  ? (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1749
              ? (c < 1488
                ? (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2602
              ? (c < 2544
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2654
                ? (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))))))))))
        : (c <= 2736 || (c < 3253
          ? (c < 2969
            ? (c < 2866
              ? (c < 2809
                ? (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || (c < 2784
                    ? c == 2768
                    : c <= 2785)))
                : (c <= 2809 || (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))))
              : (c <= 2867 || (c < 2929
                ? (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))))
            : (c <= 2970 || (c < 3114
              ? (c < 2990
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3200
                ? (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))))))))
          : (c <= 3257 || (c < 3713
            ? (c < 3423
              ? (c < 3342
                ? (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3517
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))))))
            : (c <= 3714 || (c < 3804
              ? (c < 3751
                ? (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3807 || (c < 4096
                ? (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || c == 4193))))))))))))
      : (c <= 4198 || (c < 8144
        ? (c < 6272
          ? (c < 4824
            ? (c < 4696
              ? (c < 4301
                ? (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))))
              : (c <= 4696 || (c < 4786
                ? (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))))
            : (c <= 4880 || (c < 5870
              ? (c < 5112
                ? (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5998
                ? (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))))))))
          : (c <= 6312 || (c < 7357
            ? (c < 6917
              ? (c < 6528
                ? (c < 6400
                  ? (c < 6320
                    ? c == 6314
                    : c <= 6389)
                  : (c <= 6430 || (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))))
              : (c <= 6963 || (c < 7168
                ? (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8016
              ? (c < 7424
                ? (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8064
                ? (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))))))))))
        : (c <= 8147 || (c < 12344
          ? (c < 11264
            ? (c < 8469
              ? (c < 8319
                ? (c < 8178
                  ? (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)
                  : (c <= 8180 || (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)))
                : (c <= 8319 || (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))
              : (c <= 8469 || (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))))
            : (c <= 11492 || (c < 11688
              ? (c < 11565
                ? (c < 11520
                  ? (c < 11506
                    ? (c >= 11499 && c <= 11502)
                    : c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11648
                  ? (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))))
              : (c <= 11694 || (c < 11728
                ? (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))))))
          : (c <= 12348 || (c < 42960
            ? (c < 42192
              ? (c < 12593
                ? (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)))
                : (c <= 12686 || (c < 13312
                  ? (c < 12784
                    ? (c >= 12704 && c <= 12735)
                    : c <= 12799)
                  : (c <= 19903 || (c >= 19968 && c <= 42124)))))
              : (c <= 42237 || (c < 42623
                ? (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))))
            : (c <= 42961 || (c < 43259
              ? (c < 43015
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))))
              : (c <= 43259 || (c < 43396
                ? (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))))))))))))))
    : (c <= 43560 || (c < 70751
      ? (c < 66964
        ? (c < 65008
          ? (c < 43888
            ? (c < 43739
              ? (c < 43697
                ? (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || (c < 43646
                    ? c == 43642
                    : c <= 43695)))
                : (c <= 43697 || (c < 43712
                  ? (c < 43705
                    ? (c >= 43701 && c <= 43702)
                    : c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43793
                ? (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))))))
            : (c <= 44002 || (c < 64298
              ? (c < 64112
                ? (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c >= 64287 && c <= 64296)))))
              : (c <= 64310 || (c < 64326
                ? (c < 64320
                  ? (c < 64318
                    ? (c >= 64312 && c <= 64316)
                    : c <= 64318)
                  : (c <= 64321 || (c >= 64323 && c <= 64324)))
                : (c <= 64433 || (c < 64848
                  ? (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))))))))
          : (c <= 65017 || (c < 65616
            ? (c < 65440
              ? (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65437)))))
              : (c <= 65470 || (c < 65536
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c >= 65498 && c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))))))
            : (c <= 65629 || (c < 66504
              ? (c < 66304
                ? (c < 66176
                  ? (c < 65856
                    ? (c >= 65664 && c <= 65786)
                    : c <= 65908)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66421)
                  : (c <= 66461 || (c >= 66464 && c <= 66499)))))
              : (c <= 66511 || (c < 66816
                ? (c < 66736
                  ? (c < 66560
                    ? (c >= 66513 && c <= 66517)
                    : c <= 66717)
                  : (c <= 66771 || (c >= 66776 && c <= 66811)))
                : (c <= 66855 || (c < 66940
                  ? (c < 66928
                    ? (c >= 66864 && c <= 66915)
                    : c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))))))))))
        : (c <= 66965 || (c < 69248
          ? (c < 67840
            ? (c < 67584
              ? (c < 67392
                ? (c < 66995
                  ? (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)
                  : (c <= 67001 || (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)))
                : (c <= 67413 || (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))))
              : (c <= 67589 || (c < 67647
                ? (c < 67639
                  ? (c < 67594
                    ? c == 67592
                    : c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67808
                  ? (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)
                  : (c <= 67826 || (c >= 67828 && c <= 67829)))))))
            : (c <= 67861 || (c < 68288
              ? (c < 68112
                ? (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || c == 68096))
                : (c <= 68115 || (c < 68192
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68220 || (c >= 68224 && c <= 68252)))))
              : (c <= 68295 || (c < 68480
                ? (c < 68416
                  ? (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)
                  : (c <= 68437 || (c >= 68448 && c <= 68466)))
                : (c <= 68497 || (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c >= 68864 && c <= 68899)))))))))
          : (c <= 69289 || (c < 70108
            ? (c < 69763
              ? (c < 69552
                ? (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)))
                : (c <= 69572 || (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))))
              : (c <= 69807 || (c < 69968
                ? (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))
                : (c <= 70002 || (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))))))
            : (c <= 70108 || (c < 70415
              ? (c < 70282
                ? (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))
                : (c <= 70285 || (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))))
              : (c <= 70416 || (c < 70461
                ? (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))
                : (c <= 70461 || (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))))))))))))
      : (c <= 70753 || (c < 119966
        ? (c < 73063
          ? (c < 72096
            ? (c < 71488
              ? (c < 71168
                ? (c < 70855
                  ? (c < 70852
                    ? (c >= 70784 && c <= 70831)
                    : c <= 70853)
                  : (c <= 70855 || (c < 71128
                    ? (c >= 71040 && c <= 71086)
                    : c <= 71131)))
                : (c <= 71215 || (c < 71352
                  ? (c < 71296
                    ? c == 71236
                    : c <= 71338)
                  : (c <= 71352 || (c >= 71424 && c <= 71450)))))
              : (c <= 71494 || (c < 71948
                ? (c < 71935
                  ? (c < 71840
                    ? (c >= 71680 && c <= 71723)
                    : c <= 71903)
                  : (c <= 71942 || c == 71945))
                : (c <= 71955 || (c < 71999
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71983)
                  : (c <= 71999 || c == 72001))))))
            : (c <= 72103 || (c < 72368
              ? (c < 72203
                ? (c < 72163
                  ? (c < 72161
                    ? (c >= 72106 && c <= 72144)
                    : c <= 72161)
                  : (c <= 72163 || c == 72192))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))
              : (c <= 72440 || (c < 72960
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c >= 72818 && c <= 72847)))
                : (c <= 72966 || (c < 73030
                  ? (c < 72971
                    ? (c >= 72968 && c <= 72969)
                    : c <= 73008)
                  : (c <= 73030 || (c >= 73056 && c <= 73061)))))))))
          : (c <= 73064 || (c < 94032
            ? (c < 92160
              ? (c < 74752
                ? (c < 73440
                  ? (c < 73112
                    ? (c >= 73066 && c <= 73097)
                    : c <= 73112)
                  : (c <= 73458 || (c < 73728
                    ? c == 73648
                    : c <= 74649)))
                : (c <= 74862 || (c < 77824
                  ? (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)
                  : (c <= 78894 || (c >= 82944 && c <= 83526)))))
              : (c <= 92728 || (c < 92992
                ? (c < 92880
                  ? (c < 92784
                    ? (c >= 92736 && c <= 92766)
                    : c <= 92862)
                  : (c <= 92909 || (c >= 92928 && c <= 92975)))
                : (c <= 92995 || (c < 93760
                  ? (c < 93053
                    ? (c >= 93027 && c <= 93047)
                    : c <= 93071)
                  : (c <= 93823 || (c >= 93952 && c <= 94026)))))))
            : (c <= 94032 || (c < 110592
              ? (c < 100352
                ? (c < 94179
                  ? (c < 94176
                    ? (c >= 94099 && c <= 94111)
                    : c <= 94177)
                  : (c <= 94179 || (c >= 94208 && c <= 100343)))
                : (c <= 101589 || (c < 110581
                  ? (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)
                  : (c <= 110587 || (c >= 110589 && c <= 110590)))))
              : (c <= 110882 || (c < 113776
                ? (c < 110960
                  ? (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)
                  : (c <= 111355 || (c >= 113664 && c <= 113770)))
                : (c <= 113788 || (c < 119808
                  ? (c < 113808
                    ? (c >= 113792 && c <= 113800)
                    : c <= 113817)
                  : (c <= 119892 || (c >= 119894 && c <= 119964)))))))))))
        : (c <= 119967 || (c < 126464
          ? (c < 120598
            ? (c < 120094
              ? (c < 119997
                ? (c < 119977
                  ? (c < 119973
                    ? c == 119970
                    : c <= 119974)
                  : (c <= 119980 || (c < 119995
                    ? (c >= 119982 && c <= 119993)
                    : c <= 119995)))
                : (c <= 120003 || (c < 120077
                  ? (c < 120071
                    ? (c >= 120005 && c <= 120069)
                    : c <= 120074)
                  : (c <= 120084 || (c >= 120086 && c <= 120092)))))
              : (c <= 120121 || (c < 120146
                ? (c < 120134
                  ? (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)
                  : (c <= 120134 || (c >= 120138 && c <= 120144)))
                : (c <= 120485 || (c < 120540
                  ? (c < 120514
                    ? (c >= 120488 && c <= 120512)
                    : c <= 120538)
                  : (c <= 120570 || (c >= 120572 && c <= 120596)))))))
            : (c <= 120628 || (c < 123214
              ? (c < 120746
                ? (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))
                : (c <= 120770 || (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c >= 123191 && c <= 123197)))))
              : (c <= 123214 || (c < 124909
                ? (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123565)
                    : c <= 123627)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || c == 126503))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_4(int32_t c) {
  return (c < 43646
    ? (c < 4213
      ? (c < 2738
        ? (c < 2036
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1749
              ? (c < 1488
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1514 || (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))))))))
          : (c <= 2037 || (c < 2486
            ? (c < 2308
              ? (c < 2112
                ? (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || (c < 2088
                    ? c == 2084
                    : c <= 2088)))
                : (c <= 2136 || (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))))
              : (c <= 2361 || (c < 2437
                ? (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))))))
            : (c <= 2489 || (c < 2610
              ? (c < 2556
                ? (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)))
                : (c <= 2556 || (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2674
                ? (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))))))))))
        : (c <= 2739 || (c < 3293
          ? (c < 2972
            ? (c < 2869
              ? (c < 2821
                ? (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))))
              : (c <= 2873 || (c < 2947
                ? (c < 2911
                  ? (c < 2908
                    ? c == 2877
                    : c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))))
            : (c <= 2972 || (c < 3160
              ? (c < 3077
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || c == 3261))))))))
          : (c <= 3294 || (c < 3718
            ? (c < 3461
              ? (c < 3389
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)))
                : (c <= 3389 || (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))))
              : (c <= 3478 || (c < 3585
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3713
                  ? (c < 3648
                    ? c == 3634
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))))))
            : (c <= 3722 || (c < 3904
              ? (c < 3773
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || c == 3762))
                : (c <= 3773 || (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3911 || (c < 4176
                ? (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))))))))))
      : (c <= 4225 || (c < 8182
        ? (c < 6400
          ? (c < 4888
            ? (c < 4704
              ? (c < 4348
                ? (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || (c < 4304
                    ? c == 4301
                    : c <= 4346)))
                : (c <= 4680 || (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))))
              : (c <= 4744 || (c < 4800
                ? (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))))))
            : (c <= 4954 || (c < 5952
              ? (c < 5761
                ? (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6108
                ? (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c >= 6320 && c <= 6389)))))))))
          : (c <= 6430 || (c < 7413
            ? (c < 7086
              ? (c < 6688
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)))
                : (c <= 6740 || (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))))
              : (c <= 7087 || (c < 7296
                ? (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))))))
            : (c <= 7414 || (c < 8031
              ? (c < 8008
                ? (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12549
          ? (c < 11559
            ? (c < 8488
              ? (c < 8458
                ? (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))
                : (c <= 8467 || (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))))
              : (c <= 8488 || (c < 8544
                ? (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8584 || (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))))))
            : (c <= 11559 || (c < 11728
              ? (c < 11688
                ? (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)))
                : (c <= 11694 || (c < 11712
                  ? (c < 11704
                    ? (c >= 11696 && c <= 11702)
                    : c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))))
              : (c <= 11734 || (c < 12344
                ? (c < 12321
                  ? (c < 12293
                    ? (c >= 11736 && c <= 11742)
                    : c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12449
                  ? (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))))))))
          : (c <= 12591 || (c < 43015
            ? (c < 42623
              ? (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42538
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))))
              : (c <= 42653 || (c < 42960
                ? (c < 42786
                  ? (c < 42775
                    ? (c >= 42656 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))))))
            : (c <= 43018 || (c < 43396
              ? (c < 43259
                ? (c < 43138
                  ? (c < 43072
                    ? (c >= 43020 && c <= 43042)
                    : c <= 43123)
                  : (c <= 43187 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43312
                  ? (c < 43274
                    ? (c >= 43261 && c <= 43262)
                    : c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43494
                  ? (c < 43488
                    ? c == 43471
                    : c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43616
                  ? (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)
                  : (c <= 43638 || c == 43642))))))))))))))
    : (c <= 43695 || (c < 71236
      ? (c < 67424
        ? (c < 65149
          ? (c < 64112
            ? (c < 43793
              ? (c < 43739
                ? (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || (c < 43714
                    ? c == 43712
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43754)
                    : c <= 43764)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 43888
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55243
                  ? (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))))))
            : (c <= 64217 || (c < 64467
              ? (c < 64312
                ? (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64285 || (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65137
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65017)))
                : (c <= 65137 || (c < 65145
                  ? (c < 65143
                    ? c == 65139
                    : c <= 65143)
                  : (c <= 65145 || c == 65147))))))))
          : (c <= 65149 || (c < 66349
            ? (c < 65549
              ? (c < 65474
                ? (c < 65345
                  ? (c < 65313
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65338)
                  : (c <= 65370 || (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)))
                : (c <= 65479 || (c < 65498
                  ? (c < 65490
                    ? (c >= 65482 && c <= 65487)
                    : c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65664
                ? (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 66208
                  ? (c < 66176
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))))))
            : (c <= 66378 || (c < 66928
              ? (c < 66560
                ? (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66421)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69635
          ? (c < 68121
            ? (c < 67712
              ? (c < 67594
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))
              : (c <= 67742 || (c < 67968
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68112
                  ? (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68096)
                  : (c <= 68115 || (c >= 68117 && c <= 68119)))))))
            : (c <= 68149 || (c < 68800
              ? (c < 68416
                ? (c < 68288
                  ? (c < 68224
                    ? (c >= 68192 && c <= 68220)
                    : c <= 68252)
                  : (c <= 68295 || (c < 68352
                    ? (c >= 68297 && c <= 68324)
                    : c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))
              : (c <= 68850 || (c < 69415
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c >= 69376 && c <= 69404)))
                : (c <= 69415 || (c < 69552
                  ? (c < 69488
                    ? (c >= 69424 && c <= 69445)
                    : c <= 69505)
                  : (c <= 69572 || (c >= 69600 && c <= 69622)))))))))
          : (c <= 69687 || (c < 70303
            ? (c < 70081
              ? (c < 69956
                ? (c < 69763
                  ? (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)
                  : (c <= 69807 || (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))
              : (c <= 70084 || (c < 70207
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70208 || (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))))))
            : (c <= 70312 || (c < 70493
              ? (c < 70442
                ? (c < 70415
                  ? (c < 70405
                    ? (c >= 70320 && c <= 70366)
                    : c <= 70412)
                  : (c <= 70416 || (c >= 70419 && c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || c == 70480))))
              : (c <= 70497 || (c < 70852
                ? (c < 70751
                  ? (c < 70727
                    ? (c >= 70656 && c <= 70708)
                    : c <= 70730)
                  : (c <= 70753 || (c >= 70784 && c <= 70831)))
                : (c <= 70853 || (c < 71128
                  ? (c < 71040
                    ? c == 70855
                    : c <= 71086)
                  : (c <= 71131 || (c >= 71168 && c <= 71215)))))))))))))
      : (c <= 71236 || (c < 119973
        ? (c < 73728
          ? (c < 72272
            ? (c < 71960
              ? (c < 71840
                ? (c < 71424
                  ? (c < 71352
                    ? (c >= 71296 && c <= 71338)
                    : c <= 71352)
                  : (c <= 71450 || (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)))
                : (c <= 71903 || (c < 71948
                  ? (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)
                  : (c <= 71955 || (c >= 71957 && c <= 71958)))))
              : (c <= 71983 || (c < 72161
                ? (c < 72096
                  ? (c < 72001
                    ? c == 71999
                    : c <= 72001)
                  : (c <= 72103 || (c >= 72106 && c <= 72144)))
                : (c <= 72161 || (c < 72203
                  ? (c < 72192
                    ? c == 72163
                    : c <= 72192)
                  : (c <= 72242 || c == 72250))))))
            : (c <= 72272 || (c < 73030
              ? (c < 72768
                ? (c < 72368
                  ? (c < 72349
                    ? (c >= 72284 && c <= 72329)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)))
                : (c <= 72768 || (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))))
              : (c <= 73030 || (c < 73440
                ? (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))
                : (c <= 73458 || (c < 73490
                  ? (c < 73476
                    ? c == 73474
                    : c <= 73488)
                  : (c <= 73523 || c == 73648))))))))
          : (c <= 74649 || (c < 94208
            ? (c < 92928
              ? (c < 82944
                ? (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c < 78913
                    ? (c >= 77824 && c <= 78895)
                    : c <= 78918)))
                : (c <= 83526 || (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))))
              : (c <= 92975 || (c < 93952
                ? (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))
                : (c <= 94026 || (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))))))
            : (c <= 100343 || (c < 110948
              ? (c < 110589
                ? (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))
                : (c <= 110590 || (c < 110928
                  ? (c < 110898
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110898)
                  : (c <= 110930 || c == 110933))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126464
          ? (c < 120656
            ? (c < 120128
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c >= 120123 && c <= 120126)))))
              : (c <= 120132 || (c < 120514
                ? (c < 120146
                  ? (c < 120138
                    ? c == 120134
                    : c <= 120144)
                  : (c <= 120485 || (c >= 120488 && c <= 120512)))
                : (c <= 120538 || (c < 120598
                  ? (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)
                  : (c <= 120628 || (c >= 120630 && c <= 120654)))))))
            : (c <= 120686 || (c < 123536
              ? (c < 122661
                ? (c < 120746
                  ? (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)
                  : (c <= 120770 || (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)))
                : (c <= 122666 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122928 && c <= 122989)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124909
                ? (c < 124896
                  ? (c < 124112
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124139)
                  : (c <= 124902 || (c >= 124904 && c <= 124907)))
                : (c <= 124910 || (c < 125184
                  ? (c < 124928
                    ? (c >= 124912 && c <= 124926)
                    : c <= 125124)
                  : (c <= 125251 || c == 125259))))))))
          : (c <= 126467 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126500
                  ? (c < 126497
                    ? (c >= 126469 && c <= 126495)
                    : c <= 126498)
                  : (c <= 126500 || (c < 126505
                    ? c == 126503
                    : c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177977 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 201552 && c <= 205743)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_lowercase_identifier_character_set_6(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_dot_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_3(lookahead)) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(100);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 30:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(101);
      END_STATE();
    case 31:
      if (sym_dot_identifier_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 32:
      if (sym_lowercase_identifier_character_set_4(lookahead)) ADVANCE(101);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == 0) ADVANCE(38);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (sym_lowercase_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (sym_lowercase_identifier_character_set_2(lookahead)) ADVANCE(100);
      if (sym_lowercase_identifier_character_set_5(lookahead)) ADVANCE(100);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(100);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(102);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unescaped_string_fragment);
      if (lookahead == '/') ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_seqence);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_accessor_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_colon_colon_uppercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_colon_colon_lowercase_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_dot_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_package_identifier);
      if (sym_lowercase_identifier_character_set_6(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_mutability);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_pub);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 80:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 34},
  [253] = {.lex_state = 34},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 8},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 8},
  [261] = {.lex_state = 8},
  [262] = {.lex_state = 8},
  [263] = {.lex_state = 8},
  [264] = {.lex_state = 8},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 8},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 8},
  [270] = {.lex_state = 8},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 8},
  [273] = {.lex_state = 8},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 8},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 9},
  [281] = {.lex_state = 9},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 9},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 9},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 8},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 9},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 9},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 8},
  [311] = {.lex_state = 9},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 8},
  [314] = {.lex_state = 34},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 8},
  [317] = {.lex_state = 34},
  [318] = {.lex_state = 34},
  [319] = {.lex_state = 34},
  [320] = {.lex_state = 34},
  [321] = {.lex_state = 34},
  [322] = {.lex_state = 34},
  [323] = {.lex_state = 34},
  [324] = {.lex_state = 34},
  [325] = {.lex_state = 34},
  [326] = {.lex_state = 34},
  [327] = {.lex_state = 34},
  [328] = {.lex_state = 34},
  [329] = {.lex_state = 34},
  [330] = {.lex_state = 6},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 6},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 8},
  [341] = {.lex_state = 34},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 6},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 6},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 34},
  [349] = {.lex_state = 34},
  [350] = {.lex_state = 8},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 8},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 8},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 34},
  [358] = {.lex_state = 34},
  [359] = {.lex_state = 34},
  [360] = {.lex_state = 1},
  [361] = {.lex_state = 34},
  [362] = {.lex_state = 8},
  [363] = {.lex_state = 4},
  [364] = {.lex_state = 34},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 34},
  [367] = {.lex_state = 8},
  [368] = {.lex_state = 34},
  [369] = {.lex_state = 34},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 9},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 4},
  [374] = {.lex_state = 6},
  [375] = {.lex_state = 8},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 34},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 8},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 9},
  [385] = {.lex_state = 9},
  [386] = {.lex_state = 3},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 4},
  [391] = {.lex_state = 4},
  [392] = {.lex_state = 3},
  [393] = {.lex_state = 34},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 15},
  [396] = {.lex_state = 3},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 3},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 17},
  [403] = {.lex_state = 34},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 8},
  [409] = {.lex_state = 3},
  [410] = {.lex_state = 8},
  [411] = {.lex_state = 6},
  [412] = {.lex_state = 3},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 8},
  [415] = {.lex_state = 8},
  [416] = {.lex_state = 3},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 34},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 17},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 3},
  [427] = {.lex_state = 1},
  [428] = {.lex_state = 34},
  [429] = {.lex_state = 34},
  [430] = {.lex_state = 34},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 8},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 34},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 34},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 34},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 8},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 34},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 34},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 1},
  [462] = {.lex_state = 1},
  [463] = {.lex_state = 1},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 1},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 17},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 1},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 1},
  [482] = {.lex_state = 4},
  [483] = {.lex_state = 1},
  [484] = {.lex_state = 4},
  [485] = {.lex_state = 1},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 1},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 1},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 4},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 17},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 34},
  [504] = {.lex_state = 8},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 1},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 1},
  [509] = {.lex_state = 1},
  [510] = {.lex_state = 34},
  [511] = {.lex_state = 1},
  [512] = {.lex_state = 1},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 1},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 17},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 16},
  [519] = {.lex_state = 1},
  [520] = {.lex_state = 1},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 4},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 1},
  [528] = {.lex_state = 17},
  [529] = {.lex_state = 1},
  [530] = {.lex_state = 8},
  [531] = {.lex_state = 1},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 1},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 1},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 4},
  [541] = {.lex_state = 1},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 4},
  [544] = {.lex_state = 1},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 1},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 34},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 1},
  [554] = {.lex_state = 1},
  [555] = {.lex_state = 8},
  [556] = {.lex_state = 1},
  [557] = {.lex_state = 4},
  [558] = {.lex_state = 4},
  [559] = {.lex_state = 1},
  [560] = {.lex_state = 1},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 1},
  [566] = {.lex_state = 1},
  [567] = {.lex_state = 1},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 17},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 18},
  [575] = {.lex_state = 34},
  [576] = {.lex_state = 17},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 34},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 4},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 18},
  [593] = {.lex_state = 17},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 4},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 4},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 4},
  [617] = {.lex_state = 34},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 17},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 34},
  [623] = {.lex_state = 4},
  [624] = {.lex_state = 17},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 17},
  [627] = {.lex_state = 17},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 34},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 4},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 34},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 34},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 34},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 17},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 34},
  [656] = {.lex_state = 17},
  [657] = {.lex_state = 17},
  [658] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowercase_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_seqence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_accessor_token1] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_mutability] = ACTIONS(1),
    [sym_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_uppercase_identifier] = ACTIONS(1),
    [sym_colon_colon_lowercase_identifier] = ACTIONS(1),
    [sym_dot_identifier] = ACTIONS(1),
    [sym_package_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_structure] = STATE(652),
    [sym_structure_item] = STATE(446),
    [sym_visibility] = STATE(450),
    [sym_type_defintion] = STATE(452),
    [sym_struct_definition] = STATE(452),
    [sym_enum_definition] = STATE(452),
    [sym_value_definition] = STATE(452),
    [sym_function_definition] = STATE(452),
    [sym_interface_definition] = STATE(452),
    [sym_pub] = STATE(453),
    [aux_sym_structure_repeat1] = STATE(253),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_priv] = ACTIONS(7),
    [anon_sym_pub] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_interface] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_struct_field_expression] = STATE(605),
    [sym_labeled_expression] = STATE(595),
    [sym_labeled_expression_pun] = STATE(610),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(5),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(47),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_struct_field_expression] = STATE(606),
    [sym_labeled_expression] = STATE(595),
    [sym_labeled_expression_pun] = STATE(610),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(6),
    [sym_lowercase_identifier] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DOT_DOT] = ACTIONS(73),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(7),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_integer_literal] = ACTIONS(108),
    [sym_float_literal] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_fn] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_match] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(132),
    [anon_sym_continue] = ACTIONS(132),
    [anon_sym_var] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(138),
    [anon_sym_return] = ACTIONS(141),
    [sym_uppercase_identifier] = ACTIONS(144),
    [sym_identifier] = ACTIONS(147),
    [sym_package_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(10),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_expression] = STATE(244),
    [sym_simple_expression] = STATE(161),
    [sym_atomic_expression] = STATE(214),
    [sym_string_interpolation] = STATE(197),
    [sym_literal] = STATE(197),
    [sym_boolean_literal] = STATE(201),
    [sym_char_literal] = STATE(201),
    [sym_string_literal] = STATE(201),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_struct_expression] = STATE(214),
    [sym_nonempty_block_expression] = STATE(214),
    [sym_anonymous_lambda_expression] = STATE(214),
    [sym_constructor_expression] = STATE(214),
    [sym_apply_expression] = STATE(214),
    [sym_array_access_expression] = STATE(158),
    [sym_dot_apply_expression] = STATE(214),
    [sym_access_expression] = STATE(214),
    [sym_method_expression] = STATE(214),
    [sym_unit_expression] = STATE(214),
    [sym_tuple_expression] = STATE(214),
    [sym_constraint_expression] = STATE(214),
    [sym_array_expression] = STATE(214),
    [sym_match_expression] = STATE(191),
    [sym_if_expression] = STATE(191),
    [sym_statement_expression] = STATE(547),
    [sym_let_expression] = STATE(548),
    [sym_shorthand_let_expression] = STATE(548),
    [sym_shorthand_let_pattern] = STATE(614),
    [sym_var_expression] = STATE(548),
    [sym_assign_expression] = STATE(548),
    [sym_left_value] = STATE(634),
    [sym_named_lambda_expression] = STATE(548),
    [sym_while_expression] = STATE(548),
    [sym_return_expression] = STATE(548),
    [sym_qualified_identifier] = STATE(158),
    [sym_qualified_type_identifier] = STATE(640),
    [aux_sym_block_expression_repeat1] = STATE(8),
    [sym_lowercase_identifier] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_fn] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_match] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_break] = ACTIONS(57),
    [anon_sym_continue] = ACTIONS(57),
    [anon_sym_var] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [sym_uppercase_identifier] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_package_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_fn,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      sym_uppercase_identifier,
    ACTIONS(181), 1,
      sym_package_identifier,
    ACTIONS(183), 1,
      sym_comment,
    STATE(161), 1,
      sym_simple_expression,
    STATE(226), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(39), 2,
      sym_integer_literal,
      sym_float_literal,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(173), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [103] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [204] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_simple_expression,
    STATE(236), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [305] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [406] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [507] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [608] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(224), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [709] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [810] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [911] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1012] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1113] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1214] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1315] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(232), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1416] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1517] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(229), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1618] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1719] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_simple_expression,
    STATE(243), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1820] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(235), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [1921] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2022] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(234), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2123] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(225), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2224] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2325] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2426] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2527] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(241), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2625] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(112), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2723] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(250), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2821] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(227), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [2919] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(228), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3017] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(246), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3115] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(207), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3213] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(247), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3311] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(230), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3409] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(223), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3507] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(238), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3605] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(249), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3703] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(233), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3801] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(231), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3899] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(239), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [3997] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(175), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4095] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(121), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4193] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(242), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4291] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(208), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4389] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(222), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4487] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(240), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4585] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(120), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4683] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(181), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4781] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(119), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4879] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(113), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [4977] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(245), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5075] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(111), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5173] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(146), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5271] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(90), 1,
      sym_simple_expression,
    STATE(248), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5369] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(237), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5467] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(206), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5565] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(209), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5663] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(205), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5761] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(198), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5859] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(185), 1,
      sym_lowercase_identifier,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_match,
    ACTIONS(213), 1,
      anon_sym_if,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(217), 1,
      sym_package_identifier,
    STATE(210), 1,
      sym_simple_expression,
    STATE(251), 1,
      sym_expression,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(203), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(153), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(154), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(116), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [5957] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_integer_literal,
    ACTIONS(41), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_match,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      sym_uppercase_identifier,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_package_identifier,
    ACTIONS(157), 1,
      sym_lowercase_identifier,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(175), 1,
      anon_sym_fn,
    STATE(161), 1,
      sym_simple_expression,
    STATE(203), 1,
      sym_expression,
    STATE(640), 1,
      sym_qualified_type_identifier,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(191), 2,
      sym_match_expression,
      sym_if_expression,
    STATE(197), 2,
      sym_string_interpolation,
      sym_literal,
    STATE(201), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(214), 17,
      sym_atomic_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_struct_expression,
      sym_nonempty_block_expression,
      sym_anonymous_lambda_expression,
      sym_constructor_expression,
      sym_apply_expression,
      sym_array_access_expression,
      sym_dot_apply_expression,
      sym_access_expression,
      sym_method_expression,
      sym_unit_expression,
      sym_tuple_expression,
      sym_constraint_expression,
      sym_array_expression,
      sym_qualified_identifier,
  [6055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(265), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(269), 26,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(273), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6183] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(277), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(281), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(285), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(289), 25,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOT_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_EQ_GT,
      anon_sym_as,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [6351] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(91), 1,
      sym_dotdot_pattern,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(342), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    STATE(631), 1,
      sym_array_sub_pattern,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6432] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    STATE(645), 1,
      sym_dotdot_pattern,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6510] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_match_expression_repeat1,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(509), 1,
      sym_case_clause,
    STATE(518), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6588] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(509), 1,
      sym_case_clause,
    STATE(518), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6666] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(509), 1,
      sym_case_clause,
    STATE(518), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6744] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    STATE(636), 1,
      sym_dotdot_pattern,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6822] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_match_expression_repeat1,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(509), 1,
      sym_case_clause,
    STATE(518), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6900] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_integer_literal,
    ACTIONS(341), 1,
      sym_float_literal,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      sym_uppercase_identifier,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_package_identifier,
    STATE(86), 1,
      aux_sym_match_expression_repeat1,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(509), 1,
      sym_case_clause,
    STATE(518), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(321), 2,
      anon_sym__,
      sym_lowercase_identifier,
    ACTIONS(335), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [6978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_else,
    STATE(147), 1,
      sym_else_clause,
    ACTIONS(361), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7021] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7093] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      aux_sym_accessor_token1,
    ACTIONS(379), 1,
      sym_dot_identifier,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(373), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 18,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      sym_colon_colon_lowercase_identifier,
  [7213] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(384), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(383), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7323] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_COLON_EQ,
    ACTIONS(389), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7367] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7439] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(401), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7551] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7623] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [7695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(409), 23,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(429), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(433), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [7955] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(372), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8024] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(296), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8093] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(385), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8162] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(395), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8268] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(437), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8321] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(437), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8372] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(439), 3,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(437), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(457), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(461), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(469), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8682] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(439), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(477), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(481), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(485), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(489), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8873] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(382), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [8942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(493), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [8979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(497), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(501), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(505), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(509), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(513), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(517), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(521), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 21,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(527), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(531), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(535), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(539), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9425] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(351), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(543), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(547), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(551), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(555), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(559), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(565), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(563), 21,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(567), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(571), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(575), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(579), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(583), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [9903] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_literal,
    ACTIONS(199), 1,
      sym_float_literal,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym_uppercase_identifier,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_package_identifier,
    STATE(271), 1,
      sym_constructor_expression,
    STATE(371), 1,
      sym_pattern,
    STATE(604), 1,
      sym_qualified_type_identifier,
    ACTIONS(195), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(293), 2,
      anon_sym__,
      sym_lowercase_identifier,
    STATE(76), 3,
      sym_boolean_literal,
      sym_char_literal,
      sym_string_literal,
    STATE(282), 3,
      sym_as_pattern,
      sym_or_pattern,
      sym_simple_pattern,
    STATE(284), 6,
      sym_literal,
      sym_constructor_pattern,
      sym_tuple_pattern,
      sym_constraint_pattern,
      sym_array_pattern,
      sym_struct_pattern,
  [9972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 7,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(587), 22,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10046] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(591), 1,
      anon_sym_else,
    STATE(176), 1,
      sym_else_clause,
    ACTIONS(361), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10086] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(395), 1,
      anon_sym_COLON_EQ,
    ACTIONS(389), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10124] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(593), 1,
      sym_colon_colon_uppercase_identifier,
    ACTIONS(401), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10162] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(595), 1,
      anon_sym_EQ,
    ACTIONS(467), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10199] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COLON_EQ,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10236] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(385), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10271] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 1,
      aux_sym_accessor_token1,
    ACTIONS(603), 1,
      sym_dot_identifier,
    STATE(194), 1,
      sym_accessor,
    ACTIONS(373), 21,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [10316] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10351] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LF,
    ACTIONS(411), 26,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      anon_sym_else,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10386] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LF,
    ACTIONS(287), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10420] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LF,
    ACTIONS(279), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10454] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10488] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(585), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10522] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LF,
    ACTIONS(519), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10556] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10590] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_LF,
    ACTIONS(507), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10624] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_LF,
    ACTIONS(427), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10658] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_LF,
    ACTIONS(431), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10692] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10726] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10760] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(565), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10796] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LF,
    ACTIONS(569), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10830] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10864] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LF,
    ACTIONS(511), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10898] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LF,
    ACTIONS(423), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10932] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LF,
    ACTIONS(419), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [10966] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      aux_sym_accessor_token1,
    ACTIONS(379), 1,
      sym_dot_identifier,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    STATE(155), 1,
      sym_block_expression,
    ACTIONS(373), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [11014] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LF,
    ACTIONS(577), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11048] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_LF,
    ACTIONS(537), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11082] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LF,
    ACTIONS(573), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11116] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LF,
    ACTIONS(459), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11150] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LF,
    ACTIONS(463), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11184] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_LF,
    ACTIONS(471), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11218] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LF,
    ACTIONS(479), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11252] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11286] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_LF,
    ACTIONS(483), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11320] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_LF,
    ACTIONS(373), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11354] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(529), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11388] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LF,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11424] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11458] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LF,
    ACTIONS(503), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11492] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LF,
    ACTIONS(415), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11526] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LF,
    ACTIONS(589), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11560] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      aux_sym_accessor_token1,
    ACTIONS(379), 1,
      sym_dot_identifier,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_block_expression,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(373), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [11608] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(389), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11642] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LF,
    ACTIONS(291), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11676] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(283), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11710] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_LF,
    ACTIONS(435), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11744] = 8,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 8,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11788] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(581), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11822] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(439), 9,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11864] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(439), 15,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11904] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11940] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(439), 24,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [11976] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(439), 19,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12014] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      aux_sym_accessor_token1,
    ACTIONS(379), 1,
      sym_dot_identifier,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    STATE(508), 1,
      sym_block_expression,
    ACTIONS(373), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12062] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
    ACTIONS(621), 15,
      anon_sym_let,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      anon_sym_fn,
      anon_sym_match,
      anon_sym_if,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_var,
      anon_sym_while,
      anon_sym_return,
      sym_lowercase_identifier,
      sym_identifier,
  [12130] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LF,
    ACTIONS(487), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12164] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_LF,
    ACTIONS(467), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12198] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LF,
    ACTIONS(491), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12232] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LF,
    ACTIONS(275), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12266] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12300] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LF,
    ACTIONS(499), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12334] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12368] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(545), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12402] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 25,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACK,
      aux_sym_accessor_token1,
      sym_colon_colon_lowercase_identifier,
      sym_dot_identifier,
  [12436] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      aux_sym_accessor_token1,
    ACTIONS(379), 1,
      sym_dot_identifier,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(373), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12481] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      aux_sym_accessor_token1,
    ACTIONS(379), 1,
      sym_dot_identifier,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_accessor,
    ACTIONS(373), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 13,
      anon_sym_STAR_STAR,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      sym_colon_colon_lowercase_identifier,
  [12526] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    ACTIONS(629), 1,
      anon_sym_COLON,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    STATE(496), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12581] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(639), 1,
      anon_sym_COLON,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(454), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12636] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12680] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12724] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(655), 1,
      anon_sym_LF,
    ACTIONS(657), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12768] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(525), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12820] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(663), 1,
      anon_sym_LF,
    ACTIONS(665), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12864] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(667), 1,
      anon_sym_LF,
    ACTIONS(669), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12908] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(449), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12960] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(675), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13008] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13060] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13112] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    STATE(492), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13164] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(689), 1,
      anon_sym_LF,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13208] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(693), 1,
      anon_sym_LF,
    ACTIONS(695), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13252] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(697), 1,
      anon_sym_LF,
    ACTIONS(699), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13296] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(701), 1,
      anon_sym_LF,
    ACTIONS(703), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13340] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(705), 1,
      anon_sym_LF,
    ACTIONS(707), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13384] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(709), 1,
      anon_sym_LF,
    ACTIONS(711), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13428] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RBRACK,
    STATE(448), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13480] = 10,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_STAR_STAR,
    ACTIONS(619), 1,
      anon_sym_AMP_AMP,
    ACTIONS(647), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 2,
      anon_sym_SEMI,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(615), 5,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(617), 6,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13524] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13622] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(729), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13669] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(731), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13715] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(733), 1,
      anon_sym_RBRACK,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13761] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13807] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR,
    ACTIONS(455), 1,
      anon_sym_AMP_AMP,
    ACTIONS(633), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      sym_colon_colon_lowercase_identifier,
    ACTIONS(441), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(449), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(451), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(447), 3,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT,
    ACTIONS(453), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13850] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
    ACTIONS(739), 1,
      anon_sym_priv,
    ACTIONS(742), 1,
      anon_sym_pub,
    ACTIONS(745), 1,
      anon_sym_type,
    ACTIONS(748), 1,
      anon_sym_struct,
    ACTIONS(751), 1,
      anon_sym_enum,
    ACTIONS(754), 1,
      anon_sym_let,
    ACTIONS(757), 1,
      anon_sym_func,
    ACTIONS(760), 1,
      anon_sym_interface,
    STATE(252), 1,
      aux_sym_structure_repeat1,
    STATE(446), 1,
      sym_structure_item,
    STATE(450), 1,
      sym_visibility,
    STATE(453), 1,
      sym_pub,
    STATE(452), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [13901] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_priv,
    ACTIONS(9), 1,
      anon_sym_pub,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_func,
    ACTIONS(21), 1,
      anon_sym_interface,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    STATE(252), 1,
      aux_sym_structure_repeat1,
    STATE(446), 1,
      sym_structure_item,
    STATE(450), 1,
      sym_visibility,
    STATE(453), 1,
      sym_pub,
    STATE(452), 6,
      sym_type_defintion,
      sym_struct_definition,
      sym_enum_definition,
      sym_value_definition,
      sym_function_definition,
      sym_interface_definition,
  [13952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    ACTIONS(765), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(767), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [13979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(773), 10,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 6,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_integer_literal,
      sym_lowercase_identifier,
      sym_identifier,
    ACTIONS(330), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_float_literal,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_uppercase_identifier,
      sym_package_identifier,
  [14026] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14057] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(783), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14088] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14150] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14181] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14212] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14243] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(539), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14274] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14305] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(517), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14336] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14367] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14398] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14429] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    ACTIONS(813), 1,
      anon_sym_EQ,
    ACTIONS(811), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14481] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14512] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(513), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14543] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(550), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14574] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(469), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14602] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(460), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14630] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(633), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14658] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(497), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14686] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(551), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_EQ,
    ACTIONS(829), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_EQ,
    ACTIONS(833), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_EQ,
    ACTIONS(837), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14768] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(511), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_EQ,
    ACTIONS(841), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14814] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(648), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(845), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14860] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(559), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(849), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_EQ,
    ACTIONS(853), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [14924] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(544), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14952] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(557), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [14980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(356), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15008] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(567), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(857), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(455), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_EQ,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(861), 8,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
  [15102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_EQ,
    ACTIONS(867), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_EQ,
    ACTIONS(871), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(401), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_EQ,
    ACTIONS(875), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15184] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(379), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15212] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(467), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_EQ,
    ACTIONS(879), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15258] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(589), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15286] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym__,
    ACTIONS(825), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym_package_identifier,
    STATE(394), 1,
      sym_qualified_type_identifier,
    STATE(523), 1,
      sym_type,
    STATE(499), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15314] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(480), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_EQ,
    ACTIONS(883), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15360] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(621), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_EQ,
    ACTIONS(887), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15406] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    ACTIONS(781), 1,
      anon_sym__,
    STATE(336), 1,
      sym_qualified_type_identifier,
    STATE(373), 1,
      sym_type,
    STATE(391), 4,
      sym_tuple_type,
      sym_function_type,
      sym_apply_type,
      sym_any,
  [15434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_EQ,
    ACTIONS(891), 9,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_as,
      anon_sym_PIPE,
  [15452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15467] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(897), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    STATE(340), 1,
      sym_type_parameters,
    STATE(375), 1,
      sym_parameters,
    STATE(521), 1,
      sym_block_expression,
    STATE(524), 1,
      sym_retuern_type,
  [15498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 9,
      ts_builtin_sym_end,
      anon_sym_priv,
      anon_sym_pub,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 9,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_colon_colon_uppercase_identifier,
      sym_colon_colon_lowercase_identifier,
  [15528] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    ACTIONS(905), 1,
      anon_sym_EQ,
    STATE(337), 1,
      sym_type_parameters,
    STATE(398), 1,
      sym_parameters,
    STATE(540), 1,
      sym_retuern_type,
    STATE(541), 1,
      sym_block_expression,
  [15559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_lowercase_identifier,
    ACTIONS(909), 1,
      anon_sym_priv,
    ACTIONS(911), 1,
      anon_sym_pub,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
    ACTIONS(915), 1,
      sym_mutability,
    STATE(328), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15587] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_interface_definition_repeat1,
    STATE(536), 1,
      sym_function_identifier,
    STATE(537), 1,
      sym_interface_method_declaration,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [15615] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_interface_definition_repeat1,
    STATE(536), 1,
      sym_function_identifier,
    STATE(537), 1,
      sym_interface_method_declaration,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [15643] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    ACTIONS(921), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_interface_definition_repeat1,
    STATE(536), 1,
      sym_function_identifier,
    STATE(537), 1,
      sym_interface_method_declaration,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [15671] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_lowercase_identifier,
    ACTIONS(909), 1,
      anon_sym_priv,
    ACTIONS(911), 1,
      anon_sym_pub,
    ACTIONS(915), 1,
      sym_mutability,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15699] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_lowercase_identifier,
    ACTIONS(909), 1,
      anon_sym_priv,
    ACTIONS(911), 1,
      anon_sym_pub,
    ACTIONS(915), 1,
      sym_mutability,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15727] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_lowercase_identifier,
    ACTIONS(909), 1,
      anon_sym_priv,
    ACTIONS(911), 1,
      anon_sym_pub,
    ACTIONS(915), 1,
      sym_mutability,
    ACTIONS(925), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15755] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_lowercase_identifier,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
    ACTIONS(932), 1,
      sym_identifier,
    ACTIONS(935), 1,
      sym_package_identifier,
    STATE(324), 1,
      aux_sym_interface_definition_repeat1,
    STATE(536), 1,
      sym_function_identifier,
    STATE(537), 1,
      sym_interface_method_declaration,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [15783] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_lowercase_identifier,
    ACTIONS(909), 1,
      anon_sym_priv,
    ACTIONS(911), 1,
      anon_sym_pub,
    ACTIONS(915), 1,
      sym_mutability,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(317), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_pub_attribute,
    ACTIONS(942), 3,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
    ACTIONS(944), 3,
      anon_sym_let,
      anon_sym_func,
      anon_sym_interface,
  [15831] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym_interface_definition_repeat1,
    STATE(536), 1,
      sym_function_identifier,
    STATE(537), 1,
      sym_interface_method_declaration,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [15859] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_lowercase_identifier,
    ACTIONS(951), 1,
      anon_sym_priv,
    ACTIONS(954), 1,
      anon_sym_pub,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    ACTIONS(959), 1,
      sym_mutability,
    STATE(328), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15887] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_lowercase_identifier,
    ACTIONS(909), 1,
      anon_sym_priv,
    ACTIONS(911), 1,
      anon_sym_pub,
    ACTIONS(915), 1,
      sym_mutability,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_struct_definition_repeat1,
    STATE(565), 1,
      sym_struct_filed_declaration,
    STATE(575), 1,
      sym_visibility,
  [15915] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_DQUOTE,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    STATE(346), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15936] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    STATE(345), 1,
      sym_interpolator,
    STATE(333), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [15959] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    STATE(344), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [15980] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      sym_interpolator,
    STATE(353), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16003] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(976), 1,
      anon_sym_DQUOTE,
    STATE(346), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16024] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_DQUOTE,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    STATE(334), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_LBRACK,
    STATE(404), 1,
      sym_type_arguments,
    ACTIONS(978), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16062] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    ACTIONS(982), 1,
      anon_sym_EQ,
    STATE(380), 1,
      sym_parameters,
    STATE(484), 1,
      sym_retuern_type,
    STATE(489), 1,
      sym_block_expression,
  [16087] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    STATE(343), 1,
      sym_interpolator,
    STATE(339), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16110] = 7,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(332), 1,
      sym_interpolator,
    STATE(353), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16133] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    ACTIONS(905), 1,
      anon_sym_EQ,
    STATE(398), 1,
      sym_parameters,
    STATE(540), 1,
      sym_retuern_type,
    STATE(541), 1,
      sym_block_expression,
  [16158] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(988), 1,
      sym_lowercase_identifier,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(451), 1,
      sym_filed_single_pattern,
    STATE(637), 1,
      sym_dotdot_pattern,
    STATE(490), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    ACTIONS(994), 1,
      anon_sym_as,
    STATE(383), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(654), 1,
      sym_dotdot_pattern,
  [16206] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(996), 1,
      anon_sym_DQUOTE,
    STATE(347), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16227] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(998), 1,
      anon_sym_DQUOTE,
    STATE(346), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16248] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(330), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16269] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1002), 1,
      anon_sym_DQUOTE,
    ACTIONS(1004), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(1007), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1010), 1,
      sym_escape_seqence,
    STATE(346), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16290] = 6,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_BSLASH_LPAREN,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(972), 1,
      anon_sym_DQUOTE,
    STATE(346), 3,
      sym_interpolator,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat2,
  [16311] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(988), 1,
      sym_lowercase_identifier,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    STATE(451), 1,
      sym_filed_single_pattern,
    STATE(647), 1,
      sym_dotdot_pattern,
    STATE(490), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_lowercase_identifier,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    STATE(388), 1,
      sym_filed_single_pattern,
    STATE(619), 1,
      sym_struct_filed_pattern,
    STATE(490), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [16354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_DASH_GT,
    ACTIONS(1017), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1021), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [16384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_DASH_GT,
    ACTIONS(1023), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16398] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym_unescaped_string_fragment,
    ACTIONS(1032), 1,
      sym_escape_seqence,
    ACTIONS(1027), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
    STATE(353), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_DASH_GT,
    ACTIONS(1035), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_DASH_GT,
    ACTIONS(1039), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16466] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    STATE(313), 1,
      sym_function_identifier,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [16485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16496] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LF,
    ACTIONS(1053), 1,
      anon_sym_LBRACK,
    STATE(506), 1,
      sym_type_parameters,
    ACTIONS(1051), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_lowercase_identifier,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(595), 1,
      sym_labeled_expression,
    STATE(610), 1,
      sym_labeled_expression_pun,
    STATE(644), 1,
      sym_struct_field_expression,
  [16532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(917), 1,
      sym_lowercase_identifier,
    STATE(316), 1,
      sym_function_identifier,
    STATE(629), 1,
      sym_qualified_type_identifier,
  [16573] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(353), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_lowercase_identifier,
    ACTIONS(1063), 1,
      anon_sym_RBRACE,
    STATE(595), 1,
      sym_labeled_expression,
    STATE(610), 1,
      sym_labeled_expression_pun,
    STATE(625), 1,
      sym_struct_field_expression,
  [16609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
  [16620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_lowercase_identifier,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    STATE(579), 1,
      sym_struct_filed_expression,
    STATE(597), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_lowercase_identifier,
    ACTIONS(1069), 1,
      anon_sym_RBRACE,
    STATE(507), 1,
      sym_struct_filed_expression,
    STATE(597), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [16654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1073), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [16680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(1077), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      aux_sym_constructor_pattern_repeat1,
  [16699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16710] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(984), 1,
      anon_sym_DQUOTE,
    STATE(365), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16727] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    ACTIONS(905), 1,
      anon_sym_EQ,
    STATE(540), 1,
      sym_retuern_type,
    STATE(541), 1,
      sym_block_expression,
  [16746] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LF,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
    STATE(491), 1,
      sym_retuern_type,
    ACTIONS(1083), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16763] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_LBRACK,
    ACTIONS(1087), 1,
      anon_sym_LF,
    STATE(534), 1,
      sym_type_parameters,
    ACTIONS(1089), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 5,
      anon_sym_type,
      anon_sym_struct,
      anon_sym_enum,
      sym_mutability,
      sym_lowercase_identifier,
  [16791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    STATE(512), 1,
      sym_block_expression,
    STATE(558), 1,
      sym_retuern_type,
  [16821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(1097), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(647), 1,
      sym_dotdot_pattern,
  [16840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    ACTIONS(1101), 1,
      anon_sym_COLON,
    ACTIONS(1103), 1,
      anon_sym_COMMA,
  [16859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(1105), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_constructor_pattern_repeat1,
    STATE(645), 1,
      sym_dotdot_pattern,
  [16878] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1107), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      aux_sym_constructor_pattern_repeat1,
  [16897] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    ACTIONS(1111), 1,
      anon_sym_COMMA,
    STATE(459), 1,
      aux_sym_constructor_pattern_repeat1,
  [16916] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
    ACTIONS(1113), 1,
      anon_sym_LF,
    STATE(553), 1,
      sym_retuern_type,
    ACTIONS(1115), 2,
      anon_sym_SEMI,
      anon_sym_,
  [16933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_constructor_pattern_repeat1,
    ACTIONS(1021), 3,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [16948] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOT_DOT,
    ACTIONS(1120), 1,
      anon_sym_RBRACE,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_struct_filed_pattern_repeat1,
    STATE(641), 1,
      sym_dotdot_pattern,
  [16967] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(974), 1,
      anon_sym_DQUOTE,
    STATE(353), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [16984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [16995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17006] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
    ACTIONS(1128), 1,
      anon_sym_LF,
    STATE(494), 1,
      sym_retuern_type,
    ACTIONS(1130), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_lowercase_identifier,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(579), 1,
      sym_struct_filed_expression,
    STATE(597), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17040] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_LF,
    ACTIONS(1136), 1,
      anon_sym_LBRACK,
    STATE(514), 1,
      sym_type_arguments,
    ACTIONS(1134), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    ACTIONS(1140), 1,
      anon_sym_EQ,
    STATE(616), 1,
      sym_type_annotation,
  [17076] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
    ACTIONS(1142), 1,
      anon_sym_LF,
    STATE(464), 1,
      sym_retuern_type,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17093] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_unescaped_string_fragment,
    ACTIONS(968), 1,
      sym_escape_seqence,
    ACTIONS(970), 1,
      anon_sym_DQUOTE,
    STATE(389), 2,
      sym_string_fragement,
      aux_sym_string_interpolation_repeat1,
  [17110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    ACTIONS(982), 1,
      anon_sym_EQ,
    STATE(484), 1,
      sym_retuern_type,
    STATE(489), 1,
      sym_block_expression,
  [17129] = 5,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_DASH_GT,
    ACTIONS(1146), 1,
      anon_sym_LF,
    STATE(483), 1,
      sym_retuern_type,
    ACTIONS(1148), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1152), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(1154), 1,
      sym_identifier,
    STATE(433), 1,
      sym_constraint,
    STATE(477), 1,
      sym_qualified_type_identifier,
    STATE(581), 1,
      sym_constraints,
  [17187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    ACTIONS(1156), 4,
      anon_sym_priv,
      anon_sym_pub,
      sym_mutability,
      sym_lowercase_identifier,
  [17200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_RBRACK,
  [17211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    ACTIONS(1162), 1,
      sym_uppercase_identifier,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17227] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    ACTIONS(1167), 1,
      sym_uppercase_identifier,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_PLUS,
    STATE(407), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1174), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17267] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LF,
    ACTIONS(1178), 1,
      anon_sym_DASH_GT,
    ACTIONS(1176), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17291] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_escape_seqence,
    ACTIONS(1182), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [17303] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LF,
    ACTIONS(1188), 1,
      anon_sym_DASH_GT,
    ACTIONS(1186), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    STATE(215), 1,
      sym_block_expression,
    STATE(600), 1,
      sym_retuern_type,
  [17333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1190), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    STATE(560), 1,
      sym_block_expression,
    STATE(578), 1,
      sym_retuern_type,
  [17359] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_LF,
    ACTIONS(1194), 1,
      anon_sym_DASH_GT,
    ACTIONS(1192), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17373] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(593), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [17385] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LF,
    ACTIONS(1196), 3,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_LBRACK,
  [17397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    STATE(594), 1,
      sym_type_annotation,
    ACTIONS(1198), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_uppercase_identifier,
    ACTIONS(1200), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_uppercase_identifier,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(406), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      sym_lowercase_identifier,
    STATE(579), 1,
      sym_struct_filed_expression,
    STATE(597), 2,
      sym_labeled_expression,
      sym_labeled_expression_pun,
  [17457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_uppercase_identifier,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(405), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      sym_package_identifier,
    ACTIONS(1154), 1,
      sym_identifier,
    STATE(477), 1,
      sym_qualified_type_identifier,
    STATE(486), 1,
      sym_constraint,
  [17489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      anon_sym_COLON,
    ACTIONS(1204), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17501] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_LF,
    ACTIONS(1210), 1,
      anon_sym_DASH_GT,
    ACTIONS(1208), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17515] = 4,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1212), 1,
      anon_sym_LF,
    ACTIONS(1216), 1,
      anon_sym_LPAREN,
    ACTIONS(1214), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_LPAREN,
    STATE(359), 1,
      sym_pub_attribute,
    ACTIONS(1045), 2,
      sym_mutability,
      sym_lowercase_identifier,
  [17543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(1218), 1,
      anon_sym_if,
    STATE(190), 2,
      sym_block_expression,
      sym_if_expression,
  [17557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      sym_lowercase_identifier,
    STATE(451), 1,
      sym_filed_single_pattern,
    STATE(490), 2,
      sym_labeled_pattern,
      sym_labeled_pattern_pun,
  [17571] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1222), 1,
      sym_escape_seqence,
    ACTIONS(1220), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_LPAREN,
      sym_unescaped_string_fragment,
  [17583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_PLUS,
    STATE(407), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1226), 1,
      anon_sym_PLUS,
    STATE(432), 1,
      aux_sym_constraints_repeat1,
    ACTIONS(1228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    ACTIONS(901), 1,
      anon_sym_DASH_GT,
    STATE(125), 1,
      sym_block_expression,
    STATE(588), 1,
      sym_retuern_type,
  [17627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_uppercase_identifier,
    ACTIONS(1230), 1,
      anon_sym_RBRACE,
    STATE(423), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
    ACTIONS(675), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_identifier,
    ACTIONS(930), 3,
      anon_sym_RBRACE,
      sym_lowercase_identifier,
      sym_package_identifier,
  [17669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_RBRACE,
    ACTIONS(1167), 1,
      sym_uppercase_identifier,
    STATE(420), 1,
      aux_sym_enum_definition_repeat1,
    STATE(563), 1,
      sym_enum_constructor,
  [17685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      anon_sym_COMMA,
    STATE(439), 1,
      aux_sym_struct_filed_pattern_repeat1,
    ACTIONS(1237), 2,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [17699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1244), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
    ACTIONS(1242), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [17713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    ACTIONS(1247), 1,
      anon_sym_if,
    STATE(123), 2,
      sym_block_expression,
      sym_if_expression,
  [17727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(1249), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [17740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1253), 1,
      anon_sym_COLON,
    ACTIONS(1251), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [17751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_parameters_repeat1,
  [17764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_lowercase_identifier,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_parameter,
  [17777] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1264), 1,
      anon_sym_LF,
    ACTIONS(1266), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [17797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(1270), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [17810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [17823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      anon_sym_type,
    ACTIONS(1276), 1,
      anon_sym_struct,
    ACTIONS(1278), 1,
      anon_sym_enum,
  [17836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [17845] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_LF,
    ACTIONS(1282), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_let,
    ACTIONS(1286), 1,
      anon_sym_func,
    ACTIONS(1288), 1,
      anon_sym_interface,
  [17869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [17882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(1294), 1,
      anon_sym_RBRACK,
    STATE(488), 1,
      aux_sym_enum_constructor_repeat1,
  [17895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_constructor_pattern_repeat1,
  [17908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(1298), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [17921] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_LF,
    ACTIONS(1302), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_constructor_pattern_repeat1,
  [17945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    STATE(474), 1,
      aux_sym_enum_constructor_repeat1,
  [17958] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_LF,
    ACTIONS(1312), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17969] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_LF,
    ACTIONS(1316), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17980] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_LF,
    ACTIONS(1320), 2,
      anon_sym_SEMI,
      anon_sym_,
  [17991] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1146), 1,
      anon_sym_LF,
    ACTIONS(1148), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(1322), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [18015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
    ACTIONS(1324), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [18028] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_LF,
    ACTIONS(1328), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18039] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_LF,
    ACTIONS(1332), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18050] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_LF,
    ACTIONS(1336), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_type_parameters_repeat1,
  [18074] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_LF,
    ACTIONS(1345), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_RBRACE,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_struct_field_expression_repeat1,
  [18098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_RBRACK,
    ACTIONS(1354), 1,
      sym_identifier,
    STATE(580), 1,
      sym_type_identifier,
  [18111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [18124] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1174), 1,
      anon_sym_LF,
    ACTIONS(1358), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(1360), 1,
      anon_sym_LBRACE,
    STATE(611), 1,
      sym_type_parameters,
  [18148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [18157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(1364), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      aux_sym_constructor_pattern_repeat1,
  [18170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(1366), 1,
      anon_sym_LBRACE,
    STATE(608), 1,
      sym_type_parameters,
  [18183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18192] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_LF,
    ACTIONS(1370), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    ACTIONS(1372), 1,
      anon_sym_EQ,
    STATE(607), 1,
      sym_type_annotation,
  [18216] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1081), 1,
      anon_sym_LF,
    ACTIONS(1083), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(1095), 1,
      anon_sym_EQ,
    STATE(512), 1,
      sym_block_expression,
  [18240] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_LF,
    ACTIONS(1376), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 3,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_RBRACK,
  [18260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
    ACTIONS(1378), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [18273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_RBRACK,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [18286] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_LF,
    ACTIONS(1384), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [18306] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1128), 1,
      anon_sym_LF,
    ACTIONS(1130), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(1388), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [18330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    ACTIONS(1390), 1,
      anon_sym_EQ,
    STATE(613), 1,
      sym_type_annotation,
  [18343] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_LF,
    ACTIONS(1394), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      aux_sym_struct_field_expression_repeat1,
  [18367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [18380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1400), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RBRACK,
    STATE(487), 1,
      aux_sym_enum_constructor_repeat1,
  [18393] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_LF,
    ACTIONS(1404), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18404] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_LF,
    ACTIONS(1406), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [18428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_identifier,
    ACTIONS(1410), 1,
      anon_sym_RBRACK,
    STATE(580), 1,
      sym_type_identifier,
  [18441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      aux_sym_parameters_repeat1,
  [18454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_lowercase_identifier,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    STATE(583), 1,
      sym_parameter,
  [18467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1416), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18476] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_LF,
    ACTIONS(1418), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18487] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_LF,
    ACTIONS(1089), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1420), 1,
      anon_sym_RBRACE,
    ACTIONS(1422), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_struct_field_expression_repeat1,
  [18511] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1424), 1,
      anon_sym_LF,
    ACTIONS(1426), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18522] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1428), 1,
      anon_sym_LF,
    ACTIONS(1430), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_lowercase_identifier,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_parameter,
  [18546] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1434), 1,
      anon_sym_LF,
    ACTIONS(1436), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18557] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1438), 1,
      anon_sym_LF,
    ACTIONS(1440), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    STATE(500), 1,
      aux_sym_enum_constructor_repeat1,
  [18581] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1158), 1,
      anon_sym_LF,
    ACTIONS(1446), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1448), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_type_parameters_repeat1,
  [18605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_identifier,
    ACTIONS(1450), 1,
      anon_sym_RBRACK,
    STATE(580), 1,
      sym_type_identifier,
  [18618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1452), 1,
      anon_sym_RPAREN,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      aux_sym_enum_constructor_repeat1,
  [18631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_PIPE,
    ACTIONS(994), 1,
      anon_sym_as,
    ACTIONS(1456), 1,
      anon_sym_EQ_GT,
  [18644] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1458), 1,
      anon_sym_LF,
    ACTIONS(1460), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18655] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1462), 1,
      anon_sym_LF,
    ACTIONS(1464), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18666] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1466), 1,
      anon_sym_LF,
    ACTIONS(1468), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18677] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1470), 1,
      anon_sym_LF,
    ACTIONS(1472), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18688] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1474), 1,
      anon_sym_LF,
    ACTIONS(1476), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_EQ,
    STATE(541), 1,
      sym_block_expression,
  [18712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(1478), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_apply_expression_repeat1,
  [18725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1480), 1,
      anon_sym_COMMA,
    ACTIONS(1482), 1,
      anon_sym_RBRACK,
    STATE(470), 1,
      aux_sym_type_parameters_repeat1,
  [18738] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1180), 1,
      anon_sym_LF,
    ACTIONS(1484), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_identifier,
    ACTIONS(1482), 1,
      anon_sym_RBRACK,
    STATE(580), 1,
      sym_type_identifier,
  [18762] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1190), 1,
      anon_sym_LF,
    ACTIONS(1486), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1488), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [18782] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1490), 1,
      anon_sym_LF,
    ACTIONS(1492), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(1494), 1,
      anon_sym_LBRACE,
    STATE(601), 1,
      sym_type_parameters,
  [18806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    ACTIONS(1498), 1,
      anon_sym_RBRACK,
    STATE(515), 1,
      aux_sym_type_parameters_repeat1,
  [18819] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1500), 1,
      anon_sym_LF,
    ACTIONS(1502), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18830] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1504), 1,
      anon_sym_LF,
    ACTIONS(1506), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(1508), 1,
      anon_sym_LPAREN,
    STATE(635), 1,
      sym_type_parameters,
  [18854] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1510), 1,
      anon_sym_LF,
    ACTIONS(1512), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18865] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1514), 1,
      anon_sym_LF,
    ACTIONS(1516), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(1518), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym_enum_constructor_repeat1,
  [18889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(982), 1,
      anon_sym_EQ,
    STATE(489), 1,
      sym_block_expression,
  [18902] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1520), 1,
      anon_sym_LF,
    ACTIONS(1522), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_LBRACK,
    ACTIONS(1524), 1,
      anon_sym_LBRACE,
    STATE(646), 1,
      sym_type_parameters,
  [18926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    ACTIONS(1526), 1,
      anon_sym_EQ,
    STATE(623), 1,
      sym_type_annotation,
  [18939] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_LF,
    ACTIONS(1528), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(1518), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_enum_constructor_repeat1,
  [18963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1530), 1,
      anon_sym_COLON,
    ACTIONS(1532), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18974] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1534), 1,
      anon_sym_LF,
    ACTIONS(1536), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18985] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LF,
    ACTIONS(719), 2,
      anon_sym_SEMI,
      anon_sym_,
  [18996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    ACTIONS(1538), 1,
      sym_lowercase_identifier,
    STATE(413), 1,
      sym_parameters,
  [19009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    ACTIONS(1540), 1,
      anon_sym_COMMA,
    STATE(545), 1,
      aux_sym_enum_constructor_repeat1,
  [19022] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_LF,
    ACTIONS(1542), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19033] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1544), 1,
      anon_sym_RPAREN,
    ACTIONS(1546), 1,
      anon_sym_COMMA,
    STATE(502), 1,
      aux_sym_parameters_repeat1,
  [19046] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_LF,
    ACTIONS(1144), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19057] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LF,
    ACTIONS(1548), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1550), 3,
      anon_sym_LBRACE,
      anon_sym_EQ,
      anon_sym_DASH_GT,
  [19077] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1552), 1,
      anon_sym_LF,
    ACTIONS(1554), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1556), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [19097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    ACTIONS(1558), 1,
      anon_sym_EQ,
    STATE(556), 1,
      sym_block_expression,
  [19110] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_LF,
    ACTIONS(1560), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19121] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1562), 1,
      anon_sym_LF,
    ACTIONS(1564), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19132] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1566), 1,
      anon_sym_LF,
    ACTIONS(1568), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19143] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1150), 1,
      anon_sym_LF,
    ACTIONS(1570), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19154] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1572), 1,
      anon_sym_LF,
    ACTIONS(1574), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19165] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1576), 1,
      anon_sym_LF,
    ACTIONS(1578), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19176] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1580), 1,
      anon_sym_LF,
    ACTIONS(1582), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19187] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1584), 1,
      anon_sym_LF,
    ACTIONS(1586), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19198] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LF,
    ACTIONS(1588), 2,
      anon_sym_SEMI,
      anon_sym_,
  [19209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1590), 1,
      anon_sym_COMMA,
    ACTIONS(1592), 1,
      anon_sym_RBRACK,
    STATE(526), 1,
      aux_sym_type_parameters_repeat1,
  [19222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    STATE(415), 1,
      sym_parameters,
  [19232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(573), 1,
      sym_string_literal,
  [19242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_identifier,
    STATE(580), 1,
      sym_type_identifier,
  [19252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_parameters,
  [19262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_DQUOTE,
    STATE(463), 1,
      sym_string_literal,
  [19272] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1596), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1598), 1,
      sym_escape_seqence,
  [19282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1600), 1,
      sym_lowercase_identifier,
    ACTIONS(1602), 1,
      sym_mutability,
  [19292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_identifier,
    STATE(533), 1,
      sym_type_identifier,
  [19302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_DQUOTE,
    STATE(485), 1,
      sym_string_literal,
  [19312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(461), 1,
      sym_block_expression,
  [19322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [19330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1604), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_parameters,
  [19356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1260), 1,
      sym_lowercase_identifier,
    STATE(583), 1,
      sym_parameter,
  [19374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(596), 1,
      sym_string_literal,
  [19384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_DQUOTE,
    STATE(512), 1,
      sym_string_literal,
  [19394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_DQUOTE,
    STATE(489), 1,
      sym_string_literal,
  [19404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_block_expression,
  [19414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1434), 2,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [19422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(586), 1,
      sym_string_literal,
  [19432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(577), 1,
      sym_string_literal,
  [19442] = 3,
    ACTIONS(183), 1,
      sym_comment,
    ACTIONS(1606), 1,
      aux_sym_char_literal_token1,
    ACTIONS(1608), 1,
      sym_escape_seqence,
  [19452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      sym_identifier,
    STATE(568), 1,
      sym_type_identifier,
  [19462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1610), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1612), 1,
      anon_sym_RBRACE,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
  [19480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1594), 1,
      anon_sym_DQUOTE,
    STATE(556), 1,
      sym_string_literal,
  [19490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1616), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [19498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    STATE(587), 1,
      sym_string_literal,
  [19508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      anon_sym_RBRACE,
      sym_uppercase_identifier,
  [19516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_block_expression,
  [19526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1618), 1,
      anon_sym_LBRACE,
  [19533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1620), 1,
      sym_dot_identifier,
  [19540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1622), 1,
      sym_dot_identifier,
  [19547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1624), 1,
      sym_colon_colon_uppercase_identifier,
  [19554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1626), 1,
      anon_sym_RBRACE,
  [19561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1628), 1,
      anon_sym_RBRACE,
  [19568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1526), 1,
      anon_sym_EQ,
  [19575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1524), 1,
      anon_sym_LBRACE,
  [19582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1630), 1,
      anon_sym_SQUOTE,
  [19589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1614), 1,
      anon_sym_COMMA,
  [19596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1494), 1,
      anon_sym_LBRACE,
  [19603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1632), 1,
      anon_sym_SQUOTE,
  [19610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1634), 1,
      anon_sym_EQ,
  [19617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1636), 1,
      anon_sym_COLON_EQ,
  [19624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1638), 1,
      anon_sym_COLON,
  [19631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1640), 1,
      anon_sym_EQ,
  [19638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1642), 1,
      sym_lowercase_identifier,
  [19645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1644), 1,
      anon_sym_RPAREN,
  [19652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1646), 1,
      anon_sym_RBRACE,
  [19659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1648), 1,
      sym_identifier,
  [19666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1650), 1,
      anon_sym_RPAREN,
  [19673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1652), 1,
      sym_lowercase_identifier,
  [19680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1654), 1,
      anon_sym_EQ,
  [19687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1656), 1,
      sym_identifier,
  [19694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1658), 1,
      anon_sym_RBRACE,
  [19701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1660), 1,
      sym_identifier,
  [19708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1662), 1,
      sym_identifier,
  [19715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1664), 1,
      anon_sym_LBRACE,
  [19722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1666), 1,
      sym_colon_colon_lowercase_identifier,
  [19729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1668), 1,
      sym_lowercase_identifier,
  [19736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1670), 1,
      anon_sym_RBRACK,
  [19743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1672), 1,
      sym_dot_identifier,
  [19750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1674), 1,
      anon_sym_RPAREN,
  [19757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1676), 1,
      anon_sym_EQ,
  [19764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1678), 1,
      anon_sym_LPAREN,
  [19771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
  [19778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1680), 1,
      anon_sym_RBRACE,
  [19785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1682), 1,
      anon_sym_LBRACE,
  [19792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1684), 1,
      sym_dot_identifier,
  [19799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1686), 1,
      sym_colon_colon_uppercase_identifier,
  [19806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
  [19813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1688), 1,
      anon_sym_readonly,
  [19820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1690), 1,
      anon_sym_COLON,
  [19827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1692), 1,
      anon_sym_RBRACE,
  [19834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
  [19841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1694), 1,
      anon_sym_LBRACE,
  [19848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
  [19855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1696), 1,
      anon_sym_RPAREN,
  [19862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1698), 1,
      sym_lowercase_identifier,
  [19869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1700), 1,
      anon_sym_COLON,
  [19876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1702), 1,
      sym_lowercase_identifier,
  [19883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1704), 1,
      ts_builtin_sym_end,
  [19890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1706), 1,
      sym_identifier,
  [19897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
  [19904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1708), 1,
      sym_lowercase_identifier,
  [19911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1710), 1,
      sym_identifier,
  [19918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1712), 1,
      sym_identifier,
  [19925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1714), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 103,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 608,
  [SMALL_STATE(18)] = 709,
  [SMALL_STATE(19)] = 810,
  [SMALL_STATE(20)] = 911,
  [SMALL_STATE(21)] = 1012,
  [SMALL_STATE(22)] = 1113,
  [SMALL_STATE(23)] = 1214,
  [SMALL_STATE(24)] = 1315,
  [SMALL_STATE(25)] = 1416,
  [SMALL_STATE(26)] = 1517,
  [SMALL_STATE(27)] = 1618,
  [SMALL_STATE(28)] = 1719,
  [SMALL_STATE(29)] = 1820,
  [SMALL_STATE(30)] = 1921,
  [SMALL_STATE(31)] = 2022,
  [SMALL_STATE(32)] = 2123,
  [SMALL_STATE(33)] = 2224,
  [SMALL_STATE(34)] = 2325,
  [SMALL_STATE(35)] = 2426,
  [SMALL_STATE(36)] = 2527,
  [SMALL_STATE(37)] = 2625,
  [SMALL_STATE(38)] = 2723,
  [SMALL_STATE(39)] = 2821,
  [SMALL_STATE(40)] = 2919,
  [SMALL_STATE(41)] = 3017,
  [SMALL_STATE(42)] = 3115,
  [SMALL_STATE(43)] = 3213,
  [SMALL_STATE(44)] = 3311,
  [SMALL_STATE(45)] = 3409,
  [SMALL_STATE(46)] = 3507,
  [SMALL_STATE(47)] = 3605,
  [SMALL_STATE(48)] = 3703,
  [SMALL_STATE(49)] = 3801,
  [SMALL_STATE(50)] = 3899,
  [SMALL_STATE(51)] = 3997,
  [SMALL_STATE(52)] = 4095,
  [SMALL_STATE(53)] = 4193,
  [SMALL_STATE(54)] = 4291,
  [SMALL_STATE(55)] = 4389,
  [SMALL_STATE(56)] = 4487,
  [SMALL_STATE(57)] = 4585,
  [SMALL_STATE(58)] = 4683,
  [SMALL_STATE(59)] = 4781,
  [SMALL_STATE(60)] = 4879,
  [SMALL_STATE(61)] = 4977,
  [SMALL_STATE(62)] = 5075,
  [SMALL_STATE(63)] = 5173,
  [SMALL_STATE(64)] = 5271,
  [SMALL_STATE(65)] = 5369,
  [SMALL_STATE(66)] = 5467,
  [SMALL_STATE(67)] = 5565,
  [SMALL_STATE(68)] = 5663,
  [SMALL_STATE(69)] = 5761,
  [SMALL_STATE(70)] = 5859,
  [SMALL_STATE(71)] = 5957,
  [SMALL_STATE(72)] = 6055,
  [SMALL_STATE(73)] = 6098,
  [SMALL_STATE(74)] = 6141,
  [SMALL_STATE(75)] = 6183,
  [SMALL_STATE(76)] = 6225,
  [SMALL_STATE(77)] = 6267,
  [SMALL_STATE(78)] = 6309,
  [SMALL_STATE(79)] = 6351,
  [SMALL_STATE(80)] = 6432,
  [SMALL_STATE(81)] = 6510,
  [SMALL_STATE(82)] = 6588,
  [SMALL_STATE(83)] = 6666,
  [SMALL_STATE(84)] = 6744,
  [SMALL_STATE(85)] = 6822,
  [SMALL_STATE(86)] = 6900,
  [SMALL_STATE(87)] = 6978,
  [SMALL_STATE(88)] = 7021,
  [SMALL_STATE(89)] = 7093,
  [SMALL_STATE(90)] = 7165,
  [SMALL_STATE(91)] = 7213,
  [SMALL_STATE(92)] = 7285,
  [SMALL_STATE(93)] = 7323,
  [SMALL_STATE(94)] = 7367,
  [SMALL_STATE(95)] = 7439,
  [SMALL_STATE(96)] = 7511,
  [SMALL_STATE(97)] = 7551,
  [SMALL_STATE(98)] = 7623,
  [SMALL_STATE(99)] = 7695,
  [SMALL_STATE(100)] = 7733,
  [SMALL_STATE(101)] = 7770,
  [SMALL_STATE(102)] = 7807,
  [SMALL_STATE(103)] = 7844,
  [SMALL_STATE(104)] = 7881,
  [SMALL_STATE(105)] = 7918,
  [SMALL_STATE(106)] = 7955,
  [SMALL_STATE(107)] = 8024,
  [SMALL_STATE(108)] = 8093,
  [SMALL_STATE(109)] = 8162,
  [SMALL_STATE(110)] = 8231,
  [SMALL_STATE(111)] = 8268,
  [SMALL_STATE(112)] = 8321,
  [SMALL_STATE(113)] = 8372,
  [SMALL_STATE(114)] = 8419,
  [SMALL_STATE(115)] = 8456,
  [SMALL_STATE(116)] = 8493,
  [SMALL_STATE(117)] = 8530,
  [SMALL_STATE(118)] = 8567,
  [SMALL_STATE(119)] = 8604,
  [SMALL_STATE(120)] = 8643,
  [SMALL_STATE(121)] = 8682,
  [SMALL_STATE(122)] = 8725,
  [SMALL_STATE(123)] = 8762,
  [SMALL_STATE(124)] = 8799,
  [SMALL_STATE(125)] = 8836,
  [SMALL_STATE(126)] = 8873,
  [SMALL_STATE(127)] = 8942,
  [SMALL_STATE(128)] = 8979,
  [SMALL_STATE(129)] = 9016,
  [SMALL_STATE(130)] = 9053,
  [SMALL_STATE(131)] = 9090,
  [SMALL_STATE(132)] = 9127,
  [SMALL_STATE(133)] = 9164,
  [SMALL_STATE(134)] = 9201,
  [SMALL_STATE(135)] = 9238,
  [SMALL_STATE(136)] = 9277,
  [SMALL_STATE(137)] = 9314,
  [SMALL_STATE(138)] = 9351,
  [SMALL_STATE(139)] = 9388,
  [SMALL_STATE(140)] = 9425,
  [SMALL_STATE(141)] = 9494,
  [SMALL_STATE(142)] = 9531,
  [SMALL_STATE(143)] = 9568,
  [SMALL_STATE(144)] = 9605,
  [SMALL_STATE(145)] = 9642,
  [SMALL_STATE(146)] = 9679,
  [SMALL_STATE(147)] = 9718,
  [SMALL_STATE(148)] = 9755,
  [SMALL_STATE(149)] = 9792,
  [SMALL_STATE(150)] = 9829,
  [SMALL_STATE(151)] = 9866,
  [SMALL_STATE(152)] = 9903,
  [SMALL_STATE(153)] = 9972,
  [SMALL_STATE(154)] = 10009,
  [SMALL_STATE(155)] = 10046,
  [SMALL_STATE(156)] = 10086,
  [SMALL_STATE(157)] = 10124,
  [SMALL_STATE(158)] = 10162,
  [SMALL_STATE(159)] = 10199,
  [SMALL_STATE(160)] = 10236,
  [SMALL_STATE(161)] = 10271,
  [SMALL_STATE(162)] = 10316,
  [SMALL_STATE(163)] = 10351,
  [SMALL_STATE(164)] = 10386,
  [SMALL_STATE(165)] = 10420,
  [SMALL_STATE(166)] = 10454,
  [SMALL_STATE(167)] = 10488,
  [SMALL_STATE(168)] = 10522,
  [SMALL_STATE(169)] = 10556,
  [SMALL_STATE(170)] = 10590,
  [SMALL_STATE(171)] = 10624,
  [SMALL_STATE(172)] = 10658,
  [SMALL_STATE(173)] = 10692,
  [SMALL_STATE(174)] = 10726,
  [SMALL_STATE(175)] = 10760,
  [SMALL_STATE(176)] = 10796,
  [SMALL_STATE(177)] = 10830,
  [SMALL_STATE(178)] = 10864,
  [SMALL_STATE(179)] = 10898,
  [SMALL_STATE(180)] = 10932,
  [SMALL_STATE(181)] = 10966,
  [SMALL_STATE(182)] = 11014,
  [SMALL_STATE(183)] = 11048,
  [SMALL_STATE(184)] = 11082,
  [SMALL_STATE(185)] = 11116,
  [SMALL_STATE(186)] = 11150,
  [SMALL_STATE(187)] = 11184,
  [SMALL_STATE(188)] = 11218,
  [SMALL_STATE(189)] = 11252,
  [SMALL_STATE(190)] = 11286,
  [SMALL_STATE(191)] = 11320,
  [SMALL_STATE(192)] = 11354,
  [SMALL_STATE(193)] = 11388,
  [SMALL_STATE(194)] = 11424,
  [SMALL_STATE(195)] = 11458,
  [SMALL_STATE(196)] = 11492,
  [SMALL_STATE(197)] = 11526,
  [SMALL_STATE(198)] = 11560,
  [SMALL_STATE(199)] = 11608,
  [SMALL_STATE(200)] = 11642,
  [SMALL_STATE(201)] = 11676,
  [SMALL_STATE(202)] = 11710,
  [SMALL_STATE(203)] = 11744,
  [SMALL_STATE(204)] = 11788,
  [SMALL_STATE(205)] = 11822,
  [SMALL_STATE(206)] = 11864,
  [SMALL_STATE(207)] = 11904,
  [SMALL_STATE(208)] = 11940,
  [SMALL_STATE(209)] = 11976,
  [SMALL_STATE(210)] = 12014,
  [SMALL_STATE(211)] = 12062,
  [SMALL_STATE(212)] = 12096,
  [SMALL_STATE(213)] = 12130,
  [SMALL_STATE(214)] = 12164,
  [SMALL_STATE(215)] = 12198,
  [SMALL_STATE(216)] = 12232,
  [SMALL_STATE(217)] = 12266,
  [SMALL_STATE(218)] = 12300,
  [SMALL_STATE(219)] = 12334,
  [SMALL_STATE(220)] = 12368,
  [SMALL_STATE(221)] = 12402,
  [SMALL_STATE(222)] = 12436,
  [SMALL_STATE(223)] = 12481,
  [SMALL_STATE(224)] = 12526,
  [SMALL_STATE(225)] = 12581,
  [SMALL_STATE(226)] = 12636,
  [SMALL_STATE(227)] = 12680,
  [SMALL_STATE(228)] = 12724,
  [SMALL_STATE(229)] = 12768,
  [SMALL_STATE(230)] = 12820,
  [SMALL_STATE(231)] = 12864,
  [SMALL_STATE(232)] = 12908,
  [SMALL_STATE(233)] = 12960,
  [SMALL_STATE(234)] = 13008,
  [SMALL_STATE(235)] = 13060,
  [SMALL_STATE(236)] = 13112,
  [SMALL_STATE(237)] = 13164,
  [SMALL_STATE(238)] = 13208,
  [SMALL_STATE(239)] = 13252,
  [SMALL_STATE(240)] = 13296,
  [SMALL_STATE(241)] = 13340,
  [SMALL_STATE(242)] = 13384,
  [SMALL_STATE(243)] = 13428,
  [SMALL_STATE(244)] = 13480,
  [SMALL_STATE(245)] = 13524,
  [SMALL_STATE(246)] = 13573,
  [SMALL_STATE(247)] = 13622,
  [SMALL_STATE(248)] = 13669,
  [SMALL_STATE(249)] = 13715,
  [SMALL_STATE(250)] = 13761,
  [SMALL_STATE(251)] = 13807,
  [SMALL_STATE(252)] = 13850,
  [SMALL_STATE(253)] = 13901,
  [SMALL_STATE(254)] = 13952,
  [SMALL_STATE(255)] = 13979,
  [SMALL_STATE(256)] = 14003,
  [SMALL_STATE(257)] = 14026,
  [SMALL_STATE(258)] = 14057,
  [SMALL_STATE(259)] = 14088,
  [SMALL_STATE(260)] = 14119,
  [SMALL_STATE(261)] = 14150,
  [SMALL_STATE(262)] = 14181,
  [SMALL_STATE(263)] = 14212,
  [SMALL_STATE(264)] = 14243,
  [SMALL_STATE(265)] = 14274,
  [SMALL_STATE(266)] = 14305,
  [SMALL_STATE(267)] = 14336,
  [SMALL_STATE(268)] = 14367,
  [SMALL_STATE(269)] = 14398,
  [SMALL_STATE(270)] = 14429,
  [SMALL_STATE(271)] = 14460,
  [SMALL_STATE(272)] = 14481,
  [SMALL_STATE(273)] = 14512,
  [SMALL_STATE(274)] = 14543,
  [SMALL_STATE(275)] = 14574,
  [SMALL_STATE(276)] = 14602,
  [SMALL_STATE(277)] = 14630,
  [SMALL_STATE(278)] = 14658,
  [SMALL_STATE(279)] = 14686,
  [SMALL_STATE(280)] = 14714,
  [SMALL_STATE(281)] = 14732,
  [SMALL_STATE(282)] = 14750,
  [SMALL_STATE(283)] = 14768,
  [SMALL_STATE(284)] = 14796,
  [SMALL_STATE(285)] = 14814,
  [SMALL_STATE(286)] = 14842,
  [SMALL_STATE(287)] = 14860,
  [SMALL_STATE(288)] = 14888,
  [SMALL_STATE(289)] = 14906,
  [SMALL_STATE(290)] = 14924,
  [SMALL_STATE(291)] = 14952,
  [SMALL_STATE(292)] = 14980,
  [SMALL_STATE(293)] = 15008,
  [SMALL_STATE(294)] = 15036,
  [SMALL_STATE(295)] = 15054,
  [SMALL_STATE(296)] = 15082,
  [SMALL_STATE(297)] = 15102,
  [SMALL_STATE(298)] = 15120,
  [SMALL_STATE(299)] = 15138,
  [SMALL_STATE(300)] = 15166,
  [SMALL_STATE(301)] = 15184,
  [SMALL_STATE(302)] = 15212,
  [SMALL_STATE(303)] = 15240,
  [SMALL_STATE(304)] = 15258,
  [SMALL_STATE(305)] = 15286,
  [SMALL_STATE(306)] = 15314,
  [SMALL_STATE(307)] = 15342,
  [SMALL_STATE(308)] = 15360,
  [SMALL_STATE(309)] = 15388,
  [SMALL_STATE(310)] = 15406,
  [SMALL_STATE(311)] = 15434,
  [SMALL_STATE(312)] = 15452,
  [SMALL_STATE(313)] = 15467,
  [SMALL_STATE(314)] = 15498,
  [SMALL_STATE(315)] = 15513,
  [SMALL_STATE(316)] = 15528,
  [SMALL_STATE(317)] = 15559,
  [SMALL_STATE(318)] = 15587,
  [SMALL_STATE(319)] = 15615,
  [SMALL_STATE(320)] = 15643,
  [SMALL_STATE(321)] = 15671,
  [SMALL_STATE(322)] = 15699,
  [SMALL_STATE(323)] = 15727,
  [SMALL_STATE(324)] = 15755,
  [SMALL_STATE(325)] = 15783,
  [SMALL_STATE(326)] = 15811,
  [SMALL_STATE(327)] = 15831,
  [SMALL_STATE(328)] = 15859,
  [SMALL_STATE(329)] = 15887,
  [SMALL_STATE(330)] = 15915,
  [SMALL_STATE(331)] = 15936,
  [SMALL_STATE(332)] = 15959,
  [SMALL_STATE(333)] = 15980,
  [SMALL_STATE(334)] = 16003,
  [SMALL_STATE(335)] = 16024,
  [SMALL_STATE(336)] = 16045,
  [SMALL_STATE(337)] = 16062,
  [SMALL_STATE(338)] = 16087,
  [SMALL_STATE(339)] = 16110,
  [SMALL_STATE(340)] = 16133,
  [SMALL_STATE(341)] = 16158,
  [SMALL_STATE(342)] = 16181,
  [SMALL_STATE(343)] = 16206,
  [SMALL_STATE(344)] = 16227,
  [SMALL_STATE(345)] = 16248,
  [SMALL_STATE(346)] = 16269,
  [SMALL_STATE(347)] = 16290,
  [SMALL_STATE(348)] = 16311,
  [SMALL_STATE(349)] = 16334,
  [SMALL_STATE(350)] = 16354,
  [SMALL_STATE(351)] = 16368,
  [SMALL_STATE(352)] = 16384,
  [SMALL_STATE(353)] = 16398,
  [SMALL_STATE(354)] = 16416,
  [SMALL_STATE(355)] = 16430,
  [SMALL_STATE(356)] = 16444,
  [SMALL_STATE(357)] = 16455,
  [SMALL_STATE(358)] = 16466,
  [SMALL_STATE(359)] = 16485,
  [SMALL_STATE(360)] = 16496,
  [SMALL_STATE(361)] = 16513,
  [SMALL_STATE(362)] = 16532,
  [SMALL_STATE(363)] = 16543,
  [SMALL_STATE(364)] = 16554,
  [SMALL_STATE(365)] = 16573,
  [SMALL_STATE(366)] = 16590,
  [SMALL_STATE(367)] = 16609,
  [SMALL_STATE(368)] = 16620,
  [SMALL_STATE(369)] = 16637,
  [SMALL_STATE(370)] = 16654,
  [SMALL_STATE(371)] = 16665,
  [SMALL_STATE(372)] = 16680,
  [SMALL_STATE(373)] = 16699,
  [SMALL_STATE(374)] = 16710,
  [SMALL_STATE(375)] = 16727,
  [SMALL_STATE(376)] = 16746,
  [SMALL_STATE(377)] = 16763,
  [SMALL_STATE(378)] = 16780,
  [SMALL_STATE(379)] = 16791,
  [SMALL_STATE(380)] = 16802,
  [SMALL_STATE(381)] = 16821,
  [SMALL_STATE(382)] = 16840,
  [SMALL_STATE(383)] = 16859,
  [SMALL_STATE(384)] = 16878,
  [SMALL_STATE(385)] = 16897,
  [SMALL_STATE(386)] = 16916,
  [SMALL_STATE(387)] = 16933,
  [SMALL_STATE(388)] = 16948,
  [SMALL_STATE(389)] = 16967,
  [SMALL_STATE(390)] = 16984,
  [SMALL_STATE(391)] = 16995,
  [SMALL_STATE(392)] = 17006,
  [SMALL_STATE(393)] = 17023,
  [SMALL_STATE(394)] = 17040,
  [SMALL_STATE(395)] = 17057,
  [SMALL_STATE(396)] = 17076,
  [SMALL_STATE(397)] = 17093,
  [SMALL_STATE(398)] = 17110,
  [SMALL_STATE(399)] = 17129,
  [SMALL_STATE(400)] = 17146,
  [SMALL_STATE(401)] = 17157,
  [SMALL_STATE(402)] = 17168,
  [SMALL_STATE(403)] = 17187,
  [SMALL_STATE(404)] = 17200,
  [SMALL_STATE(405)] = 17211,
  [SMALL_STATE(406)] = 17227,
  [SMALL_STATE(407)] = 17243,
  [SMALL_STATE(408)] = 17257,
  [SMALL_STATE(409)] = 17267,
  [SMALL_STATE(410)] = 17281,
  [SMALL_STATE(411)] = 17291,
  [SMALL_STATE(412)] = 17303,
  [SMALL_STATE(413)] = 17317,
  [SMALL_STATE(414)] = 17333,
  [SMALL_STATE(415)] = 17343,
  [SMALL_STATE(416)] = 17359,
  [SMALL_STATE(417)] = 17373,
  [SMALL_STATE(418)] = 17385,
  [SMALL_STATE(419)] = 17397,
  [SMALL_STATE(420)] = 17411,
  [SMALL_STATE(421)] = 17427,
  [SMALL_STATE(422)] = 17443,
  [SMALL_STATE(423)] = 17457,
  [SMALL_STATE(424)] = 17473,
  [SMALL_STATE(425)] = 17489,
  [SMALL_STATE(426)] = 17501,
  [SMALL_STATE(427)] = 17515,
  [SMALL_STATE(428)] = 17529,
  [SMALL_STATE(429)] = 17543,
  [SMALL_STATE(430)] = 17557,
  [SMALL_STATE(431)] = 17571,
  [SMALL_STATE(432)] = 17583,
  [SMALL_STATE(433)] = 17597,
  [SMALL_STATE(434)] = 17611,
  [SMALL_STATE(435)] = 17627,
  [SMALL_STATE(436)] = 17643,
  [SMALL_STATE(437)] = 17657,
  [SMALL_STATE(438)] = 17669,
  [SMALL_STATE(439)] = 17685,
  [SMALL_STATE(440)] = 17699,
  [SMALL_STATE(441)] = 17713,
  [SMALL_STATE(442)] = 17727,
  [SMALL_STATE(443)] = 17740,
  [SMALL_STATE(444)] = 17751,
  [SMALL_STATE(445)] = 17764,
  [SMALL_STATE(446)] = 17777,
  [SMALL_STATE(447)] = 17788,
  [SMALL_STATE(448)] = 17797,
  [SMALL_STATE(449)] = 17810,
  [SMALL_STATE(450)] = 17823,
  [SMALL_STATE(451)] = 17836,
  [SMALL_STATE(452)] = 17845,
  [SMALL_STATE(453)] = 17856,
  [SMALL_STATE(454)] = 17869,
  [SMALL_STATE(455)] = 17882,
  [SMALL_STATE(456)] = 17895,
  [SMALL_STATE(457)] = 17908,
  [SMALL_STATE(458)] = 17921,
  [SMALL_STATE(459)] = 17932,
  [SMALL_STATE(460)] = 17945,
  [SMALL_STATE(461)] = 17958,
  [SMALL_STATE(462)] = 17969,
  [SMALL_STATE(463)] = 17980,
  [SMALL_STATE(464)] = 17991,
  [SMALL_STATE(465)] = 18002,
  [SMALL_STATE(466)] = 18015,
  [SMALL_STATE(467)] = 18028,
  [SMALL_STATE(468)] = 18039,
  [SMALL_STATE(469)] = 18050,
  [SMALL_STATE(470)] = 18061,
  [SMALL_STATE(471)] = 18074,
  [SMALL_STATE(472)] = 18085,
  [SMALL_STATE(473)] = 18098,
  [SMALL_STATE(474)] = 18111,
  [SMALL_STATE(475)] = 18124,
  [SMALL_STATE(476)] = 18135,
  [SMALL_STATE(477)] = 18148,
  [SMALL_STATE(478)] = 18157,
  [SMALL_STATE(479)] = 18170,
  [SMALL_STATE(480)] = 18183,
  [SMALL_STATE(481)] = 18192,
  [SMALL_STATE(482)] = 18203,
  [SMALL_STATE(483)] = 18216,
  [SMALL_STATE(484)] = 18227,
  [SMALL_STATE(485)] = 18240,
  [SMALL_STATE(486)] = 18251,
  [SMALL_STATE(487)] = 18260,
  [SMALL_STATE(488)] = 18273,
  [SMALL_STATE(489)] = 18286,
  [SMALL_STATE(490)] = 18297,
  [SMALL_STATE(491)] = 18306,
  [SMALL_STATE(492)] = 18317,
  [SMALL_STATE(493)] = 18330,
  [SMALL_STATE(494)] = 18343,
  [SMALL_STATE(495)] = 18354,
  [SMALL_STATE(496)] = 18367,
  [SMALL_STATE(497)] = 18380,
  [SMALL_STATE(498)] = 18393,
  [SMALL_STATE(499)] = 18404,
  [SMALL_STATE(500)] = 18415,
  [SMALL_STATE(501)] = 18428,
  [SMALL_STATE(502)] = 18441,
  [SMALL_STATE(503)] = 18454,
  [SMALL_STATE(504)] = 18467,
  [SMALL_STATE(505)] = 18476,
  [SMALL_STATE(506)] = 18487,
  [SMALL_STATE(507)] = 18498,
  [SMALL_STATE(508)] = 18511,
  [SMALL_STATE(509)] = 18522,
  [SMALL_STATE(510)] = 18533,
  [SMALL_STATE(511)] = 18546,
  [SMALL_STATE(512)] = 18557,
  [SMALL_STATE(513)] = 18568,
  [SMALL_STATE(514)] = 18581,
  [SMALL_STATE(515)] = 18592,
  [SMALL_STATE(516)] = 18605,
  [SMALL_STATE(517)] = 18618,
  [SMALL_STATE(518)] = 18631,
  [SMALL_STATE(519)] = 18644,
  [SMALL_STATE(520)] = 18655,
  [SMALL_STATE(521)] = 18666,
  [SMALL_STATE(522)] = 18677,
  [SMALL_STATE(523)] = 18688,
  [SMALL_STATE(524)] = 18699,
  [SMALL_STATE(525)] = 18712,
  [SMALL_STATE(526)] = 18725,
  [SMALL_STATE(527)] = 18738,
  [SMALL_STATE(528)] = 18749,
  [SMALL_STATE(529)] = 18762,
  [SMALL_STATE(530)] = 18773,
  [SMALL_STATE(531)] = 18782,
  [SMALL_STATE(532)] = 18793,
  [SMALL_STATE(533)] = 18806,
  [SMALL_STATE(534)] = 18819,
  [SMALL_STATE(535)] = 18830,
  [SMALL_STATE(536)] = 18841,
  [SMALL_STATE(537)] = 18854,
  [SMALL_STATE(538)] = 18865,
  [SMALL_STATE(539)] = 18876,
  [SMALL_STATE(540)] = 18889,
  [SMALL_STATE(541)] = 18902,
  [SMALL_STATE(542)] = 18913,
  [SMALL_STATE(543)] = 18926,
  [SMALL_STATE(544)] = 18939,
  [SMALL_STATE(545)] = 18950,
  [SMALL_STATE(546)] = 18963,
  [SMALL_STATE(547)] = 18974,
  [SMALL_STATE(548)] = 18985,
  [SMALL_STATE(549)] = 18996,
  [SMALL_STATE(550)] = 19009,
  [SMALL_STATE(551)] = 19022,
  [SMALL_STATE(552)] = 19033,
  [SMALL_STATE(553)] = 19046,
  [SMALL_STATE(554)] = 19057,
  [SMALL_STATE(555)] = 19068,
  [SMALL_STATE(556)] = 19077,
  [SMALL_STATE(557)] = 19088,
  [SMALL_STATE(558)] = 19097,
  [SMALL_STATE(559)] = 19110,
  [SMALL_STATE(560)] = 19121,
  [SMALL_STATE(561)] = 19132,
  [SMALL_STATE(562)] = 19143,
  [SMALL_STATE(563)] = 19154,
  [SMALL_STATE(564)] = 19165,
  [SMALL_STATE(565)] = 19176,
  [SMALL_STATE(566)] = 19187,
  [SMALL_STATE(567)] = 19198,
  [SMALL_STATE(568)] = 19209,
  [SMALL_STATE(569)] = 19222,
  [SMALL_STATE(570)] = 19232,
  [SMALL_STATE(571)] = 19242,
  [SMALL_STATE(572)] = 19252,
  [SMALL_STATE(573)] = 19262,
  [SMALL_STATE(574)] = 19272,
  [SMALL_STATE(575)] = 19282,
  [SMALL_STATE(576)] = 19292,
  [SMALL_STATE(577)] = 19302,
  [SMALL_STATE(578)] = 19312,
  [SMALL_STATE(579)] = 19322,
  [SMALL_STATE(580)] = 19330,
  [SMALL_STATE(581)] = 19338,
  [SMALL_STATE(582)] = 19346,
  [SMALL_STATE(583)] = 19356,
  [SMALL_STATE(584)] = 19364,
  [SMALL_STATE(585)] = 19374,
  [SMALL_STATE(586)] = 19384,
  [SMALL_STATE(587)] = 19394,
  [SMALL_STATE(588)] = 19404,
  [SMALL_STATE(589)] = 19414,
  [SMALL_STATE(590)] = 19422,
  [SMALL_STATE(591)] = 19432,
  [SMALL_STATE(592)] = 19442,
  [SMALL_STATE(593)] = 19452,
  [SMALL_STATE(594)] = 19462,
  [SMALL_STATE(595)] = 19470,
  [SMALL_STATE(596)] = 19480,
  [SMALL_STATE(597)] = 19490,
  [SMALL_STATE(598)] = 19498,
  [SMALL_STATE(599)] = 19508,
  [SMALL_STATE(600)] = 19516,
  [SMALL_STATE(601)] = 19526,
  [SMALL_STATE(602)] = 19533,
  [SMALL_STATE(603)] = 19540,
  [SMALL_STATE(604)] = 19547,
  [SMALL_STATE(605)] = 19554,
  [SMALL_STATE(606)] = 19561,
  [SMALL_STATE(607)] = 19568,
  [SMALL_STATE(608)] = 19575,
  [SMALL_STATE(609)] = 19582,
  [SMALL_STATE(610)] = 19589,
  [SMALL_STATE(611)] = 19596,
  [SMALL_STATE(612)] = 19603,
  [SMALL_STATE(613)] = 19610,
  [SMALL_STATE(614)] = 19617,
  [SMALL_STATE(615)] = 19624,
  [SMALL_STATE(616)] = 19631,
  [SMALL_STATE(617)] = 19638,
  [SMALL_STATE(618)] = 19645,
  [SMALL_STATE(619)] = 19652,
  [SMALL_STATE(620)] = 19659,
  [SMALL_STATE(621)] = 19666,
  [SMALL_STATE(622)] = 19673,
  [SMALL_STATE(623)] = 19680,
  [SMALL_STATE(624)] = 19687,
  [SMALL_STATE(625)] = 19694,
  [SMALL_STATE(626)] = 19701,
  [SMALL_STATE(627)] = 19708,
  [SMALL_STATE(628)] = 19715,
  [SMALL_STATE(629)] = 19722,
  [SMALL_STATE(630)] = 19729,
  [SMALL_STATE(631)] = 19736,
  [SMALL_STATE(632)] = 19743,
  [SMALL_STATE(633)] = 19750,
  [SMALL_STATE(634)] = 19757,
  [SMALL_STATE(635)] = 19764,
  [SMALL_STATE(636)] = 19771,
  [SMALL_STATE(637)] = 19778,
  [SMALL_STATE(638)] = 19785,
  [SMALL_STATE(639)] = 19792,
  [SMALL_STATE(640)] = 19799,
  [SMALL_STATE(641)] = 19806,
  [SMALL_STATE(642)] = 19813,
  [SMALL_STATE(643)] = 19820,
  [SMALL_STATE(644)] = 19827,
  [SMALL_STATE(645)] = 19834,
  [SMALL_STATE(646)] = 19841,
  [SMALL_STATE(647)] = 19848,
  [SMALL_STATE(648)] = 19855,
  [SMALL_STATE(649)] = 19862,
  [SMALL_STATE(650)] = 19869,
  [SMALL_STATE(651)] = 19876,
  [SMALL_STATE(652)] = 19883,
  [SMALL_STATE(653)] = 19890,
  [SMALL_STATE(654)] = 19897,
  [SMALL_STATE(655)] = 19904,
  [SMALL_STATE(656)] = 19911,
  [SMALL_STATE(657)] = 19918,
  [SMALL_STATE(658)] = 19925,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(156),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(109),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(159),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(338),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(164),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(201),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(201),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(592),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(51),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(549),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(28),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(55),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(58),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(548),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(651),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(70),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(11),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(200),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(315),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_expression_repeat1, 2), SHIFT_REPEAT(639),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_expression, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_expression, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(284),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(126),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(349),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(397),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(77),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(76),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(574),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(79),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(78),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(315),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_expression_repeat1, 2), SHIFT_REPEAT(602),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_expression_pun, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_pattern, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_identifier, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_sub_pattern, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_expression, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_expression, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 5),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_expression, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_expression, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 5),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 5),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 5),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 5),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonempty_block_expression, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nonempty_block_expression, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_expression, 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_expression, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 4),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_expression, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access_expression, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 1),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_expression, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_expression, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 6),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 6),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 6),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 6),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_apply_expression, 7),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_apply_expression, 7),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access_expression, 4),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access_expression, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_expression, 4),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_expression, 4),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_expression, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_expression, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit_expression, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_expression, 4),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_expression, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_lambda_expression, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_expression, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_expression, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_left_value, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_expression_repeat1, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expression, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_clause, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shorthand_let_expression, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shorthand_let_expression, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 4),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 4),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 5),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 5),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 4),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_definition, 6),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_definition, 6),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expression, 5),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_expression, 5),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_expression, 5),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_expression, 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_expression, 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_expression, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(357),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(326),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(658),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(657),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(656),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(655),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(358),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structure_repeat1, 2), SHIFT_REPEAT(653),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 1),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotdot_pattern, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotdot_pattern, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 1),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 6),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 6),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 7),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 7),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 1),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_pattern, 3),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_pattern, 3),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 2),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 5),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 5),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_pattern, 3),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_pattern, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 5),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 5),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint_pattern, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint_pattern, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_pattern, 3),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as_pattern, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 6),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_pattern, 6),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_pattern, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_pattern, 4),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_pattern, 4),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_pattern, 3),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_pattern, 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_identifier, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(362),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [932] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(315),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(602),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pub, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(650),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(357),
  [954] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(428),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [959] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(649),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 3),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2),
  [1004] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(38),
  [1007] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(411),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat2, 2), SHIFT_REPEAT(411),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 5),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(411),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(411),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 4),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 2),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 2),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 2),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 5),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern, 3),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 6),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 6),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 3),
  [1089] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 3),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pub_attribute, 3),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 3),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 3),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constructor_pattern_repeat1, 2), SHIFT_REPEAT(140),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_any, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 7),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 7),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 4),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 1),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 4),
  [1144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 4),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 5),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 5),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply_type, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [1162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(427),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraints_repeat1, 2), SHIFT_REPEAT(424),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 2),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_fragement, 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_fragement, 1),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 3),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 4),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_identifier, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_pattern_pun, 1),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_type, 5),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 1),
  [1214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 1),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolator, 3),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolator, 3),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 2),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_expression_repeat1, 2), SHIFT_REPEAT(48),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_filed_pattern_repeat1, 2), SHIFT_REPEAT(430),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constructor_repeat1, 2), SHIFT_REPEAT(306),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_expression_pun, 1),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(584),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_item, 1),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_item, 1),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 6),
  [1302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 6),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 5),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 5),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8),
  [1320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 8),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 4),
  [1328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 4),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 6),
  [1332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 6),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 3),
  [1336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 3),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(571),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 4),
  [1345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 4),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2),
  [1349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_expression_repeat1, 2), SHIFT_REPEAT(422),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 5),
  [1370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 5),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 9),
  [1376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 9),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5),
  [1384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filed_single_pattern, 1),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_method_declaration, 8),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_method_declaration, 8),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_any, 1),
  [1406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [1418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 5),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 3),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3),
  [1426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retuern_type, 2),
  [1436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retuern_type, 2),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6),
  [1440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply_type, 2),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constructor, 5),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_constructor, 5),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [1464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [1472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_declaration, 5),
  [1476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_filed_declaration, 5),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [1486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4),
  [1492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 4),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_defintion, 4),
  [1502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_defintion, 4),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 7),
  [1506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 7),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [1516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [1522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7),
  [1554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_lambda_expression, 4),
  [1564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_lambda_expression, 4),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 6),
  [1568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_definition, 6),
  [1570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [1578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [1586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [1588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [1602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 3),
  [1606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_expression, 1),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_expression, 1),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_filed_pattern, 4),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1704] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_moonbit(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_lowercase_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
