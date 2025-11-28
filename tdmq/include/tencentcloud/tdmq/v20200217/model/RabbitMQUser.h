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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_

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
                * TDMQ for RabbitMQ user entity details
                */
                class RabbitMQUser : public AbstractModel
                {
                public:
                    RabbitMQUser();
                    ~RabbitMQUser() = default;
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
                     * 获取User description
                     * @return Description User description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User description
                     * @param _description User description
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
                     * 获取User tags, which determine the scope of permissions of this user to access RabbitMQ Management.
                     * @return Tags User tags, which determine the scope of permissions of this user to access RabbitMQ Management.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置User tags, which determine the scope of permissions of this user to access RabbitMQ Management.
                     * @param _tags User tags, which determine the scope of permissions of this user to access RabbitMQ Management.
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
                     * 获取User creation time
                     * @return CreateTime User creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置User creation time
                     * @param _createTime User creation time
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
                     * 获取Last user modification time
                     * @return ModifyTime Last user modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last user modification time
                     * @param _modifyTime Last user modification time
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
                     * 获取User type. Valid values: `System` (Created by system), `User` (Created by user).
                     * @return Type User type. Valid values: `System` (Created by system), `User` (Created by user).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置User type. Valid values: `System` (Created by system), `User` (Created by user).
                     * @param _type User type. Valid values: `System` (Created by system), `User` (Created by user).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Maximum number of available connections per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxConnections Maximum number of available connections per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置Maximum number of available connections per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxConnections Maximum number of available connections per user.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum number of available channels per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxChannels Maximum number of available channels per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置Maximum number of available channels per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxChannels Maximum number of available channels per user.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * User description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User tags, which determine the scope of permissions of this user to access RabbitMQ Management.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * User creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last user modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * User type. Valid values: `System` (Created by system), `User` (Created by user).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Maximum number of available connections per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * Maximum number of available channels per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
