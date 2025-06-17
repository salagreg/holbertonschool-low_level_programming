#!/bin/bash
echo "(setq c-default-style \"bsd\"
     c-basic-offset 8
     tab-width 8
     indent-tabs-mode t)" > /root/.emacs

echo "(require 'whitespace)
     (setq whitespace-style '(face empty lines-tail trailing))
     (global-whitespace-mode t)" >> /root/.emacs
