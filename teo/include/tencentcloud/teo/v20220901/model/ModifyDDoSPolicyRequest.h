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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
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
                     * 获取The policy ID.
                     * @return PolicyId The policy ID.
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置The policy ID.
                     * @param PolicyId The policy ID.
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Details of the DDoS mitigation configuration.
                     * @return DDoSRule Details of the DDoS mitigation configuration.
                     */
                    DDoSRule GetDDoSRule() const;

                    /**
                     * 设置Details of the DDoS mitigation configuration.
                     * @param DDoSRule Details of the DDoS mitigation configuration.
                     */
                    void SetDDoSRule(const DDoSRule& _dDoSRule);

                    /**
                     * 判断参数 DDoSRule 是否已赋值
                     * @return DDoSRule 是否已赋值
                     */
                    bool DDoSRuleHasBeenSet() const;

                private:

                    /**
                     * The policy ID.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Details of the DDoS mitigation configuration.
                     */
                    DDoSRule m_dDoSRule;
                    bool m_dDoSRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYREQUEST_H_
