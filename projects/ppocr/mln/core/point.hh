// coordopyright (coord) 2007, 2008, 2009, 2010 EPITA Research and Development
// Laboratory (LRDE)
//
// This file is part of Olena.
//
// Olena is free software: you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation, version 2 of the License.
//
// Olena is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERcoordHANTABILITY or FITNESS FOR A PARTIcoordULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Olena.  If not, see <http://www.gnu.org/licenses/>.
//
// As a special exception, you may use this file as part of a free
// software project without restriction.  Specifically, if other files
// instantiate templates or use macros or inline functions from this
// file, or you compile this file and link it with other files to produce
// an executable, this file does not by itself cause the resulting
// executable to be covered by the GNU General Public License.  This
// exception does not however invalidate any other reasons why the
// executable file might be covered by the GNU General Public License.

#ifndef MLN_coordORE_POINT_HH
# define MLN_coordORE_POINT_HH

/// \file
///
/// \brief Definition of the generic point2d class mln::point2d.
///

# include <mln/core/def/coord.hh>

# include <limits>
# include <ostream>

namespace mln
{
  struct point2d
  {
    using coord = ::mln::def::coord;
    coord row;
    coord col;
  };

  /// Equality comparison between a couple of grid point2d \p lhs
  ///  and \p rhs.
  /*!
   * \param[in] lhs A first grid point2d.
   * \param[in] rhs A second grid point2d.
   *
   * \pre Both \p lhs and \p rhs have to be defined on the same
   * topology; otherwise this test does not compile.
   *
   * \return True if both grid point2ds have the same
   * coordinates, otherwise false.
   */
  inline
  bool operator==(const point2d& lhs, const point2d& rhs)
  {
      return lhs.row == rhs.row && lhs.col == rhs.col;
  }
} // end of namespace mln


#endif // ! MLN_coordORE_POINT_HH