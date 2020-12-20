\begin{Verbatim}[commandchars=\\\{\}]
\PY{c+cp}{\PYZsh{}}\PY{c+cp}{include} \PY{c+cpf}{\PYZlt{}SPI.h\PYZgt{}}

\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{Serial}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{l+m+mi}{115200}\PY{p}{)}\PY{p}{;}
  \PY{n}{SPI}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{p}{)}\PY{p}{;}
  \PY{k}{for} \PY{p}{(}\PY{n}{byte} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{8}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}}\PY{o}{=} \PY{l+m+mi}{10}\PY{p}{;} \PY{n}{i}\PY{o}{+}\PY{o}{+}\PY{p}{)} \PY{p}{\PYZob{}}
    \PY{n}{pinMode}\PY{p}{(}\PY{n}{i}\PY{p}{,} \PY{n}{OUTPUT}\PY{p}{)}\PY{p}{;}
    \PY{n}{digitalWrite}\PY{p}{(}\PY{n}{i}\PY{p}{,} \PY{n}{HIGH}\PY{p}{)}\PY{p}{;}
  \PY{p}{\PYZcb{}}
  \PY{n}{digitalWrite}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{,} \PY{n}{LOW}\PY{p}{)}\PY{p}{;}
  \PY{n}{SPI}\PY{p}{.}\PY{n}{transfer}\PY{p}{(}\PY{l+m+mh}{0x41}\PY{p}{)}\PY{p}{;}     \PY{c+c1}{// Boot from slot}
  \PY{n}{SPI}\PY{p}{.}\PY{n}{transfer}\PY{p}{(}\PY{l+m+mh}{0x01}\PY{p}{)}\PY{p}{;}     \PY{c+c1}{// slot 1}
  \PY{n}{digitalWrite}\PY{p}{(}\PY{l+m+mi}{10}\PY{p}{,} \PY{n}{HIGH}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)}
\PY{p}{\PYZob{}}
  \PY{n}{Serial}\PY{p}{.}\PY{n}{println}\PY{p}{(}\PY{l+s}{\PYZdq{}}\PY{l+s}{Hello world}\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{n}{delay}\PY{p}{(}\PY{l+m+mi}{500}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}
\end{Verbatim}
