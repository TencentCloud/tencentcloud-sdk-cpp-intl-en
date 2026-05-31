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
                     * 获取<p>Username, used when logging in</p>
                     * @return User <p>Username, used when logging in</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>Username, used when logging in</p>
                     * @param _user <p>Username, used when logging in</p>
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
                     * 获取<p>Password, used when logging in</p>
                     * @return Password <p>Password, used when logging in</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password, used when logging in</p>
                     * @param _password <p>Password, used when logging in</p>
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
                     * 获取<p>user description</p>
                     * @return Description <p>user description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>user description</p>
                     * @param _description <p>user description</p>
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
                     * 获取<p>User tag, used to determine the access permission of the user to RabbitMQ Management</p>
                     * @return Tags <p>User tag, used to determine the access permission of the user to RabbitMQ Management</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>User tag, used to determine the access permission of the user to RabbitMQ Management</p>
                     * @param _tags <p>User tag, used to determine the access permission of the user to RabbitMQ Management</p>
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
                     * 获取<p>User creation time</p>
                     * @return CreateTime <p>User creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>User creation time</p>
                     * @param _createTime <p>User creation time</p>
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
                     * 获取<p>User last modification time</p>
                     * @return ModifyTime <p>User last modification time</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>User last modification time</p>
                     * @param _modifyTime <p>User last modification time</p>
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
                     * 获取<p>Type of user, System: system creation, User: user creation</p>
                     * @return Type <p>Type of user, System: system creation, User: user creation</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Type of user, System: system creation, User: user creation</p>
                     * @param _type <p>Type of user, System: system creation, User: user creation</p>
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
                     * 获取<p>Maximum available connections per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxConnections <p>Maximum available connections per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置<p>Maximum available connections per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxConnections <p>Maximum available connections per user</p>
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
                     * 获取<p>Maximum available channels per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxChannels <p>Maximum available channels per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置<p>Maximum available channels per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxChannels <p>Maximum available channels per user</p>
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
                     * 获取<p>Creation time timestamp</p>
                     * @return CreateTs <p>Creation time timestamp</p>
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置<p>Creation time timestamp</p>
                     * @param _createTs <p>Creation time timestamp</p>
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
                     * 获取<p>Modification time timestamp</p>
                     * @return ModifyTs <p>Modification time timestamp</p>
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置<p>Modification time timestamp</p>
                     * @param _modifyTs <p>Modification time timestamp</p>
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                    /**
                     * 获取<p>Whether cam authentication is enabled</p><p>Default value: false</p>
                     * @return CamAuthEnabled <p>Whether cam authentication is enabled</p><p>Default value: false</p>
                     * 
                     */
                    bool GetCamAuthEnabled() const;

                    /**
                     * 设置<p>Whether cam authentication is enabled</p><p>Default value: false</p>
                     * @param _camAuthEnabled <p>Whether cam authentication is enabled</p><p>Default value: false</p>
                     * 
                     */
                    void SetCamAuthEnabled(const bool& _camAuthEnabled);

                    /**
                     * 判断参数 CamAuthEnabled 是否已赋值
                     * @return CamAuthEnabled 是否已赋值
                     * 
                     */
                    bool CamAuthEnabledHasBeenSet() const;

                    /**
                     * 获取<p>cam credential name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CamCredentialName <p>cam credential name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCamCredentialName() const;

                    /**
                     * 设置<p>cam credential name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _camCredentialName <p>cam credential name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCamCredentialName(const std::string& _camCredentialName);

                    /**
                     * 判断参数 CamCredentialName 是否已赋值
                     * @return CamCredentialName 是否已赋值
                     * 
                     */
                    bool CamCredentialNameHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, such as amqp-xxxxxxxx. Effective InstanceId can be obtained by logging in to the <a href="https://console.cloud.tencent.com/trabbitmq/cluster?rid=1">TDMQ RabbitMQ Console</a> for querying.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Username, used when logging in</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>Password, used when logging in</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>user description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>User tag, used to determine the access permission of the user to RabbitMQ Management</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>User creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>User last modification time</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>Type of user, System: system creation, User: user creation</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Maximum available connections per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * <p>Maximum available channels per user</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                    /**
                     * <p>Creation time timestamp</p>
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * <p>Modification time timestamp</p>
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                    /**
                     * <p>Whether cam authentication is enabled</p><p>Default value: false</p>
                     */
                    bool m_camAuthEnabled;
                    bool m_camAuthEnabledHasBeenSet;

                    /**
                     * <p>cam credential name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_camCredentialName;
                    bool m_camCredentialNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
