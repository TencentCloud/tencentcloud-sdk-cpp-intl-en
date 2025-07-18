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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNPOLICYINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Hot/cold data layering policy
                */
                class CoolDownPolicyInfo : public AbstractModel
                {
                public:
                    CoolDownPolicyInfo();
                    ~CoolDownPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyName Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyName Policy name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取cooldown_ttl
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CooldownDatetime cooldown_ttl
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCooldownDatetime() const;

                    /**
                     * 设置cooldown_ttl
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cooldownDatetime cooldown_ttl
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCooldownDatetime(const std::string& _cooldownDatetime);

                    /**
                     * 判断参数 CooldownDatetime 是否已赋值
                     * @return CooldownDatetime 是否已赋值
                     * 
                     */
                    bool CooldownDatetimeHasBeenSet() const;

                    /**
                     * 获取cooldown_datetime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CooldownTtl cooldown_datetime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCooldownTtl() const;

                    /**
                     * 设置cooldown_datetime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cooldownTtl cooldown_datetime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCooldownTtl(const std::string& _cooldownTtl);

                    /**
                     * 判断参数 CooldownTtl 是否已赋值
                     * @return CooldownTtl 是否已赋值
                     * 
                     */
                    bool CooldownTtlHasBeenSet() const;

                private:

                    /**
                     * Policy name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * cooldown_ttl
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cooldownDatetime;
                    bool m_cooldownDatetimeHasBeenSet;

                    /**
                     * cooldown_datetime
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cooldownTtl;
                    bool m_cooldownTtlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNPOLICYINFO_H_
