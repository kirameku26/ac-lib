#ifdef ONLINE_JUDGE
#pragma GCC target("avx2")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#endif
#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
#endif

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using VL = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define loop while(1)
#define elif else if
// 引数を取得するマクロ
#define $(idx) (std::get<(idx)>(std::forward_as_tuple(_args...)))
// ラムダ式を短く書くマクロ
#define lambda(...) ([&](auto&&... _args) { return (__VA_ARGS__); })
#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP2(i, l, r) for (int i = (int)(l); i < (int)(r); ++i)
#define REP1(i, n) REP2(i, 0, n)
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define RREP2(i, r, l) for (int i = (int)(r)-1; i >= (int)(l); --i)
#define RREP1(i, n) RREP2(i, n, 0)
#define rrep(...) OVERLOAD_REP(__VA_ARGS__, RREP2, RREP1)(__VA_ARGS__)
#define each(p,a) for(auto &p:a)
#define debug_(x) cerr << (x)
#define print_(x) cout << (x)
#define finish(x) print(x); return
#define prints(x) cout << (x) << " "
#define printe(x) cout << (x) << endl
#define debugc(x) cerr << (x) << endl
#define range(i, n, m) for (int i = n; i < m; i++)
#define srange(i, n, m, w) for (int i = n; i < m; i += w)
#define rrange(i, n, m) for (int i = (m) - 1; i >= n; i--)
#define rsrange(i, n, m, w) for (int i = (m) - 1; i >= n; i -= w)
#define subset(i,j) for(int i = j; i >= 0; i = i ? (i - 1) & j : -1)
#define modi(a,b) (a%b+b)%b
#define sz(a) (int)(a).size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define bs(A,x) binary_search(all(A),x)
#define lb(A,x) (ll)(lower_bound(all(A),x)-A.begin())
#define ub(A,x) (ll)(upper_bound(all(A),x)-A.begin())
#define cou(A,x) (ll)(upper_bound(all(A),x)-lower_bound(all(A),x)))
#define YN(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
#define pb push_back
#define ioflush cout << flush;
#define mp make_pair
#define mt make_tuple
#define el '\n'
#define spa " "
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
#define eps (1e-10)
#define Equals(a,b) (fabs((a) - (b)) < eps )
#define debug(x) cerr << #x << " = " << x << el
#define dout()  cout << fixed << setprecision(20)
#define exit_with(...) ({ __VA_ARGS__; exit(0); })
#define break_with(...) ({ __VA_ARGS__; break; })
#define continue_with(...) ({ __VA_ARGS__; continue; })
#define OVERLOAD_MATCH(_1, _2, _3, _4, name, ...) name
#define MATCH1(_1) break; case _1:
#define MATCH2(_1, _2) break; case _1: case _2:
#define MATCH3(_1, _2, _3) break; case _1: case _2: case _3:
#define MATCH4(_1, _2, _3, _4) break; case _1: case _2: case _3: case _4:
#define match(...) OVERLOAD_MATCH(__VA_ARGS__, MATCH4, MATCH3, MATCH2, MATCH1)(__VA_ARGS__)
#define otherwise break; default:

const double pi = 3.141592653589793238;
const int inf = 1073741823;
const ll infl = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";
const long long mod99 = 998244353;
const long long mod107 = 1000000007;
const long long mod = mod99;

/*
// 4近傍、(一般的に)上右下左
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
// 8方向 左上, 上, 右上, 右, 右下, 下, 左下, 左
const int di[8] = {-1,-1,-1,0,1,1,1,0};
const int dj[8] = {-1,0,1,1,1,0,-1,-1};
*/

const int di[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
const int dj[8] = {0, -1, 0, 1, -1, 1, -1, 1};

template<typename T> using pq = priority_queue<T>;
template<typename T> using pqg = priority_queue<T, vector<T>, greater<T>>;
template<typename T> using vector2 = vector<vector<T>>;
template<typename T> using vector3 = vector<vector<vector<T>>>;
template<typename T> using vector4 = vector<vector<vector<vector<T>>>>;
template<typename T> using vector5 = vector<vector<vector<vector<vector<T>>>>>;
template<typename T> using vector6 = vector<vector<vector<vector<vector<vector<T>>>>>>;
template<typename T> using pairs = pair<T,T>;
template<class T> T pow(T a, T b, T m) { return b ? b&1 ? a*pow(a, b^1, m)%m : pow(a*a%m, b>>1, m)%m : 1; }
template<class T> T pow(T a, T b) { return b ? b&1 ? pow(a, b^1)*a : pow(a*a, b>>1) : 1; }
template<class... T> inline void input(T&... a) { ((cin >> a), ...); }
template<class T, class... U> inline void print(const T& a, const U&... b) { cout << a; ((cout << " " << b), ...); }
template<class T, class... U> inline void println(const T& a, const U&... b) { print(a, b...); cout << endl; }
inline void println() { cout << endl; }
template<class T> inline void print(vector<T>& A) { rep(i, A.size()) if (i) print("", A[i]); else print(A[i]); }
template<class T> inline void println(vector<T>& A) { print(A); cout << endl; }
istream& operator>> (istream& is, mint& x) { long long _x; is >> _x; x = _x; return is; }
ostream& operator<< (ostream& os, const mint& x) { return os << x.val(); }
template<class T, class U>
ostream& operator<< (ostream& os, const pair<T, U>& x) { return os << "{" << x.first << ", " << x.second << "}"; }

// 配列の要素を空白区切りで出力 第二引数をtrueにすると改行区切り
template<typename T> inline void print_vec(const vector<T> &v, bool split_line=false) {
    if(v.empty()){
        cout << "This vector is empty." << el;
        return;
    }
    constexpr bool isValue = is_integral<T>::value;
    for (int i = 0; i < (int)v.size(); i++) {
        if constexpr(isValue){
            if((v[i]==inf) || (v[i]==infl)) cout << 'x' << " \n"[split_line || i+1==(int)v.size()];
            else cout << v[i] << " \n"[split_line || i+1==(int)v.size()];
        }else cout << v[i] << " \n"[split_line || i+1==(int)v.size()];
    }
}

template<typename T1, typename T2> inline void print_vec(const vector<pair<T1,T2>> &v, bool split_line=false){
    if(v.empty()){
        cout << "This vector is empty." << el;
        return;
    }
    for(int i = 0; i < (int)v.size(); i++){
        cout << '{';
        auto [a,b] = v[i];
        constexpr pair<bool,bool> isValue = {is_integral<T1>::value, is_integral<T2>::value};
        if constexpr(isValue.first){
            if(a==inf || a==infl) cout << "x,";
            else cout << a << ",";
        }else cout << a << ",";
        if constexpr(isValue.second){
            if(b==inf || b==infl) cout << "x,";
            else cout << b;
        }else cout << b;
        cout << "}" << " \n"[split_line || i+1==(int)v.size()];
    }
}

template<typename T1, typename T2> inline bool chmax(T1 &a, T2 b) {
    bool compare = a < b;
    if(compare) a = b;
    return compare;
}
template<typename T1, typename T2> inline bool chmin(T1 &a, T2 b) {
    bool compare = a > b;
    if(compare) a = b;
    return compare;
}

template<class F>
struct RecLambda {
private:
    F func;
public:
    template<class G>
    constexpr RecLambda(G&& func) noexcept: func(std::forward<G>(func)) {}
    template<class... Args>
    constexpr decltype(auto) operator ()(Args&&... args) const noexcept(std::is_nothrow_invocable_v<F, Args...>) {
        return func(*this, forward<Args>(args)...);
    }
};
template<class G>
RecLambda(G&&) -> RecLambda<std::decay_t<G>>;

// std::chronoを利用した時間計測用クラス
class Timer{
    chrono::system_clock::time_point start;
    public:
        Timer() : start(chrono::system_clock::now()) {}
    
        double count(){
            chrono::duration<double> Time_ = chrono::system_clock::now() - start;
            return Time_.count();
        }

        bool is_under(double x){
            return (this -> count()) < x;
        }
};

// std::uniform_int_distributionを利用した一様乱数生成クラス
class Random_Gen{
    random_device seed_gen;
    mt19937 engine;
    uniform_int_distribution<int64_t> dist;
    public:
        // Constructor [l,r]で生成する値の範囲を指定
        Random_Gen() : engine(seed_gen()) {}
        Random_Gen(int64_t l, int64_t r) : engine(seed_gen()), dist(l,r) {}
        
        // 現在の生成する値の範囲をstd::pairで返す
        pair<int64_t,int64_t> get_range(){
            return make_pair(dist.min(),dist.max());
        }
        // 生成する値の範囲を[l,r]に変更する
        void set_range(int64_t l, int64_t r){
            uniform_int_distribution<int64_t>::param_type Param(l,r);
            dist.param(Param);
        }
        // [l,r]内の一様分布の整数を返す
        int64_t gen(){
            return dist(engine);
        }
        int64_t operator()(){ return gen(); }
};

template<class T, size_t n, size_t idx = 0>
auto make_vec(const size_t (&d)[n], const T& init) noexcept {
    if constexpr (idx < n) return std::vector(d[idx], make_vec<T, n, idx + 1>(d, init));
    else return init;
}

template<class T, size_t n>
auto make_vec(const size_t (&d)[n]) noexcept {
    return make_vec(d, T{});
}

int main(){
    //cout<<fixed<<setprecision(20);
    ios::sync_with_stdio(false);cin.tie(nullptr);
}
