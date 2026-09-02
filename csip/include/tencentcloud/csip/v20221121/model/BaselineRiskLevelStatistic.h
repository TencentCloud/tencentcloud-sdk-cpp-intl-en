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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINERISKLEVELSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINERISKLEVELSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Statistics of detection failures aggregated by risk level.
                */
                class BaselineRiskLevelStatistic : public AbstractModel
                {
                public:
                    BaselineRiskLevelStatistic();
                    ~BaselineRiskLevelStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Risk level. Parameter value: LOW, MEDIUM, HIGH, CRITICAL.</p>
                     * @return RiskLevel <p>Risk level. Parameter value: LOW, MEDIUM, HIGH, CRITICAL.</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. Parameter value: LOW, MEDIUM, HIGH, CRITICAL.</p>
                     * @param _riskLevel <p>Risk level. Parameter value: LOW, MEDIUM, HIGH, CRITICAL.</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Number of detection items with a NOT_PASS result at this risk level.</p>
                     * @return NotPassCount <p>Number of detection items with a NOT_PASS result at this risk level.</p>
                     * 
                     */
                    uint64_t GetNotPassCount() const;

                    /**
                     * 设置<p>Number of detection items with a NOT_PASS result at this risk level.</p>
                     * @param _notPassCount <p>Number of detection items with a NOT_PASS result at this risk level.</p>
                     * 
                     */
                    void SetNotPassCount(const uint64_t& _notPassCount);

                    /**
                     * 判断参数 NotPassCount 是否已赋值
                     * @return NotPassCount 是否已赋值
                     * 
                     */
                    bool NotPassCountHasBeenSet() const;

                private:

                    /**
                     * <p>Risk level. Parameter value: LOW, MEDIUM, HIGH, CRITICAL.</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Number of detection items with a NOT_PASS result at this risk level.</p>
                     */
                    uint64_t m_notPassCount;
                    bool m_notPassCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINERISKLEVELSTATISTIC_H_
