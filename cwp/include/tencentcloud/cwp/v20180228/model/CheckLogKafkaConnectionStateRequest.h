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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKLOGKAFKACONNECTIONSTATEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKLOGKAFKACONNECTIONSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckLogKafkaConnectionState request structure.
                */
                class CheckLogKafkaConnectionStateRequest : public AbstractModel
                {
                public:
                    CheckLogKafkaConnectionStateRequest();
                    ~CheckLogKafkaConnectionStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Access method: 1 - public network domain name access; 2 - supported environment access
                     * @return AccessType Access method: 1 - public network domain name access; 2 - supported environment access
                     * 
                     */
                    uint64_t GetAccessType() const;

                    /**
                     * 设置Access method: 1 - public network domain name access; 2 - supported environment access
                     * @param _accessType Access method: 1 - public network domain name access; 2 - supported environment access
                     * 
                     */
                    void SetAccessType(const uint64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Access address: domain name or IP, with port
                     * @return AccessAddr Access address: domain name or IP, with port
                     * 
                     */
                    std::string GetAccessAddr() const;

                    /**
                     * 设置Access address: domain name or IP, with port
                     * @param _accessAddr Access address: domain name or IP, with port
                     * 
                     */
                    void SetAccessAddr(const std::string& _accessAddr);

                    /**
                     * 判断参数 AccessAddr 是否已赋值
                     * @return AccessAddr 是否已赋值
                     * 
                     */
                    bool AccessAddrHasBeenSet() const;

                    /**
                     * 获取Username
                     * @return Username Username
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username
                     * @param _username Username
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
                     * 获取0 - without password; 1 - with password
                     * @return HasPwd 0 - without password; 1 - with password
                     * 
                     */
                    uint64_t GetHasPwd() const;

                    /**
                     * 设置0 - without password; 1 - with password
                     * @param _hasPwd 0 - without password; 1 - with password
                     * 
                     */
                    void SetHasPwd(const uint64_t& _hasPwd);

                    /**
                     * 判断参数 HasPwd 是否已赋值
                     * @return HasPwd 是否已赋值
                     * 
                     */
                    bool HasPwdHasBeenSet() const;

                    /**
                     * 获取Password, using AES encryption
                     * @return Pwd Password, using AES encryption
                     * 
                     */
                    std::string GetPwd() const;

                    /**
                     * 设置Password, using AES encryption
                     * @param _pwd Password, using AES encryption
                     * 
                     */
                    void SetPwd(const std::string& _pwd);

                    /**
                     * 判断参数 Pwd 是否已赋值
                     * @return Pwd 是否已赋值
                     * 
                     */
                    bool PwdHasBeenSet() const;

                    /**
                     * 获取Kafka instance ID
                     * @return KafkaId Kafka instance ID
                     * 
                     */
                    std::string GetKafkaId() const;

                    /**
                     * 设置Kafka instance ID
                     * @param _kafkaId Kafka instance ID
                     * 
                     */
                    void SetKafkaId(const std::string& _kafkaId);

                    /**
                     * 判断参数 KafkaId 是否已赋值
                     * @return KafkaId 是否已赋值
                     * 
                     */
                    bool KafkaIdHasBeenSet() const;

                    /**
                     * 获取Kafka version
                     * @return InsVersion Kafka version
                     * 
                     */
                    std::string GetInsVersion() const;

                    /**
                     * 设置Kafka version
                     * @param _insVersion Kafka version
                     * 
                     */
                    void SetInsVersion(const std::string& _insVersion);

                    /**
                     * 判断参数 InsVersion 是否已赋值
                     * @return InsVersion 是否已赋值
                     * 
                     */
                    bool InsVersionHasBeenSet() const;

                private:

                    /**
                     * Access method: 1 - public network domain name access; 2 - supported environment access
                     */
                    uint64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Access address: domain name or IP, with port
                     */
                    std::string m_accessAddr;
                    bool m_accessAddrHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 0 - without password; 1 - with password
                     */
                    uint64_t m_hasPwd;
                    bool m_hasPwdHasBeenSet;

                    /**
                     * Password, using AES encryption
                     */
                    std::string m_pwd;
                    bool m_pwdHasBeenSet;

                    /**
                     * Kafka instance ID
                     */
                    std::string m_kafkaId;
                    bool m_kafkaIdHasBeenSet;

                    /**
                     * Kafka version
                     */
                    std::string m_insVersion;
                    bool m_insVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKLOGKAFKACONNECTIONSTATEREQUEST_H_
