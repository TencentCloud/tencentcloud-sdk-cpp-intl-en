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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDTASK_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Recording task.
                */
                class RecordTask : public AbstractModel
                {
                public:
                    RecordTask();
                    ~RecordTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording task ID.
                     * @return TaskId Recording task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Recording task ID.
                     * @param _taskId Recording task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Push domain name.
                     * @return DomainName Push domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name.
                     * @param _domainName Push domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Push path.
                     * @return AppName Push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path.
                     * @param _appName Push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The start time of the recording task in Unix timestamp. 
                     * @return StartTime The start time of the recording task in Unix timestamp. 
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The start time of the recording task in Unix timestamp. 
                     * @param _startTime The start time of the recording task in Unix timestamp. 
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the recording task in Unix timestamp. 
                     * @return EndTime The end time of the recording task in Unix timestamp. 
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The end time of the recording task in Unix timestamp. 
                     * @param _endTime The end time of the recording task in Unix timestamp. 
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Recording template ID.
                     * @return TemplateId Recording template ID.
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置Recording template ID.
                     * @param _templateId Recording template ID.
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取The StopRecordTask API call stops the task at the Unix timestamp. A value of 0 indicates that the API has not been called to stop the task.
                     * @return Stopped The StopRecordTask API call stops the task at the Unix timestamp. A value of 0 indicates that the API has not been called to stop the task.
                     * 
                     */
                    uint64_t GetStopped() const;

                    /**
                     * 设置The StopRecordTask API call stops the task at the Unix timestamp. A value of 0 indicates that the API has not been called to stop the task.
                     * @param _stopped The StopRecordTask API call stops the task at the Unix timestamp. A value of 0 indicates that the API has not been called to stop the task.
                     * 
                     */
                    void SetStopped(const uint64_t& _stopped);

                    /**
                     * 判断参数 Stopped 是否已赋值
                     * @return Stopped 是否已赋值
                     * 
                     */
                    bool StoppedHasBeenSet() const;

                private:

                    /**
                     * Recording task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The start time of the recording task in Unix timestamp. 
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time of the recording task in Unix timestamp. 
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Recording template ID.
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * The StopRecordTask API call stops the task at the Unix timestamp. A value of 0 indicates that the API has not been called to stop the task.
                     */
                    uint64_t m_stopped;
                    bool m_stoppedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDTASK_H_
