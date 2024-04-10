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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGET_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Monitoring object
                */
                class AlarmTarget : public AbstractModel
                {
                public:
                    AlarmTarget();
                    ~AlarmTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicId Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicId Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Query Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _query Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Serial number of alarm object, which is incremental from 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Number Serial number of alarm object, which is incremental from 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置Serial number of alarm object, which is incremental from 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _number Serial number of alarm object, which is incremental from 1.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Offset of the query start time from the alarm execution time in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTimeOffset Offset of the query start time from the alarm execution time in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStartTimeOffset() const;

                    /**
                     * 设置Offset of the query start time from the alarm execution time in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTimeOffset Offset of the query start time from the alarm execution time in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTimeOffset(const int64_t& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Offset of the query end time from the alarm execution time in minutes. The value cannot be positive and must be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTimeOffset Offset of the query end time from the alarm execution time in minutes. The value cannot be positive and must be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEndTimeOffset() const;

                    /**
                     * 设置Offset of the query end time from the alarm execution time in minutes. The value cannot be positive and must be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTimeOffset Offset of the query end time from the alarm execution time in minutes. The value cannot be positive and must be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTimeOffset(const int64_t& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Logset IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @return LogsetId Logset IDNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset IDNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _logsetId Logset IDNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Search syntax rules; default value: 0.0: Lucene syntax; 1: CQL syntax.For detailed instructions, see <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Search Condition Syntax Rules</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SyntaxRule Search syntax rules; default value: 0.0: Lucene syntax; 1: CQL syntax.For detailed instructions, see <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Search Condition Syntax Rules</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Search syntax rules; default value: 0.0: Lucene syntax; 1: CQL syntax.For detailed instructions, see <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Search Condition Syntax Rules</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _syntaxRule Search syntax rules; default value: 0.0: Lucene syntax; 1: CQL syntax.For detailed instructions, see <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Search Condition Syntax Rules</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                private:

                    /**
                     * Log topic IDNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Query statementNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Serial number of alarm object, which is incremental from 1.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Offset of the query start time from the alarm execution time in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset of the query end time from the alarm execution time in minutes. The value cannot be positive and must be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Logset IDNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Search syntax rules; default value: 0.0: Lucene syntax; 1: CQL syntax.For detailed instructions, see <a href="https://intl.cloud.tencent.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Search Condition Syntax Rules</a>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGET_H_
