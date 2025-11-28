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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQPERMISSIONREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRabbitMQPermission request structure.
                */
                class ModifyRabbitMQPermissionRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQPermissionRequest();
                    ~ModifyRabbitMQPermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @return InstanceId Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @param _instanceId Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
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
                     * 获取Username, such as admin. valid User names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and finding the list of users in the User and permission management tab, thereby locating the username.
                     * @return User Username, such as admin. valid User names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and finding the list of users in the User and permission management tab, thereby locating the username.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username, such as admin. valid User names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and finding the list of users in the User and permission management tab, thereby locating the username.
                     * @param _user Username, such as admin. valid User names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and finding the list of users in the User and permission management tab, thereby locating the username.
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
                     * 获取VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @return VirtualHost VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @param _virtualHost VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
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
                     * 获取Permission types, declare-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * @return ConfigRegexp Permission types, declare-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * 
                     */
                    std::string GetConfigRegexp() const;

                    /**
                     * 设置Permission types, declare-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * @param _configRegexp Permission types, declare-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
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
                     * 获取Permission types, message write-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * @return WriteRegexp Permission types, message write-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * 
                     */
                    std::string GetWriteRegexp() const;

                    /**
                     * 设置Permission types, message write-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * @param _writeRegexp Permission types, message write-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
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
                     * 获取Permission types, message read-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * @return ReadRegexp Permission types, message read-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * 
                     */
                    std::string GetReadRegexp() const;

                    /**
                     * 设置Permission types, message read-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * @param _readRegexp Permission types, message read-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     * 
                     */
                    void SetReadRegexp(const std::string& _readRegexp);

                    /**
                     * 判断参数 ReadRegexp 是否已赋值
                     * @return ReadRegexp 是否已赋值
                     * 
                     */
                    bool ReadRegexpHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username, such as admin. valid User names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking a cluster in the cluster list, entering cluster details, and finding the list of users in the User and permission management tab, thereby locating the username.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Permission types, declare-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     */
                    std::string m_configRegexp;
                    bool m_configRegexpHasBeenSet;

                    /**
                     * Permission types, message write-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     */
                    std::string m_writeRegexp;
                    bool m_writeRegexpHasBeenSet;

                    /**
                     * Permission types, message read-related operations, specifies the regular expression for resource names that the user can operate on under the vhost.
                     */
                    std::string m_readRegexp;
                    bool m_readRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQPERMISSIONREQUEST_H_
