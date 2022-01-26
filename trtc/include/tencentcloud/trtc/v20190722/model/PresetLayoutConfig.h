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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_PRESETLAYOUTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_PRESETLAYOUTCONFIG_H_

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
                * Valid in custom template, used to specify the video image position of a user in mixed streams.
                */
                class PresetLayoutConfig : public AbstractModel
                {
                public:
                    PresetLayoutConfig();
                    ~PresetLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Used to assign users to preset positions; if not assigned, users will occupy the positions set in `PresetLayoutConfig` in room entry sequence.
                     * @return UserId Used to assign users to preset positions; if not assigned, users will occupy the positions set in `PresetLayoutConfig` in room entry sequence.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Used to assign users to preset positions; if not assigned, users will occupy the positions set in `PresetLayoutConfig` in room entry sequence.
                     * @param UserId Used to assign users to preset positions; if not assigned, users will occupy the positions set in `PresetLayoutConfig` in room entry sequence.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Stream type of the user when a specified user is assigned to the image. 0: camera; 1: screen sharing. Set this parameter to 0 when the small image is occupied by a web user.
                     * @return StreamType Stream type of the user when a specified user is assigned to the image. 0: camera; 1: screen sharing. Set this parameter to 0 when the small image is occupied by a web user.
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置Stream type of the user when a specified user is assigned to the image. 0: camera; 1: screen sharing. Set this parameter to 0 when the small image is occupied by a web user.
                     * @param StreamType Stream type of the user when a specified user is assigned to the image. 0: camera; 1: screen sharing. Set this parameter to 0 when the small image is occupied by a web user.
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Width of the output image in pixels. If this parameter is not set, 0 is used by default.
                     * @return ImageWidth Width of the output image in pixels. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置Width of the output image in pixels. If this parameter is not set, 0 is used by default.
                     * @param ImageWidth Width of the output image in pixels. If this parameter is not set, 0 is used by default.
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取Height of the output image in pixels. If this parameter is not set, 0 is used by default.
                     * @return ImageHeight Height of the output image in pixels. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置Height of the output image in pixels. If this parameter is not set, 0 is used by default.
                     * @param ImageHeight Height of the output image in pixels. If this parameter is not set, 0 is used by default.
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取X offset of the output image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the mixed stream. If this parameter is not set, 0 is used by default.
                     * @return LocationX X offset of the output image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the mixed stream. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置X offset of the output image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the mixed stream. If this parameter is not set, 0 is used by default.
                     * @param LocationX X offset of the output image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the mixed stream. If this parameter is not set, 0 is used by default.
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取Y offset of the output image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the mixed stream. If this parameter is not set, 0 is used by default.
                     * @return LocationY Y offset of the output image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the mixed stream. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置Y offset of the output image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the mixed stream. If this parameter is not set, 0 is used by default.
                     * @param LocationY Y offset of the output image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the mixed stream. If this parameter is not set, 0 is used by default.
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取Output order of the image. `0` is used if it is left empty.
                     * @return ZOrder Output order of the image. `0` is used if it is left empty.
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置Output order of the image. `0` is used if it is left empty.
                     * @param ZOrder Output order of the image. `0` is used if it is left empty.
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     */
                    bool ZOrderHasBeenSet() const;

                    /**
                     * 获取Render mode of the output image. 0: cropping; 1: scaling; 2: scaling on a black background. If this parameter is not set, 0 is used by default.
                     * @return RenderMode Render mode of the output image. 0: cropping; 1: scaling; 2: scaling on a black background. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置Render mode of the output image. 0: cropping; 1: scaling; 2: scaling on a black background. If this parameter is not set, 0 is used by default.
                     * @param RenderMode Render mode of the output image. 0: cropping; 1: scaling; 2: scaling on a black background. If this parameter is not set, 0 is used by default.
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取Media type of the mixed stream of the user occupying the current position. 0 (default): audio and video; 1: audio; 2: video. You are advised to specify a user ID when using this parameter.
                     * @return MixInputType Media type of the mixed stream of the user occupying the current position. 0 (default): audio and video; 1: audio; 2: video. You are advised to specify a user ID when using this parameter.
                     */
                    uint64_t GetMixInputType() const;

                    /**
                     * 设置Media type of the mixed stream of the user occupying the current position. 0 (default): audio and video; 1: audio; 2: video. You are advised to specify a user ID when using this parameter.
                     * @param MixInputType Media type of the mixed stream of the user occupying the current position. 0 (default): audio and video; 1: audio; 2: video. You are advised to specify a user ID when using this parameter.
                     */
                    void SetMixInputType(const uint64_t& _mixInputType);

                    /**
                     * 判断参数 MixInputType 是否已赋值
                     * @return MixInputType 是否已赋值
                     */
                    bool MixInputTypeHasBeenSet() const;

                    /**
                     * 获取ID of the placeholder image. If the placeholding feature is enabled, and a user for whom an image position is reserved is not sending video data, the position will show the placeholder image. The ID is generated after the placeholder image is uploaded in the TRTC console. https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1
                     * @return PlaceImageId ID of the placeholder image. If the placeholding feature is enabled, and a user for whom an image position is reserved is not sending video data, the position will show the placeholder image. The ID is generated after the placeholder image is uploaded in the TRTC console. https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1
                     */
                    uint64_t GetPlaceImageId() const;

                    /**
                     * 设置ID of the placeholder image. If the placeholding feature is enabled, and a user for whom an image position is reserved is not sending video data, the position will show the placeholder image. The ID is generated after the placeholder image is uploaded in the TRTC console. https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1
                     * @param PlaceImageId ID of the placeholder image. If the placeholding feature is enabled, and a user for whom an image position is reserved is not sending video data, the position will show the placeholder image. The ID is generated after the placeholder image is uploaded in the TRTC console. https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1
                     */
                    void SetPlaceImageId(const uint64_t& _placeImageId);

                    /**
                     * 判断参数 PlaceImageId 是否已赋值
                     * @return PlaceImageId 是否已赋值
                     */
                    bool PlaceImageIdHasBeenSet() const;

                private:

                    /**
                     * Used to assign users to preset positions; if not assigned, users will occupy the positions set in `PresetLayoutConfig` in room entry sequence.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Stream type of the user when a specified user is assigned to the image. 0: camera; 1: screen sharing. Set this parameter to 0 when the small image is occupied by a web user.
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Width of the output image in pixels. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * Height of the output image in pixels. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * X offset of the output image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the mixed stream. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * Y offset of the output image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the mixed stream. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * Output order of the image. `0` is used if it is left empty.
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * Render mode of the output image. 0: cropping; 1: scaling; 2: scaling on a black background. If this parameter is not set, 0 is used by default.
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * Media type of the mixed stream of the user occupying the current position. 0 (default): audio and video; 1: audio; 2: video. You are advised to specify a user ID when using this parameter.
                     */
                    uint64_t m_mixInputType;
                    bool m_mixInputTypeHasBeenSet;

                    /**
                     * ID of the placeholder image. If the placeholding feature is enabled, and a user for whom an image position is reserved is not sending video data, the position will show the placeholder image. The ID is generated after the placeholder image is uploaded in the TRTC console. https://intl.cloud.tencent.com/document/product/647/50769?from_cn_redirect=1
                     */
                    uint64_t m_placeImageId;
                    bool m_placeImageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_PRESETLAYOUTCONFIG_H_
