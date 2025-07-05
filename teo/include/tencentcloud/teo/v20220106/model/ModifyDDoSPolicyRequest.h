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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DdosRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyDDoSPolicy request structure.
                */
                class ModifyDDoSPolicyRequest : public AbstractModel
                {
                public:
                    ModifyDDoSPolicyRequest();
                    ~ModifyDDoSPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the policy group
                     * @return PolicyId ID of the policy group
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置ID of the policy group
                     * @param _policyId ID of the policy group
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Top-level domain name
                     * @return ZoneId Top-level domain name
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Top-level domain name
                     * @param _zoneId Top-level domain name
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Detailed DDoS mitigation configuration
                     * @return DdosRule Detailed DDoS mitigation configuration
                     * 
                     */
                    DdosRule GetDdosRule() const;

                    /**
                     * 设置Detailed DDoS mitigation configuration
                     * @param _ddosRule Detailed DDoS mitigation configuration
                     * 
                     */
                    void SetDdosRule(const DdosRule& _ddosRule);

                    /**
                     * 判断参数 DdosRule 是否已赋值
                     * @return DdosRule 是否已赋值
                     * 
                     */
                    bool DdosRuleHasBeenSet() const;

                private:

                    /**
                     * ID of the policy group
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Top-level domain name
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Detailed DDoS mitigation configuration
                     */
                    DdosRule m_ddosRule;
                    bool m_ddosRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDDOSPOLICYREQUEST_H_
