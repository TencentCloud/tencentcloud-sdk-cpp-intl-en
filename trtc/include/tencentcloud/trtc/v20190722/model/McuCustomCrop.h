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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUCUSTOMCROP_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUCUSTOMCROP_H_

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
                * The cropping parameters for mixed videos.
                */
                class McuCustomCrop : public AbstractModel
                {
                public:
                    McuCustomCrop();
                    ~McuCustomCrop() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The horizontal offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     * @return LocationX The horizontal offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置The horizontal offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     * @param LocationX The horizontal offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取The vertical offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     * @return LocationY The vertical offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置The vertical offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     * @param LocationY The vertical offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取The video width (pixels) after cropping. The sum of this parameter and `LocationX` cannot be greater than 10000.
                     * @return Width The video width (pixels) after cropping. The sum of this parameter and `LocationX` cannot be greater than 10000.
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The video width (pixels) after cropping. The sum of this parameter and `LocationX` cannot be greater than 10000.
                     * @param Width The video width (pixels) after cropping. The sum of this parameter and `LocationX` cannot be greater than 10000.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The video height (pixels) after cropping. The sum of this parameter and `LocationY` cannot be greater than 10000.
                     * @return Height The video height (pixels) after cropping. The sum of this parameter and `LocationY` cannot be greater than 10000.
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The video height (pixels) after cropping. The sum of this parameter and `LocationY` cannot be greater than 10000.
                     * @param Height The video height (pixels) after cropping. The sum of this parameter and `LocationY` cannot be greater than 10000.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * The horizontal offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * The vertical offset (pixels) of the starting point for cropping. This parameter must be greater than 0.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * The video width (pixels) after cropping. The sum of this parameter and `LocationX` cannot be greater than 10000.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The video height (pixels) after cropping. The sum of this parameter and `LocationY` cannot be greater than 10000.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUCUSTOMCROP_H_
