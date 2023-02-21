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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERRECORD_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERRECORD_H_

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
                * Message record
                */
                class ConsumerRecord : public AbstractModel
                {
                public:
                    ConsumerRecord();
                    ~ConsumerRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name
                     * @return Topic Topic name
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name
                     * @param Topic Topic name
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Partition ID
                     * @return Partition Partition ID
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Partition ID
                     * @param Partition Partition ID
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param Offset Offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Message key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Key Message key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Message key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Key Message key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Message value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Value Message value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Message value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Value Message value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Message timestamp
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Timestamp Message timestamp
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Message timestamp
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Timestamp Message timestamp
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Message headers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Headers Message headers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置Message headers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Headers Message headers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeaders(const std::string& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Partition ID
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Message key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Message value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Message timestamp
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Message headers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERRECORD_H_
