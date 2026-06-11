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
                     * 获取Log topic ID. Obtain the log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return TopicId Log topic ID. Obtain the log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID. Obtain the log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _topicId Log topic ID. Obtain the log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
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
                     * 获取Query statement.
                     * @return Query Query statement.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement.
                     * @param _query Query statement.
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
                     * 获取Alarm object SN. It starts from 1 and increments.
                     * @return Number Alarm object SN. It starts from 1 and increments.
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置Alarm object SN. It starts from 1 and increments.
                     * @param _number Alarm object SN. It starts from 1 and increments.
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
                     * 获取Offset of the start time of the query time range from alarm execution time, in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1,440.
                     * @return StartTimeOffset Offset of the start time of the query time range from alarm execution time, in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1,440.
                     * 
                     */
                    int64_t GetStartTimeOffset() const;

                    /**
                     * 设置Offset of the start time of the query time range from alarm execution time, in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1,440.
                     * @param _startTimeOffset Offset of the start time of the query time range from alarm execution time, in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1,440.
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
                     * 获取Offset of the end time of the query time range from alarm execution time, in minutes. The value cannot be positive and should be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.
                     * @return EndTimeOffset Offset of the end time of the query time range from alarm execution time, in minutes. The value cannot be positive and should be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.
                     * 
                     */
                    int64_t GetEndTimeOffset() const;

                    /**
                     * 设置Offset of the end time of the query time range from alarm execution time, in minutes. The value cannot be positive and should be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.
                     * @param _endTimeOffset Offset of the end time of the query time range from alarm execution time, in minutes. The value cannot be positive and should be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.
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
                     * 获取Logset ID. Obtain the logset ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return LogsetId Logset ID. Obtain the logset ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID. Obtain the logset ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _logsetId Logset ID. Obtain the logset ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
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
                     * 获取Search syntax rules. Default value is 0.
0: Lucene syntax; 1: CQL syntax.
For detailed explanation, refer to <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * @return SyntaxRule Search syntax rules. Default value is 0.
0: Lucene syntax; 1: CQL syntax.
For detailed explanation, refer to <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Search syntax rules. Default value is 0.
0: Lucene syntax; 1: CQL syntax.
For detailed explanation, refer to <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     * @param _syntaxRule Search syntax rules. Default value is 0.
0: Lucene syntax; 1: CQL syntax.
For detailed explanation, refer to <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
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
                     * Log topic ID. Obtain the log topic ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Query statement.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Alarm object SN. It starts from 1 and increments.
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Offset of the start time of the query time range from alarm execution time, in minutes. The value cannot be positive. Maximum value: 0. Minimum value: -1,440.
                     */
                    int64_t m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset of the end time of the query time range from alarm execution time, in minutes. The value cannot be positive and should be greater than StartTimeOffset. Maximum value: 0. Minimum value: -1440.
                     */
                    int64_t m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Logset ID. Obtain the logset ID through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Search syntax rules. Default value is 0.
0: Lucene syntax; 1: CQL syntax.
For detailed explanation, refer to <a href="https://www.tencentcloud.com/document/product/614/47044?from_cn_redirect=1#RetrievesConditionalRules" target="_blank">Retrieve Syntax Rules</a>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGET_H_
