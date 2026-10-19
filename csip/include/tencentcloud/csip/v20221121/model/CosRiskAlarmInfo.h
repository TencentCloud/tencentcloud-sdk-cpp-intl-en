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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKALARMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKALARMINFO_H_

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
                * cos risk alert information
                */
                class CosRiskAlarmInfo : public AbstractModel
                {
                public:
                    CosRiskAlarmInfo();
                    ~CosRiskAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enumeration value of the policy type
                     * @return PolicyType Enumeration value of the policy type
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置Enumeration value of the policy type
                     * @param _policyType Enumeration value of the policy type
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return PolicyTypeName Policy name
                     * 
                     */
                    std::string GetPolicyTypeName() const;

                    /**
                     * 设置Policy name
                     * @param _policyTypeName Policy name
                     * 
                     */
                    void SetPolicyTypeName(const std::string& _policyTypeName);

                    /**
                     * 判断参数 PolicyTypeName 是否已赋值
                     * @return PolicyTypeName 是否已赋值
                     * 
                     */
                    bool PolicyTypeNameHasBeenSet() const;

                    /**
                     * 获取Number of policies corresponding to the policy type
                     * @return PolicyCount Number of policies corresponding to the policy type
                     * 
                     */
                    int64_t GetPolicyCount() const;

                    /**
                     * 设置Number of policies corresponding to the policy type
                     * @param _policyCount Number of policies corresponding to the policy type
                     * 
                     */
                    void SetPolicyCount(const int64_t& _policyCount);

                    /**
                     * 判断参数 PolicyCount 是否已赋值
                     * @return PolicyCount 是否已赋值
                     * 
                     */
                    bool PolicyCountHasBeenSet() const;

                private:

                    /**
                     * Enumeration value of the policy type
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyTypeName;
                    bool m_policyTypeNameHasBeenSet;

                    /**
                     * Number of policies corresponding to the policy type
                     */
                    int64_t m_policyCount;
                    bool m_policyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSRISKALARMINFO_H_
