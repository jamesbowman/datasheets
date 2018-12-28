\begin{Verbatim}[commandchars=\\\{\}]
\PY{k+kt}{void} \PY{n+nf}{setup}\PY{p}{(}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{Serial}\PY{p}{.}\PY{n}{begin}\PY{p}{(}\PY{l+m+mi}{115200}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}

\PY{k+kt}{int} \PY{n}{counter}\PY{p}{;}
\PY{k+kt}{void} \PY{n+nf}{loop}\PY{p}{(}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{Serial}\PY{p}{.}\PY{n}{print}\PY{p}{(}\PY{l+s}{\PYZdq{}}\PY{l+s}{Counter is }\PY{l+s}{\PYZdq{}}\PY{p}{)}\PY{p}{;}
  \PY{n}{Serial}\PY{p}{.}\PY{n}{println}\PY{p}{(}\PY{n}{counter}\PY{o}{+}\PY{o}{+}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}}
\end{Verbatim}
