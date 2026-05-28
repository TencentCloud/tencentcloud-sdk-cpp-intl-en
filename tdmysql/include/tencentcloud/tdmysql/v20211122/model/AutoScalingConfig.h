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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ccu range of a serverless instance
                */
                class AutoScalingConfig : public AbstractModel
                {
                public:
                    AutoScalingConfig();
                    ~AutoScalingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Minimum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RangeMin <p>Minimum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRangeMin() const;

                    /**
                     * 设置<p>Minimum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rangeMin <p>Minimum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRangeMin(const double& _rangeMin);

                    /**
                     * 判断参数 RangeMin 是否已赋值
                     * @return RangeMin 是否已赋值
                     * 
                     */
                    bool RangeMinHasBeenSet() const;

                    /**
                     * 获取<p>Maximum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RangeMax <p>Maximum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRangeMax() const;

                    /**
                     * 设置<p>Maximum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rangeMax <p>Maximum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRangeMax(const double& _rangeMax);

                    /**
                     * 判断参数 RangeMax 是否已赋值
                     * @return RangeMax 是否已赋值
                     * 
                     */
                    bool RangeMaxHasBeenSet() const;

                private:

                    /**
                     * <p>Minimum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_rangeMin;
                    bool m_rangeMinHasBeenSet;

                    /**
                     * <p>Maximum value of ccu</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_rangeMax;
                    bool m_rangeMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_
