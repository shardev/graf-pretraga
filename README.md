## Pretra�ivanje grafa u �irinu i u dubinu

Ovi algoritmi se odnose na neusmjereni graf i napisani su u programskom jeziku C.

## Kratko obja�njenje pojmova grafa i njegove pretrage

Graf je vrsta strukture podataka, ta�nije apstraktan tip podataka, koji se sastoji od skupa �vorova i skupa grana, koje predstavljaju odnose (veze) izme�u �vorova. Graf kao struktura podataka direktno poti�e od matemati�kog koncepta grafa. Graf G se defini�e na sljede�i na�in: G = (V, E), gdje je V kona�an, neprazan skup �vorova, a E je skup grana (veza izme�u �vorova). Kada grane grafa nemaju odre�en smjer, tada graf nazivamo neusmjerenim, a u suprotnom je graf usmjeren.

Pretraga grafa je problem posjete svih �vorova u grafu na odre�eni na�in. Postoje dva na�ina pretra�ivanja: **u �irinu** i **u dubinu**.
Pretraga u �irinu po�inje iz proizvoljnog zadatog �vora v koji se ozna�ava kao posje�en i dodaje kao jedini element reda. Potom se ponavljaju sljede�i koraci, dok god red ne postane prazan: obri�i �vor sa po�etka reda i svakog neposje�enog susjeda ovog �vora ozna�i kao posje�en i dodaj ga na kraj reda.
Pretraga u dubinu po�inje iz proizvoljnog zadatog �vora v (korijena) koji se ozna�ava kao posje�en, a zatim se pretra�uje du� svih grana koliko god je to mogu�e prije povratka u korijen.

## Ostalo

Pored navedenih algoritama implementirano je kreiranje i ispisivanje grafa preko matrice susjedstva, dodavanje �vorova i grana kao i njihovo brisanje.