#pragma once

#include "nvim/buffer_defs.h"  // IWYU pragma: keep
#include "nvim/ex_cmds_defs.h"  // IWYU pragma: keep
#include "nvim/pos.h"
#include "nvim/types.h"

typedef int (*IndentGetter)(void);

// flags for set_indent()
#define SIN_CHANGED     1       // call changed_bytes() when line changed
#define SIN_INSERT      2       // insert indent before existing text
#define SIN_UNDO        4       // save line for undo before changing it
#define SIN_NOMARK      8       // don't adjust extmarks

#ifdef INCLUDE_GENERATED_DECLARATIONS
# include "indent.h.generated.h"
#endif
