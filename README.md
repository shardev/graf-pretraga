## Pretraživanje grafa u širinu i u dubinu

Ovi algoritmi se odnose na neusmjereni graf i napisani su u programskom jeziku C.

## Kratko objašnjenje pojmova grafa i njegove pretrage

Graf je vrsta strukture podataka, taènije apstraktan tip podataka, koji se sastoji od skupa èvorova i skupa grana, koje predstavljaju odnose (veze) izmeðu èvorova. Graf kao struktura podataka direktno potièe od matematièkog koncepta grafa. Graf G se definiše na sljedeæi naèin: G = (V, E), gdje je V konaèan, neprazan skup èvorova, a E je skup grana (veza izmeðu èvorova). Kada grane grafa nemaju odreðen smjer, tada graf nazivamo neusmjerenim, a u suprotnom je graf usmjeren.

Pretraga grafa je problem posjete svih èvorova u grafu na odreðeni naèin. Postoje dva naèina pretraživanja: **u širinu** i **u dubinu**.
Pretraga u širinu poèinje iz proizvoljnog zadatog èvora v koji se oznaèava kao posjeæen i dodaje kao jedini element reda. Potom se ponavljaju sljedeæi koraci, dok god red ne postane prazan: obriši èvor sa poèetka reda i svakog neposjeæenog susjeda ovog èvora oznaèi kao posjeæen i dodaj ga na kraj reda.
Pretraga u dubinu poèinje iz proizvoljnog zadatog èvora v (korijena) koji se oznaèava kao posjeæen, a zatim se pretražuje duž svih grana koliko god je to moguæe prije povratka u korijen.

## Ostalo

Pored navedenih algoritama implementirano je kreiranje i ispisivanje grafa preko matrice susjedstva, dodavanje èvorova i grana kao i njihovo brisanje.