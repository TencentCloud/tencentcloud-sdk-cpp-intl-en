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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRESULT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Topic.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * `TopicResponse` returned uniformly
                */
                class TopicResult : public AbstractModel
                {
                public:
                    TopicResult();
                    ~TopicResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of returned topic information.
                     * @return TopicList List of returned topic information.
                     * 
                     */
                    std::vector<Topic> GetTopicList() const;

                    /**
                     * 设置List of returned topic information.
                     * @param _topicList List of returned topic information.
                     * 
                     */
                    void SetTopicList(const std::vector<Topic>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取Number of eligible topics.
                     * @return TotalCount Number of eligible topics.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of eligible topics.
                     * @param _totalCount Number of eligible topics.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of returned topic information.
                     */
                    std::vector<Topic> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * Number of eligible topics.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRESULT_H_
