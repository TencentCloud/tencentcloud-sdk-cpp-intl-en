/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取The information of the stream that is displayed. If you do not pass this parameter, TRTC will display the videos of anchors in the room according to their room entry sequence.
                     * @return UserMediaStream The information of the stream that is displayed. If you do not pass this parameter, TRTC will display the videos of anchors in the room according to their room entry sequence.
                     * 
                     */
                    UserMediaStream GetUserMediaStream() const;

                    /**
                     * 设置The information of the stream that is displayed. If you do not pass this parameter, TRTC will display the videos of anchors in the room according to their room entry sequence.
                     * @param _userMediaStream The information of the stream that is displayed. If you do not pass this parameter, TRTC will display the videos of anchors in the room according to their room entry sequence.
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
                     * 获取The video width (pixels). If you do not pass this parameter, 0 will be used.
                     * @return ImageWidth The video width (pixels). If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置The video width (pixels). If you do not pass this parameter, 0 will be used.
                     * @param _imageWidth The video width (pixels). If you do not pass this parameter, 0 will be used.
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
                     * 获取The video height (pixels). If you do not pass this parameter, 0 will be used.
                     * @return ImageHeight The video height (pixels). If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置The video height (pixels). If you do not pass this parameter, 0 will be used.
                     * @param _imageHeight The video height (pixels). If you do not pass this parameter, 0 will be used.
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
                     * 获取The horizontal offset (pixels) of the video. The sum of `LocationX` and `ImageWidth` cannot exceed the width of the canvas. If you do not pass this parameter, 0 will be used.
                     * @return LocationX The horizontal offset (pixels) of the video. The sum of `LocationX` and `ImageWidth` cannot exceed the width of the canvas. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置The horizontal offset (pixels) of the video. The sum of `LocationX` and `ImageWidth` cannot exceed the width of the canvas. If you do not pass this parameter, 0 will be used.
                     * @param _locationX The horizontal offset (pixels) of the video. The sum of `LocationX` and `ImageWidth` cannot exceed the width of the canvas. If you do not pass this parameter, 0 will be used.
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
                     * 获取The vertical offset of the video. The sum of `LocationY` and `ImageHeight` cannot exceed the height of the canvas. If you do not pass this parameter, 0 will be used.
                     * @return LocationY The vertical offset of the video. The sum of `LocationY` and `ImageHeight` cannot exceed the height of the canvas. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置The vertical offset of the video. The sum of `LocationY` and `ImageHeight` cannot exceed the height of the canvas. If you do not pass this parameter, 0 will be used.
                     * @param _locationY The vertical offset of the video. The sum of `LocationY` and `ImageHeight` cannot exceed the height of the canvas. If you do not pass this parameter, 0 will be used.
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
                     * 获取The image layer of the video. If you do not pass this parameter, 0 will be used.
                     * @return ZOrder The image layer of the video. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置The image layer of the video. If you do not pass this parameter, 0 will be used.
                     * @param _zOrder The image layer of the video. If you do not pass this parameter, 0 will be used.
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
                     * 获取The rendering mode of the video. 0 (the video is scaled and the excess parts are cropped), 1 (the video is scaled), 2 (the video is scaled and the blank spaces are filled with black bars). If you do not pass this parameter, 0 will be used.
                     * @return RenderMode The rendering mode of the video. 0 (the video is scaled and the excess parts are cropped), 1 (the video is scaled), 2 (the video is scaled and the blank spaces are filled with black bars). If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置The rendering mode of the video. 0 (the video is scaled and the excess parts are cropped), 1 (the video is scaled), 2 (the video is scaled and the blank spaces are filled with black bars). If you do not pass this parameter, 0 will be used.
                     * @param _renderMode The rendering mode of the video. 0 (the video is scaled and the excess parts are cropped), 1 (the video is scaled), 2 (the video is scaled and the blank spaces are filled with black bars). If you do not pass this parameter, 0 will be used.
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
                     * 获取(Not supported yet) The background color of a video. Below are the values for some commonly used colors:
Red: `0xcc0033`
Yellow: `0xcc9900`
Green: `0xcccc33`
Blue: `0x99CCFF`
Black: `0x000000`
White: `0xFFFFFF`
Grey: `0x999999`
                     * @return BackGroundColor (Not supported yet) The background color of a video. Below are the values for some commonly used colors:
Red: `0xcc0033`
Yellow: `0xcc9900`
Green: `0xcccc33`
Blue: `0x99CCFF`
Black: `0x000000`
White: `0xFFFFFF`
Grey: `0x999999`
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置(Not supported yet) The background color of a video. Below are the values for some commonly used colors:
Red: `0xcc0033`
Yellow: `0xcc9900`
Green: `0xcccc33`
Blue: `0x99CCFF`
Black: `0x000000`
White: `0xFFFFFF`
Grey: `0x999999`
                     * @param _backGroundColor (Not supported yet) The background color of a video. Below are the values for some commonly used colors:
Red: `0xcc0033`
Yellow: `0xcc9900`
Green: `0xcccc33`
Blue: `0x99CCFF`
Black: `0x000000`
White: `0xFFFFFF`
Grey: `0x999999`
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
                     * 获取The URL of the background image for the video. This parameter allows you to specify an image to display when the user’s camera is turned off or before the user enters the room. If the dimensions of the image specified are different from those of the video window, the image will be stretched to fit the space. This parameter has a higher priority than `BackGroundColor`.
                     * @return BackgroundImageUrl The URL of the background image for the video. This parameter allows you to specify an image to display when the user’s camera is turned off or before the user enters the room. If the dimensions of the image specified are different from those of the video window, the image will be stretched to fit the space. This parameter has a higher priority than `BackGroundColor`.
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置The URL of the background image for the video. This parameter allows you to specify an image to display when the user’s camera is turned off or before the user enters the room. If the dimensions of the image specified are different from those of the video window, the image will be stretched to fit the space. This parameter has a higher priority than `BackGroundColor`.
                     * @param _backgroundImageUrl The URL of the background image for the video. This parameter allows you to specify an image to display when the user’s camera is turned off or before the user enters the room. If the dimensions of the image specified are different from those of the video window, the image will be stretched to fit the space. This parameter has a higher priority than `BackGroundColor`.
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
                     * 获取Custom cropping.
                     * @return CustomCrop Custom cropping.
                     * 
                     */
                    McuCustomCrop GetCustomCrop() const;

                    /**
                     * 设置Custom cropping.
                     * @param _customCrop Custom cropping.
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
                     * 获取The display mode of the sub-background image during output: 0 for cropping, 1 for scaling and displaying the background, 2 for scaling and displaying the black background, 3 for proportional scaling. If not filled in, the default is 3.
                     * @return BackgroundRenderMode The display mode of the sub-background image during output: 0 for cropping, 1 for scaling and displaying the background, 2 for scaling and displaying the black background, 3 for proportional scaling. If not filled in, the default is 3.
                     * 
                     */
                    uint64_t GetBackgroundRenderMode() const;

                    /**
                     * 设置The display mode of the sub-background image during output: 0 for cropping, 1 for scaling and displaying the background, 2 for scaling and displaying the black background, 3 for proportional scaling. If not filled in, the default is 3.
                     * @param _backgroundRenderMode The display mode of the sub-background image during output: 0 for cropping, 1 for scaling and displaying the background, 2 for scaling and displaying the black background, 3 for proportional scaling. If not filled in, the default is 3.
                     * 
                     */
                    void SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode);

                    /**
                     * 判断参数 BackgroundRenderMode 是否已赋值
                     * @return BackgroundRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundRenderModeHasBeenSet() const;

                private:

                    /**
                     * The information of the stream that is displayed. If you do not pass this parameter, TRTC will display the videos of anchors in the room according to their room entry sequence.
                     */
                    UserMediaStream m_userMediaStream;
                    bool m_userMediaStreamHasBeenSet;

                    /**
                     * The video width (pixels). If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * The video height (pixels). If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * The horizontal offset (pixels) of the video. The sum of `LocationX` and `ImageWidth` cannot exceed the width of the canvas. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * The vertical offset of the video. The sum of `LocationY` and `ImageHeight` cannot exceed the height of the canvas. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * The image layer of the video. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * The rendering mode of the video. 0 (the video is scaled and the excess parts are cropped), 1 (the video is scaled), 2 (the video is scaled and the blank spaces are filled with black bars). If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * (Not supported yet) The background color of a video. Below are the values for some commonly used colors:
Red: `0xcc0033`
Yellow: `0xcc9900`
Green: `0xcccc33`
Blue: `0x99CCFF`
Black: `0x000000`
White: `0xFFFFFF`
Grey: `0x999999`
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * The URL of the background image for the video. This parameter allows you to specify an image to display when the user’s camera is turned off or before the user enters the room. If the dimensions of the image specified are different from those of the video window, the image will be stretched to fit the space. This parameter has a higher priority than `BackGroundColor`.
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * Custom cropping.
                     */
                    McuCustomCrop m_customCrop;
                    bool m_customCropHasBeenSet;

                    /**
                     * The display mode of the sub-background image during output: 0 for cropping, 1 for scaling and displaying the background, 2 for scaling and displaying the black background, 3 for proportional scaling. If not filled in, the default is 3.
                     */
                    uint64_t m_backgroundRenderMode;
                    bool m_backgroundRenderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUT_H_
