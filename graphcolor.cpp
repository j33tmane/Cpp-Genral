#include <iostream>

using namespace std;

bool **W;
int n, m = 0;
int v, e = 0;
int x, y = 0;
int *vcolor;

bool promising (int i)
{
    int j = 1;
    bool switcher = true;

    while (j && switcher)
    {
        if ( W[i][j] && vcolor[i] == vcolor[j] )
        {
            switcher = false;
        }

        j++;
    }

    return switcher;
}

void m_coloring (int i)
{
    int color;
    if ( promising (i) )
    {
        if (i == n)
        {
            cout << vcolor [1] << " through " << vcolor [n];
        }
        else
        {
            for (color = 1; color <= m; color++)
            {
                vcolor [i + 1] = color;
                m_coloring(i + 1);
            }
        }
    }
}

void initArrays()
{
    for( int i = 0; i < n; i++ )
    {
        W[ i ] = new bool[ n ];
        vcolor[ i ] = 0;
    }
}

void fillW()
{
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            if( !W[i][j] )
            {
                W[i][j] = false;
            }
        }
    }
}

void askForEdges()
{
    cout << "How many edges? ";
    cin >> e;
    cout << endl << "Write edges with pattern: [vertex_x][space][vertex_y]:" << endl;

    for( int i = 0; i < e; i++ )
    {
        cin >> x >> y;

        W[x][y] = true;
        W[y][x] = true;
    }
}

void specialMatrixPrint()
{
    cout << endl;
    int i, j;
    for( i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            cout << W[i][j] << " ";
        }
        cout << endl;
    }
}

void showEdgesMatrix()
{
    int i, j = 0;

    cout << endl << "    "; for( i = 1; i < n; i++ ) { cout << i << " "; } cout << endl;
    cout << endl << "    "; for( i = 1; i < n; i++ ) { cout << "# "; } cout << endl;

    for( i = 1; i < n; i++ )
    {
        cout << i << " # ";
        for( int j = 1; j < n; j++ )
        {
            if( W[i][j] == true ) { cout << "1 "; }
            else { cout << "0 "; }
        }

        cout << endl;
    }
}

void showVcolor()
{
    cout << endl;
    for( int i = 1; i < n; i++ )
    {
        cout << i << ": " << vcolor[ i ] << endl;
    }
}

void checkFor( int i )
{
    m = i;
    m_coloring( 0 );
}

int main()
{
    cout << "How many vertexes? " ;
    cin >> n;

    n += 1;

    W = new bool *[ n ];
    vcolor = new int[ n ];

    initArrays();
    askForEdges();
    showEdgesMatrix();

    checkFor( 4 );
    showVcolor();

    cin >> y;

    return 0;
}
