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
                     * 获取<p>Name is a string of no more than 128 characters, must start with "AppId-", and the remaining part can contain letters, digits, and hyphens (-). It can be queried through the API DescribeAppInfo.</p>
                     * @return Name <p>Name is a string of no more than 128 characters, must start with "AppId-", and the remaining part can contain letters, digits, and hyphens (-). It can be queried through the API DescribeAppInfo.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name is a string of no more than 128 characters, must start with "AppId-", and the remaining part can contain letters, digits, and hyphens (-). It can be queried through the API DescribeAppInfo.</p>
                     * @param _name <p>Name is a string of no more than 128 characters, must start with "AppId-", and the remaining part can contain letters, digits, and hyphens (-). It can be queried through the API DescribeAppInfo.</p>
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
                     * 获取<p>Number of partitions, maximum value is 500, larger than 0</p>
                     * @return PartitionNum <p>Number of partitions, maximum value is 500, larger than 0</p>
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置<p>Number of partitions, maximum value is 500, larger than 0</p>
                     * @param _partitionNum <p>Number of partitions, maximum value is 500, larger than 0</p>
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
                     * 获取<p>Message retention period in milliseconds. Current min value is 60000 ms.</p>
                     * @return RetentionMs <p>Message retention period in milliseconds. Current min value is 60000 ms.</p>
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置<p>Message retention period in milliseconds. Current min value is 60000 ms.</p>
                     * @param _retentionMs <p>Message retention period in milliseconds. Current min value is 60000 ms.</p>
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
                     * 获取<p>Topic remark is a string of no more than 64 characters, which can contain letters, digits, and hyphens (-).</p>
                     * @return Note <p>Topic remark is a string of no more than 64 characters, which can contain letters, digits, and hyphens (-).</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>Topic remark is a string of no more than 64 characters, which can contain letters, digits, and hyphens (-).</p>
                     * @param _note <p>Topic remark is a string of no more than 64 characters, which can contain letters, digits, and hyphens (-).</p>
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
                     * 获取<p>Tag list</p>
                     * @return Tags <p>Tag list</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag list</p>
                     * @param _tags <p>Tag list</p>
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
                     * <p>Name is a string of no more than 128 characters, must start with "AppId-", and the remaining part can contain letters, digits, and hyphens (-). It can be queried through the API DescribeAppInfo.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Number of partitions, maximum value is 500, larger than 0</p>
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * <p>Message retention period in milliseconds. Current min value is 60000 ms.</p>
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * <p>Topic remark is a string of no more than 64 characters, which can contain letters, digits, and hyphens (-).</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>Tag list</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_
