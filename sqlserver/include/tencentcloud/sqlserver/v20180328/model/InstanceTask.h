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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Instance Asynchronous Task
                */
                class InstanceTask : public AbstractModel
                {
                public:
                    InstanceTask();
                    ~InstanceTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique id
                     * @return Id Unique id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Unique id
                     * @param _id Unique id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Job Type
                     * @return Type Job Type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Job Type
                     * @param _type Job Type
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Job Status
                     * @return Status Job Status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Job Status
                     * @param _status Job Status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Progress Percentage 0~100
                     * @return Progress Progress Percentage 0~100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Progress Percentage 0~100
                     * @param _progress Progress Percentage 0~100
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Start Time
                     * @return StartTime Start Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Time
                     * @param _startTime Start Time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End Time
                     * @return EndTime End Time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End Time
                     * @param _endTime End Time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Error Code
                     * @return ErrorCode Error Code
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Error Code
                     * @param _errorCode Error Code
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Error Message Description
                     * @return Message Error Message Description
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error Message Description
                     * @param _message Error Message Description
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Unique id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Job Type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Job Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Progress Percentage 0~100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Start Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End Time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Error Code
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error Message Description
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INSTANCETASK_H_
