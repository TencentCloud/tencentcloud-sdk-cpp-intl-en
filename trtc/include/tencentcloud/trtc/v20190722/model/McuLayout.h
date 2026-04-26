/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/UserMediaStream.h>
#include <tencentcloud/trtc/v20190722/model/McuCustomCrop.h>
#include <tencentcloud/trtc/v20190722/model/McuBackgroundCustomRender.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The layout parameters.
                */
                class McuLayout : public AbstractModel
                {
                public:
                    McuLayout();
                    ~McuLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User media stream parameters. if left blank, tencent cloud backend fills them automatically by the room entry sequence of the uplink host.
                     * @return UserMediaStream User media stream parameters. if left blank, tencent cloud backend fills them automatically by the room entry sequence of the uplink host.
                     * 
                     */
                    UserMediaStream GetUserMediaStream() const;

                    /**
                     * 设置User media stream parameters. if left blank, tencent cloud backend fills them automatically by the room entry sequence of the uplink host.
                     * @param _userMediaStream User media stream parameters. if left blank, tencent cloud backend fills them automatically by the room entry sequence of the uplink host.
                     * 
                     */
                    void SetUserMediaStream(const UserMediaStream& _userMediaStream);

                    /**
                     * 判断参数 UserMediaStream 是否已赋值
                     * @return UserMediaStream 是否已赋值
                     * 
                     */
                    bool UserMediaStreamHasBeenSet() const;

                    /**
                     * 获取The width of the sub-screen in the output, unit: pixel value. defaults to 0 if left blank.
                     * @return ImageWidth The width of the sub-screen in the output, unit: pixel value. defaults to 0 if left blank.
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置The width of the sub-screen in the output, unit: pixel value. defaults to 0 if left blank.
                     * @param _imageWidth The width of the sub-screen in the output, unit: pixel value. defaults to 0 if left blank.
                     * 
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取The height of the sub-screen in the output, in pixel values. default is 0.
                     * @return ImageHeight The height of the sub-screen in the output, in pixel values. default is 0.
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置The height of the sub-screen in the output, in pixel values. default is 0.
                     * @param _imageHeight The height of the sub-screen in the output, in pixel values. default is 0.
                     * 
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取The X-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationX and ImageWidth must not exceed the total width of the mixed stream output. default is 0.
                     * @return LocationX The X-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationX and ImageWidth must not exceed the total width of the mixed stream output. default is 0.
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置The X-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationX and ImageWidth must not exceed the total width of the mixed stream output. default is 0.
                     * @param _locationX The X-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationX and ImageWidth must not exceed the total width of the mixed stream output. default is 0.
                     * 
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取The Y-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationY and ImageHeight must not exceed the total height of the mixed stream output. default is 0 if left blank.
                     * @return LocationY The Y-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationY and ImageHeight must not exceed the total height of the mixed stream output. default is 0 if left blank.
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置The Y-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationY and ImageHeight must not exceed the total height of the mixed stream output. default is 0 if left blank.
                     * @param _locationY The Y-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationY and ImageHeight must not exceed the total height of the mixed stream output. default is 0 if left blank.
                     * 
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取The hierarchy of the sub-screen in the output. default is 0.
                     * @return ZOrder The hierarchy of the sub-screen in the output. default is 0.
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置The hierarchy of the sub-screen in the output. default is 0.
                     * @param _zOrder The hierarchy of the sub-screen in the output. default is 0.
                     * 
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                    /**
                     * 获取The display mode of the sub-screen in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background. defaults to 0 if left blank.
                     * @return RenderMode The display mode of the sub-screen in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background. defaults to 0 if left blank.
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置The display mode of the sub-screen in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background. defaults to 0 if left blank.
                     * @param _renderMode The display mode of the sub-screen in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background. defaults to 0 if left blank.
                     * 
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取[This parameter configuration is invalid and not currently supported] the background color of the sub-picture. commonly used colors are:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * @return BackGroundColor [This parameter configuration is invalid and not currently supported] the background color of the sub-picture. commonly used colors are:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置[This parameter configuration is invalid and not currently supported] the background color of the sub-picture. commonly used colors are:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * @param _backGroundColor [This parameter configuration is invalid and not currently supported] the background color of the sub-picture. commonly used colors are:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取The url of the placeholder image for the sub-window. fill in this parameter to specify the image displayed in the layout position when the user turns the camera off or has not joined the TRTC room. if the specified image has a different size ratio from the layout position, it will be stretched. this parameter has a higher priority than BackGroundColor. supported formats include png, jpg, jpeg, bmp, gif, and webm. the image size limit is no more than 5MB.
Note:.
1. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the placeholder image will not take effect.
2. supported character sets for urls: ['0-9', 'a-z', 'a-z', '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the placeholder image will not take effect.
                     * @return BackgroundImageUrl The url of the placeholder image for the sub-window. fill in this parameter to specify the image displayed in the layout position when the user turns the camera off or has not joined the TRTC room. if the specified image has a different size ratio from the layout position, it will be stretched. this parameter has a higher priority than BackGroundColor. supported formats include png, jpg, jpeg, bmp, gif, and webm. the image size limit is no more than 5MB.
Note:.
1. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the placeholder image will not take effect.
2. supported character sets for urls: ['0-9', 'a-z', 'a-z', '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the placeholder image will not take effect.
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置The url of the placeholder image for the sub-window. fill in this parameter to specify the image displayed in the layout position when the user turns the camera off or has not joined the TRTC room. if the specified image has a different size ratio from the layout position, it will be stretched. this parameter has a higher priority than BackGroundColor. supported formats include png, jpg, jpeg, bmp, gif, and webm. the image size limit is no more than 5MB.
Note:.
1. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the placeholder image will not take effect.
2. supported character sets for urls: ['0-9', 'a-z', 'a-z', '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the placeholder image will not take effect.
                     * @param _backgroundImageUrl The url of the placeholder image for the sub-window. fill in this parameter to specify the image displayed in the layout position when the user turns the camera off or has not joined the TRTC room. if the specified image has a different size ratio from the layout position, it will be stretched. this parameter has a higher priority than BackGroundColor. supported formats include png, jpg, jpeg, bmp, gif, and webm. the image size limit is no more than 5MB.
Note:.
1. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the placeholder image will not take effect.
2. supported character sets for urls: ['0-9', 'a-z', 'a-z', '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the placeholder image will not take effect.
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取Customer custom crop, targeting the input stream.
                     * @return CustomCrop Customer custom crop, targeting the input stream.
                     * 
                     */
                    McuCustomCrop GetCustomCrop() const;

                    /**
                     * 设置Customer custom crop, targeting the input stream.
                     * @param _customCrop Customer custom crop, targeting the input stream.
                     * 
                     */
                    void SetCustomCrop(const McuCustomCrop& _customCrop);

                    /**
                     * 判断参数 CustomCrop 是否已赋值
                     * @return CustomCrop 是否已赋值
                     * 
                     */
                    bool CustomCropHasBeenSet() const;

                    /**
                     * 获取The display mode of the sub-background image in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background, 3 for variable-scale scaling, 4 for custom rendering. defaults to 3 if left blank.
                     * @return BackgroundRenderMode The display mode of the sub-background image in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background, 3 for variable-scale scaling, 4 for custom rendering. defaults to 3 if left blank.
                     * 
                     */
                    uint64_t GetBackgroundRenderMode() const;

                    /**
                     * 设置The display mode of the sub-background image in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background, 3 for variable-scale scaling, 4 for custom rendering. defaults to 3 if left blank.
                     * @param _backgroundRenderMode The display mode of the sub-background image in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background, 3 for variable-scale scaling, 4 for custom rendering. defaults to 3 if left blank.
                     * 
                     */
                    void SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode);

                    /**
                     * 判断参数 BackgroundRenderMode 是否已赋值
                     * @return BackgroundRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundRenderModeHasBeenSet() const;

                    /**
                     * 获取The sub-screen template url points to a template image with an alpha channel. fill in this parameter, and the backend will extract the alpha channel of the template image during compositing, scale it as the alpha channel of the target frame, and mix it with other frames. you can use the transparent template to achieve a semi-transparent effect and arbitrary shape cropping (such as rounded corners, stars, hearts) for the target frame. png format is supported. the image size limit is no more than 5MB.
Note:.
1. the image aspect ratio of the template should be close to the target frame aspect ratio to avoid deformation of the template effect when scaling to fit the target frame. 2. the transparent template only takes effect when RenderMode is 0 (crop). 3. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the transparent template will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the transparent template will not take effect.
                     * @return TransparentUrl The sub-screen template url points to a template image with an alpha channel. fill in this parameter, and the backend will extract the alpha channel of the template image during compositing, scale it as the alpha channel of the target frame, and mix it with other frames. you can use the transparent template to achieve a semi-transparent effect and arbitrary shape cropping (such as rounded corners, stars, hearts) for the target frame. png format is supported. the image size limit is no more than 5MB.
Note:.
1. the image aspect ratio of the template should be close to the target frame aspect ratio to avoid deformation of the template effect when scaling to fit the target frame. 2. the transparent template only takes effect when RenderMode is 0 (crop). 3. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the transparent template will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the transparent template will not take effect.
                     * 
                     */
                    std::string GetTransparentUrl() const;

                    /**
                     * 设置The sub-screen template url points to a template image with an alpha channel. fill in this parameter, and the backend will extract the alpha channel of the template image during compositing, scale it as the alpha channel of the target frame, and mix it with other frames. you can use the transparent template to achieve a semi-transparent effect and arbitrary shape cropping (such as rounded corners, stars, hearts) for the target frame. png format is supported. the image size limit is no more than 5MB.
Note:.
1. the image aspect ratio of the template should be close to the target frame aspect ratio to avoid deformation of the template effect when scaling to fit the target frame. 2. the transparent template only takes effect when RenderMode is 0 (crop). 3. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the transparent template will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the transparent template will not take effect.
                     * @param _transparentUrl The sub-screen template url points to a template image with an alpha channel. fill in this parameter, and the backend will extract the alpha channel of the template image during compositing, scale it as the alpha channel of the target frame, and mix it with other frames. you can use the transparent template to achieve a semi-transparent effect and arbitrary shape cropping (such as rounded corners, stars, hearts) for the target frame. png format is supported. the image size limit is no more than 5MB.
Note:.
1. the image aspect ratio of the template should be close to the target frame aspect ratio to avoid deformation of the template effect when scaling to fit the target frame. 2. the transparent template only takes effect when RenderMode is 0 (crop). 3. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the transparent template will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the transparent template will not take effect.
                     * 
                     */
                    void SetTransparentUrl(const std::string& _transparentUrl);

                    /**
                     * 判断参数 TransparentUrl 是否已赋值
                     * @return TransparentUrl 是否已赋值
                     * 
                     */
                    bool TransparentUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return BackgroundCustomRender 
                     * 
                     */
                    McuBackgroundCustomRender GetBackgroundCustomRender() const;

                    /**
                     * 设置
                     * @param _backgroundCustomRender 
                     * 
                     */
                    void SetBackgroundCustomRender(const McuBackgroundCustomRender& _backgroundCustomRender);

                    /**
                     * 判断参数 BackgroundCustomRender 是否已赋值
                     * @return BackgroundCustomRender 是否已赋值
                     * 
                     */
                    bool BackgroundCustomRenderHasBeenSet() const;

                    /**
                     * 获取Sub-Background color effective mode. default value 0 means disabled.
bit0 specifies whether placeholder image scaling takes effect.
bit1 specifies whether upstream flow scaling takes effect.
You can set the corresponding bit position to 1 to start up and take effect, such as:.
0(00) means the sub background color is disabled.
1(01) indicates the sub-background color is valid only when placeholder image scaling is enabled.
2(10) means the sub background color is valid only when upstream flow scaling.
3(11) indicates the sub-background color takes effect in both placeholder image scaling and upstream flow scaling.

                     * @return BackGroundColorMode Sub-Background color effective mode. default value 0 means disabled.
bit0 specifies whether placeholder image scaling takes effect.
bit1 specifies whether upstream flow scaling takes effect.
You can set the corresponding bit position to 1 to start up and take effect, such as:.
0(00) means the sub background color is disabled.
1(01) indicates the sub-background color is valid only when placeholder image scaling is enabled.
2(10) means the sub background color is valid only when upstream flow scaling.
3(11) indicates the sub-background color takes effect in both placeholder image scaling and upstream flow scaling.

                     * 
                     */
                    uint64_t GetBackGroundColorMode() const;

                    /**
                     * 设置Sub-Background color effective mode. default value 0 means disabled.
bit0 specifies whether placeholder image scaling takes effect.
bit1 specifies whether upstream flow scaling takes effect.
You can set the corresponding bit position to 1 to start up and take effect, such as:.
0(00) means the sub background color is disabled.
1(01) indicates the sub-background color is valid only when placeholder image scaling is enabled.
2(10) means the sub background color is valid only when upstream flow scaling.
3(11) indicates the sub-background color takes effect in both placeholder image scaling and upstream flow scaling.

                     * @param _backGroundColorMode Sub-Background color effective mode. default value 0 means disabled.
bit0 specifies whether placeholder image scaling takes effect.
bit1 specifies whether upstream flow scaling takes effect.
You can set the corresponding bit position to 1 to start up and take effect, such as:.
0(00) means the sub background color is disabled.
1(01) indicates the sub-background color is valid only when placeholder image scaling is enabled.
2(10) means the sub background color is valid only when upstream flow scaling.
3(11) indicates the sub-background color takes effect in both placeholder image scaling and upstream flow scaling.

                     * 
                     */
                    void SetBackGroundColorMode(const uint64_t& _backGroundColorMode);

                    /**
                     * 判断参数 BackGroundColorMode 是否已赋值
                     * @return BackGroundColorMode 是否已赋值
                     * 
                     */
                    bool BackGroundColorModeHasBeenSet() const;

                private:

                    /**
                     * User media stream parameters. if left blank, tencent cloud backend fills them automatically by the room entry sequence of the uplink host.
                     */
                    UserMediaStream m_userMediaStream;
                    bool m_userMediaStreamHasBeenSet;

                    /**
                     * The width of the sub-screen in the output, unit: pixel value. defaults to 0 if left blank.
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * The height of the sub-screen in the output, in pixel values. default is 0.
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * The X-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationX and ImageWidth must not exceed the total width of the mixed stream output. default is 0.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * The Y-axis offset of the sub-screen in the output, unit: pixel value. the sum of LocationY and ImageHeight must not exceed the total height of the mixed stream output. default is 0 if left blank.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * The hierarchy of the sub-screen in the output. default is 0.
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * The display mode of the sub-screen in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background. defaults to 0 if left blank.
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * [This parameter configuration is invalid and not currently supported] the background color of the sub-picture. commonly used colors are:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * The url of the placeholder image for the sub-window. fill in this parameter to specify the image displayed in the layout position when the user turns the camera off or has not joined the TRTC room. if the specified image has a different size ratio from the layout position, it will be stretched. this parameter has a higher priority than BackGroundColor. supported formats include png, jpg, jpeg, bmp, gif, and webm. the image size limit is no more than 5MB.
Note:.
1. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the placeholder image will not take effect.
2. supported character sets for urls: ['0-9', 'a-z', 'a-z', '-', '.', '_', '~', ':', '/', '?', '#', '[', ']', '@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the placeholder image will not take effect.
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * Customer custom crop, targeting the input stream.
                     */
                    McuCustomCrop m_customCrop;
                    bool m_customCropHasBeenSet;

                    /**
                     * The display mode of the sub-background image in the output: 0 for crop, 1 for scale and display background, 2 for scale and display black background, 3 for variable-scale scaling, 4 for custom rendering. defaults to 3 if left blank.
                     */
                    uint64_t m_backgroundRenderMode;
                    bool m_backgroundRenderModeHasBeenSet;

                    /**
                     * The sub-screen template url points to a template image with an alpha channel. fill in this parameter, and the backend will extract the alpha channel of the template image during compositing, scale it as the alpha channel of the target frame, and mix it with other frames. you can use the transparent template to achieve a semi-transparent effect and arbitrary shape cropping (such as rounded corners, stars, hearts) for the target frame. png format is supported. the image size limit is no more than 5MB.
Note:.
1. the image aspect ratio of the template should be close to the target frame aspect ratio to avoid deformation of the template effect when scaling to fit the target frame. 2. the transparent template only takes effect when RenderMode is 0 (crop). 3. make sure the image link is accessible. the backend single download timeout period is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the transparent template will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if characters outside the supported character sets exist, the transparent template will not take effect.
                     */
                    std::string m_transparentUrl;
                    bool m_transparentUrlHasBeenSet;

                    /**
                     * 
                     */
                    McuBackgroundCustomRender m_backgroundCustomRender;
                    bool m_backgroundCustomRenderHasBeenSet;

                    /**
                     * Sub-Background color effective mode. default value 0 means disabled.
bit0 specifies whether placeholder image scaling takes effect.
bit1 specifies whether upstream flow scaling takes effect.
You can set the corresponding bit position to 1 to start up and take effect, such as:.
0(00) means the sub background color is disabled.
1(01) indicates the sub-background color is valid only when placeholder image scaling is enabled.
2(10) means the sub background color is valid only when upstream flow scaling.
3(11) indicates the sub-background color takes effect in both placeholder image scaling and upstream flow scaling.

                     */
                    uint64_t m_backGroundColorMode;
                    bool m_backGroundColorModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_
