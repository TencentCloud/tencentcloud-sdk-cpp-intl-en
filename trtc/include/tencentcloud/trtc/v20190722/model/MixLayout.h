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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The custom layout parameters.
                */
                class MixLayout : public AbstractModel
                {
                public:
                    MixLayout();
                    ~MixLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The Y axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas height.
                     * @return Top The Y axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas height.
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置The Y axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas height.
                     * @param Top The Y axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas height.
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取The X axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas width.
                     * @return Left The X axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas width.
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置The X axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas width.
                     * @param Left The X axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas width.
                     */
                    void SetLeft(const uint64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取The relative width of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     * @return Width The relative width of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The relative width of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     * @param Width The relative width of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The relative height of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     * @return Height The relative height of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The relative height of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     * @param Height The relative height of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The user ID (string) of the anchor whose video is shown in the window. If you do not set this parameter, anchors’ videos will be shown in their room entry sequence.
                     * @return UserId The user ID (string) of the anchor whose video is shown in the window. If you do not set this parameter, anchors’ videos will be shown in their room entry sequence.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID (string) of the anchor whose video is shown in the window. If you do not set this parameter, anchors’ videos will be shown in their room entry sequence.
                     * @param UserId The user ID (string) of the anchor whose video is shown in the window. If you do not set this parameter, anchors’ videos will be shown in their room entry sequence.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The degree of transparency of the canvas. Value range: [0, 255]. 0 means fully opaque, and 255 means fully transparent.
                     * @return Alpha The degree of transparency of the canvas. Value range: [0, 255]. 0 means fully opaque, and 255 means fully transparent.
                     */
                    uint64_t GetAlpha() const;

                    /**
                     * 设置The degree of transparency of the canvas. Value range: [0, 255]. 0 means fully opaque, and 255 means fully transparent.
                     * @param Alpha The degree of transparency of the canvas. Value range: [0, 255]. 0 means fully opaque, and 255 means fully transparent.
                     */
                    void SetAlpha(const uint64_t& _alpha);

                    /**
                     * 判断参数 Alpha 是否已赋值
                     * @return Alpha 是否已赋值
                     */
                    bool AlphaHasBeenSet() const;

                    /**
                     * 获取0: Stretch. In this mode, the image is stretched to fill the space available. The whole image is visible after scaling. However, if the original aspect ratio is different from the target, the image may be distorted.

1: Crop (default). In this mode, if the original aspect ratio is different from the target, the image will be cropped according to the target before being stretched to fill the space available. The image will not be distorted.

2: Blank. This mode stretches the image while keeping its original aspect ratio. If the original aspect ratio is different from the target, there may be blank spaces to the top and bottom or to the left and right of the window.

3: Smart stretch. This mode is similar to the crop mode, except that it restricts cropping to 20% of the image’s width or height at most.
                     * @return RenderMode 0: Stretch. In this mode, the image is stretched to fill the space available. The whole image is visible after scaling. However, if the original aspect ratio is different from the target, the image may be distorted.

1: Crop (default). In this mode, if the original aspect ratio is different from the target, the image will be cropped according to the target before being stretched to fill the space available. The image will not be distorted.

2: Blank. This mode stretches the image while keeping its original aspect ratio. If the original aspect ratio is different from the target, there may be blank spaces to the top and bottom or to the left and right of the window.

3: Smart stretch. This mode is similar to the crop mode, except that it restricts cropping to 20% of the image’s width or height at most.
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置0: Stretch. In this mode, the image is stretched to fill the space available. The whole image is visible after scaling. However, if the original aspect ratio is different from the target, the image may be distorted.

1: Crop (default). In this mode, if the original aspect ratio is different from the target, the image will be cropped according to the target before being stretched to fill the space available. The image will not be distorted.

2: Blank. This mode stretches the image while keeping its original aspect ratio. If the original aspect ratio is different from the target, there may be blank spaces to the top and bottom or to the left and right of the window.

3: Smart stretch. This mode is similar to the crop mode, except that it restricts cropping to 20% of the image’s width or height at most.
                     * @param RenderMode 0: Stretch. In this mode, the image is stretched to fill the space available. The whole image is visible after scaling. However, if the original aspect ratio is different from the target, the image may be distorted.

1: Crop (default). In this mode, if the original aspect ratio is different from the target, the image will be cropped according to the target before being stretched to fill the space available. The image will not be distorted.

2: Blank. This mode stretches the image while keeping its original aspect ratio. If the original aspect ratio is different from the target, there may be blank spaces to the top and bottom or to the left and right of the window.

3: Smart stretch. This mode is similar to the crop mode, except that it restricts cropping to 20% of the image’s width or height at most.
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取The type of the stream subscribed to.
0: Primary stream (default)
1: Substream
                     * @return MediaId The type of the stream subscribed to.
0: Primary stream (default)
1: Substream
                     */
                    uint64_t GetMediaId() const;

                    /**
                     * 设置The type of the stream subscribed to.
0: Primary stream (default)
1: Substream
                     * @param MediaId The type of the stream subscribed to.
0: Primary stream (default)
1: Substream
                     */
                    void SetMediaId(const uint64_t& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取The image layer. 0 is the default value and means the bottommost layer.
                     * @return ImageLayer The image layer. 0 is the default value and means the bottommost layer.
                     */
                    uint64_t GetImageLayer() const;

                    /**
                     * 设置The image layer. 0 is the default value and means the bottommost layer.
                     * @param ImageLayer The image layer. 0 is the default value and means the bottommost layer.
                     */
                    void SetImageLayer(const uint64_t& _imageLayer);

                    /**
                     * 判断参数 ImageLayer 是否已赋值
                     * @return ImageLayer 是否已赋值
                     */
                    bool ImageLayerHasBeenSet() const;

                    /**
                     * 获取The download URL of the background image for a window. The image must be in JPG or PNG format and cannot be larger than 5 MB. If the image’s aspect ratio is different from that of the window, the image will be rendered according to the value of `RenderMode`.
                     * @return SubBackgroundImage The download URL of the background image for a window. The image must be in JPG or PNG format and cannot be larger than 5 MB. If the image’s aspect ratio is different from that of the window, the image will be rendered according to the value of `RenderMode`.
                     */
                    std::string GetSubBackgroundImage() const;

                    /**
                     * 设置The download URL of the background image for a window. The image must be in JPG or PNG format and cannot be larger than 5 MB. If the image’s aspect ratio is different from that of the window, the image will be rendered according to the value of `RenderMode`.
                     * @param SubBackgroundImage The download URL of the background image for a window. The image must be in JPG or PNG format and cannot be larger than 5 MB. If the image’s aspect ratio is different from that of the window, the image will be rendered according to the value of `RenderMode`.
                     */
                    void SetSubBackgroundImage(const std::string& _subBackgroundImage);

                    /**
                     * 判断参数 SubBackgroundImage 是否已赋值
                     * @return SubBackgroundImage 是否已赋值
                     */
                    bool SubBackgroundImageHasBeenSet() const;

                private:

                    /**
                     * The Y axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas height.
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * The X axis of the window’s top-left corner. Value range: [0, 1920]. The value cannot be larger than the canvas width.
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * The relative width of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The relative height of the window. Value range: [0, 1920]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The user ID (string) of the anchor whose video is shown in the window. If you do not set this parameter, anchors’ videos will be shown in their room entry sequence.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The degree of transparency of the canvas. Value range: [0, 255]. 0 means fully opaque, and 255 means fully transparent.
                     */
                    uint64_t m_alpha;
                    bool m_alphaHasBeenSet;

                    /**
                     * 0: Stretch. In this mode, the image is stretched to fill the space available. The whole image is visible after scaling. However, if the original aspect ratio is different from the target, the image may be distorted.

1: Crop (default). In this mode, if the original aspect ratio is different from the target, the image will be cropped according to the target before being stretched to fill the space available. The image will not be distorted.

2: Blank. This mode stretches the image while keeping its original aspect ratio. If the original aspect ratio is different from the target, there may be blank spaces to the top and bottom or to the left and right of the window.

3: Smart stretch. This mode is similar to the crop mode, except that it restricts cropping to 20% of the image’s width or height at most.
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * The type of the stream subscribed to.
0: Primary stream (default)
1: Substream
                     */
                    uint64_t m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * The image layer. 0 is the default value and means the bottommost layer.
                     */
                    uint64_t m_imageLayer;
                    bool m_imageLayerHasBeenSet;

                    /**
                     * The download URL of the background image for a window. The image must be in JPG or PNG format and cannot be larger than 5 MB. If the image’s aspect ratio is different from that of the window, the image will be rendered according to the value of `RenderMode`.
                     */
                    std::string m_subBackgroundImage;
                    bool m_subBackgroundImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MIXLAYOUT_H_
