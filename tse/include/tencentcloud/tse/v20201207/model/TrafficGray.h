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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_TRAFFICGRAY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_TRAFFICGRAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Traffic grayscale rule for lanes
                */
                class TrafficGray : public AbstractModel
                {
                public:
                    TrafficGray();
                    ~TrafficGray() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Grayscale release rules for traffic, grayscale by ratio or preheat method
                     * @return Mode Grayscale release rules for traffic, grayscale by ratio or preheat method
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Grayscale release rules for traffic, grayscale by ratio or preheat method
                     * @param _mode Grayscale release rules for traffic, grayscale by ratio or preheat method
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Grayscale percentage value 1-100 by proportion
                     * @return Percent Grayscale percentage value 1-100 by proportion
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置Grayscale percentage value 1-100 by proportion
                     * @param _percent Grayscale percentage value 1-100 by proportion
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Preheated interval
                     * @return IntervalSecond Preheated interval
                     * 
                     */
                    int64_t GetIntervalSecond() const;

                    /**
                     * 设置Preheated interval
                     * @param _intervalSecond Preheated interval
                     * 
                     */
                    void SetIntervalSecond(const int64_t& _intervalSecond);

                    /**
                     * 判断参数 IntervalSecond 是否已赋值
                     * @return IntervalSecond 是否已赋值
                     * 
                     */
                    bool IntervalSecondHasBeenSet() const;

                    /**
                     * 获取Preheated curvature
                     * @return Curvature Preheated curvature
                     * 
                     */
                    int64_t GetCurvature() const;

                    /**
                     * 设置Preheated curvature
                     * @param _curvature Preheated curvature
                     * 
                     */
                    void SetCurvature(const int64_t& _curvature);

                    /**
                     * 判断参数 Curvature 是否已赋值
                     * @return Curvature 是否已赋值
                     * 
                     */
                    bool CurvatureHasBeenSet() const;

                private:

                    /**
                     * Grayscale release rules for traffic, grayscale by ratio or preheat method
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Grayscale percentage value 1-100 by proportion
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Preheated interval
                     */
                    int64_t m_intervalSecond;
                    bool m_intervalSecondHasBeenSet;

                    /**
                     * Preheated curvature
                     */
                    int64_t m_curvature;
                    bool m_curvatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_TRAFFICGRAY_H_
