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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQTOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateCmqTopic request structure.
                */
                class CreateCmqTopicRequest : public AbstractModel
                {
                public:
                    CreateCmqTopicRequest();
                    ~CreateCmqTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * @return TopicName Topic name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     * @param _topicName Topic name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
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
                     * 获取Maximum message length. Value range: 1024–65536 bytes (i.e., 1–64 KB). Default value: 65536.
                     * @return MaxMsgSize Maximum message length. Value range: 1024–65536 bytes (i.e., 1–64 KB). Default value: 65536.
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置Maximum message length. Value range: 1024–65536 bytes (i.e., 1–64 KB). Default value: 65536.
                     * @param _maxMsgSize Maximum message length. Value range: 1024–65536 bytes (i.e., 1–64 KB). Default value: 65536.
                     * 
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     * 
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取Used to specify the message match policy for the topic. 1: tag match policy (default value); 2: routing match policy.
                     * @return FilterType Used to specify the message match policy for the topic. 1: tag match policy (default value); 2: routing match policy.
                     * 
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置Used to specify the message match policy for the topic. 1: tag match policy (default value); 2: routing match policy.
                     * @param _filterType Used to specify the message match policy for the topic. 1: tag match policy (default value); 2: routing match policy.
                     * 
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Message retention period. Value range: 60–86400 seconds (i.e., 1 minute–1 day). Default value: 86400.
                     * @return MsgRetentionSeconds Message retention period. Value range: 60–86400 seconds (i.e., 1 minute–1 day). Default value: 86400.
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置Message retention period. Value range: 60–86400 seconds (i.e., 1 minute–1 day). Default value: 86400.
                     * @param _msgRetentionSeconds Message retention period. Value range: 60–86400 seconds (i.e., 1 minute–1 day). Default value: 86400.
                     * 
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     * 
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * @return Trace Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * 
                     */
                    bool GetTrace() const;

                    /**
                     * 设置Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * @param _trace Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     * 
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取Tag array.
                     * @return Tags Tag array.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag array.
                     * @param _tags Tag array.
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
                     * Topic name, which must be unique in the same topic under the same account in the same region. It can contain up to 64 letters, digits, and hyphens and must begin with a letter.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Maximum message length. Value range: 1024–65536 bytes (i.e., 1–64 KB). Default value: 65536.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Used to specify the message match policy for the topic. 1: tag match policy (default value); 2: routing match policy.
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Message retention period. Value range: 60–86400 seconds (i.e., 1 minute–1 day). Default value: 86400.
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * Whether to enable message trace. true: yes; false: no. If this field is left empty, the feature will not be enabled.
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * Tag array.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECMQTOPICREQUEST_H_
