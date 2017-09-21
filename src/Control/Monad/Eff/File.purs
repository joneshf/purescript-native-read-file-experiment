module Control.Monad.Eff.File where

import Control.Monad.Eff (Eff)

foreign import data FILE :: !

foreign import readFile :: forall e. String -> Eff (file :: FILE | e) String
