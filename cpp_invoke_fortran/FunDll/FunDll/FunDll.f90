!  FunDll.f90 
!
!  FUNCTIONS/SUBROUTINES exported from FunDll.dll:
!  FunDll - subroutine 
!
subroutine FunDll

  ! Expose subroutine FunDll to users of this DLL
  !
  !DEC$ ATTRIBUTES DLLEXPORT::FunDll

  ! Variables

 ! Body of FunDll

end subroutine FunDll

!The example has no subroutines that return values
subroutine mytest(a,b)
    ! Expose subroutine mytest to users of this DLL
    !

    !DEC$ ATTRIBUTES C,DLLEXPORT::mytest

    ! Variables
    ! Body of mytest

    integer ::a,b
    integer ::sum

    sum=a+b

end subroutine mytest
    
!The example has an integer operation that returns a value
!两数相加
integer function myadd(a,b) result(ans)
    implicit none

    !DEC$ ATTRIBUTES C,DLLEXPORT::myadd

    integer :: a,b
    ans=a+b

end function myadd
    
