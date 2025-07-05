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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYKAFKASETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYKAFKASETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SecLogDeliveryKafkaSettingInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifySecLogDeliveryKafkaSetting request structure.
                */
                class ModifySecLogDeliveryKafkaSettingRequest : public AbstractModel
                {
                public:
                    ModifySecLogDeliveryKafkaSettingRequest();
                    ~ModifySecLogDeliveryKafkaSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
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
                     * 获取Username
                     * @return User Username
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username
                     * @param _user Username
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Password
                     * @return Password Password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password
                     * @param _password Password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取List of log types
                     * @return LogTypeList List of log types
                     * 
                     */
                    std::vector<SecLogDeliveryKafkaSettingInfo> GetLogTypeList() const;

                    /**
                     * 设置List of log types
                     * @param _logTypeList List of log types
                     * 
                     */
                    void SetLogTypeList(const std::vector<SecLogDeliveryKafkaSettingInfo>& _logTypeList);

                    /**
                     * 判断参数 LogTypeList 是否已赋值
                     * @return LogTypeList 是否已赋值
                     * 
                     */
                    bool LogTypeListHasBeenSet() const;

                    /**
                     * 获取Access type
                     * @return AccessType Access type
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置Access type
                     * @param _accessType Access type
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Kafka version number
                     * @return KafkaVersion Kafka version number
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置Kafka version number
                     * @param _kafkaVersion Kafka version number
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionID Region ID
                     * 
                     */
                    std::string GetRegionID() const;

                    /**
                     * 设置Region ID
                     * @param _regionID Region ID
                     * 
                     */
                    void SetRegionID(const std::string& _regionID);

                    /**
                     * 判断参数 RegionID 是否已赋值
                     * @return RegionID 是否已赋值
                     * 
                     */
                    bool RegionIDHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * List of log types
                     */
                    std::vector<SecLogDeliveryKafkaSettingInfo> m_logTypeList;
                    bool m_logTypeListHasBeenSet;

                    /**
                     * Access type
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Kafka version number
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Region ID
                     */
                    std::string m_regionID;
                    bool m_regionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYKAFKASETTINGREQUEST_H_
