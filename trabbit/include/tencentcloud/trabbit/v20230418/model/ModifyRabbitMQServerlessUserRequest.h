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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSUSERREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRabbitMQServerlessUser request structure.
                */
                class ModifyRabbitMQServerlessUserRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessUserRequest();
                    ~ModifyRabbitMQServerlessUserRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Specifies the username.
                     * @return User Specifies the username.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Specifies the username.
                     * @param _user Specifies the username.
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
                     * 获取Password. specifies the password.
                     * @return Password Password. specifies the password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password. specifies the password.
                     * @param _password Password. specifies the password.
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
                     * 获取Description. if not provided, no modification will be made.
                     * @return Description Description. if not provided, no modification will be made.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. if not provided, no modification will be made.
                     * @param _description Description. if not provided, no modification will be made.
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
                     * 获取User tag. specifies to determine the access permission scope of this user to RabbitMQ Management. if it is not passed in, no modification will be made.
                     * @return Tags User tag. specifies to determine the access permission scope of this user to RabbitMQ Management. if it is not passed in, no modification will be made.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置User tag. specifies to determine the access permission scope of this user to RabbitMQ Management. if it is not passed in, no modification will be made.
                     * @param _tags User tag. specifies to determine the access permission scope of this user to RabbitMQ Management. if it is not passed in, no modification will be made.
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
                     * 获取Specifies the maximum number of connections for this user. if not provided, it will not be modified.
                     * @return MaxConnections Specifies the maximum number of connections for this user. if not provided, it will not be modified.
                     * 
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置Specifies the maximum number of connections for this user. if not provided, it will not be modified.
                     * @param _maxConnections Specifies the maximum number of connections for this user. if not provided, it will not be modified.
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
                     * 获取Specifies the maximum number of channels for this user. if not provided, it will not be modified.
                     * @return MaxChannels Specifies the maximum number of channels for this user. if not provided, it will not be modified.
                     * 
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置Specifies the maximum number of channels for this user. if not provided, it will not be modified.
                     * @param _maxChannels Specifies the maximum number of channels for this user. if not provided, it will not be modified.
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
                     * Specifies the username.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password. specifies the password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Description. if not provided, no modification will be made.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User tag. specifies to determine the access permission scope of this user to RabbitMQ Management. if it is not passed in, no modification will be made.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Specifies the maximum number of connections for this user. if not provided, it will not be modified.
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * Specifies the maximum number of channels for this user. if not provided, it will not be modified.
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSUSERREQUEST_H_
