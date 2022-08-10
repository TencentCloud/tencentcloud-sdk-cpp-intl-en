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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDDoSPolicyHost request structure.
                */
                class ModifyDDoSPolicyHostRequest : public AbstractModel
                {
                public:
                    ModifyDDoSPolicyHostRequest();
                    ~ModifyDDoSPolicyHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param ZoneId Site ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Second-level domain name
                     * @return Host Second-level domain name
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Second-level domain name
                     * @param Host Second-level domain name
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Whether to enable content acceleration. Values: `on` (enable content acceleration), and `off` (disable content acceleration). It can be used together with `SecurityType`.
                     * @return AccelerateType Whether to enable content acceleration. Values: `on` (enable content acceleration), and `off` (disable content acceleration). It can be used together with `SecurityType`.
                     */
                    std::string GetAccelerateType() const;

                    /**
                     * 设置Whether to enable content acceleration. Values: `on` (enable content acceleration), and `off` (disable content acceleration). It can be used together with `SecurityType`.
                     * @param AccelerateType Whether to enable content acceleration. Values: `on` (enable content acceleration), and `off` (disable content acceleration). It can be used together with `SecurityType`.
                     */
                    void SetAccelerateType(const std::string& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param PolicyId Policy ID
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable security protection. Values: `on` (enable security protection) and `off` (disable security protection). It can be used together with `AccelerateType`.
                     * @return SecurityType Whether to enable security protection. Values: `on` (enable security protection) and `off` (disable security protection). It can be used together with `AccelerateType`.
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置Whether to enable security protection. Values: `on` (enable security protection) and `off` (disable security protection). It can be used together with `AccelerateType`.
                     * @param SecurityType Whether to enable security protection. Values: `on` (enable security protection) and `off` (disable security protection). It can be used together with `AccelerateType`.
                     */
                    void SetSecurityType(const std::string& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Second-level domain name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Whether to enable content acceleration. Values: `on` (enable content acceleration), and `off` (disable content acceleration). It can be used together with `SecurityType`.
                     */
                    std::string m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Whether to enable security protection. Values: `on` (enable security protection) and `off` (disable security protection). It can be used together with `AccelerateType`.
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDDOSPOLICYHOSTREQUEST_H_
