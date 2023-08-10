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
                     * 获取User description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return Description User description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _description User description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
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
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return Tags User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _tags User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
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
                     * User description
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User tag, which defines a user's permission scope for accessing RabbitMQ Managementu200d.
Note: u200dThis field may return null, indicating that no valid values can be obtained.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQUSER_H_
