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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQUSER_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ user info detail.
                */
                class RabbitMQUser : public AbstractModel
                {
                public:
                    RabbitMQUser();
                    ~RabbitMQUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取instance ID
                     * @return InstanceId instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置instance ID
                     * @param _instanceId instance ID
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
                     * 获取Specifies the username used when logging in.
                     * @return User Specifies the username used when logging in.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Specifies the username used when logging in.
                     * @param _user Specifies the username used when logging in.
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
                     * 获取Password. specifies the password used when logging in.
                     * @return Password Password. specifies the password used when logging in.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password. specifies the password used when logging in.
                     * @param _password Password. specifies the password used when logging in.
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
                     * 获取User tag. specifies to determine the access permission scope of this user to RabbitMQ Management.
                     * @return Tags User tag. specifies to determine the access permission scope of this user to RabbitMQ Management.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置User tag. specifies to determine the access permission scope of this user to RabbitMQ Management.
                     * @param _tags User tag. specifies to determine the access permission scope of this user to RabbitMQ Management.
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
                     * 获取Last modification time of the user.
                     * @return ModifyTime Last modification time of the user.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modification time of the user.
                     * @param _modifyTime Last modification time of the user.
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
                     * 获取Type of User. specifies that "System" indicates System creation and "User" indicates User-created.
                     * @return Type Type of User. specifies that "System" indicates System creation and "User" indicates User-created.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of User. specifies that "System" indicates System creation and "User" indicates User-created.
                     * @param _type Type of User. specifies that "System" indicates System creation and "User" indicates User-created.
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
                     * 获取Specifies the maximum number of connections allowed for this user.
                     * @return MaxConnections Specifies the maximum number of connections allowed for this user.
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置Specifies the maximum number of connections allowed for this user.
                     * @param _maxConnections Specifies the maximum number of connections allowed for this user.
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
                     * 获取The maximum number of channels allowed for this user.
                     * @return MaxChannels The maximum number of channels allowed for this user.
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置The maximum number of channels allowed for this user.
                     * @param _maxChannels The maximum number of channels allowed for this user.
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
                     * instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the username used when logging in.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password. specifies the password used when logging in.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * User description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User tag. specifies to determine the access permission scope of this user to RabbitMQ Management.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * User creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time of the user.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Type of User. specifies that "System" indicates System creation and "User" indicates User-created.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the maximum number of connections allowed for this user.
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * The maximum number of channels allowed for this user.
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQUSER_H_
