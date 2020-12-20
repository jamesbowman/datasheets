from pygments import highlight
from pygments.lexers import CppLexer
from pygments.formatters import LatexFormatter


def nblank(s):
    if not s:
        return 9999
    else:
        return len(s) - len(s.lstrip(' '))

def unindent(v):
    prefix = min([nblank(a) for a in v])
    return [a[prefix:] for a in v]

def Clean(src):
    d = {}
    vis = 1
    active = set()
    for l in src:
        if vis and not "JCB" in l:
            if "//'" in l:
                tokens = l.split()
                tokens = tokens[tokens.index("//'") + 1:]
                i = l.index("//'")
                l = l[:i] + "\n"
            else:
                tokens = []
            for token in tokens:
                if token.endswith("{"):
                    active.add(token[:-1])
                    d[token[:-1]] = []
            for a in active:
                d[a].append(l)
            for token in tokens:
                if token.startswith("}"):
                    active.remove(token[1:])
        else:
            if "JCB{" in l:
                vis = 0
            if "}JCB" in l:
                vis = 1
    return dict([(k,"".join(unindent(v))) for (k,v) in d.items()])

sources = """
termdriver-helloworld
termdriver-helloworld
termdriver-counter1
termdriver-counter2
termdriver-color1
dazzler-color1
textmode
"""

for fn in sources.split():
    code = Clean(open("samples/%s.ino" % fn))
    for (tag,body) in code.items():
        hh = open("%s-%s.inc" % (fn, tag), "w")
        hh.write(highlight(body, CppLexer(), LatexFormatter()))
        hh.close()

if __name__ == "__main__":
    for f in sources.split():
        ino = open("samples/" + f + ".ino", "rt").read()
        m = highlight(ino, CppLexer(), LatexFormatter())
        open("code/" + f + ".inc", "wt").write(m)
