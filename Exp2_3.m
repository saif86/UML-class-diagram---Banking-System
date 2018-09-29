%%  EXAMPLE 2.3 %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%   Description: Typical effects of varying the number of intensity levels%
%                in a digital image.                                      %
%                                                                         %
%   Author: Saif Ullah Ijaz                                               %
%   Date: 10-01-2018                                                      %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% clearing Workspace :)
close all;
clear;

% reading the image as input
inputImage = imread('E:\Saifee\SJTU\SEIEE\Sem1\Image Processing and Machine Learning\eBooks\pictures\DIP 3e\DIP3E_Original_Images_CH02\Fig0221(a)(ctskull-256).tif');
quantize1 = halfIntensity(inputImage);
quantize2 = halfIntensity(quantize1);
quantize3 = halfIntensity(quantize2);
quantize4 = halfIntensity(quantize3);
quantize5 = halfIntensity(quantize4);
quantize6 = halfIntensity(quantize5);
quantize7 = halfIntensity(quantize6);

figure(1);suptitle('Reducing Intensity Levels');
subplot(4,2,1);
imshow(inputImage);title('(a). 256-level image');
subplot(4,2,2);
imshow(instensityScale(double(quantize1)));title('(b). 128-level image');
subplot(4,2,3);
imshow(instensityScale(double(quantize2)));title('(c). 64-level image');
subplot(4,2,4);
imshow(instensityScale(double(quantize3)));title('(d). 32-level image');
subplot(4,2,5);
imshow(instensityScale(double(quantize4)));title('(e). 16-level image');
subplot(4,2,6);
imshow(instensityScale(double(quantize5)));title('(f). 8-level image');
subplot(4,2,7);
imshow(instensityScale(double(quantize6)));title('(g). 4-level image');
subplot(4,2,8);
imshow(instensityScale(double(quantize7)));title('(h). 2-level image');
figure(2);suptitle('Histogram of corresponding images');
subplot(4,2,1);
imhist(inputImage);title('(a). 256-level image');
subplot(4,2,2);
imhist(instensityScale(double(quantize1)));title('(b). 128-level image');
subplot(4,2,3);
imhist(instensityScale(double(quantize2)));title('(c). 64-level image');
subplot(4,2,4);
imhist(instensityScale(double(quantize3)));title('(d). 32-level image');
subplot(4,2,5);
imhist(instensityScale(double(quantize4)));title('(e). 16-level image');
subplot(4,2,6);
imhist(instensityScale(double(quantize5)));title('(f). 8-level image');
subplot(4,2,7);
imhist(instensityScale(double(quantize6)));title('(g). 4-level image');
subplot(4,2,8);
imhist(instensityScale(double(quantize7)));title('(h). 2-level image');

function quantizedImage = halfIntensity(mImage)
    quantizedImage = uint8((double(mImage)+1)/2)-1;         % for zero level proper scaling we have to do +1 divide by 2 than +1
end

function fs = instensityScale(f)
fm = f - min(min(f));
K = 255;        % K intensity levels
fs = uint8(K * (fm/(max(max(fm)))));
end