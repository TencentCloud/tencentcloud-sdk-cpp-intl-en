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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICSUBSCRIBEGROUP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICSUBSCRIBEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/GroupInfoResponse.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * `DescribeTopicSubscribeGroup` output parameters
                */
                class TopicSubscribeGroup : public AbstractModel
                {
                public:
                    TopicSubscribeGroup();
                    ~TopicSubscribeGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number
                     * @return TotalCount Total number
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number
                     * @param _totalCount Total number
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Number of consumer group status
                     * @return StatusCountInfo Number of consumer group status
                     * 
                     */
                    std::string GetStatusCountInfo() const;

                    /**
                     * 设置Number of consumer group status
                     * @param _statusCountInfo Number of consumer group status
                     * 
                     */
                    void SetStatusCountInfo(const std::string& _statusCountInfo);

                    /**
                     * 判断参数 StatusCountInfo 是否已赋值
                     * @return StatusCountInfo 是否已赋值
                     * 
                     */
                    bool StatusCountInfoHasBeenSet() const;

                    /**
                     * 获取Consumer group information.
                     * @return GroupsInfo Consumer group information.
                     * 
                     */
                    std::vector<GroupInfoResponse> GetGroupsInfo() const;

                    /**
                     * 设置Consumer group information.
                     * @param _groupsInfo Consumer group information.
                     * 
                     */
                    void SetGroupsInfo(const std::vector<GroupInfoResponse>& _groupsInfo);

                    /**
                     * 判断参数 GroupsInfo 是否已赋值
                     * @return GroupsInfo 是否已赋值
                     * 
                     */
                    bool GroupsInfoHasBeenSet() const;

                    /**
                     * 获取Indicates whether the request is asynchronous. instances with fewer groups will return results directly with Status as 1. when there are more groups, the cache will be updated asynchronously. no group information will be returned when Status is 0 until the update is complete and results are returned with Status as 1.
                     * @return Status Indicates whether the request is asynchronous. instances with fewer groups will return results directly with Status as 1. when there are more groups, the cache will be updated asynchronously. no group information will be returned when Status is 0 until the update is complete and results are returned with Status as 1.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Indicates whether the request is asynchronous. instances with fewer groups will return results directly with Status as 1. when there are more groups, the cache will be updated asynchronously. no group information will be returned when Status is 0 until the update is complete and results are returned with Status as 1.
                     * @param _status Indicates whether the request is asynchronous. instances with fewer groups will return results directly with Status as 1. when there are more groups, the cache will be updated asynchronously. no group information will be returned when Status is 0 until the update is complete and results are returned with Status as 1.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Total number
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Number of consumer group status
                     */
                    std::string m_statusCountInfo;
                    bool m_statusCountInfoHasBeenSet;

                    /**
                     * Consumer group information.
                     */
                    std::vector<GroupInfoResponse> m_groupsInfo;
                    bool m_groupsInfoHasBeenSet;

                    /**
                     * Indicates whether the request is asynchronous. instances with fewer groups will return results directly with Status as 1. when there are more groups, the cache will be updated asynchronously. no group information will be returned when Status is 0 until the update is complete and results are returned with Status as 1.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICSUBSCRIBEGROUP_H_
