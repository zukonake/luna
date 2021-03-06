/**
 * @file luna/auxiliary.hpp
 * @copyright Copyleft zukonake
 * @license Distributed under GNU General Public License Version 3
 */

#pragma once

#include <cstdint>
#include <cstddef>
#include <string>
//
#include <lua.hpp>
//
#include <luna/typedef.hpp>

/**
 * Contains auxiliary functions.
 */
namespace Luna::Auxiliary
{

/** 
 * Returns a type name for Type.
 */
std::string getTypeName( Type const &type ) noexcept;

/**
 * Default allocate function for State.
 *
 * @param ud UserData pointer.
 * @param ptr Allocated pointer.
 * @param osize Original size.
 * @param nsize New size.
 *
 * @return Allocated pointer.
 */
void *allocate( void *ud, void *ptr, std::size_t osize, std::size_t nsize );

/**
 * Default panic function for State.
 *
 * @return Success in reporting error.
 */
int panic( LuaState L );

}
