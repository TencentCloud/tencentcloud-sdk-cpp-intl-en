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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/GroupOffsetTopic.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned result of consumer group offset
                */
                class GroupOffsetResponse : public AbstractModel
                {
                public:
                    GroupOffsetResponse();
                    ~GroupOffsetResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of eligible results
                     * @return TotalCount Total number of eligible results
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of eligible results
                     * @param _totalCount Total number of eligible results
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
                     * 获取The topic partition array, where each element is a json object.
                     * @return TopicList The topic partition array, where each element is a json object.
                     * 
                     */
                    std::vector<GroupOffsetTopic> GetTopicList() const;

                    /**
                     * 设置The topic partition array, where each element is a json object.
                     * @param _topicList The topic partition array, where each element is a json object.
                     * 
                     */
                    void SetTopicList(const std::vector<GroupOffsetTopic>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * Total number of eligible results
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The topic partition array, where each element is a json object.
                     */
                    std::vector<GroupOffsetTopic> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETRESPONSE_H_
