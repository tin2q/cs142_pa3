
(*
 *  execute "coolc bad.cl" to see the error messages that the coolc parser
 *  generates
 *
 *  execute "myparser bad.cl" to see the error messages that your parser
 *  generates
 *)

(* no error *)
class A {
};

(* error:  b is not a type identifier *)
Class b inherits A {
};

(* error:  a is not a type identifier *)
Class C inherits a {
};

(* error:  keyword inherits is misspelled *)
Class D inherts A {
};

(* test for features attributes and methods *)
Class F inherits A {
  x : Int; (* normal *)
  x2: Int <- 5; (* normal assignment *)
  xee: Int = 6; (* forgot I'm not writing c *)
  xx2: A;
  method() : Object {

  };
  wronte(num : Int) Bool {

  };
  wrong(num : Int num2 : Bool) : Bool 
  {

  };
};

(* test for expressions *)
Class AS inherits A {
  oneExp () : Object {
    (new F).method() 
  };
  wrong(num : Int, num2: Bool) : Bool
  {
     self;
  };
};

Class e inherits A {

};

Class Expr {
  manyExp (): Object {
    {
      (new F).bad;
      self;
    }
  };
  anotherExp() : Object {
     {
        3+4;
        a@.
        self;
     }
  };
};

Class Test  {
  temp() : Object {
    (let s  , ss : String <- "lol", n : Int <- 0, n2 : Int in {
      self;
      }
    )
  };
  testlet2() : Object {
    (let s : String <- , n : Int <- 0 in {
        if true then self fi
      }
      )
  };

  testthree() : Object {
    self;
  };

};

Class s {

};

(* error:  closing brace is missing *)
Class E inherits A {
;

