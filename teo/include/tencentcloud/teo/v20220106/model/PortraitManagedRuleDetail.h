/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_PORTRAITMANAGEDRULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_PORTRAITMANAGEDRULEDETAIL_H_

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
                * User profiling rule details
                */
                class PortraitManagedRuleDetail : public AbstractModel
                {
                public:
                    PortraitManagedRuleDetail();
                    ~PortraitManagedRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Unique rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Unique rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleId Unique rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Description Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Rule type name: botdb (user profile)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleTypeName Rule type name: botdb (user profile)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置Rule type name: botdb (user profile)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleTypeName Rule type name: botdb (user profile)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取Rule feature category ID (scanner, bot behavior, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClassificationId Rule feature category ID (scanner, bot behavior, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetClassificationId() const;

                    /**
                     * 设置Rule feature category ID (scanner, bot behavior, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ClassificationId Rule feature category ID (scanner, bot behavior, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClassificationId(const int64_t& _classificationId);

                    /**
                     * 判断参数 ClassificationId 是否已赋值
                     * @return ClassificationId 是否已赋值
                     */
                    bool ClassificationIdHasBeenSet() const;

                    /**
                     * 获取Current rule action status (block, alg, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Current rule action status (block, alg, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current rule action status (block, alg, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Status Current rule action status (block, alg, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Unique rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule type name: botdb (user profile)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * Rule feature category ID (scanner, bot behavior, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_classificationId;
                    bool m_classificationIdHasBeenSet;

                    /**
                     * Current rule action status (block, alg, etc.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_PORTRAITMANAGEDRULEDETAIL_H_
