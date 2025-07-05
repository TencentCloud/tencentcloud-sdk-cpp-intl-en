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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_STAT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_STAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Billing statistical information.
                */
                class Stat : public AbstractModel
                {
                public:
                    Stat();
                    ~Stat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X-axis: time zone; return three interval ranges of "minute/hour/day" according to the granularity of the query condition.
                     * @return X X-axis: time zone; return three interval ranges of "minute/hour/day" according to the granularity of the query condition.
                     * 
                     */
                    std::string GetX() const;

                    /**
                     * 设置X-axis: time zone; return three interval ranges of "minute/hour/day" according to the granularity of the query condition.
                     * @param _x X-axis: time zone; return three interval ranges of "minute/hour/day" according to the granularity of the query condition.
                     * 
                     */
                    void SetX(const std::string& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Y-axis: statistical values in this time period, such as token consumption, call count, or usage information.
                     * @return Y Y-axis: statistical values in this time period, such as token consumption, call count, or usage information.
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置Y-axis: statistical values in this time period, such as token consumption, call count, or usage information.
                     * @param _y Y-axis: statistical values in this time period, such as token consumption, call count, or usage information.
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                private:

                    /**
                     * X-axis: time zone; return three interval ranges of "minute/hour/day" according to the granularity of the query condition.
                     */
                    std::string m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y-axis: statistical values in this time period, such as token consumption, call count, or usage information.
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_STAT_H_
