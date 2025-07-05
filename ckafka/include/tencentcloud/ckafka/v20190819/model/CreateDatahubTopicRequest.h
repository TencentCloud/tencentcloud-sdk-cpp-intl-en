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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateDatahubTopic request structure.
                */
                class CreateDatahubTopicRequest : public AbstractModel
                {
                public:
                    CreateDatahubTopicRequest();
                    ~CreateDatahubTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name, which is a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * @return Name Topic name, which is a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Topic name, which is a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * @param _name Topic name, which is a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
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
                     * 获取Number of partitions, which should be greater than 0.
                     * @return PartitionNum Number of partitions, which should be greater than 0.
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions, which should be greater than 0.
                     * @param _partitionNum Number of partitions, which should be greater than 0.
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取Message retention period in milliseconds. The current minimum value is 60,000 ms.
                     * @return RetentionMs Message retention period in milliseconds. The current minimum value is 60,000 ms.
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置Message retention period in milliseconds. The current minimum value is 60,000 ms.
                     * @param _retentionMs Message retention period in milliseconds. The current minimum value is 60,000 ms.
                     * 
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取Topic remarks, which are a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * @return Note Topic remarks, which are a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Topic remarks, which are a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     * @param _note Topic remarks, which are a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
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
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Topic name, which is a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of partitions, which should be greater than 0.
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Message retention period in milliseconds. The current minimum value is 60,000 ms.
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * Topic remarks, which are a string of up to 128 characters. It can contain letters, digits, and hyphens (-) and must start with a letter.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_
