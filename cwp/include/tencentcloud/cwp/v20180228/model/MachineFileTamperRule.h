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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEFILETAMPERRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEFILETAMPERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/FileTamperRule.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Query Details of Host-related Core File Monitoring Rules
                */
                class MachineFileTamperRule : public AbstractModel
                {
                public:
                    MachineFileTamperRule();
                    ~MachineFileTamperRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Rule Type. 0: System Rule; 1: User Rule
                     * @return RuleCategory Rule Type. 0: System Rule; 1: User Rule
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置Rule Type. 0: System Rule; 1: User Rule
                     * @param _ruleCategory Rule Type. 0: System Rule; 1: User Rule
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                    /**
                     * 获取Rule
                     * @return Rule Rule
                     * 
                     */
                    std::vector<FileTamperRule> GetRule() const;

                    /**
                     * 设置Rule
                     * @param _rule Rule
                     * 
                     */
                    void SetRule(const std::vector<FileTamperRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Rule name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Rule Type. 0: System Rule; 1: User Rule
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * Rule
                     */
                    std::vector<FileTamperRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEFILETAMPERRULE_H_
