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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NOTPASSITEMSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NOTPASSITEMSTATISTIC_H_

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
                * Statistics of detection failed items by policy group.
                */
                class NotPassItemStatistic : public AbstractModel
                {
                public:
                    NotPassItemStatistic();
                    ~NotPassItemStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy type. Valid values: SYSTEM (system policy), SELF (custom policy).
                     * @return PolicyType Policy type. Valid values: SYSTEM (system policy), SELF (custom policy).
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置Policy type. Valid values: SYSTEM (system policy), SELF (custom policy).
                     * @param _policyType Policy type. Valid values: SYSTEM (system policy), SELF (custom policy).
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Policy ID. 0 for a SYSTEM policy.
                     * @return PolicyID Policy ID. 0 for a SYSTEM policy.
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置Policy ID. 0 for a SYSTEM policy.
                     * @param _policyID Policy ID. 0 for a SYSTEM policy.
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取Parent category ID. 0 for SELF policies.
                     * @return ParentCategoryID Parent category ID. 0 for SELF policies.
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置Parent category ID. 0 for SELF policies.
                     * @param _parentCategoryID Parent category ID. 0 for SELF policies.
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取Number of failed check items under this policy.
                     * @return NotPassCount Number of failed check items under this policy.
                     * 
                     */
                    uint64_t GetNotPassCount() const;

                    /**
                     * 设置Number of failed check items under this policy.
                     * @param _notPassCount Number of failed check items under this policy.
                     * 
                     */
                    void SetNotPassCount(const uint64_t& _notPassCount);

                    /**
                     * 判断参数 NotPassCount 是否已赋值
                     * @return NotPassCount 是否已赋值
                     * 
                     */
                    bool NotPassCountHasBeenSet() const;

                    /**
                     * 获取Policy or category name. SYSTEM takes the parent category name, and SELF takes the policy name.
                     * @return Name Policy or category name. SYSTEM takes the parent category name, and SELF takes the policy name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy or category name. SYSTEM takes the parent category name, and SELF takes the policy name.
                     * @param _name Policy or category name. SYSTEM takes the parent category name, and SELF takes the policy name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Policy type. Valid values: SYSTEM (system policy), SELF (custom policy).
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy ID. 0 for a SYSTEM policy.
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * Parent category ID. 0 for SELF policies.
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * Number of failed check items under this policy.
                     */
                    uint64_t m_notPassCount;
                    bool m_notPassCountHasBeenSet;

                    /**
                     * Policy or category name. SYSTEM takes the parent category name, and SELF takes the policy name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NOTPASSITEMSTATISTIC_H_
