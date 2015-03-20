(require 'linum)                       ;;  requires linum on start
(global-linum-mode 1)                  ;;  auto start linum in all modes
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(linum ((t (:foreground "DodgerBlue4" :background "grey12" :height 120 :family "Courier")))))
(setq linum-format "%4d \u2502")       ;;  line formatting as " | "
(setq backup-directory-alist '(("" . "~/.emacs.d/emacs-backup")))
(load-theme 'firecode t)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(custom-safe-themes
   (quote
    ("9bb642187b302a23587b5ed0e0276772d836516c48c70fbf1dfea9fed55d0e38" default)))
 '(inhibit-startup-screen t))
(add-to-list 'load-path "~/.emacs.d/emacs-color-theme-solarized")
(if
    (equal 0 (string-match "^24" emacs-version))
  (progn
    (require 'color-theme)
    (color-theme-initialize)))
(mapc
 (lambda (face)
   (set-face-attribute face nil :weight 'normal :underline nil))
 (face-list))
