// exo 20
/*libre = global       lié= local
faut juste donnée les liées
    point 1 : i
    point 2 : x
    point 3 : i
    point 4: n et k
    point 5 : y et x
    
*/
// exo 21
/*
point 1 : 1,3,1,2,3,3
point 2 : 1,3,1,2,3,3
point 3 : 1, 45, 3, 76
point 4 : 1,76,1,2,5,-1
point 5 : 4,9
*/
// exo 22
/*
point 1 : 5,7,8,9
point 2 : (1,1),(2,2),(3,3),(9,3),(10,2),(1,6),(2,7),(10,7),(1,8)
point 3 : 1,2,3,9,10
point 4 : (1,2,3),(2,3,76)
point 5 : (4,5),(5,6),(7,8), (4,5,6)
point 6 : ({1,3,5,3},{2,76,2})
*/
// exo 23
/*
1. Tous les éléments de a[j..k] sont nuls.
    ∀i| j < i < k, tq a[i] = 0
2. Tous les éléments de a sont distincts.
    ∀i, j, 1 ≤ i, j ≤ n|a[i] ≠ a[j]
3. Il existe une valeur nulle dans a[j..k].
    ∀j|1 < j < k|0 ∈ a[j]
4. Tous les nombres de a sont pairs.
    ∀j|1 < j < k|a[j] mod 2 = 0
5. Tous les nombres pairs de a[j..k] sont inférieurs Ãă 10.
    ∀j|1 < j < k|a[j] mod 2 = 0 ∧ a[j] < 10
6. Tous les nombres pairs de a[j..k] se trouvent Ãă des emplacements pairs.
    ∀j|1 < j < k|aj mod 2 = 0 ∧ a[j] mod 2 = 0
7. Les éléments de a sont triés par ordre croissant.
    ∀j|1 < j < k|a[j] < a[j + 1]

*/ 
// exo 24
/*
1. x est le minimum de a.
    ∃m, ∀n|a[m] < a[n]
2. b contient toutes les valeurs contenues dans a.
    b ⊂ a
3. Si une valeur x apparaît dans a, elle ne peut apparaître dans b.
    x ∈ a ⟹ x ∉ b
4. Les tableaux a et b ne sont pas identiques.
    a[m] ≠ b[n]
5. a ne contient pas plus de 5 valeurs différentes.
    ∀a, b, c, d, e ∈ A tq a ≠ c ≠ d ≠ e ≠ b
6. a contient tous les éléments de b n’apparaissant qu’une fois dans b.
    ∀n ∈ N0, ∃!m tq b[m] ≠ b[n] ∧ b[m] ⊂ a
7. Si une valeur x apparaît deux fois dans b, alors elle ne peut appartenir à a.
    ∀n ≠ m tq b[m] = b[n] ⟹ b[n] ⊈ a
8. a ne contient pas de valeur plus grande que toutes les valeurs apparaissant dans b.
    ∀m ≥ max(b) ⟹ m ∉ a
9. Si une valeur paire apparaît dans a alors elle apparaît, à la même place, dans b.
    a[m] mod 2 = 0 ⟹ b[m] = a[m]
*/
    
