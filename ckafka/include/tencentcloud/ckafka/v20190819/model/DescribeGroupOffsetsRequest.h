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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPOFFSETSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPOFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeGroupOffsets request structure.
                */
                class DescribeGroupOffsetsRequest : public AbstractModel
                {
                public:
                    DescribeGroupOffsetsRequest();
                    ~DescribeGroupOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取(Filter) filter by instance ID
                     * @return InstanceId (Filter) filter by instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置(Filter) filter by instance ID
                     * @param _instanceId (Filter) filter by instance ID
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
                     * 获取Kafka consumer group
                     * @return Group Kafka consumer group
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Kafka consumer group
                     * @param _group Kafka consumer group
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Array of the names of topics subscribed to by a group. If there is no such array, this parameter means the information of all topics in the specified group
                     * @return Topics Array of the names of topics subscribed to by a group. If there is no such array, this parameter means the information of all topics in the specified group
                     * 
                     */
                    std::vector<std::string> GetTopics() const;

                    /**
                     * 设置Array of the names of topics subscribed to by a group. If there is no such array, this parameter means the information of all topics in the specified group
                     * @param _topics Array of the names of topics subscribed to by a group. If there is no such array, this parameter means the information of all topics in the specified group
                     * 
                     */
                    void SetTopics(const std::vector<std::string>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取Fuzzy match by `topicName`
                     * @return SearchWord Fuzzy match by `topicName`
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Fuzzy match by `topicName`
                     * @param _searchWord Fuzzy match by `topicName`
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取Offset position of this query. Default value: 0
                     * @return Offset Offset position of this query. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset position of this query. Default value: 0
                     * @param _offset Offset position of this query. Default value: 0
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
                     * 获取Maximum number of results to be returned in this request. Default value: 50. Maximum value: 50
                     * @return Limit Maximum number of results to be returned in this request. Default value: 50. Maximum value: 50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of results to be returned in this request. Default value: 50. Maximum value: 50
                     * @param _limit Maximum number of results to be returned in this request. Default value: 50. Maximum value: 50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * (Filter) filter by instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Kafka consumer group
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Array of the names of topics subscribed to by a group. If there is no such array, this parameter means the information of all topics in the specified group
                     */
                    std::vector<std::string> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * Fuzzy match by `topicName`
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Offset position of this query. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of results to be returned in this request. Default value: 50. Maximum value: 50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPOFFSETSREQUEST_H_
