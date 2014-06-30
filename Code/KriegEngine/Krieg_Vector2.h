#ifndef __Krieg_Vector2_h__
#define __Krieg_Vector2_h__

#include "Krieg_Math.h"
namespace KriegMath {
    template<typename _Treal>
	class Vector2 {
	  public:
		  Vector2<_Treal>(_Treal _x, _Treal _y, _Treal _z) : x(_x), y(_y) {}
		  Vector2<_Treal>(_Treal _coords[2]) : x(_coords[0]), y(_coord[1]) {}
		  Vector2<_Treal>(void) : x((_Treal)0), y((_Treal)0)) {}

		  bool operator == (const Vector2<_Treal>& _other)
		    { return(x == _other.x && y == _other.y); }
		  bool operator != (const Vector2<_Treal>& _other)
		    { return(x == _other.x && y == _other.y); }

		  const Vector2<_Treal> operator - (const Vector3<_Treal>& _other)
		    {  return Vector3<_Treal>( x - _other.x, y - _other.y); }
		  const Vector2<_Treal> operator + (const Vector3<_Treal>& _other)
		    { return Vector2<_Treal>(x + _other.x, y + _other.y); }
		  const Vector2<_Treal> operator * (const Vector3<_Treal>& _other)
		    { return Vector2<_Treal>(x * _other.x, y * _other.y); }
		  const Vector2<_Treal> operator / (const Vector3<_Treal>& _other)
		    { return Vector2<_Treal>(x / _other.x, y / _other.y); }

		  const Vector2<_Treal> operator - (const _Treal _scale)
		    { return Vector2<_Treal>(x - _scale, y - _scale); }
		  const Vector2<_Treal> operator + (const _Treal _scale)
		    { return Vector2<_Treal>(x + _scale, y + _scale); }
		  const Vector2<_Treal> operator * (const _Treal _scale)
		    { return Vector2<_Treal>(x * _scale, y * _scale); }
		  const Vector2<_Treal> operator / (const _Treal _scale)
		    { return Vector2<_Treal>(x / _scale, y / _scale); }

		  friend const Vector2<_Treal>& operator -= (const Vector3<_Treal>& _other)
		    { x -= _other.x; y -= _other.y; return *this; }
		  friend const Vector2<_Treal>& operator += (const Vector3<_Treal>& _other)
		    { x += _other.x; y += _other.y; return *this }
		  friend const Vector2<_Treal>& operator *= (const Vector3<_Treal>& _other)
		    { x *= _other.x; y *= _other.y;  return *this }
		  friend const Vector2<_Treal>& operator /= (const Vector3<_Treal>& _other)
		    { x /= _other.x; y /= _other.y; ; return *this }

		  friend const Vector2<_Treal>& operator -= (const _Treal _scaler)
		    { x -= _scaler; y -= _scaler; return *this; }
		  friend const Vector2<_Treal>& operator += (const _Treal _scaler)
		    { x += _scaler; y += _scaler; return *this }
		  friend const Vector2<_Treal>& operator *= (const _Treal _scaler)
		    { x *= _scaler; y *= _scaler;  return *this }
		  friend const Vector2<_Treal>& operator /= (const _Treal _scaler)
		    { x /= _scaler; y /= _scaler; ; return *this }

		  _Treal get_x(void) { return x; }
		  _Treal get_y(void) { return y; }
	  public:
		  _Treal x, y;
	};
}
#endif // __Krieg_Vector2_h__
