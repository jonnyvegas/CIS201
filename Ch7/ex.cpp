# i n c l u d e   < c s t d l i b >
# i n c l u d e   < i o s t r e a m >
u s i n g   n a m e s p a c e   s t d ;
i n t   m a i n ( i n t   n N u m b e r o f A r g s ,   c h a r *   p s z A r g s [ ] )
{
/ /   e n t e r   t h e   t e m p e r a t u r e   i n   C e l s i u s
i n t   c e l s i u s ;
c o u t   < <   “ E n t e r   t h e   t e m p e r a t u r e   i n   C e l s i u s : ” ;
c i n   > >   c e l s i u s ;
/ /   c a l c u l a t e   c o n v e r s i o n   f a c t o r   f o r   C e l s i u s
/ /   t o   F a h r e n h e i t
i n t   f a c t o r ;
f a c t o r   =   2 1 2   -   3 2 ;
/ /   u s e   c o n v e r s i o n   f a c t o r   t o   c o n v e r t   C e l s i u s
/ /   i n t o   F a h r e n h e i t   v a l u e s
i n t   f a h r e n h e i t ;
f a h r e n h e i t   =   f a c t o r   *   c e l s i u s / 1 0 0   +   3 2 ;
/ /   o u t p u t   t h e   r e s u l t s   ( f o l l o w e d   b y   a   N e w L i n e )
c o u t   < <   “ F a h r e n h e i t   v a l u e   i s : ” ;
c o u t   < <   f a h r e n h e i t   < <   e n d l ;
/ /   w a i t   u n t i l   u s e r   i s   r e a d y   b e f o r e   t e r m i n a t i n g   p r o g r a m
/ /   t o   a l l o w   t h e   u s e r   t o   s e e   t h e   p r o g r a m   r e s u l t s
s y s t e m ( “ P A U S E ” ) ;
r e t u r n   0 ;
