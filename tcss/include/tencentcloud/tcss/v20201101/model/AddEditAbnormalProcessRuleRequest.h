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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITABNORMALPROCESSRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITABNORMALPROCESSRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddEditAbnormalProcessRule request structure.
                */
                class AddEditAbnormalProcessRuleRequest : public AbstractModel
                {
                public:
                    AddEditAbnormalProcessRuleRequest();
                    ~AddEditAbnormalProcessRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of the added policy. The policy ID is empty here but cannot be empty when you edit a policy.
                     * @return RuleInfo Information of the added policy. The policy ID is empty here but cannot be empty when you edit a policy.
                     * 
                     */
                    AbnormalProcessRuleInfo GetRuleInfo() const;

                    /**
                     * 设置Information of the added policy. The policy ID is empty here but cannot be empty when you edit a policy.
                     * @param _ruleInfo Information of the added policy. The policy ID is empty here but cannot be empty when you edit a policy.
                     * 
                     */
                    void SetRuleInfo(const AbnormalProcessRuleInfo& _ruleInfo);

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                    /**
                     * 获取Required only when an item is allowed
                     * @return EventId Required only when an item is allowed
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Required only when an item is allowed
                     * @param _eventId Required only when an item is allowed
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * Information of the added policy. The policy ID is empty here but cannot be empty when you edit a policy.
                     */
                    AbnormalProcessRuleInfo m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                    /**
                     * Required only when an item is allowed
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITABNORMALPROCESSRULEREQUEST_H_
