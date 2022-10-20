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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDDoSPolicyHost request structure.
                */
                class ModifyDDoSPolicyHostRequest : public AbstractModel
                {
                public:
                    ModifyDDoSPolicyHostRequest();
                    ~ModifyDDoSPolicyHostRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取The subdomain name/layer-4 proxy.
                     * @return Host The subdomain name/layer-4 proxy.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The subdomain name/layer-4 proxy.
                     * @param Host The subdomain name/layer-4 proxy.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Whether to enabled acceleration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return AccelerateType Whether to enabled acceleration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string GetAccelerateType() const;

                    /**
                     * 设置Whether to enabled acceleration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param AccelerateType Whether to enabled acceleration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    void SetAccelerateType(const std::string& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

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
                     * 获取Whether to enable security protection. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return SecurityType Whether to enable security protection. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置Whether to enable security protection. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param SecurityType Whether to enable security protection. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    void SetSecurityType(const std::string& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The subdomain name/layer-4 proxy.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Whether to enabled acceleration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * The policy ID.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Whether to enable security protection. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_
