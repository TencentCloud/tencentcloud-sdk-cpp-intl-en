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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERREQUEST_H_

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
                * DescribeRabbitMQUser request structure.
                */
                class DescribeRabbitMQUserRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQUserRequest();
                    ~DescribeRabbitMQUserRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Username search by prefix or suffix
                     * @return SearchUser Username search by prefix or suffix
                     * 
                     */
                    std::string GetSearchUser() const;

                    /**
                     * 设置Username search by prefix or suffix
                     * @param _searchUser Username search by prefix or suffix
                     * 
                     */
                    void SetSearchUser(const std::string& _searchUser);

                    /**
                     * 判断参数 SearchUser 是否已赋值
                     * @return SearchUser 是否已赋值
                     * 
                     */
                    bool SearchUserHasBeenSet() const;

                    /**
                     * 获取Specifies the page Offset. default is 0.
                     * @return Offset Specifies the page Offset. default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the page Offset. default is 0.
                     * @param _offset Specifies the page Offset. default is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page Limit. default value: 20.
                     * @return Limit Page Limit. default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page Limit. default value: 20.
                     * @param _limit Page Limit. default value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Username, which is queried by exact match.
                     * @return User Username, which is queried by exact match.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username, which is queried by exact match.
                     * @param _user Username, which is queried by exact match.
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
                     * 获取User tag, used to determine the access permission of the user for RabbitMQ Management.
management: ordinary console user. monitoring: administrative console user. other value: non-console user.
                     * @return Tags User tag, used to determine the access permission of the user for RabbitMQ Management.
management: ordinary console user. monitoring: administrative console user. other value: non-console user.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置User tag, used to determine the access permission of the user for RabbitMQ Management.
management: ordinary console user. monitoring: administrative console user. other value: non-console user.
                     * @param _tags User tag, used to determine the access permission of the user for RabbitMQ Management.
management: ordinary console user. monitoring: administrative console user. other value: non-console user.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username search by prefix or suffix
                     */
                    std::string m_searchUser;
                    bool m_searchUserHasBeenSet;

                    /**
                     * Specifies the page Offset. default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page Limit. default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Username, which is queried by exact match.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * User tag, used to determine the access permission of the user for RabbitMQ Management.
management: ordinary console user. monitoring: administrative console user. other value: non-console user.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERREQUEST_H_
