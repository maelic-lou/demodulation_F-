clear all;
close all;
 
% 
% demod0=csvread("data0.csv"); 
% demod1=csvread("data1.csv"); 
% coef_fenetre=csvread("coefficient_fenetre.csv")
demod1r=csvread("data1_r.csv");
demod1i=csvread("data1_i.csv");
demod1=demod1r+i*demod1i;
demod2r=csvread("data2_r.csv");
demod2i=csvread("data2_i.csv");
demod2=demod2r+i*demod2i;
demod3=csvread("data3.csv");
demod4r=csvread("data4_r.csv");
demod4i=csvread("data4_i.csv");
demod4=demod4r+i*demod4i;
% demod4=csvread("data4.csv");
demod5=csvread("data5.csv");
% demod61=csvread("filtrage_hamming_30_sans_passe_bas.csv");
% demod62=csvread("filtrage_hamming_30.csv");
demod6=csvread("data6.csv");
% window=csvread("window.csv");
% ham=csvread("ham.csv");
% passe_bas=csvread("passe_bas.csv");
%  demod3=csvread("demodulation3.csv");
%  demod4=csvread("demodulation4.csv");
 %  decim=csvread("decim.csv");
%  df=csvread("demodulation.csv");
%  filtre=csvread("s_filtre.csv");
%  N1=length(decim);
%  N2=length(filtre);
%  figure(1)
%  subplot(121), plot(1:N1,decim(1:N1))
%  subplot(122), plot(1:N2,filtre(1:N2))
%  
%  figure(1)
%  plot_FFT_IQ(decim,1,.002*2.5E6/8,2.5/8,100.122,'Spectrum of decimated signal'); 


% Tracer le spectre du signal non filtré
figure(1)
plot_FFT_IQ(demod1,1,.002*2.5E6,2.5,100.122);
% 
 figure(2)
% Tracer le spectre du signal shift.
 plot_FFT_IQ(demod2,1,.002*2.5E6,2.5,101.1,'Spectrum of shifted signal');

 
% Tracer le spectre du signal décimé
 figure(3)
plot_FFT_IQ(demod4,1,.002*2.5E6/8,2.5/8,100.122,'Spectrum of decimated signal');
 
% % Tracer le spectre du signal démodulé
 figure(4)
plot_FFT_IQ(demod5,1,.002*2.5E6/8,2.5/8,100.122,'Spectrum of decimated signal');
 
%Tracer du signal démodulé décimé
figure(5)
plot_FFT_IQ(demod6,1,.05*2.5E6/8/10,2.5/8/10,0,'Spectrum of demodulated signal');

% Tracer du signal démodulé décimé
% figure(6)
% plot_FFT_IQ(demod61,1,.05*2.5E6/8/10,2.5/8/10,0,'Spectrum of demodulated signal');
% 
% figure(7)
% plot_FFT_IQ(demod62,1,.05*2.5E6/8/10,2.5/8/10,0,'Spectrum of demodulated signal');



