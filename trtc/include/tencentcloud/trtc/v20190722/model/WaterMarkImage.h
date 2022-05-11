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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKIMAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKIMAGE_H_

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
                * The information of watermark images.
                */
                class WaterMarkImage : public AbstractModel
                {
                public:
                    WaterMarkImage();
                    ~WaterMarkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The download URLs of the watermark images, which must be in JPG or PNG format and cannot be larger than 5 MB.
                     * @return WaterMarkUrl The download URLs of the watermark images, which must be in JPG or PNG format and cannot be larger than 5 MB.
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置The download URLs of the watermark images, which must be in JPG or PNG format and cannot be larger than 5 MB.
                     * @param WaterMarkUrl The download URLs of the watermark images, which must be in JPG or PNG format and cannot be larger than 5 MB.
                     */
                    void SetWaterMarkUrl(const std::string& _waterMarkUrl);

                    /**
                     * 判断参数 WaterMarkUrl 是否已赋值
                     * @return WaterMarkUrl 是否已赋值
                     */
                    bool WaterMarkUrlHasBeenSet() const;

                    /**
                     * 获取The Y axis of the image's top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas height.
                     * @return Top The Y axis of the image's top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas height.
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置The Y axis of the image's top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas height.
                     * @param Top The Y axis of the image's top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas height.
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取The X axis of the image’s top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas width.
                     * @return Left The X axis of the image’s top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas width.
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置The X axis of the image’s top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas width.
                     * @param Left The X axis of the image’s top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas width.
                     */
                    void SetLeft(const uint64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取The relative width of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     * @return Width The relative width of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The relative width of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     * @param Width The relative width of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The relative height of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     * @return Height The relative height of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The relative height of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     * @param Height The relative height of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * The download URLs of the watermark images, which must be in JPG or PNG format and cannot be larger than 5 MB.
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                    /**
                     * The Y axis of the image's top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas height.
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * The X axis of the image’s top-left corner. Value range: [0, 2560]. The value cannot be larger than the canvas width.
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * The relative width of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Left` cannot exceed the canvas width.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The relative height of the image. Value range: [0, 2560]. The sum of the values of this parameter and `Top` cannot exceed the canvas height.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKIMAGE_H_
