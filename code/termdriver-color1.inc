\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include} \PY{c+cpf}{\PYZlt{}stdio.h\PYZgt{}}

\PY{k+kt}{int} \PY{n+nf}{main}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{k+kt}{int} \PY{n}{attr}\PY{p}{,} \PY{n}{fg}\PY{p}{,} \PY{n}{bg}\PY{p}{;}

  \PY{n}{printf}\PY{p}{(}
   \PY{l+s}{\PYZdq{}}\PY{l+s}{TermDriver listens on a serial line and emulates a }\PY{l+s}{\PYZdq{}}
   \PY{l+s}{\PYZdq{}}\PY{l+s}{terminal, generating}\PY{l+s+se}{\PYZbs{}n}\PY{l+s}{output on a standard VGA connector.}\PY{l+s}{\PYZdq{}}
   \PY{l+s}{\PYZdq{}}\PY{l+s}{It gives embedded microcontrollers}\PY{l+s+se}{\PYZbs{}n}\PY{l+s}{a real console.}\PY{l+s+se}{\PYZbs{}n}\PY{l+s+se}{\PYZbs{}n}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{attr} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{attr} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{1}\PY{p}{;} \PY{n}{attr}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{k}{for} \PY{p}{(}\PY{n}{fg} \PY{o}{=} \PY{l+m+mi}{30}\PY{p}{;} \PY{n}{fg} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{37}\PY{p}{;} \PY{n}{fg}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
      \PY{k}{for} \PY{p}{(}\PY{n}{bg} \PY{o}{=} \PY{l+m+mi}{40}\PY{p}{;} \PY{n}{bg} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{47}\PY{p}{;} \PY{n}{bg}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
        \PY{n}{printf}\PY{p}{(}\PY{l+s}{\PYZdq{}}\PY{l+s}{\PYZbs{}}\PY{l+s}{e[\PYZpc{}d;\PYZpc{}d;\PYZpc{}dm\PYZpc{}d;\PYZpc{}d;\PYZpc{}d}\PY{l+s}{\PYZbs{}}\PY{l+s}{e[m}\PY{l+s}{\PYZdq{}}\PY{p}{,}
               \PY{n}{attr}\PY{p}{,} \PY{n}{bg}\PY{p}{,} \PY{n}{fg}\PY{p}{,} \PY{n}{attr}\PY{p}{,} \PY{n}{bg}\PY{p}{,} \PY{n}{fg}\PY{p}{)}\PY{p}{;}
      \PY{p}{\PYZcb{}}
      \PY{n}{printf}\PY{p}{(}\PY{l+s}{\PYZdq{}}\PY{l+s+se}{\PYZbs{}n}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
    \PY{p}{\PYZcb{}}
  \PY{p}{\PYZcb{}}
  
  \PY{k}{return} \PY{l+m+mi}{0}\PY{p}{;}
\PY{p}{\PYZcb{}}
\end{Verbatim}
