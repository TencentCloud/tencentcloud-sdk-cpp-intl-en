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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_IDENTITYPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_IDENTITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Organization identity policy
                */
                class IdentityPolicy : public AbstractModel
                {
                public:
                    IdentityPolicy();
                    ~IdentityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CAM preset policy ID, which is valid and required when PolicyType is a preset policy.
                     * @return PolicyId CAM preset policy ID, which is valid and required when PolicyType is a preset policy.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置CAM preset policy ID, which is valid and required when PolicyType is a preset policy.
                     * @param _policyId CAM preset policy ID, which is valid and required when PolicyType is a preset policy.
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取CAM preset policy name, which is valid and required when PolicyType is a preset policy.
                     * @return PolicyName CAM preset policy name, which is valid and required when PolicyType is a preset policy.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置CAM preset policy name, which is valid and required when PolicyType is a preset policy.
                     * @param _policyName CAM preset policy name, which is valid and required when PolicyType is a preset policy.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Policy type. Valid values: 1 (custom policy), 2 (preset policy). The default is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyType Policy type. Valid values: 1 (custom policy), 2 (preset policy). The default is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPolicyType() const;

                    /**
                     * 设置Policy type. Valid values: 1 (custom policy), 2 (preset policy). The default is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyType Policy type. Valid values: 1 (custom policy), 2 (preset policy). The default is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyType(const uint64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Custom policy content, which follows the CAM policy syntax. It is valid and required when PolicyType is a custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyDocument Custom policy content, which follows the CAM policy syntax. It is valid and required when PolicyType is a custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 设置Custom policy content, which follows the CAM policy syntax. It is valid and required when PolicyType is a custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyDocument Custom policy content, which follows the CAM policy syntax. It is valid and required when PolicyType is a custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyDocument(const std::string& _policyDocument);

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                private:

                    /**
                     * CAM preset policy ID, which is valid and required when PolicyType is a preset policy.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * CAM preset policy name, which is valid and required when PolicyType is a preset policy.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Policy type. Valid values: 1 (custom policy), 2 (preset policy). The default is 2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Custom policy content, which follows the CAM policy syntax. It is valid and required when PolicyType is a custom policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_IDENTITYPOLICY_H_
