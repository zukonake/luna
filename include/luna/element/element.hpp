/* luna/element/element.hpp
 * Copyleft zukonake
 * Distributed under GNU General Public License Version 3
 */

#pragma once

#include <luna/typedef.hpp>

namespace Luna
{

class RawStack;

class Element
{
public:
	explicit Element( const RawStack &stack, const Index &index = -1 );
	Element( Element &&that );

	virtual ~Element() = default;

	Element &operator=( Element &&that );

	virtual const Index &getIndex() const noexcept final;
protected:
	const RawStack &mRawStack;
private:
	Index mIndex;
};

}
