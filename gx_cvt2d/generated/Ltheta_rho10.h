#include <Geex/symbolics/function.h>
namespace Geex {

   class Ltheta_rho10: public Function {
      public:
      Ltheta_rho10();
      virtual void eval(bool do_f, bool do_g, bool do_H) ;
   };
}
