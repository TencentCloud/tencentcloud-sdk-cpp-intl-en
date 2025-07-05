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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyFileTamperRuleStatus request structure.
                */
                class ModifyFileTamperRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyFileTamperRuleStatusRequest();
                    ~ModifyFileTamperRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: enable; 1: disable; 2: delete
                     * @return Status 0: enable; 1: disable; 2: delete
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: enable; 1: disable; 2: delete
                     * @param _status 0: enable; 1: disable; 2: delete
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Corresponding event ID
                     * @return Ids Corresponding event ID
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置Corresponding event ID
                     * @param _ids Corresponding event ID
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Whether a system rule: 0: system rule; 1: user defined rule. System rule Status cannot be deleted.
                     * @return RuleCategory Whether a system rule: 0: system rule; 1: user defined rule. System rule Status cannot be deleted.
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置Whether a system rule: 0: system rule; 1: user defined rule. System rule Status cannot be deleted.
                     * @param _ruleCategory Whether a system rule: 0: system rule; 1: user defined rule. System rule Status cannot be deleted.
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                private:

                    /**
                     * 0: enable; 1: disable; 2: delete
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Corresponding event ID
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Whether a system rule: 0: system rule; 1: user defined rule. System rule Status cannot be deleted.
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYFILETAMPERRULESTATUSREQUEST_H_
