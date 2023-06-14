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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOTOPICS_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOTOPICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Internal topic object of `GroupInfo`
                */
                class GroupInfoTopics : public AbstractModel
                {
                public:
                    GroupInfoTopics();
                    ~GroupInfoTopics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of assigned topics
                     * @return Topic Name of assigned topics
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Name of assigned topics
                     * @param _topic Name of assigned topics
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Information of assigned partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Partitions Information of assigned partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetPartitions() const;

                    /**
                     * 设置Information of assigned partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _partitions Information of assigned partition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitions(const std::vector<int64_t>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                private:

                    /**
                     * Name of assigned topics
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Information of assigned partition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_partitions;
                    bool m_partitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPINFOTOPICS_H_
