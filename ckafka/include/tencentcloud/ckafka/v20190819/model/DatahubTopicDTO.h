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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTOPICDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTOPICDTO_H_

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
                * DataHub topic
                */
                class DatahubTopicDTO : public AbstractModel
                {
                public:
                    DatahubTopicDTO();
                    ~DatahubTopicDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param _topicId Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取The number of partitions
                     * @return PartitionNum The number of partitions
                     * 
                     */
                    uint64_t GetPartitionNum() const;

                    /**
                     * 设置The number of partitions
                     * @param _partitionNum The number of partitions
                     * 
                     */
                    void SetPartitionNum(const uint64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return RetentionMs Expiration time
                     * 
                     */
                    uint64_t GetRetentionMs() const;

                    /**
                     * 设置Expiration time
                     * @param _retentionMs Expiration time
                     * 
                     */
                    void SetRetentionMs(const uint64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Note Remarks
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Remarks
                     * @param _note Remarks
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Status (`1`: In use; `2`: Deleting)
                     * @return Status Status (`1`: In use; `2`: Deleting)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status (`1`: In use; `2`: Deleting)
                     * @param _status Status (`1`: In use; `2`: Deleting)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * The number of partitions
                     */
                    uint64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Expiration time
                     */
                    uint64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Status (`1`: In use; `2`: Deleting)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBTOPICDTO_H_
