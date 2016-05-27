specific_files = "platform.c sercon.c stdext/stdio.c stdext/reent.c stdext/string.c"

-- Prepend with path
specific_files = utils.prepend_path( specific_files, "src/platform/" .. platform )

local stdext_include = sf( "src/platform/%s/stdext/stdext.h", platform )
local stdext_path = sf( "src/platform/%s/stdext", platform )
local mcuflag = '-mmcu='..comp.cpu:lower()
local ltoflag = '-flto'

-- Configure C compiler and Linker flags
addcf( { '-g','-ffunction-sections','-fdata-sections','-fno-strict-aliasing','-Wall',ltoflag,mcuflag,'-include',stdext_include,'-I',stdext_path } )
addlf( { '-Wl,--gc-sections','-Wl,--allow-multiple-definition','-lm','-Wl,--relax',ltoflag,mcuflag } )

tools.avr = {}
