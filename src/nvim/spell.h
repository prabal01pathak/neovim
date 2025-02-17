#pragma once

#include <stdbool.h>

#include "nvim/ex_cmds_defs.h"  // IWYU pragma: keep
#include "nvim/globals.h"
#include "nvim/spell_defs.h"  // IWYU pragma: export
#include "nvim/vim.h"

/// First language that is loaded, start of the linked list of loaded languages.
extern slang_T *first_lang;

/// file used for "zG" and "zW"
extern char *int_wordlist;

extern spelltab_T spelltab;
extern int did_set_spelltab;

extern char *e_format;

// Remember what "z?" replaced.
extern char *repl_from;
extern char *repl_to;

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "spell.h.generated.h"
#endif
