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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULESTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyK8sApiAbnormalRuleStatus request structure.
                */
                class ModifyK8sApiAbnormalRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyK8sApiAbnormalRuleStatusRequest();
                    ~ModifyK8sApiAbnormalRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return RuleID Rule ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleID Rule ID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Status of the rule. Values: `true` (Enabled), `false` (Disabled)
                     * @return Status Status of the rule. Values: `true` (Enabled), `false` (Disabled)
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Status of the rule. Values: `true` (Enabled), `false` (Disabled)
                     * @param _status Status of the rule. Values: `true` (Enabled), `false` (Disabled)
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Status of the rule. Values: `true` (Enabled), `false` (Disabled)
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULESTATUSREQUEST_H_
