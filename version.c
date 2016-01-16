/*** version.c ****************************************************************
** 
** This file is part of BibTool.
** It is distributed under the GNU General Public License.
** See the file COPYING for details.
** 
** (c) 1996-2016 Gerd Neugebauer
** 
** Net: gene@gerd-neugebauer.de
** 
******************************************************************************/

#include <bibtool/error.h>

/*-----------------------------------------------------------------------------
** Variable:	bibtool_version
** Type:	char *
** Purpose:	This string variable contains the version number of
**		\BibTool. Usually it is of the form
**		\textit{major.minor} where \textit{major} and
**		\textit{minor} are the major and minor version
**		numbers.  In addition a post-fix like |alpha| or a
**		patch level like |p1| can be present.
**___________________________________________________			     */
char * bibtool_version = "2.62";		   /*                        */

/*-----------------------------------------------------------------------------
** Variable:	bibtool_year
** Type:	char *
** Purpose:	This string variable contains the publication year for this
**		version. 
**___________________________________________________			     */
char * bibtool_year = "2016";			   /*                        */

/*-----------------------------------------------------------------------------
** Function:	show_version()
** Purpose:	Print the version number and a short copyright notice
**		onto the error stream.
** Arguments:	none
** Returns:	nothing
**___________________________________________________			     */
void show_version()				   /*                        */
{						   /*                        */
  ErrPrintF2("BibTool Vers. %s (C) 1996-%s Gerd Neugebauer\n\n",/*           */
	     bibtool_version, bibtool_year);	   /*	                     */
}						   /*------------------------*/
