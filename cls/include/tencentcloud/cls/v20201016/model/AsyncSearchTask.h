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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCSEARCHTASK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCSEARCHTASK_H_

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
                * Offline search task
                */
                class AsyncSearchTask : public AbstractModel
                {
                public:
                    AsyncSearchTask();
                    ~AsyncSearchTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `0`: to be started; `1`: running; `2`: completed; `-1`: failed
                     * @return Status Status. Valid values: `0`: to be started; `1`: running; `2`: completed; `-1`: failed
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. Valid values: `0`: to be started; `1`: running; `2`: completed; `-1`: failed
                     * @param Status Status. Valid values: `0`: to be started; `1`: running; `2`: completed; `-1`: failed
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Offline search task ID
                     * @return AsyncSearchTaskId Offline search task ID
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置Offline search task ID
                     * @param AsyncSearchTaskId Offline search task ID
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

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
                     * 获取Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param From Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @return To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be queried, which is a Unix timestamp in milliseconds
                     * @param To End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Log scan order. Valid values: `asc`: ascending; `desc`: descending
                     * @return Sort Log scan order. Valid values: `asc`: ascending; `desc`: descending
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Log scan order. Valid values: `asc`: ascending; `desc`: descending
                     * @param Sort Log scan order. Valid values: `asc`: ascending; `desc`: descending
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Error message of task failure
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ErrorMessage Error message of task failure
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Error message of task failure
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ErrorMessage Error message of task failure
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Total number of logs matched in offline search task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LogCount Total number of logs matched in offline search task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置Total number of logs matched in offline search task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LogCount Total number of logs matched in offline search task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogCount(const int64_t& _logCount);

                    /**
                     * 判断参数 LogCount 是否已赋值
                     * @return LogCount 是否已赋值
                     */
                    bool LogCountHasBeenSet() const;

                    /**
                     * 获取Task completion time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FinishTime Task completion time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Task completion time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FinishTime Task completion time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Status. Valid values: `0`: to be started; `1`: running; `2`: completed; `-1`: failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offline search task ID
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                    /**
                     * Query statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Start time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be queried, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Log scan order. Valid values: `asc`: ascending; `desc`: descending
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Error message of task failure
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Total number of logs matched in offline search task
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * Task completion time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCSEARCHTASK_H_
