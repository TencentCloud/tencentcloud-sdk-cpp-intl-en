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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCPRECISIONPOLICYREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCPRECISIONPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CCPrecisionPlyRecord.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateCCPrecisionPolicy request structure.
                */
                class CreateCCPrecisionPolicyRequest : public AbstractModel
                {
                public:
                    CreateCCPrecisionPolicyRequest();
                    ~CreateCCPrecisionPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return Ip IP address
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
                     * @param _ip IP address
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Protocol. Valid values: `HTTP` and `HTTPS`.
                     * @return Protocol Protocol. Valid values: `HTTP` and `HTTPS`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Valid values: `HTTP` and `HTTPS`.
                     * @param _protocol Protocol. Valid values: `HTTP` and `HTTPS`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * @return PolicyAction Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * 
                     */
                    std::string GetPolicyAction() const;

                    /**
                     * 设置Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * @param _policyAction Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * 
                     */
                    void SetPolicyAction(const std::string& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取Policy records
                     * @return PolicyList Policy records
                     * 
                     */
                    std::vector<CCPrecisionPlyRecord> GetPolicyList() const;

                    /**
                     * 设置Policy records
                     * @param _policyList Policy records
                     * 
                     */
                    void SetPolicyList(const std::vector<CCPrecisionPlyRecord>& _policyList);

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     * 
                     */
                    bool PolicyListHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Protocol. Valid values: `HTTP` and `HTTPS`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     */
                    std::string m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * Policy records
                     */
                    std::vector<CCPrecisionPlyRecord> m_policyList;
                    bool m_policyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCPRECISIONPOLICYREQUEST_H_
