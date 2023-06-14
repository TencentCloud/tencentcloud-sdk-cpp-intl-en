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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICINSYNCREPLICARESULT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICINSYNCREPLICARESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/TopicInSyncReplicaInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Set of topic replicas and details
                */
                class TopicInSyncReplicaResult : public AbstractModel
                {
                public:
                    TopicInSyncReplicaResult();
                    ~TopicInSyncReplicaResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Set of topic details and replicas
                     * @return TopicInSyncReplicaList Set of topic details and replicas
                     * 
                     */
                    std::vector<TopicInSyncReplicaInfo> GetTopicInSyncReplicaList() const;

                    /**
                     * 设置Set of topic details and replicas
                     * @param _topicInSyncReplicaList Set of topic details and replicas
                     * 
                     */
                    void SetTopicInSyncReplicaList(const std::vector<TopicInSyncReplicaInfo>& _topicInSyncReplicaList);

                    /**
                     * 判断参数 TopicInSyncReplicaList 是否已赋值
                     * @return TopicInSyncReplicaList 是否已赋值
                     * 
                     */
                    bool TopicInSyncReplicaListHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number
                     * @param _totalCount Total number
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Set of topic details and replicas
                     */
                    std::vector<TopicInSyncReplicaInfo> m_topicInSyncReplicaList;
                    bool m_topicInSyncReplicaListHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICINSYNCREPLICARESULT_H_
