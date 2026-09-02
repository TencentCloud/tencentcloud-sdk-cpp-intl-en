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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SENDDSPMCKAFKATESTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SENDDSPMCKAFKATESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SendDspmCkafkaTest request structure.
                */
                class SendDspmCkafkaTestRequest : public AbstractModel
                {
                public:
                    SendDspmCkafkaTestRequest();
                    ~SendDspmCkafkaTestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1 represents public network, and 7 represents supporting environment access.
                     * @return VipType 1 represents public network, and 7 represents supporting environment access.
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置1 represents public network, and 7 represents supporting environment access.
                     * @param _vipType 1 represents public network, and 7 represents supporting environment access.
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取CKafka Instance ID
                     * @return InstanceId CKafka Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CKafka Instance ID
                     * @param _instanceId CKafka Instance ID
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
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Valid if it is 7.
                     * @return Vip Valid if it is 7.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Valid if it is 7.
                     * @param _vip Valid if it is 7.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Valid if it is 7.
                     * @return Vport Valid if it is 7.
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Valid if it is 7.
                     * @param _vport Valid if it is 7.
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Domain name, which is valid when VipType is 1.
                     * @return Domain Domain name, which is valid when VipType is 1.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name, which is valid when VipType is 1.
                     * @param _domain Domain name, which is valid when VipType is 1.
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
                     * 获取Domain port, which is valid when VipType is 1.
                     * @return DomainPort Domain port, which is valid when VipType is 1.
                     * 
                     */
                    std::string GetDomainPort() const;

                    /**
                     * 设置Domain port, which is valid when VipType is 1.
                     * @param _domainPort Domain port, which is valid when VipType is 1.
                     * 
                     */
                    void SetDomainPort(const std::string& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取Username, which is valid when VipType is 1.
                     * @return Username Username, which is valid when VipType is 1.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username, which is valid when VipType is 1.
                     * @param _username Username, which is valid when VipType is 1.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取User password, which is valid when VipType is 1.
                     * @return Password User password, which is valid when VipType is 1.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置User password, which is valid when VipType is 1.
                     * @param _password User password, which is valid when VipType is 1.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 1 represents public network, and 7 represents supporting environment access.
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * CKafka Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Valid if it is 7.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Valid if it is 7.
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Domain name, which is valid when VipType is 1.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain port, which is valid when VipType is 1.
                     */
                    std::string m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * Username, which is valid when VipType is 1.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * User password, which is valid when VipType is 1.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SENDDSPMCKAFKATESTREQUEST_H_
