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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQUSERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQUSERREQUEST_H_

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
                * CreateRabbitMQUser request structure.
                */
                class CreateRabbitMQUserRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQUserRequest();
                    ~CreateRabbitMQUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster instance ID
                     * @return InstanceId Cluster instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _instanceId Cluster instance ID
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
                     * 获取Username, which is used for login.
                     * @return User Username, which is used for login.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username, which is used for login.
                     * @param _user Username, which is used for login.
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
                     * 获取Password, which is used for login.
                     * @return Password Password, which is used for login.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password, which is used for login.
                     * @param _password Password, which is used for login.
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Valid values: `management` (Common console user), monitoring` (Console admin user), other values: Non-console user.
                     * @return Tags User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Valid values: `management` (Common console user), monitoring` (Console admin user), other values: Non-console user.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Valid values: `management` (Common console user), monitoring` (Console admin user), other values: Non-console user.
                     * @param _tags User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Valid values: `management` (Common console user), monitoring` (Console admin user), other values: Non-console user.
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
                     * 获取The maximum number of connections for the user. If this parameter is left empty, there's no limit for the number.
                     * @return MaxConnections The maximum number of connections for the user. If this parameter is left empty, there's no limit for the number.
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置The maximum number of connections for the user. If this parameter is left empty, there's no limit for the number.
                     * @param _maxConnections The maximum number of connections for the user. If this parameter is left empty, there's no limit for the number.
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
                     * 获取The maximum number of channels for the user. If this parameter is left empty, there's no limit for the number.
                     * @return MaxChannels The maximum number of channels for the user. If this parameter is left empty, there's no limit for the number.
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置The maximum number of channels for the user. If this parameter is left empty, there's no limit for the number.
                     * @param _maxChannels The maximum number of channels for the user. If this parameter is left empty, there's no limit for the number.
                     * 
                     */
                    void SetMaxChannels(const int64_t& _maxChannels);

                    /**
                     * 判断参数 MaxChannels 是否已赋值
                     * @return MaxChannels 是否已赋值
                     * 
                     */
                    bool MaxChannelsHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username, which is used for login.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password, which is used for login.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Valid values: `management` (Common console user), monitoring` (Console admin user), other values: Non-console user.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The maximum number of connections for the user. If this parameter is left empty, there's no limit for the number.
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * The maximum number of channels for the user. If this parameter is left empty, there's no limit for the number.
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQUSERREQUEST_H_
