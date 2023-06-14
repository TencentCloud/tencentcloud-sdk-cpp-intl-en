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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric configuration
                */
                class MetricConfig : public AbstractModel
                {
                public:
                    MetricConfig();
                    ~MetricConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowed operator
                     * @return Operator Allowed operator
                     * 
                     */
                    std::vector<std::string> GetOperator() const;

                    /**
                     * 设置Allowed operator
                     * @param _operator Allowed operator
                     * 
                     */
                    void SetOperator(const std::vector<std::string>& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Allowed data cycle in seconds
                     * @return Period Allowed data cycle in seconds
                     * 
                     */
                    std::vector<int64_t> GetPeriod() const;

                    /**
                     * 设置Allowed data cycle in seconds
                     * @param _period Allowed data cycle in seconds
                     * 
                     */
                    void SetPeriod(const std::vector<int64_t>& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Allowed number of continuous cycles
                     * @return ContinuePeriod Allowed number of continuous cycles
                     * 
                     */
                    std::vector<int64_t> GetContinuePeriod() const;

                    /**
                     * 设置Allowed number of continuous cycles
                     * @param _continuePeriod Allowed number of continuous cycles
                     * 
                     */
                    void SetContinuePeriod(const std::vector<int64_t>& _continuePeriod);

                    /**
                     * 判断参数 ContinuePeriod 是否已赋值
                     * @return ContinuePeriod 是否已赋值
                     * 
                     */
                    bool ContinuePeriodHasBeenSet() const;

                private:

                    /**
                     * Allowed operator
                     */
                    std::vector<std::string> m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Allowed data cycle in seconds
                     */
                    std::vector<int64_t> m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Allowed number of continuous cycles
                     */
                    std::vector<int64_t> m_continuePeriod;
                    bool m_continuePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICCONFIG_H_
