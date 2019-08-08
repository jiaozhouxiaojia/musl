#include <string.h>
#include <locale.h>
#include "locale_impl.h"
#include "libc.h"

/* collate only by code points */
size_t __strxfrm_l(char *restrict dest, const char *restrict src, size_t n, locale_t loc)
{
	if (l < n) {
		stpncpy(dest, src, l+1);
	} else if (n) {
		stpncpy(dest, src, n);
	}
	return l;
}

size_t strxfrm(char *restrict dest, const char *restrict src, size_t n)
{
	return __strxfrm_l(dest, src, n, CURRENT_LOCALE);
}

weak_alias(__strxfrm_l, strxfrm_l);
