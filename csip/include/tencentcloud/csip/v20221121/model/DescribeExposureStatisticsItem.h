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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURESTATISTICSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURESTATISTICSITEM_H_

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
                * Pending risk information to be governed for cloud boundaries
                */
                class DescribeExposureStatisticsItem : public AbstractModel
                {
                public:
                    DescribeExposureStatisticsItem();
                    ~DescribeExposureStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Risk title
                     * @return Title Risk title
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Risk title
                     * @param _title Risk title
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Severity Risk level
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置Risk level
                     * @param _severity Risk level
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取Risk type
                     * @return RuleType Risk type
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Risk type
                     * @param _ruleType Risk type
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Number of associated risks
                     * @return RiskCount Number of associated risks
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置Number of associated risks
                     * @param _riskCount Number of associated risks
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                private:

                    /**
                     * Risk title
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Risk level
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * Risk type
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Number of associated risks
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURESTATISTICSITEM_H_
