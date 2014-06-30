#ifndef __Krieg_Vector2_h__
#define __Krieg_Vector2_h__

#include "Krieg_Math.h"
namespace KriegMath {
    template<typename _Treal>
	class Vector3 {
	  public:
		  Vector3<_Treal>(_Treal _x, _Treal _y, _Treal _z) : x(_x), y(_y), z(_z) {}
		  Vector3<_Treal>(_Treal _coords[3]) : x(_coords[0]), y(_coord[1]), z(_coord[2]) {}
		  Vector3<_Treal>(void) : x((_Treal)0), y((_Treal)0), z((Treal)0) {}

		  bool operator == (const Vector3<_Treal>& _other)
		    { return(x == _other.x && y == _other.y && z == _other.z); }
		  bool operator != (const Vector3<_Treal>& _other)
		    { return(x == _other.x && y == _other.y && z == _other.z); }

		  const Vector3<_Treal> operator - (const Vector3<_Treal>& _other)
		    {  return Vector3<_Treal>( x - _other.x, y - _other.y, z - _other.z); }
		  const Vector3<_Treal> operator + (const Vector3<_Treal>& _other)
		    { return Vector3<_Treal>(x + _other.x, y + _other.y, z + _other.z); }
		  const Vector3<_Treal> operator * (const Vector3<_Treal>& _other)
		    { return Vector3<_Treal>(x * _other.x, y * _other.y, z * _other.z); }
		  const Vector3<_Treal> operator / (const Vector3<_Treal>& _other)
		    { return Vector3<_Treal>(x / _other.x, y / _other.y, z / _other.z); }

		  const Vector3<_Treal> operator - (const _Treal _scale)
		    { return Vector3<_Treal>(x - _scale, y - _scale, z - _scale); }
		  const Vector3<_Treal> operator + (const _Treal _scale)
		    { return Vector3<_Treal>(x + _scale, y + _scale, z + _scale); }
		  const Vector3<_Treal> operator * (const _Treal _scale)
		    { return Vector3<_Treal>(x * _scale, y * _scale, z * _scale); }
		  const Vector3<_Treal> operator / (const _Treal _scale)
		    { return Vector3<_Treal>(x / _scale, y / _scale, z / _scale); }

		  friend const Vector3<_Treal>& operator -= (const Vector3<_Treal>& _other)
		    { x -= _other.x; y -= _other.y; z -= _other.z; return *this; }
		  friend const Vector3<_Treal>& operator += (const Vector3<_Treal>& _other)
		    { x += _other.x; y += _other.y; z += _other.z; return *this }
		  friend const Vector3<_Treal>& operator *= (const Vector3<_Treal>& _other)
		    { x *= _other.x; y *= _other.y; z *= _other.z; return *this }
		  friend const Vector3<_Treal>& operator /= (const Vector3<_Treal>& _other)
		    { x /= _other.x; y /= _other.y; z /= _other.z; return *this }

		  friend const Vector3<_Treal>& operator -= (const _Treal _scaler)
		    { x -= _scaler; y -= _scaler; z -= _scaler; return *this; }
		  friend const Vector3<_Treal>& operator += (const _Treal _scaler)
		    { x += _scaler; y += _scaler; z += _scaler; return *this }
		  friend const Vector3<_Treal>& operator *= (const _Treal _scaler)
		    { x *= _scaler; y *= _scaler; z *= _scaler; return *this }
		  friend const Vector3<_Treal>& operator /= (const _Treal _scaler)
		    { x /= _scaler; y /= _scaler; z /= _scaler; return *this }

		  _Treal get_x(void) { return x; }
		  _Treal get_y(void) { return y; }
		  _Treal get_z(void) { return z; }
	  public:
		  _Treal x, y, z;
	};
}
#endif // __Krieg_Vector2_h__
