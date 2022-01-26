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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SMALLVIDEOLAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SMALLVIDEOLAYOUTPARAMS_H_

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
                * Layout parameter of the small image, which takes effect in a picture-in-picture template
                */
                class SmallVideoLayoutParams : public AbstractModel
                {
                public:
                    SmallVideoLayoutParams();
                    ~SmallVideoLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the user in the small image.
                     * @return UserId ID of the user in the small image.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置ID of the user in the small image.
                     * @param UserId ID of the user in the small image.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Stream type of the small image. 0: camera; 1: screen sharing. If a web user's stream is displayed in the small image, enter 0 for this parameter.
                     * @return StreamType Stream type of the small image. 0: camera; 1: screen sharing. If a web user's stream is displayed in the small image, enter 0 for this parameter.
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置Stream type of the small image. 0: camera; 1: screen sharing. If a web user's stream is displayed in the small image, enter 0 for this parameter.
                     * @param StreamType Stream type of the small image. 0: camera; 1: screen sharing. If a web user's stream is displayed in the small image, enter 0 for this parameter.
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Output width of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     * @return ImageWidth Output width of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置Output width of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     * @param ImageWidth Output width of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取Output height of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     * @return ImageHeight Output height of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置Output height of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     * @param ImageHeight Output height of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取Output X-axis offset of the small image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     * @return LocationX Output X-axis offset of the small image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置Output X-axis offset of the small image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     * @param LocationX Output X-axis offset of the small image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取Output Y-axis offset of the small image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     * @return LocationY Output Y-axis offset of the small image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置Output Y-axis offset of the small image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     * @param LocationY Output Y-axis offset of the small image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                private:

                    /**
                     * ID of the user in the small image.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Stream type of the small image. 0: camera; 1: screen sharing. If a web user's stream is displayed in the small image, enter 0 for this parameter.
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Output width of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * Output height of the small image in pixels. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * Output X-axis offset of the small image in pixels. The sum of `LocationX` and `ImageWidth` cannot exceed the total width of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * Output Y-axis offset of the small image in pixels. The sum of `LocationY` and `ImageHeight` cannot exceed the total height of the output mixed stream. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SMALLVIDEOLAYOUTPARAMS_H_
