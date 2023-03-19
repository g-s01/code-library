set number
set relativenumber
set nocompatible
autocmd BufNewFile  *.cpp 0r /Users/gautamsharma/Desktop/Ultimate_Push/Templates/currentTemplate.cpp
set nowrap
set mouse=a
set tabstop=4
inoremap jj <Esc>
set laststatus=2
set backspace=indent,eol,start
syntax on
syntax enable
colorscheme monokai
map @ :w<bar>!g++ -std=c++17 -g -I. % -o %:r && ./%:r <CR>
vnoremap <C-c> "*y
