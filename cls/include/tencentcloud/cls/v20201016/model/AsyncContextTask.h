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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCCONTEXTTASK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCCONTEXTTASK_H_

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
                * Offline context search task
                */
                class AsyncContextTask : public AbstractModel
                {
                public:
                    AsyncContextTask();
                    ~AsyncContextTask() = default;
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
                     * 获取Creation time, which is a timestamp accurate down to the millisecond
                     * @return CreateTime Creation time, which is a timestamp accurate down to the millisecond
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time, which is a timestamp accurate down to the millisecond
                     * @param CreateTime Creation time, which is a timestamp accurate down to the millisecond
                     */
                    void SetCreateTime(const int64_t& _createTime);

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
                     * 获取Offline context search task ID
                     * @return AsyncContextTaskId Offline context search task ID
                     */
                    std::string GetAsyncContextTaskId() const;

                    /**
                     * 设置Offline context search task ID
                     * @param AsyncContextTaskId Offline context search task ID
                     */
                    void SetAsyncContextTaskId(const std::string& _asyncContextTaskId);

                    /**
                     * 判断参数 AsyncContextTaskId 是否已赋值
                     * @return AsyncContextTaskId 是否已赋值
                     */
                    bool AsyncContextTaskIdHasBeenSet() const;

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
                     * 获取Log package number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PkgId Log package number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log package number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PkgId Log package number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Log number in log package
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PkgLogId Log number in log package
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置Log number in log package
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PkgLogId Log number in log package
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取Log time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Time Log time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Log time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Time Log time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Task completion time, which is a timestamp accurate down to the millisecond
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FinishTime Task completion time, which is a timestamp accurate down to the millisecond
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetFinishTime() const;

                    /**
                     * 设置Task completion time, which is a timestamp accurate down to the millisecond
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FinishTime Task completion time, which is a timestamp accurate down to the millisecond
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFinishTime(const int64_t& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Associated offline search ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AsyncSearchTaskId Associated offline search ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置Associated offline search ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AsyncSearchTaskId Associated offline search ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

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
                     * Creation time, which is a timestamp accurate down to the millisecond
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Status. Valid values: `0`: to be started; `1`: running; `2`: completed; `-1`: failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Offline context search task ID
                     */
                    std::string m_asyncContextTaskId;
                    bool m_asyncContextTaskIdHasBeenSet;

                    /**
                     * Error message of task failure
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Log package number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Log number in log package
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * Log time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Task completion time, which is a timestamp accurate down to the millisecond
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Associated offline search ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCCONTEXTTASK_H_
