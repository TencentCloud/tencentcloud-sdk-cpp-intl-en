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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREBUILDINDEXTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREBUILDINDEXTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRebuildIndexTask request structure.
                */
                class CreateRebuildIndexTaskRequest : public AbstractModel
                {
                public:
                    CreateRebuildIndexTaskRequest();
                    ~CreateRebuildIndexTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取Reconstruction start timestamp, in milliseconds
Start time cannot exceed log lifecycle
                     * @return StartTime Reconstruction start timestamp, in milliseconds
Start time cannot exceed log lifecycle
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Reconstruction start timestamp, in milliseconds
Start time cannot exceed log lifecycle
                     * @param _startTime Reconstruction start timestamp, in milliseconds
Start time cannot exceed log lifecycle
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
                     * 获取Reconstruction end timestamp, in milliseconds
End time not later than 15 minutes before the current time
Note: It is advisable to use the "EstimateRebuildIndexTask" API in advance to assess the data volume and duration involved in index rebuilding within this time range, avoiding excessive cost or duration due to overly large data volume.
                     * @return EndTime Reconstruction end timestamp, in milliseconds
End time not later than 15 minutes before the current time
Note: It is advisable to use the "EstimateRebuildIndexTask" API in advance to assess the data volume and duration involved in index rebuilding within this time range, avoiding excessive cost or duration due to overly large data volume.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Reconstruction end timestamp, in milliseconds
End time not later than 15 minutes before the current time
Note: It is advisable to use the "EstimateRebuildIndexTask" API in advance to assess the data volume and duration involved in index rebuilding within this time range, avoiding excessive cost or duration due to overly large data volume.
                     * @param _endTime Reconstruction end timestamp, in milliseconds
End time not later than 15 minutes before the current time
Note: It is advisable to use the "EstimateRebuildIndexTask" API in advance to assess the data volume and duration involved in index rebuilding within this time range, avoiding excessive cost or duration due to overly large data volume.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Reconstruction start timestamp, in milliseconds
Start time cannot exceed log lifecycle
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Reconstruction end timestamp, in milliseconds
End time not later than 15 minutes before the current time
Note: It is advisable to use the "EstimateRebuildIndexTask" API in advance to assess the data volume and duration involved in index rebuilding within this time range, avoiding excessive cost or duration due to overly large data volume.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREBUILDINDEXTASKREQUEST_H_
