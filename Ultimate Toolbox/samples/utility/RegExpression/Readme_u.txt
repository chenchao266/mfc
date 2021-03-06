C O X R e g u l a r   -   n e w   c l a s s   t h a t   i m p l e m e n t s   r e g u l a r   e x p r e s s i o n   f u n c t i o n a l i t y .  
  
  
 	 	 	 	 M o s t   o f   u s   h a d   p r o b l e m s   w i t h   s e a r c h i n g   s o m e   t e x t   i n   t e x t   f i l e s .  
 	 	 	 	 Y e s ,   w e   c a n   u s e   s e a r c h i n g   c a p a b i l i t i e s   t h a t   a r e   p r o v i d e d   w i t h  
 	 	 	 	 m a n y   p r o g r a m s .   B u t ,   i n   c a s e   w e   h a v e   t o   d o   s o m e   g e n e r i c   s e a r c h  
 	 	 	 	 i t   i s   n o t   t h e   c a s e .   F o r   s u c h   c a s e s   C O X R e g u l a r   c l a s s   i s   e x a c t l y  
 	 	 	 	 w h a t   w e   h a d   t o   h a v e .   T h i s   c l a s s   p r o v i d e d   g e n e r i c   s e a r c h   r e g a r d i n g  
 	 	 	 	 t h e   r u l e   y o u ' v e   s u p p l i e d .   T o   d o   s e a r c h ,   y o u   h a v e   t o   l o a d   r e g u l a r    
 	 	 	 	 e x p r e s s i o n   t h a t   d e f i n e s   w h a t   d o   y o u   w a n t   t o   s e a r c h .   T h e r e   a r e  
 	 	 	 	 d i f f e r e n t   f o r m a t s   a n d   d i f f e r e n t   i m p l e m e n t a t i o n   f o r   r e g u l a r   e x p r e s s i o n .  
 	 	 	 	 T h i s   i m p l e m e n t a t i o n   i s   m o s t   c l o s e   t o   t h a t   o n e   d e s c r i b e d   i n  
 	 	 	 	 M S D N   t h a t   c o m e s   w i t h   V i s u a l   S t u d i o   6 . 0  
  
 	 T h e   r u l e s :  
  
     C h a r a c t e r 	 	 	 	   D e s c r i p t i o n  
  
 	 	 \ 	 	   M a r k s   t h e   n e x t   c h a r a c t e r   a s   s p e c i a l .   A l l   c h a r a c t e r s   t h a t   a r e  
 	 	 	 	   s p e c i a l   b u t   y o u   w a n t   t o   d e f i n e   i t   f o r   s e a r c h   s h o u l d   b e    
 	 	 	 	   p r e c e d i n g   b y   t h i s   c h a r a c t e r .  
 	 	 ^ 	 	   M a t c h e s   t h e   b e g i n i n g   o f   i n p u t   o r   l i n e .   I n   t h i s   i m p l e m e n t a t i o n   t h i s    
 	 	 	 	   c a n n o t   b e   d e f i n e d   i n   c h a r s e t .  
 	 	 $ 	 	   M a t c h e s   t h e   e n d   o f   i n p u t   o r   l i n e .   I n   t h i s   i m p l e m e n t a t i o n   t h i s    
 	 	 	 	   c a n n o t   b e   d e f i n e d   i n   c h a r s e t .  
 	 	 * 	 	   M a t c h e s   p r e c e d i n g   c h a r a c t e r   z e r o   o r   m o r e   t i m e s .   I n   t h i s   i m p l e m e n t a t i o n  
 	 	 	 	   c a n n o t   b e   d e f i n e d   i f   o n l y   o n e   c h a r a c t e r   s p e c i f i e d   i n   t h e   r e g u l a r  
 	 	 	 	   e x p r e s s i o n .   T h a t   m e a n s   t h a t   / z o * /   m a t c h e s   z   a n d   z o o ,   b u t  
 	 	 	 	   / z * /   w i l l   m a t c h   n o t h i n g   b e c a u s e   o n l y   o n e   c h a r a c t e r   h a s   b e e n   s p e c i f i e d .  
 	 	 + 	 	   M a t c h e s   p r e c e d i n g   c h a r a c t e r   o n e   o r   m o r e   t i m e s .    
 	 	 ? 	 	   M a t c h e s   p r e c e d i n g   c h a r a c t e r   z e r o   o r   o n e   t i m e .   I n   t h i s   i m p l e m e n t a t i o n  
 	 	 	 	   c a n n o t   b e   d e f i n e d   i f   o n l y   o n e   c h a r a c t e r   s p e c i f i e d   i n   t h e   r e g u l a r  
 	 	 	 	   e x p r e s s i o n .  
 	 	 . 	 	   M a t c h e s   a n y   s i n g l e   c h a r a c t e r   e x c e p t   ' \ n '  
 	 ( p a t t e r n ) 	   M a t c h e s   p a t t e r n   a n d   r e m e m b e r s   t h e   m a t c h .   T h e   m a t c h e d   s u b s t r i n g   c a n  
 	 	 	 	   b e   r e t r i e v e d   b y   u s i n g   ' \ 0 ' - ' \ 9 '   i n   r e g u l a r   e x p r e s s i o n ,   w h e r e   ' 0 ' - ' 9 '  
 	 	 	 	   a r e   n u m b e r   o f   t h e   p a t t e r n .   E x a m p l e :  
 	 	 	 	   r e g u l a r   e x p r e s s i o n   ' ( r e ) . * \ 0 s + i o n '   w i l l   m a t c h   ' r e g u l a r   e x p r e s s i o n '  
 	 	 	 	   b e c a u s e   f i r s t   m a t c h e s   p a t t e r n   ' r e '   a n d   r e m e m b e r   t h e   p a t t e r n   w i t h  
 	 	 	 	   i n d e x   0 .   ' . * '   w i l l   m a t c h   ' g u l a r   e x p '   i n   ' r e g u l a r   e x p r e s s i o n ' .  
 	 	 	 	   N o w   w e   r e t t r i e v e   p a t t e r n   w i t h   i n d e x   0 ,   t h a t   h a s   b e e n   r e m e m b e r e d  
 	 	 	 	   w i t h   i n d e x   0 ,   t h i s   i s   ' r e '   t h a t   m a t c h e s   ' r e '   i n   ' r e g u l a r   e x p r e s s i o n '  
 	 	 	 	   b e f o r e   ' s s i o n '   a n d   ,   f i n a l l y ,   ' s + i o n '   m a t c h e s   ' s s i o n '  
 	       x | y 	 	   M a t c h e s   e i t h e r   c h a r a c t e r   ' x '   o r   ' y ' .   Y o u   c a n   c o m b i n e   m o r e   t h a n   t w o  
 	 	 	 	   c h a r a c t e r s   l i k e   ' x | y | z '  
 	       { n } 	 	   M e a n s   p r e c e d i n g   c h a r a c t e r   w i l l   m a t c h   e x a c t l y   n   t i m e s   ( n o n n e g a t i v e ,   o f   c o u r s e )  
 	     { n , } 	 	   M e a n s   p r e s e d i n g   c h a r a c t e r   w i l l   m a t c h   a t   l e a s t   n   t i m e s   ( n o n n e g a t i v e )  
 	     { n , m } 	 	   M e a n s   p r e c e d i n g   c h a r a c t e r   w i l l   m a t c h   a t   k e a s t   n   t i m e s   a n d   a t    
 	 	 	 	   m o s t   m   t i m e s .   ( n , m   -   n o n n e g a t i v e )  
 	     [ x y z ] 	 	   A   c h a r a c t e r   s e t .   M a t c h e s   a n y   o n e   o f   e n c l o s e d   c h a r a c t e r s  
 	   [ ^ x y z ] 	 	   A   n o n - m a t c h i n g   c h a r a c t e r   s e t .   M a t c h e s   a n y   c h a r a c t e r   t h a t   i s   n o t   i n   t h e   s e t .  
 	 	 \ b 	 	   M a t c h e s   w o r d   b o u n d a r y ,   t h a t   i s   b o u n d a r y   b e t w e e n   a n y   c h a r a c t e r   e x c l u d i n g    
 	 	 	 	   s p a c e   c h a r a c t e r s   ( "   \ f \ n \ r \ t \ v " )   a n d   s p a c e   c h a r a c t e r s  
 	 	 \ B 	 	   M a t c h e s   n o n - w o r d   b o u n d a r y .   M a t c h e s   a n y   b o u n d a r y   b e t w e e n   s p a c e    
 	 	 	 	   c h a r a c t e r s   o r   b e t w e e n   n o n s p a c e   c h a r a c t e r s .  
 	 	 \ d 	 	   M a t c h e s   a n y   d i g i t   / 0 - 9 /  
 	 	 \ D 	 	   M a t c h e s   a n y   n o n - d i g i t .  
 	 	 \ f 	 	   M a t c h e s   a   f o r m f e e d .  
 	 	 \ n 	 	   M a t c h e s   a   n e w - l i n e   c h a r a c t e r  
 	 	 \ r 	 	   M a t c h e s   a   c a r r i d g e   r e t u r n   c h a r a c t e r .  
 	 	 \ s 	 	   M a t c h e s   a n y   w h i t e   s p a c e   c h a r a c t e r  
 	 	 \ S 	 	   M a t c h e s   a n y   n o n - w h i t e   s p a c e   c h a r a c t e r  
 	 	 \ t 	 	   M a t c h e s   a   t a b   c h a r a c t e r  
 	 	 \ v 	 	   M a t c h e s   a n y   v e r t i c a l   t a b   c h a r a c t e r  
 	 	 \ w 	 	   M a t c h e s   a n y   w o r d   c h a r a c t e r   i n c l u d i n g   u n d e r s c o r e .   [ A - Z a - z 0 - 9 _ ]  
 	 	 \ W 	 	   M a t c h e s   a n y   n o n - w o r d   c h a r a c t e r   ( a n y   c h a r a c t e r   t h a t   d o e s   n o t   m a t c h   \ w )  
 	 	 \ n u m 	   W h e r e   n u m   i s   n u m b e r   b e t w e e n   0   a n d   9 .   M a t c h e s   r e m m e m b e r e d   p a t t e r n .  
 	 	 	 	   ( S e e   d e s c r i p t i o n   o f   p a t t e r n )  
 	 	 / n / 	 	   W h e r e   n   i s   b e t w e e n   1   a n d   2 5 5 .   M a t c h e s   s u p p l i e d   i n   n   A S C I I   c o d e  
  
  
 	 T h r e e   e a s y   s t e p s   t o   u s e :  
 	 1 )   C r e a t e   y o u r   o w n   d e r i v e d   f r o m   C O X R e g u l a r   c l a s s   a n d   o v e r r i d e   f u n c t i o n   O n M a t c h ( )  
 	       T h i s   v i r t u a l   f u n c t i o n   i s   a l w a y s   c a l l e d   w h e n   a   m a t c h e d   s u b s t r i n g   h a s   b e e n   f o u n d .  
 	       W h e n   t h i s   f u n c t i o n   i s   c a l l e d   y o u   c a n   r e t u r n   T R U E   t o   c o n t i n u e   s e a r c h   o r   F A L S E  
 	       i f   y o u   d o   n o t   w a n t   c o n t i n u e   s e a r c h .  
 	 2 )   L o a d   y o u r   r e g u l a r   e x p r e s s i o n   b y   f u n c t i o n   L o a d R u l e ( )  
     	 3 )   C a l l   f u n c t i o n   M a t c h   t o   d o   t h e   s e a r c h   i n   s u p p l i e d   t e x t .  
  
  
 	 N o w   h o w   i t   w o r k s .  
 	 T h e r e   a r e   t w o   s t e p s   i n   t h e   w o r k   - 1 ) l o a d   r e g u l a r   e x p r e s s i o n   a n d   2 )   s e a r c h   t h e   t e x t  
  
 1 ) l o a d   r e g u l a r   e x p r e s s i o n  
     W h e n   y o u   a r e   l o a d i n g   r e g u l a r   e x p r e s s i o n ,   L o a d R u l e ( )   c a l l s   f u n c t i o n   P a r s e ( )   t h a t  
     h a s   a   h u g e   s w i t c h .   T h i s   f u n c t i o n   d o   p a r s i n g   o f   t h e   r u l e   a n d   c r e a t e   t a g s   o f   d i f f e r e n t  
     t y p e s   f o r   e v e r y   s e q u e n c e s   o f   s p e c i a l   c h a r a c t e r s ,   d e p e n d s   o n   t h e   t y p e   o f   s p e c i a l    
     c h a r a c t e r s .   F o r   s o m e   s p e c i a l   c h a r a c t e r s   f o u n d e d   i t   c a l l s   a p p r o p r i a t e   f u n c t i o n s  
     l i k e   G e t A s c i i C h a r ( )   o r   G e t E i t h e r ( )   t o   d o   t h i s   s p e c i a l   p a r s i n g .   T h e   t a g s   a r e   a d d e d  
     t o   t h e   c o l l e c t i o n   o f   t a g s .   A n y   t a g   c a n   b e   r e t r i e v e d   b y   G e t T a g ( ) .  
     T h e   f u n c t i o n   P a r s e   i s   v i r t u a l ,   s o ,   i f   y o u   n e e d   t o   p r o c e s s   s o m e   s p e c i a l   c h a r a c t e r s ,  
     t h a t   a r e   n o t   s p e c i f i e d   h e r e ,   y o u   c a n   o v e r r i d e   i t .   O n c e   P a r s e ( )   o r   c a l l e d   s u b f u n c t i o n  
     f o u n d   e r r o r ,   P a r c e   s t o p s   p a r s i n g   a n d   r e t u r n s   F A L S E .   Y o u   c a n   r e t r i e v e   e r r o r   c o d e  
     b y   G e t E r r o r ( )   a n d   t r a n s l a t e   i t   t o   d e s c r i p t i o n   b y   T r a n s l a t e E r r o r ( )  
  
 2 )   s e a r c h   t h e   t e x t  
     T h e   s e a r c h   t e x t   m a k e s   f u n c t i o n   M a t c h ( )   t h a t   c a l l   r e c u r s i v e   f u n c t i o n   M a t c h N e x t T a g ( )  
     w i t h   s t a r t   t a g   n u m b e r = 0 .   M a t c h ( )   d o e s   l o o p ,   e v e r y   t i m e   i n c r e m e n t i n g   s t a r t   p o s i t i o n  
     i n   t h e   s u p p l i e d   t e x t   f o r   t h e   s e a r c h   u n t i l l   e n d   o f   t h e   t e x t   h a s   b e e n   r e a c h e d .  
     M a t c h N e x t T a g ( )   d o e s   m a i n   j o b   a n d   o n c e   t h e   t a g   m a t c h e s   t h e   t e x t   a t   t h e   s p e c i f i e d  
     p o s i t i o n   d o e s   e i t h e r ,   c a l l   O n M a t c h ( )   i f   t h e   t a g   w a s   l a s t   i n   t h e   c o l l e c t i o n   o f   t h e   t a g s  
     o r   c a l l s   M a t c h N e x t T a g ( )   t o   m a t c h   n e x t   t a g   f r o m   t h e   c o l l e c t i o n .  
  
     T h e   f u n c t i o n   M a t c h N e x t T a g ( )   l i k e   P a r s e ( )   i s   v i r t u a l ,   s o ,   i t ' s   u p   t o   y o u   o v e r r i d e   i t  
     i f   y o u   w a n t   t o   p r o c e s s   s o m e   s p e c i a l   s e q u e n c e s . 