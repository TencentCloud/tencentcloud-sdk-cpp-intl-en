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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULEHEALTHSTATUSINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULEHEALTHSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupHealthInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Rule health check status
                */
                class RuleHealthStatusInfo : public AbstractModel
                {
                public:
                    RuleHealthStatusInfo();
                    ~RuleHealthStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether it is the default forwarding rule.
                     * @return IsDefaultRule Whether it is the default forwarding rule.
                     * 
                     */
                    std::string GetIsDefaultRule() const;

                    /**
                     * 设置Whether it is the default forwarding rule.
                     * @param _isDefaultRule Whether it is the default forwarding rule.
                     * 
                     */
                    void SetIsDefaultRule(const std::string& _isDefaultRule);

                    /**
                     * 判断参数 IsDefaultRule 是否已赋值
                     * @return IsDefaultRule 是否已赋值
                     * 
                     */
                    bool IsDefaultRuleHasBeenSet() const;

                    /**
                     * 获取Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * @return RuleId Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * @param _ruleId Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Target group health status.
                     * @return TargetGroupHealthInfos Target group health status.
                     * 
                     */
                    std::vector<TargetGroupHealthInfo> GetTargetGroupHealthInfos() const;

                    /**
                     * 设置Target group health status.
                     * @param _targetGroupHealthInfos Target group health status.
                     * 
                     */
                    void SetTargetGroupHealthInfos(const std::vector<TargetGroupHealthInfo>& _targetGroupHealthInfos);

                    /**
                     * 判断参数 TargetGroupHealthInfos 是否已赋值
                     * @return TargetGroupHealthInfos 是否已赋值
                     * 
                     */
                    bool TargetGroupHealthInfosHasBeenSet() const;

                private:

                    /**
                     * Whether it is the default forwarding rule.
                     */
                    std::string m_isDefaultRule;
                    bool m_isDefaultRuleHasBeenSet;

                    /**
                     * Forwarding rule ID in the format of `rule-` followed by 8 alphanumeric characters.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Target group health status.
                     */
                    std::vector<TargetGroupHealthInfo> m_targetGroupHealthInfos;
                    bool m_targetGroupHealthInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULEHEALTHSTATUSINFO_H_
