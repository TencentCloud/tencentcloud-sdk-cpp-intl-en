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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_LSQUEEZESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_LSQUEEZESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * 
                */
                class LSqueezeSetting : public AbstractModel
                {
                public:
                    LSqueezeSetting();
                    ~LSqueezeSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advertising benchmark position, 0 top left, 1 top right, 2 bottom right, 3 bottom left, default value 0, corresponding TOP_LEFT,TOP_RIGHT,BOTTOM_RIGHT,BOTTOM_LEFT
                     * @return Location Advertising benchmark position, 0 top left, 1 top right, 2 bottom right, 3 bottom left, default value 0, corresponding TOP_LEFT,TOP_RIGHT,BOTTOM_RIGHT,BOTTOM_LEFT
                     * 
                     */
                    uint64_t GetLocation() const;

                    /**
                     * 设置Advertising benchmark position, 0 top left, 1 top right, 2 bottom right, 3 bottom left, default value 0, corresponding TOP_LEFT,TOP_RIGHT,BOTTOM_RIGHT,BOTTOM_LEFT
                     * @param _location Advertising benchmark position, 0 top left, 1 top right, 2 bottom right, 3 bottom left, default value 0, corresponding TOP_LEFT,TOP_RIGHT,BOTTOM_RIGHT,BOTTOM_LEFT
                     * 
                     */
                    void SetLocation(const uint64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取The default value for the percentage in the X-axis direction is 20, with a range of 0-50
                     * @return OffsetX The default value for the percentage in the X-axis direction is 20, with a range of 0-50
                     * 
                     */
                    uint64_t GetOffsetX() const;

                    /**
                     * 设置The default value for the percentage in the X-axis direction is 20, with a range of 0-50
                     * @param _offsetX The default value for the percentage in the X-axis direction is 20, with a range of 0-50
                     * 
                     */
                    void SetOffsetX(const uint64_t& _offsetX);

                    /**
                     * 判断参数 OffsetX 是否已赋值
                     * @return OffsetX 是否已赋值
                     * 
                     */
                    bool OffsetXHasBeenSet() const;

                    /**
                     * 获取The default value for the percentage in the Y-axis direction is 20, with a range of 0-50
                     * @return OffsetY The default value for the percentage in the Y-axis direction is 20, with a range of 0-50
                     * 
                     */
                    uint64_t GetOffsetY() const;

                    /**
                     * 设置The default value for the percentage in the Y-axis direction is 20, with a range of 0-50
                     * @param _offsetY The default value for the percentage in the Y-axis direction is 20, with a range of 0-50
                     * 
                     */
                    void SetOffsetY(const uint64_t& _offsetY);

                    /**
                     * 判断参数 OffsetY 是否已赋值
                     * @return OffsetY 是否已赋值
                     * 
                     */
                    bool OffsetYHasBeenSet() const;

                    /**
                     * 获取Background image URL, starting with http/https and ending in jpg/jpeg/png
                     * @return BackgroundImgUrl Background image URL, starting with http/https and ending in jpg/jpeg/png
                     * 
                     */
                    std::string GetBackgroundImgUrl() const;

                    /**
                     * 设置Background image URL, starting with http/https and ending in jpg/jpeg/png
                     * @param _backgroundImgUrl Background image URL, starting with http/https and ending in jpg/jpeg/png
                     * 
                     */
                    void SetBackgroundImgUrl(const std::string& _backgroundImgUrl);

                    /**
                     * 判断参数 BackgroundImgUrl 是否已赋值
                     * @return BackgroundImgUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImgUrlHasBeenSet() const;

                    /**
                     * 获取Compress time. Unit ms, default value 2000, range: 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * @return SqueezeInPeriod Compress time. Unit ms, default value 2000, range: 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * 
                     */
                    uint64_t GetSqueezeInPeriod() const;

                    /**
                     * 设置Compress time. Unit ms, default value 2000, range: 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * @param _squeezeInPeriod Compress time. Unit ms, default value 2000, range: 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * 
                     */
                    void SetSqueezeInPeriod(const uint64_t& _squeezeInPeriod);

                    /**
                     * 判断参数 SqueezeInPeriod 是否已赋值
                     * @return SqueezeInPeriod 是否已赋值
                     * 
                     */
                    bool SqueezeInPeriodHasBeenSet() const;

                    /**
                     * 获取Restore to full screen time. Unit ms, default value 2000, range 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * @return SqueezeOutPeriod Restore to full screen time. Unit ms, default value 2000, range 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * 
                     */
                    uint64_t GetSqueezeOutPeriod() const;

                    /**
                     * 设置Restore to full screen time. Unit ms, default value 2000, range 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * @param _squeezeOutPeriod Restore to full screen time. Unit ms, default value 2000, range 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     * 
                     */
                    void SetSqueezeOutPeriod(const uint64_t& _squeezeOutPeriod);

                    /**
                     * 判断参数 SqueezeOutPeriod 是否已赋值
                     * @return SqueezeOutPeriod 是否已赋值
                     * 
                     */
                    bool SqueezeOutPeriodHasBeenSet() const;

                private:

                    /**
                     * Advertising benchmark position, 0 top left, 1 top right, 2 bottom right, 3 bottom left, default value 0, corresponding TOP_LEFT,TOP_RIGHT,BOTTOM_RIGHT,BOTTOM_LEFT
                     */
                    uint64_t m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * The default value for the percentage in the X-axis direction is 20, with a range of 0-50
                     */
                    uint64_t m_offsetX;
                    bool m_offsetXHasBeenSet;

                    /**
                     * The default value for the percentage in the Y-axis direction is 20, with a range of 0-50
                     */
                    uint64_t m_offsetY;
                    bool m_offsetYHasBeenSet;

                    /**
                     * Background image URL, starting with http/https and ending in jpg/jpeg/png
                     */
                    std::string m_backgroundImgUrl;
                    bool m_backgroundImgUrlHasBeenSet;

                    /**
                     * Compress time. Unit ms, default value 2000, range: 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     */
                    uint64_t m_squeezeInPeriod;
                    bool m_squeezeInPeriodHasBeenSet;

                    /**
                     * Restore to full screen time. Unit ms, default value 2000, range 500-10000, SqueezeInPeriod+SqueezeOutPeriod cannot be greater than duration, included in duration
                     */
                    uint64_t m_squeezeOutPeriod;
                    bool m_squeezeOutPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_LSQUEEZESETTING_H_
