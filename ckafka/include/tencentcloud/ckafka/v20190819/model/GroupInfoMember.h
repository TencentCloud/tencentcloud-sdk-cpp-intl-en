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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOMEMBER_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Assignment.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Consumer information
                */
                class GroupInfoMember : public AbstractModel
                {
                public:
                    GroupInfoMember();
                    ~GroupInfoMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID generated for consumer in consumer group by coordinator
                     * @return MemberId Unique ID generated for consumer in consumer group by coordinator
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Unique ID generated for consumer in consumer group by coordinator
                     * @param _memberId Unique ID generated for consumer in consumer group by coordinator
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取`client.id` information by the client consumer SDK
                     * @return ClientId `client.id` information by the client consumer SDK
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置`client.id` information by the client consumer SDK
                     * @param _clientId `client.id` information by the client consumer SDK
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Generally stores client IP address
                     * @return ClientHost Generally stores client IP address
                     * 
                     */
                    std::string GetClientHost() const;

                    /**
                     * 设置Generally stores client IP address
                     * @param _clientHost Generally stores client IP address
                     * 
                     */
                    void SetClientHost(const std::string& _clientHost);

                    /**
                     * 判断参数 ClientHost 是否已赋值
                     * @return ClientHost 是否已赋值
                     * 
                     */
                    bool ClientHostHasBeenSet() const;

                    /**
                     * 获取Stores the information of partition assigned to this consumer
                     * @return Assignment Stores the information of partition assigned to this consumer
                     * 
                     */
                    Assignment GetAssignment() const;

                    /**
                     * 设置Stores the information of partition assigned to this consumer
                     * @param _assignment Stores the information of partition assigned to this consumer
                     * 
                     */
                    void SetAssignment(const Assignment& _assignment);

                    /**
                     * 判断参数 Assignment 是否已赋值
                     * @return Assignment 是否已赋值
                     * 
                     */
                    bool AssignmentHasBeenSet() const;

                private:

                    /**
                     * Unique ID generated for consumer in consumer group by coordinator
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * `client.id` information by the client consumer SDK
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Generally stores client IP address
                     */
                    std::string m_clientHost;
                    bool m_clientHostHasBeenSet;

                    /**
                     * Stores the information of partition assigned to this consumer
                     */
                    Assignment m_assignment;
                    bool m_assignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOMEMBER_H_
