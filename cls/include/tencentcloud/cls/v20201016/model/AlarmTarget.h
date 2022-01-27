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
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Query statement
                     * @return Query Query statement
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement
                     * @param Query Query statement
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Monitoring object number, which is incremental from 1.
                     * @return Number Monitoring object number, which is incremental from 1.
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置Monitoring object number, which is incremental from 1.
                     * @param Number Monitoring object number, which is incremental from 1.
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Offset of the query start time from the current time in minutes. The value cannot be positive. Value range: -1440–0.
                     * @return StartTimeOffset Offset of the query start time from the current time in minutes. The value cannot be positive. Value range: -1440–0.
                     */
                    int64_t GetStartTimeOffset() const;

                    /**
                     * 设置Offset of the query start time from the current time in minutes. The value cannot be positive. Value range: -1440–0.
                     * @param StartTimeOffset Offset of the query start time from the current time in minutes. The value cannot be positive. Value range: -1440–0.
                     */
                    void SetStartTimeOffset(const int64_t& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Offset of the query end time from the current time in minutes. The value cannot be positive and must be greater than `StartTimeOffset`. Value range: -1440–0.
                     * @return EndTimeOffset Offset of the query end time from the current time in minutes. The value cannot be positive and must be greater than `StartTimeOffset`. Value range: -1440–0.
                     */
                    int64_t GetEndTimeOffset() const;

                    /**
                     * 设置Offset of the query end time from the current time in minutes. The value cannot be positive and must be greater than `StartTimeOffset`. Value range: -1440–0.
                     * @param EndTimeOffset Offset of the query end time from the current time in minutes. The value cannot be positive and must be greater than `StartTimeOffset`. Value range: -1440–0.
                     */
                    void SetEndTimeOffset(const int64_t& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetId Logset ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Query statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Monitoring object number, which is incremental from 1.
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Offset of the query start time from the current time in minutes. The value cannot be positive. Value range: -1440–0.
                     */
                    int64_t m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset of the query end time from the current time in minutes. The value cannot be positive and must be greater than `StartTimeOffset`. Value range: -1440–0.
                     */
                    int64_t m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGET_H_