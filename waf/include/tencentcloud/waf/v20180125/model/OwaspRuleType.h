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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULETYPE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Owasp rule type.
                */
                class OwaspRuleType : public AbstractModel
                {
                public:
                    OwaspRuleType();
                    ~OwaspRuleType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type ID
                     * @return TypeId Type ID
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置Type ID
                     * @param _typeId Type ID
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Type name
                     * @return TypeName Type name
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Type name
                     * @param _typeName Type name
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Type description.


                     * @return Description Type description.


                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Type description.


                     * @param _description Type description.


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
                     * 获取Data type category.
                     * @return Classification Data type category.
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置Data type category.
                     * @param _classification Data type category.
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取Protection mode of the rule type. valid values: 0 (observation), 1 (intercept).
                     * @return Action Protection mode of the rule type. valid values: 0 (observation), 1 (intercept).
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置Protection mode of the rule type. valid values: 0 (observation), 1 (intercept).
                     * @param _action Protection mode of the rule type. valid values: 0 (observation), 1 (intercept).
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Protection level of the rule type. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * @return Level Protection level of the rule type. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Protection level of the rule type. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * @param _level Protection level of the rule type. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取The switch status of the rule type. valid values: 0 (disabled), 1 (enabled).
                     * @return Status The switch status of the rule type. valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置The switch status of the rule type. valid values: 0 (disabled), 1 (enabled).
                     * @param _status The switch status of the rule type. valid values: 0 (disabled), 1 (enabled).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies all rules under the rule type. always.
                     * @return TotalRule Specifies all rules under the rule type. always.
                     * 
                     */
                    uint64_t GetTotalRule() const;

                    /**
                     * 设置Specifies all rules under the rule type. always.
                     * @param _totalRule Specifies all rules under the rule type. always.
                     * 
                     */
                    void SetTotalRule(const uint64_t& _totalRule);

                    /**
                     * 判断参数 TotalRule 是否已赋值
                     * @return TotalRule 是否已赋值
                     * 
                     */
                    bool TotalRuleHasBeenSet() const;

                    /**
                     * 获取Indicates the total number of rules enabled under the rule type.
                     * @return ActiveRule Indicates the total number of rules enabled under the rule type.
                     * 
                     */
                    uint64_t GetActiveRule() const;

                    /**
                     * 设置Indicates the total number of rules enabled under the rule type.
                     * @param _activeRule Indicates the total number of rules enabled under the rule type.
                     * 
                     */
                    void SetActiveRule(const uint64_t& _activeRule);

                    /**
                     * 判断参数 ActiveRule 是否已赋值
                     * @return ActiveRule 是否已赋值
                     * 
                     */
                    bool ActiveRuleHasBeenSet() const;

                private:

                    /**
                     * Type ID
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Type name
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Type description.


                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Data type category.
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * Protection mode of the rule type. valid values: 0 (observation), 1 (intercept).
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Protection level of the rule type. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * The switch status of the rule type. valid values: 0 (disabled), 1 (enabled).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies all rules under the rule type. always.
                     */
                    uint64_t m_totalRule;
                    bool m_totalRuleHasBeenSet;

                    /**
                     * Indicates the total number of rules enabled under the rule type.
                     */
                    uint64_t m_activeRule;
                    bool m_activeRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULETYPE_H_
