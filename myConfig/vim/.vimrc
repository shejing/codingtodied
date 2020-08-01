syntax on                   " 自动语法高亮  
set number                  " 显示行号 
set nobackup                " VIM不产生swap文件
set ruler                   " 打开状态栏标尺  
set tabstop=4               " 设定 tab 长度为 4  
set cindent shiftwidth=4
set autoindent shiftwidth=4
set noswapfile				" 不产生swap文件
set ignorecase smartcase    " 搜索时忽略大小写，但在有一个或以上大写字母时仍保持对大小写敏感  
set incsearch               " 输入搜索内容时就显示搜索结果  
set hlsearch                " 搜索时高亮显示被找到的文本  
set novisualbell            " 关闭使用可视响铃代替呼叫  
set t_vb=                   " 置空错误铃声的终端代码  
set showmatch               " 插入括号时，短暂地跳转到匹配的对应括号  
set matchtime=2             " 短暂跳转到匹配括号的时间  
set hidden                  " 允许在有未保存的修改时切换缓冲区，此时的修改由 vim 负责保存  
set smartindent             " 开启新行时使用智能自动缩进  
set cmdheight=1             " 设定命令行的行数为 1  
" set mouse=a                 " 使用鼠标
set clipboard+=unnamed		" 与Windows共享剪贴板

" Stauesline
set laststatus=2
set statusline=
set statusline+=%-3.3n
"filename
set statusline+=%F\  
"flags
set statusline+=%h%m%r%w
set statusline+=%k
" right align
set statusline+=%=                           
" current char
"set statusline+=%2*0x%-8B\                   
" offset
set statusline+=%-10.(%l,%c%V%)\ %<%P        

"Show full tags when doing search completion
set showfulltag

"NerdCommenter 快捷键注释插件，映射'\'快捷键为','
let mapleader=","

"ctags
set tags=tags;/
set tags+=/opt/litao/.vim/tags/cpp

set cursorcolumn
set cursorline
set updatetime=1000

syntax on
syntax enable


"scheme molokai
set t_Co=256
colorscheme molokai
"colorscheme peaksea

"scheme PaperColor
"set t_Co=256
"set background=light
"colorscheme PaperColor

"scheme solarized
"let g:solarized_termcolors=256
"set background=dark
"colorscheme solarized

filetype plugin indent on
" show existing tab with 4 spaces width
set tabstop=4
" when indenting with '>', use 4 spaces width
set shiftwidth=4
" On pressing tab, insert 4 spaces
set expandtab

"Turn on Wild menu, Use the cool tab complete menu
set wildmenu
set wildignore+=*.o,*~
set suffixes+=.in,.a

"函数列表
"let Tlist_WinHerght=10
"let Tlist_WinWidth=25
let Tlist_Show_Menu=1
let Tlist_Show_One_File=1
let Tlist_Use_Left_Window=1
let Tlist_Exit_OnlyWindow=1
let Tlist_Use_SingleClick=1

let Tlist_File_Fold_Auto_Close=1
let Tlist_Compact_Format=1
let Tlist_Enable_Fold_Column=0
nnoremap <silent> ,t :TlistToggle<cr>

"关于NERDTree的快捷键
nnoremap <silent> ,d :NERDTree %:p:h<CR>
nnoremap <silent> <F5> :NERDTree %:p:h<CR>
let ERDTreeShowLineNumbers=1 " 显示行号
let NERDTreeWinPos="right" "窗口位置（'left' or 'right')
"let NERDTreeWreWinSize " 窗口宽
"let NERDTreeWinPos "窗口位置（'left' or 'right')
"let NERDTreeHighlightCursorline=1	" 是否高亮显示当前所在行

"Tab configuration
nnoremap <leader>tn :tabnew <cr>
nnoremap <leader>te :tabedit 
nnoremap <leader>tc :tabclose<cr>
nnoremap <leader>tm :tabmove 

"配置多语言环境
if has("multi_byte")
    " UTF-8 编码
    set encoding=utf-8
    set termencoding=utf-8
    set formatoptions+=mM
    set fencs=utf-8,gbk

    if v:lang =~? '^\(zh\)\|\(ja\)\|\(ko\)'
        set ambiwidth=double
    endif

    if has("win32")
        source $VIMRUNTIME/delmenu.vim
        source $VIMRUNTIME/menu.vim
        language messages zh_CN.utf-8
    endif
else
    echoerr "Sorry, this version of (g)vim was not compiled with +multi_byte"
endif

"窗口分割时,进行切换的按键热键需要连接两次,比如从下方窗口移动
"光标到上方窗口,需要<c-w><c-w>k,非常麻烦,现在重映射为<c-k>,切换的
"时候会变得非常方便.
nnoremap <C-h> <C-w>h
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k
nnoremap <C-l> <C-w>l

if version >= 603
    set helplang=cn
    set encoding=utf-8
endif

" Python 文件的一般设置，比如不要 tab 等

if has("autocmd")
	autocmd Filetype java setlocal omnifunc=javacomplete#Complete
	autocmd FileType python set tabstop=4 shiftwidth=4 expandtab
	autocmd FileType python map <F12> :!python %<CR>
endif

" 设置当文件被改动时自动载入
set autoread
" quickfix模式
autocmd FileType c,cpp map <buffer> <leader><space> :w<cr>:make<cr>
"代码补全 
set completeopt=preview,menu 
"允许插件  
filetype plugin on
set enc=utf-8
set fencs=utf-8,ucs-bom,shift-jis,gb18030,gbk,gb2312,cp936

	"					-- omnicppcomplete setting --
set completeopt=menu,menuone
let OmniCpp_MayCompleteDot = 1 " autocomplete with .
let OmniCpp_MayCompleteArrow = 1 " autocomplete with ->
let OmniCpp_MayCompleteScope = 1 " autocomplete with ::
let OmniCpp_SelectFirstItem = 2 " select first item (but don't insert)
let OmniCpp_NamespaceSearch = 2 " search namespaces in this and included files
let OmniCpp_ShowPrototypeInAbbr = 1 " show function prototype  in popup window
let OmniCpp_GlobalScopeSearch=1
let OmniCpp_DisplayMode=1
let OmniCpp_DefaultNamespaces=["std"]

" cscope setting
if has("cscope")
  set csprg=/usr/bin/cscope
  if has("quickfix")
  	  set cscopequickfix=s-,c-,d-,i-,t-,e-,f-,g-
  endif
  set nocscopetag
  set cscopetagorder=0
  set nocsverb
  " add any database in current directory
  if filereadable("cscope.out")
      cs add cscope.out
  endif
endif

"quickfix 快捷键
nnoremap <silent> ,w :copen 20<cr> ”打开
nnoremap <silent> ,q :cclose<cr> ”关闭
"nnoremap <silent> <C-n> :cn<cr> ”后一项
"nnoremap <silent> <C-m> :cp<cr> ”前一项
nnoremap <silent> ,f :cn<cr> ”后一项
nnoremap <silent> ,b :cp<cr> ”前一项



noremap <space> <C-d>

"gentoo doc
if (getcwd() =~ 'gentoo-x86\|gentoo-src\|portage')
  set tabstop=4 shiftwidth=4 noexpandtab
endif

"新建.c,.h,.sh,.java文件，自动插入文件头 
autocmd BufNewFile *.cpp,*.[ch],*.sh,*.java exec ":call SetTitle()" 
""定义函数SetTitle，自动插入文件头 
func SetTitle() 
    "如果文件类型为.sh文件 
    if &filetype == 'sh' 
        call setline(1,"\########################################################################") 
        call append(line("."), "\# File Name: ".expand("%")) 
        call append(line(".")+1, "\# Author: shejing") 
        call append(line(".")+2, "\# mail: 2016192403@qq.com") 
        call append(line(".")+3, "\# Created Time: ".strftime("%c")) 
        call append(line(".")+4, "\########################################################################") 
        call append(line(".")+5, "\#!/bin/bash") 
        call append(line(".")+6, "") 
    endif
    if &filetype == 'c'
        call setline(1, "\/************************************************************************") 
        call append(line("."), "    > File Name: ".expand("%")) 
        call append(line(".")+1, "    > Author: shejing") 
        call append(line(".")+2, "    > Mail: 2016192403@qq.com ") 
        call append(line(".")+3, "    > Created Time: ".strftime("%c")) 
        call append(line(".")+4, "***********************************************************************/") 
        call append(line(".")+5, "")
    endif
    if &filetype == 'cpp'
        call append(line(".")+6, "#include<iostream>")
        call append(line(".")+7, "using namespace std;")
        call append(line(".")+8, "")
    endif
    "新建文件后，自动定位到文件末尾
    autocmd BufNewFile * normal G
endfunc 

let g:ctrlp_map = '<c-p>'
let g:ctrlp_cmd = 'CtrlP'
