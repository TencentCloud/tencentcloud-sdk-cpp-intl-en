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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Bot managed rule details
                */
                class BotManagedRuleDetail : public AbstractModel
                {
                public:
                    BotManagedRuleDetail();
                    ~BotManagedRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the rule
                     * @return RuleId ID of the rule
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置ID of the rule
                     * @param _ruleId ID of the rule
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Description Rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
                     * @param _description Rule description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Rule type
                     * @return RuleTypeName Rule type
                     * 
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置Rule type
                     * @param _ruleTypeName Rule type
                     * 
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     * 
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取Whether the rule is enabled
                     * @return Status Whether the rule is enabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the rule is enabled
                     * @param _status Whether the rule is enabled
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ID of the rule
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule type
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * Whether the rule is enabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULEDETAIL_H_
