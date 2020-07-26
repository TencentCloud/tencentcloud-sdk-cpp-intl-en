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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/Tag.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * Field for displaying returned topic information
                */
                class TopicSet : public AbstractModel
                {
                public:
                    TopicSet();
                    ~TopicSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TopicId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicId TopicId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置TopicId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicId TopicId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取TopicName
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicName TopicName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TopicName
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicName TopicName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgRetentionSeconds MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgRetentionSeconds MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxMsgSize MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxMsgSize MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Qps Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Qps Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取FilterType
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FilterType FilterType
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置FilterType
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FilterType FilterType
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifyTime LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastModifyTime LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MsgCount MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MsgCount MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取CreateUin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateUin CreateUin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置CreateUin
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateUin CreateUin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Tags
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tags
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Tags
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to enable message trace for a topic. true: yes, false: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Trace Whether to enable message trace for a topic. true: yes, false: no
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetTrace() const;

                    /**
                     * 设置Whether to enable message trace for a topic. true: yes, false: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Trace Whether to enable message trace for a topic. true: yes, false: no
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * TopicId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * TopicName
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * MsgRetentionSeconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * MaxMsgSize
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Qps
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * FilterType
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * CreateTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * LastModifyTime
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * MsgCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * CreateUin
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Tags
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable message trace for a topic. true: yes, false: no
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_
