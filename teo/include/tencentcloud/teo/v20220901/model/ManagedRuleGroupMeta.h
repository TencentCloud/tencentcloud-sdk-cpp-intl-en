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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUPMETA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUPMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Managed rule group meta information.
                */
                class ManagedRuleGroupMeta : public AbstractModel
                {
                public:
                    ManagedRuleGroupMeta();
                    ~ManagedRuleGroupMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ManagedRuleGroup detailed information, output parameter only.
                     * @return GroupDetail ManagedRuleGroup detailed information, output parameter only.
                     * 
                     */
                    std::string GetGroupDetail() const;

                    /**
                     * 设置ManagedRuleGroup detailed information, output parameter only.
                     * @param _groupDetail ManagedRuleGroup detailed information, output parameter only.
                     * 
                     */
                    void SetGroupDetail(const std::string& _groupDetail);

                    /**
                     * 判断参数 GroupDetail 是否已赋值
                     * @return GroupDetail 是否已赋值
                     * 
                     */
                    bool GroupDetailHasBeenSet() const;

                    /**
                     * 获取ManagedRuleGroup name, output parameter only.
                     * @return GroupName ManagedRuleGroup name, output parameter only.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置ManagedRuleGroup name, output parameter only.
                     * @param _groupName ManagedRuleGroup name, output parameter only.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取All sub-rules information under current ManagedRuleGroup, output parameter only.
                     * @return RuleDetails All sub-rules information under current ManagedRuleGroup, output parameter only.
                     * 
                     */
                    std::vector<ManagedRuleDetail> GetRuleDetails() const;

                    /**
                     * 设置All sub-rules information under current ManagedRuleGroup, output parameter only.
                     * @param _ruleDetails All sub-rules information under current ManagedRuleGroup, output parameter only.
                     * 
                     */
                    void SetRuleDetails(const std::vector<ManagedRuleDetail>& _ruleDetails);

                    /**
                     * 判断参数 RuleDetails 是否已赋值
                     * @return RuleDetails 是否已赋值
                     * 
                     */
                    bool RuleDetailsHasBeenSet() const;

                private:

                    /**
                     * ManagedRuleGroup detailed information, output parameter only.
                     */
                    std::string m_groupDetail;
                    bool m_groupDetailHasBeenSet;

                    /**
                     * ManagedRuleGroup name, output parameter only.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * All sub-rules information under current ManagedRuleGroup, output parameter only.
                     */
                    std::vector<ManagedRuleDetail> m_ruleDetails;
                    bool m_ruleDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUPMETA_H_
