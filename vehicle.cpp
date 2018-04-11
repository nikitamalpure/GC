/********************************
Write C++/Java program to simulate any one of or similar scene-
*Clock with pendulum
*National Flag hoisting
*Vehicle/boat locomotion
*Water drop falling into the water and generated waves after impact
 *Kaleidoscope views generation (at least 3 colorful patterns)
 
 Roll NO:
 Batch:
***************************/
#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
for (int i=0;i<500;i++)
{
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);
line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);
circle(110+i,370,17);
circle(240+i,370,17);
delay(10);
cleardevice();
line(0,390,639,390);
}
return(0);
}
/******************OUTPUT******************
Pixel request out of range!!	(784,345)
Pixel request out of range!!	(785,346)
Pixel request out of range!!	(786,346)
Pixel request out of range!!	(787,346)
Pixel request out of range!!	(788,347)
Pixel request out of range!!	(789,347)
Pixel request out of range!!	(790,347)
Pixel request out of range!!	(791,348)
Pixel request out of range!!	(792,348)
Pixel request out of range!!	(793,348)
Pixel request out of range!!	(794,349)
Pixel request out of range!!	(795,349)
Pixel request out of range!!	(796,349)
Pixel request out of range!!	(797,350)
Pixel request out of range!!	(798,350)
Pixel request out of range!!	(698,300)
Pixel request out of range!!	(699,301)
Pixel request out of range!!	(700,302)
Pixel request out of range!!	(701,302)
Pixel request out of range!!	(702,303)
Pixel request out of range!!	(703,304)
Pixel request out of range!!	(704,305)
Pixel request out of range!!	(705,305)
Pixel request out of range!!	(706,306)
Pixel request out of range!!	(707,307)
Pixel request out of range!!	(708,308)
Pixel request out of range!!	(709,308)
Pixel request out of range!!	(710,309)
Pixel request out of range!!	(711,310)
Pixel request out of range!!	(712,311)
Pixel request out of range!!	(713,311)
Pixel request out of range!!	(714,312)
Pixel request out of range!!	(715,313)
Pixel request out of range!!	(716,314)
Pixel request out of range!!	(717,314)
Pixel request out of range!!	(718,315)
Pixel request out of range!!	(719,316)
Pixel request out of range!!	(720,317)
Pixel request out of range!!	(721,317)
Pixel request out of range!!	(722,318)
Pixel request out of range!!	(723,319)
Pixel request out of range!!	(724,320)
Pixel request out of range!!	(725,320)
Pixel request out of range!!	(726,321)
Pixel request out of range!!	(727,322)
Pixel request out of range!!	(728,323)
Pixel request out of range!!	(729,323)
Pixel request out of range!!	(730,324)
Pixel request out of range!!	(731,325)
Pixel request out of range!!	(732,326)
Pixel request out of range!!	(733,326)
Pixel request out of range!!	(734,327)
Pixel request out of range!!	(735,328)
Pixel request out of range!!	(736,329)
Pixel request out of range!!	(737,329)
Pixel request out of range!!	(738,330)
Pixel request out of range!!	(663,305)
Pixel request out of range!!	(663,330)
Pixel request out of range!!	(693,305)
Pixel request out of range!!	(694,306)
Pixel request out of range!!	(695,306)
Pixel request out of range!!	(696,307)
Pixel request out of range!!	(697,308)
Pixel request out of range!!	(698,309)
Pixel request out of range!!	(699,309)
Pixel request out of range!!	(700,310)
Pixel request out of range!!	(701,311)
Pixel request out of range!!	(702,311)
Pixel request out of range!!	(703,312)
Pixel request out of range!!	(704,313)
Pixel request out of range!!	(705,314)
Pixel request out of range!!	(706,314)
Pixel request out of range!!	(707,315)
Pixel request out of range!!	(708,316)
Pixel request out of range!!	(709,316)
Pixel request out of range!!	(710,317)
Pixel request out of range!!	(711,318)
Pixel request out of range!!	(712,319)
Pixel request out of range!!	(713,319)
Pixel request out of range!!	(714,320)
Pixel request out of range!!	(715,321)
Pixel request out of range!!	(716,321)
Pixel request out of range!!	(717,322)
Pixel request out of range!!	(718,323)
Pixel request out of range!!	(719,324)
Pixel request out of range!!	(720,324)
Pixel request out of range!!	(721,325)
Pixel request out of range!!	(722,326)
Pixel request out of range!!	(723,326)
Pixel request out of range!!	(724,327)
Pixel request out of range!!	(725,328)
Pixel request out of range!!	(726,329)
Pixel request out of range!!	(727,329)
Pixel request out of range!!	(728,330)
Pixel request out of range!!	(663,305)
Pixel request out of range!!	(658,305)
Pixel request out of range!!	(755,370)
Pixel request out of range!!	(755,370)
Pixel request out of range!!	(721,370)
Pixel request out of range!!	(721,370)
Pixel request out of range!!	(738,353)
Pixel request out of range!!	(738,387)
Pixel request out of range!!	(738,353)
Pixel request out of range!!	(738,387)
Pixel request out of range!!	(755,371)
Pixel request out of range!!	(755,369)
Pixel request out of range!!	(721,371)
Pixel request out of range!!	(721,369)
Pixel request out of range!!	(737,353)
Pixel request out of range!!	(737,387)
Pixel request out of range!!	(739,353)
Pixel request out of range!!	(739,387)
Pixel request out of range!!	(755,372)
Pixel request out of range!!	(755,368)
Pixel request out of range!!	(721,372)
Pixel request out of range!!	(721,368)
Pixel request out of range!!	(736,353)
Pixel request out of range!!	(736,387)
Pixel request out of range!!	(740,353)
Pixel request out of range!!	(740,387)
Pixel request out of range!!	(755,373)
Pixel request out of range!!	(755,367)
Pixel request out of range!!	(721,373)
Pixel request out of range!!	(721,367)
Pixel request out of range!!	(735,353)
Pixel request out of range!!	(735,387)
Pixel request out of range!!	(741,353)
Pixel request out of range!!	(741,387)
Pixel request out of range!!	(755,374)
Pixel request out of range!!	(755,366)
Pixel request out of range!!	(721,374)
Pixel request out of range!!	(721,366)
Pixel request out of range!!	(734,353)
Pixel request out of range!!	(734,387)
Pixel request out of range!!	(742,353)
Pixel request out of range!!	(742,387)
Pixel request out of range!!	(754,375)
Pixel request out of range!!	(754,365)
Pixel request out of range!!	(722,375)
Pixel request out of range!!	(722,365)
Pixel request out of range!!	(733,354)
Pixel request out of range!!	(733,386)
Pixel request out of range!!	(743,354)
Pixel request out of range!!	(743,386)
Pixel request out of range!!	(754,376)
Pixel request out of range!!	(754,364)
Pixel request out of range!!	(722,376)
Pixel request out of range!!	(722,364)
Pixel request out of range!!	(732,354)
Pixel request out of range!!	(732,386)
Pixel request out of range!!	(744,354)
Pixel request out of range!!	(744,386)
Pixel request out of range!!	(754,377)
Pixel request out of range!!	(754,363)
Pixel request out of range!!	(722,377)
Pixel request out of range!!	(722,363)
Pixel request out of range!!	(731,354)
Pixel request out of range!!	(731,386)
Pixel request out of range!!	(745,354)
Pixel request out of range!!	(745,386)
Pixel request out of range!!	(753,378)
Pixel request out of range!!	(753,362)
Pixel request out of range!!	(723,378)
Pixel request out of range!!	(723,362)
Pixel request out of range!!	(730,355)
Pixel request out of range!!	(730,385)
Pixel request out of range!!	(746,355)
Pixel request out of range!!	(746,385)
Pixel request out of range!!	(753,379)
Pixel request out of range!!	(753,361)
Pixel request out of range!!	(723,379)
Pixel request out of range!!	(723,361)
Pixel request out of range!!	(729,355)
Pixel request out of range!!	(729,385)
Pixel request out of range!!	(747,355)
Pixel request out of range!!	(747,385)
Pixel request out of range!!	(752,380)
Pixel request out of range!!	(752,360)
Pixel request out of range!!	(724,380)
Pixel request out of range!!	(724,360)
Pixel request out of range!!	(728,356)
Pixel request out of range!!	(728,384)
Pixel request out of range!!	(748,356)
Pixel request out of range!!	(748,384)
Pixel request out of range!!	(751,381)
Pixel request out of range!!	(751,359)
Pixel request out of range!!	(725,381)
Pixel request out of range!!	(725,359)
Pixel request out of range!!	(727,357)
Pixel request out of range!!	(727,383)
Pixel request out of range!!	(749,357)
Pixel request out of range!!	(749,383)
Pixel request out of range!!	(751,382)
Pixel request out of range!!	(751,358)
Pixel request out of range!!	(725,382)
Pixel request out of range!!	(725,358)
Pixel request out of range!!	(726,357)
Pixel request out of range!!	(726,383)
Pixel request out of range!!	(750,357)
Pixel request out of range!!	(750,383)
Pixel request out of range!!	(759,371)
Pixel request out of range!!	(759,372)
Pixel request out of range!!	(759,373)
Pixel request out of range!!	(759,374)
Pixel request out of range!!	(758,375)
Pixel request out of range!!	(758,376)
Pixel request out of range!!	(758,377)
Pixel request out of range!!	(757,378)
Pixel request out of range!!	(757,379)
Pixel request out of range!!	(757,380)
Pixel request out of range!!	(756,380)
Pixel request out of range!!	(756,381)
Pixel request out of range!!	(755,382)
Pixel request out of range!!	(754,383)
Pixel request out of range!!	(754,384)
Pixel request out of range!!	(753,384)
Pixel request out of range!!	(752,385)
Pixel request out of range!!	(751,386)
Pixel request out of range!!	(751,386)
Pixel request out of range!!	(750,387)
Pixel request out of range!!	(749,387)
Pixel request out of range!!	(748,388)
Pixel request out of range!!	(747,388)
Pixel request out of range!!	(746,389)
Pixel request out of range!!	(745,389)
Pixel request out of range!!	(744,389)
Pixel request out of range!!	(743,390)
Pixel request out of range!!	(742,390)
Pixel request out of range!!	(741,390)
Pixel request out of range!!	(740,390)
Pixel request out of range!!	(739,390)
Pixel request out of range!!	(738,390)
Pixel request out of range!!	(737,390)
Pixel request out of range!!	(736,390)
Pixel request out of range!!	(735,390)
Pixel request out of range!!	(734,389)
Pixel request out of range!!	(733,389)
Pixel request out of range!!	(733,389)
Pixel request out of range!!	(732,389)
Pixel request out of range!!	(731,388)
Pixel request out of range!!	(730,388)
Pixel request out of range!!	(729,387)
Pixel request out of range!!	(728,387)
Pixel request out of range!!	(727,386)
Pixel request out of range!!	(726,386)
Pixel request out of range!!	(726,385)
Pixel request out of range!!	(725,384)
Pixel request out of range!!	(724,384)
Pixel request out of range!!	(724,383)
Pixel request out of range!!	(723,382)
Pixel request out of range!!	(722,381)
Pixel request out of range!!	(722,380)
Pixel request out of range!!	(721,379)
Pixel request out of range!!	(721,379)
Pixel request out of range!!	(721,378)
Pixel request out of range!!	(720,377)
Pixel request out of range!!	(720,376)
Pixel request out of range!!	(720,375)
Pixel request out of range!!	(719,374)
Pixel request out of range!!	(719,373)
Pixel request out of range!!	(719,372)
Pixel request out of range!!	(719,371)
Pixel request out of range!!	(719,370)
Pixel request out of range!!	(759,370)
Pixel request out of range!!	(799,350)
Pixel request out of range!!	(739,330)
Pixel request out of range!!	(740,330)
Pixel request out of range!!	(741,331)
Pixel request out of range!!	(742,331)
Pixel request out of range!!	(743,331)
Pixel request out of range!!	(744,332)
Pixel request out of range!!	(745,332)
Pixel request out of range!!	(746,332)
Pixel request out of range!!	(747,333)
Pixel request out of range!!	(748,333)
Pixel request out of range!!	(749,333)
Pixel request out of range!!	(750,334)
Pixel request out of range!!	(751,334)
Pixel request out of range!!	(752,334)
Pixel request out of range!!	(753,335)
Pixel request out of range!!	(754,335)
Pixel request out of range!!	(755,335)
Pixel request out of range!!	(756,336)
Pixel request out of range!!	(757,336)
Pixel request out of range!!	(758,336)
Pixel request out of range!!	(759,337)
Pixel request out of range!!	(760,337)
Pixel request out of range!!	(761,337)
Pixel request out of range!!	(762,338)
Pixel request out of range!!	(763,338)
Pixel request out of range!!	(764,338)
Pixel request out of range!!	(765,339)
Pixel request out of range!!	(766,339)
Pixel request out of range!!	(767,339)
Pixel request out of range!!	(768,340)
Pixel request out of range!!	(769,340)
Pixel request out of range!!	(770,340)
Pixel request out of range!!	(771,341)
Pixel request out of range!!	(772,341)
Pixel request out of range!!	(773,341)
Pixel request out of range!!	(774,342)
Pixel request out of range!!	(775,342)
Pixel request out of range!!	(776,342)
Pixel request out of range!!	(777,343)
Pixel request out of range!!	(778,343)
Pixel request out of range!!	(779,343)
Pixel request out of range!!	(780,344)
Pixel request out of range!!	(781,344)
Pixel request out of range!!	(782,344)
Pixel request out of range!!	(783,345)
Pixel request out of range!!	(784,345)
Pixel request out of range!!	(785,345)
Pixel request out of range!!	(786,346)
Pixel request out of range!!	(787,346)
Pixel request out of range!!	(788,346)
Pixel request out of range!!	(789,347)
Pixel request out of range!!	(790,347)
Pixel request out of range!!	(791,347)
Pixel request out of range!!	(792,348)
Pixel request out of range!!	(793,348)
Pixel request out of range!!	(794,348)
Pixel request out of range!!	(795,349)
Pixel request out of range!!	(796,349)
Pixel request out of range!!	(797,349)
Pixel request out of range!!	(798,350)
Pixel request out of range!!	(799,350)
Pixel request out of range!!	(699,300)
Pixel request out of range!!	(700,301)
Pixel request out of range!!	(701,302)
Pixel request out of range!!	(702,302)
Pixel request out of range!!	(703,303)
Pixel request out of range!!	(704,304)
Pixel request out of range!!	(705,305)
Pixel request out of range!!	(706,305)
Pixel request out of range!!	(707,306)
Pixel request out of range!!	(708,307)
Pixel request out of range!!	(709,308)
Pixel request out of range!!	(710,308)
Pixel request out of range!!	(711,309)
Pixel request out of range!!	(712,310)
Pixel request out of range!!	(713,311)
Pixel request out of range!!	(714,311)
Pixel request out of range!!	(715,312)
Pixel request out of range!!	(716,313)
Pixel request out of range!!	(717,314)
Pixel request out of range!!	(718,314)
Pixel request out of range!!	(719,315)
Pixel request out of range!!	(720,316)
Pixel request out of range!!	(721,317)
Pixel request out of range!!	(722,317)
Pixel request out of range!!	(723,318)
Pixel request out of range!!	(724,319)
Pixel request out of range!!	(725,320)
Pixel request out of range!!	(726,320)
Pixel request out of range!!	(727,321)
Pixel request out of range!!	(728,322)
Pixel request out of range!!	(729,323)
Pixel request out of range!!	(730,323)
Pixel request out of range!!	(731,324)
Pixel request out of range!!	(732,325)
Pixel request out of range!!	(733,326)
Pixel request out of range!!	(734,326)
Pixel request out of range!!	(735,327)
Pixel request out of range!!	(736,328)
Pixel request out of range!!	(737,329)
Pixel request out of range!!	(738,329)
Pixel request out of range!!	(739,330)
Pixel request out of range!!	(664,305)
Pixel request out of range!!	(664,330)
Pixel request out of range!!	(694,305)
Pixel request out of range!!	(695,306)
Pixel request out of range!!	(696,306)
Pixel request out of range!!	(697,307)
Pixel request out of range!!	(698,308)
Pixel request out of range!!	(699,309)
Pixel request out of range!!	(700,309)
Pixel request out of range!!	(701,310)
Pixel request out of range!!	(702,311)
Pixel request out of range!!	(703,311)
Pixel request out of range!!	(704,312)
Pixel request out of range!!	(705,313)
Pixel request out of range!!	(706,314)
Pixel request out of range!!	(707,314)
Pixel request out of range!!	(708,315)
Pixel request out of range!!	(709,316)
Pixel request out of range!!	(710,316)
Pixel request out of range!!	(711,317)
Pixel request out of range!!	(712,318)
Pixel request out of range!!	(713,319)
Pixel request out of range!!	(714,319)
Pixel request out of range!!	(715,320)
Pixel request out of range!!	(716,321)
Pixel request out of range!!	(717,321)
Pixel request out of range!!	(718,322)
Pixel request out of range!!	(719,323)
Pixel request out of range!!	(720,324)
Pixel request out of range!!	(721,324)
Pixel request out of range!!	(722,325)
Pixel request out of range!!	(723,326)
Pixel request out of range!!	(724,326)
Pixel request out of range!!	(725,327)
Pixel request out of range!!	(726,328)
Pixel request out of range!!	(727,329)
Pixel request out of range!!	(728,329)
Pixel request out of range!!	(729,330)
Pixel request out of range!!	(664,305)
Pixel request out of range!!	(659,305)
Pixel request out of range!!	(756,370)
Pixel request out of range!!	(756,370)
Pixel request out of range!!	(722,370)
Pixel request out of range!!	(722,370)
Pixel request out of range!!	(739,353)
Pixel request out of range!!	(739,387)
Pixel request out of range!!	(739,353)
Pixel request out of range!!	(739,387)
Pixel request out of range!!	(756,371)
Pixel request out of range!!	(756,369)
Pixel request out of range!!	(722,371)
Pixel request out of range!!	(722,369)
Pixel request out of range!!	(738,353)
Pixel request out of range!!	(738,387)
Pixel request out of range!!	(740,353)
Pixel request out of range!!	(740,387)
Pixel request out of range!!	(756,372)
Pixel request out of range!!	(756,368)
Pixel request out of range!!	(722,372)
Pixel request out of range!!	(722,368)
Pixel request out of range!!	(737,353)
Pixel request out of range!!	(737,387)
Pixel request out of range!!	(741,353)
Pixel request out of range!!	(741,387)
Pixel request out of range!!	(756,373)
Pixel request out of range!!	(756,367)
Pixel request out of range!!	(722,373)
Pixel request out of range!!	(722,367)
Pixel request out of range!!	(736,353)
Pixel request out of range!!	(736,387)
Pixel request out of range!!	(742,353)
Pixel request out of range!!	(742,387)
Pixel request out of range!!	(756,374)
Pixel request out of range!!	(756,366)
Pixel request out of range!!	(722,374)
Pixel request out of range!!	(722,366)
Pixel request out of range!!	(735,353)
Pixel request out of range!!	(735,387)
Pixel request out of range!!	(743,353)
Pixel request out of range!!	(743,387)
Pixel request out of range!!	(755,375)
Pixel request out of range!!	(755,365)
Pixel request out of range!!	(723,375)
Pixel request out of range!!	(723,365)
Pixel request out of range!!	(734,354)
Pixel request out of range!!	(734,386)
Pixel request out of range!!	(744,354)
Pixel request out of range!!	(744,386)
Pixel request out of range!!	(755,376)
Pixel request out of range!!	(755,364)
Pixel request out of range!!	(723,376)
Pixel request out of range!!	(723,364)
Pixel request out of range!!	(733,354)
Pixel request out of range!!	(733,386)
Pixel request out of range!!	(745,354)
Pixel request out of range!!	(745,386)
Pixel request out of range!!	(755,377)
Pixel request out of range!!	(755,363)
Pixel request out of range!!	(723,377)
Pixel request out of range!!	(723,363)
Pixel request out of range!!	(732,354)
Pixel request out of range!!	(732,386)
Pixel request out of range!!	(746,354)
Pixel request out of range!!	(746,386)
Pixel request out of range!!	(754,378)
Pixel request out of range!!	(754,362)
Pixel request out of range!!	(724,378)
Pixel request out of range!!	(724,362)
Pixel request out of range!!	(731,355)
Pixel request out of range!!	(731,385)
Pixel request out of range!!	(747,355)
Pixel request out of range!!	(747,385)
Pixel request out of range!!	(754,379)
Pixel request out of range!!	(754,361)
Pixel request out of range!!	(724,379)
Pixel request out of range!!	(724,361)
Pixel request out of range!!	(730,355)
Pixel request out of range!!	(730,385)
Pixel request out of range!!	(748,355)
Pixel request out of range!!	(748,385)
Pixel request out of range!!	(753,380)
Pixel request out of range!!	(753,360)
Pixel request out of range!!	(725,380)
Pixel request out of range!!	(725,360)
Pixel request out of range!!	(729,356)
Pixel request out of range!!	(729,384)
Pixel request out of range!!	(749,356)
Pixel request out of range!!	(749,384)
Pixel request out of range!!	(752,381)
Pixel request out of range!!	(752,359)
Pixel request out of range!!	(726,381)
Pixel request out of range!!	(726,359)
Pixel request out of range!!	(728,357)
Pixel request out of range!!	(728,383)
Pixel request out of range!!	(750,357)
Pixel request out of range!!	(750,383)
Pixel request out of range!!	(752,382)
Pixel request out of range!!	(752,358)
Pixel request out of range!!	(726,382)
Pixel request out of range!!	(726,358)
Pixel request out of range!!	(727,357)
Pixel request out of range!!	(727,383)
Pixel request out of range!!	(751,357)
Pixel request out of range!!	(751,383)
gescoe@kanchan:~/Desktop$ 
*****************************/