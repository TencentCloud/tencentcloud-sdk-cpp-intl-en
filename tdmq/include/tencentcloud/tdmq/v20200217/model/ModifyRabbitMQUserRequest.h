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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQUSERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQUSERREQUEST_H_

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
                * ModifyRabbitMQUser request structure.
                */
                class ModifyRabbitMQUserRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQUserRequest();
                    ~ModifyRabbitMQUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID, such as amqp-xxxxxxxx. Effective InstanceId can be obtained by logging in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a> for querying.</p>
                     * @return InstanceId <p>Instance ID, such as amqp-xxxxxxxx. Effective InstanceId can be obtained by logging in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a> for querying.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, such as amqp-xxxxxxxx. Effective InstanceId can be obtained by logging in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a> for querying.</p>
                     * @param _instanceId <p>Instance ID, such as amqp-xxxxxxxx. Effective InstanceId can be obtained by logging in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a> for querying.</p>
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
                     * 获取<p>Username, such as rabbitmq. To find an effective userName, log in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a>, click a cluster in the list, enter cluster details, and locate the list of users under the user and permission management tab so as to find the username. Modification of the admin password is not supported currently.</p>
                     * @return User <p>Username, such as rabbitmq. To find an effective userName, log in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a>, click a cluster in the list, enter cluster details, and locate the list of users under the user and permission management tab so as to find the username. Modification of the admin password is not supported currently.</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>Username, such as rabbitmq. To find an effective userName, log in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a>, click a cluster in the list, enter cluster details, and locate the list of users under the user and permission management tab so as to find the username. Modification of the admin password is not supported currently.</p>
                     * @param _user <p>Username, such as rabbitmq. To find an effective userName, log in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a>, click a cluster in the list, enter cluster details, and locate the list of users under the user and permission management tab so as to find the username. Modification of the admin password is not supported currently.</p>
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
                     * 获取<p>Password, used when logging in. Requirements: Cannot be empty, 8-64 characters, must contain at least two of the following: lowercase letter, uppercase letter, digit, special character [()`~!@#$%^&*_=|{}[]:;',.?/].</p>
                     * @return Password <p>Password, used when logging in. Requirements: Cannot be empty, 8-64 characters, must contain at least two of the following: lowercase letter, uppercase letter, digit, special character [()`~!@#$%^&*_=|{}[]:;',.?/].</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password, used when logging in. Requirements: Cannot be empty, 8-64 characters, must contain at least two of the following: lowercase letter, uppercase letter, digit, special character [()`~!@#$%^&*_=|{}[]:;',.?/].</p>
                     * @param _password <p>Password, used when logging in. Requirements: Cannot be empty, 8-64 characters, must contain at least two of the following: lowercase letter, uppercase letter, digit, special character [()`~!@#$%^&*_=|{}[]:;',.?/].</p>
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
                     * 获取<p>Description. Leave it empty to keep it unchanged.</p>
                     * @return Description <p>Description. Leave it empty to keep it unchanged.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description. Leave it empty to keep it unchanged.</p>
                     * @param _description <p>Description. Leave it empty to keep it unchanged.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>User tag, used to determine the access permission of the user to RabbitMQ Management<br>management: ordinary console user, monitoring: console user with management privileges, other value: non-console user</p>
                     * @return Tags <p>User tag, used to determine the access permission of the user to RabbitMQ Management<br>management: ordinary console user, monitoring: console user with management privileges, other value: non-console user</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>User tag, used to determine the access permission of the user to RabbitMQ Management<br>management: ordinary console user, monitoring: console user with management privileges, other value: non-console user</p>
                     * @param _tags <p>User tag, used to determine the access permission of the user to RabbitMQ Management<br>management: ordinary console user, monitoring: console user with management privileges, other value: non-console user</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of connections for this user. Leave it blank to keep unchanged.</p>
                     * @return MaxConnections <p>Maximum number of connections for this user. Leave it blank to keep unchanged.</p>
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置<p>Maximum number of connections for this user. Leave it blank to keep unchanged.</p>
                     * @param _maxConnections <p>Maximum number of connections for this user. Leave it blank to keep unchanged.</p>
                     * 
                     */
                    void SetMaxConnections(const int64_t& _maxConnections);

                    /**
                     * 判断参数 MaxConnections 是否已赋值
                     * @return MaxConnections 是否已赋值
                     * 
                     */
                    bool MaxConnectionsHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of channels for the user's. Leave blank to keep unchanged.</p>
                     * @return MaxChannels <p>Maximum number of channels for the user's. Leave blank to keep unchanged.</p>
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置<p>Maximum number of channels for the user's. Leave blank to keep unchanged.</p>
                     * @param _maxChannels <p>Maximum number of channels for the user's. Leave blank to keep unchanged.</p>
                     * 
                     */
                    void SetMaxChannels(const int64_t& _maxChannels);

                    /**
                     * 判断参数 MaxChannels 是否已赋值
                     * @return MaxChannels 是否已赋值
                     * 
                     */
                    bool MaxChannelsHasBeenSet() const;

                    /**
                     * 获取<p>Whether cam authentication is enabled</p>
                     * @return EnableCamAuth <p>Whether cam authentication is enabled</p>
                     * 
                     */
                    bool GetEnableCamAuth() const;

                    /**
                     * 设置<p>Whether cam authentication is enabled</p>
                     * @param _enableCamAuth <p>Whether cam authentication is enabled</p>
                     * 
                     */
                    void SetEnableCamAuth(const bool& _enableCamAuth);

                    /**
                     * 判断参数 EnableCamAuth 是否已赋值
                     * @return EnableCamAuth 是否已赋值
                     * 
                     */
                    bool EnableCamAuthHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, such as amqp-xxxxxxxx. Effective InstanceId can be obtained by logging in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a> for querying.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Username, such as rabbitmq. To find an effective userName, log in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a>, click a cluster in the list, enter cluster details, and locate the list of users under the user and permission management tab so as to find the username. Modification of the admin password is not supported currently.</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>Password, used when logging in. Requirements: Cannot be empty, 8-64 characters, must contain at least two of the following: lowercase letter, uppercase letter, digit, special character [()`~!@#$%^&*_=|{}[]:;',.?/].</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Description. Leave it empty to keep it unchanged.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>User tag, used to determine the access permission of the user to RabbitMQ Management<br>management: ordinary console user, monitoring: console user with management privileges, other value: non-console user</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Maximum number of connections for this user. Leave it blank to keep unchanged.</p>
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * <p>Maximum number of channels for the user's. Leave blank to keep unchanged.</p>
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                    /**
                     * <p>Whether cam authentication is enabled</p>
                     */
                    bool m_enableCamAuth;
                    bool m_enableCamAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQUSERREQUEST_H_
