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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPERMISSION_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ permission details
                */
                class RabbitMQPermission : public AbstractModel
                {
                public:
                    RabbitMQPermission();
                    ~RabbitMQPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @return InstanceId Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @param _instanceId Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
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
                     * 获取Username, such as admin. effective User names can be found by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and locating the list of users under the User and permission management tab, thereby finding the username.
                     * @return User Username, such as admin. effective User names can be found by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and locating the list of users under the User and permission management tab, thereby finding the username.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username, such as admin. effective User names can be found by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and locating the list of users under the User and permission management tab, thereby finding the username.
                     * @param _user Username, such as admin. effective User names can be found by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and locating the list of users under the User and permission management tab, thereby finding the username.
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
                     * 获取VirtualHost name, such as testvhost. valid VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @return VirtualHost VirtualHost name, such as testvhost. valid VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost name, such as testvhost. valid VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @param _virtualHost VirtualHost name, such as testvhost. valid VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Type of permissions related to declare operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * @return ConfigRegexp Type of permissions related to declare operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * 
                     */
                    std::string GetConfigRegexp() const;

                    /**
                     * 设置Type of permissions related to declare operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * @param _configRegexp Type of permissions related to declare operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * 
                     */
                    void SetConfigRegexp(const std::string& _configRegexp);

                    /**
                     * 判断参数 ConfigRegexp 是否已赋值
                     * @return ConfigRegexp 是否已赋值
                     * 
                     */
                    bool ConfigRegexpHasBeenSet() const;

                    /**
                     * 获取Type of permissions related to message write operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * @return WriteRegexp Type of permissions related to message write operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * 
                     */
                    std::string GetWriteRegexp() const;

                    /**
                     * 设置Type of permissions related to message write operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * @param _writeRegexp Type of permissions related to message write operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * 
                     */
                    void SetWriteRegexp(const std::string& _writeRegexp);

                    /**
                     * 判断参数 WriteRegexp 是否已赋值
                     * @return WriteRegexp 是否已赋值
                     * 
                     */
                    bool WriteRegexpHasBeenSet() const;

                    /**
                     * 获取Type of permissions related to message read operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * @return ReadRegexp Type of permissions related to message read operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * 
                     */
                    std::string GetReadRegexp() const;

                    /**
                     * 设置Type of permissions related to message read operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * @param _readRegexp Type of permissions related to message read operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     * 
                     */
                    void SetReadRegexp(const std::string& _readRegexp);

                    /**
                     * 判断参数 ReadRegexp 是否已赋值
                     * @return ReadRegexp 是否已赋值
                     * 
                     */
                    bool ReadRegexpHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Creation timestamp.
                     * @return CreateTs Creation timestamp.
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置Creation timestamp.
                     * @param _createTs Creation timestamp.
                     * 
                     */
                    void SetCreateTs(const uint64_t& _createTs);

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取Modification timestamp.
                     * @return ModifyTs Modification timestamp.
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置Modification timestamp.
                     * @param _modifyTs Modification timestamp.
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username, such as admin. effective User names can be found by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and locating the list of users under the User and permission management tab, thereby finding the username.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * VirtualHost name, such as testvhost. valid VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Type of permissions related to declare operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     */
                    std::string m_configRegexp;
                    bool m_configRegexpHasBeenSet;

                    /**
                     * Type of permissions related to message write operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     */
                    std::string m_writeRegexp;
                    bool m_writeRegexpHasBeenSet;

                    /**
                     * Type of permissions related to message read operations. This regular expression controls resource creation and deletion permissions of users in this vhost.
                     */
                    std::string m_readRegexp;
                    bool m_readRegexpHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation timestamp.
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * Modification timestamp.
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPERMISSION_H_
