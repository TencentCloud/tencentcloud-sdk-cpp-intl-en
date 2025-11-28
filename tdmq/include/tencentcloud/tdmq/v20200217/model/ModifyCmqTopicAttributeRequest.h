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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQTOPICATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQTOPICATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyCmqTopicAttribute request structure.
                */
                class ModifyCmqTopicAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCmqTopicAttributeRequest();
                    ~ModifyCmqTopicAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name, which must be unique under the same account in a single region. the name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     * @return TopicName Topic name, which must be unique under the same account in a single region. the name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name, which must be unique under the same account in a single region. the name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     * @param _topicName Topic name, which must be unique under the same account in a single region. the name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
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

                private:

                    /**
                     * Topic name, which must be unique under the same account in a single region. the name is a string of no more than 64 characters, starting with a letter, and the remaining part may include letters, numbers, and hyphens (-).
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Maximum message length. Value range: 1024–65536 bytes (i.e., 1–64 KB). Default value: 65536.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYCMQTOPICATTRIBUTEREQUEST_H_
