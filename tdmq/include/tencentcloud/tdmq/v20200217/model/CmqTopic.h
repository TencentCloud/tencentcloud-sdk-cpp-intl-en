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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Display field of the returned CMQ topic information
                */
                class CmqTopic : public AbstractModel
                {
                public:
                    CmqTopic();
                    ~CmqTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Topic ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicId Topic ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicName Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicName Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Maximum lifecycle of message in topic. After the period specified by this parameter has elapsed since a message is sent to the topic, the message will be deleted no matter whether it has been successfully pushed to the user. This parameter is measured in seconds and defaulted to one day (86,400 seconds), which cannot be modified.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRetentionSeconds Maximum lifecycle of message in topic. After the period specified by this parameter has elapsed since a message is sent to the topic, the message will be deleted no matter whether it has been successfully pushed to the user. This parameter is measured in seconds and defaulted to one day (86,400 seconds), which cannot be modified.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置Maximum lifecycle of message in topic. After the period specified by this parameter has elapsed since a message is sent to the topic, the message will be deleted no matter whether it has been successfully pushed to the user. This parameter is measured in seconds and defaulted to one day (86,400 seconds), which cannot be modified.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgRetentionSeconds Maximum lifecycle of message in topic. After the period specified by this parameter has elapsed since a message is sent to the topic, the message will be deleted no matter whether it has been successfully pushed to the user. This parameter is measured in seconds and defaulted to one day (86,400 seconds), which cannot be modified.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取Maximum message size, which ranges from 1,024 to 1,048,576 bytes (i.e., 1–1,024 KB). The default value is 65,536.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxMsgSize Maximum message size, which ranges from 1,024 to 1,048,576 bytes (i.e., 1–1,024 KB). The default value is 65,536.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置Maximum message size, which ranges from 1,024 to 1,048,576 bytes (i.e., 1–1,024 KB). The default value is 65,536.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxMsgSize Maximum message size, which ranges from 1,024 to 1,048,576 bytes (i.e., 1–1,024 KB). The default value is 65,536.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取Number of messages published per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Qps Number of messages published per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Number of messages published per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Qps Number of messages published per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Filtering policy selected when a subscription is created:
If `filterType` is 1, `FilterTag` will be used for filtering.
If `filterType` is 2, `BindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FilterType Filtering policy selected when a subscription is created:
If `filterType` is 1, `FilterTag` will be used for filtering.
If `filterType` is 2, `BindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置Filtering policy selected when a subscription is created:
If `filterType` is 1, `FilterTag` will be used for filtering.
If `filterType` is 2, `BindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FilterType Filtering policy selected when a subscription is created:
If `filterType` is 1, `FilterTag` will be used for filtering.
If `filterType` is 2, `BindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取Topic creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Topic creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Topic creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime Topic creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Time when the topic attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTime Time when the topic attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置Time when the topic attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastModifyTime Time when the topic attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取Number of current messages in the topic (number of retained messages).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgCount Number of current messages in the topic (number of retained messages).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置Number of current messages in the topic (number of retained messages).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgCount Number of current messages in the topic (number of retained messages).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateUin Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateUin Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Trace Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetTrace() const;

                    /**
                     * 设置Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Trace Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TenantId Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TenantId Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceName Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param NamespaceName Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Status Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Status Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Topic ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Maximum lifecycle of message in topic. After the period specified by this parameter has elapsed since a message is sent to the topic, the message will be deleted no matter whether it has been successfully pushed to the user. This parameter is measured in seconds and defaulted to one day (86,400 seconds), which cannot be modified.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * Maximum message size, which ranges from 1,024 to 1,048,576 bytes (i.e., 1–1,024 KB). The default value is 65,536.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Number of messages published per second.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Filtering policy selected when a subscription is created:
If `filterType` is 1, `FilterTag` will be used for filtering.
If `filterType` is 2, `BindingKey` will be used for filtering.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * Topic creation time. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Time when the topic attribute is last modified. A Unix timestamp accurate down to the millisecond will be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * Number of current messages in the topic (number of retained messages).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * Creator `Uin`. The `resource` field for CAM authentication is composed of this field.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Associated tag.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Message trace. true: enabled; false: not enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * Tenant ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * Namespace name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTOPIC_H_
