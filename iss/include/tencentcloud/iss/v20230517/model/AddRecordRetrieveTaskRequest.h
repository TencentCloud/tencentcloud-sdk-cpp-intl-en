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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/ChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddRecordRetrieveTask request structure.
                */
                class AddRecordRetrieveTaskRequest : public AbstractModel
                {
                public:
                    AddRecordRetrieveTaskRequest();
                    ~AddRecordRetrieveTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The name must be globally unique and cannot be empty or repeated.
                     * @return TaskName Task name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The name must be globally unique and cannot be empty or repeated.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The name must be globally unique and cannot be empty or repeated.
                     * @param _taskName Task name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The name must be globally unique and cannot be empty or repeated.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Start time for retrieving the video recording in UTC seconds, for example: 1662114146. The longest period between the start and end times is one day and cannot span multiple days.
                     * @return StartTime Start time for retrieving the video recording in UTC seconds, for example: 1662114146. The longest period between the start and end times is one day and cannot span multiple days.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time for retrieving the video recording in UTC seconds, for example: 1662114146. The longest period between the start and end times is one day and cannot span multiple days.
                     * @param _startTime Start time for retrieving the video recording in UTC seconds, for example: 1662114146. The longest period between the start and end times is one day and cannot span multiple days.
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
                     * 获取End time for retrieving the video recording, in UTC seconds, for example: 1662114146. The period between the start and end times can be up to one day and cannot span multiple days.
                     * @return EndTime End time for retrieving the video recording, in UTC seconds, for example: 1662114146. The period between the start and end times can be up to one day and cannot span multiple days.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time for retrieving the video recording, in UTC seconds, for example: 1662114146. The period between the start and end times can be up to one day and cannot span multiple days.
                     * @param _endTime End time for retrieving the video recording, in UTC seconds, for example: 1662114146. The period between the start and end times can be up to one day and cannot span multiple days.
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
                     * 获取Retrieval mode. 1: ultrafast mode. Others not supported currently.
                     * @return Mode Retrieval mode. 1: ultrafast mode. Others not supported currently.
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Retrieval mode. 1: ultrafast mode. Others not supported currently.
                     * @param _mode Retrieval mode. 1: ultrafast mode. Others not supported currently.
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Retrieval replica validity period of the video recording. Minimum: 1 day. Maximum: 365 days.
                     * @return Expiration Retrieval replica validity period of the video recording. Minimum: 1 day. Maximum: 365 days.
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置Retrieval replica validity period of the video recording. Minimum: 1 day. Maximum: 365 days.
                     * @param _expiration Retrieval replica validity period of the video recording. Minimum: 1 day. Maximum: 365 days.
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取Device channel. A task can contain up to 32 device channels.
                     * @return Channels Device channel. A task can contain up to 32 device channels.
                     * 
                     */
                    std::vector<ChannelInfo> GetChannels() const;

                    /**
                     * 设置Device channel. A task can contain up to 32 device channels.
                     * @param _channels Device channel. A task can contain up to 32 device channels.
                     * 
                     */
                    void SetChannels(const std::vector<ChannelInfo>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取Retrieve the task description
                     * @return Describe Retrieve the task description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Retrieve the task description
                     * @param _describe Retrieve the task description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                private:

                    /**
                     * Task name. It supports Chinese, English, digits, _, and -, with a length not exceeding 32 characters. The name must be globally unique and cannot be empty or repeated.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Start time for retrieving the video recording in UTC seconds, for example: 1662114146. The longest period between the start and end times is one day and cannot span multiple days.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for retrieving the video recording, in UTC seconds, for example: 1662114146. The period between the start and end times can be up to one day and cannot span multiple days.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Retrieval mode. 1: ultrafast mode. Others not supported currently.
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Retrieval replica validity period of the video recording. Minimum: 1 day. Maximum: 365 days.
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * Device channel. A task can contain up to 32 device channels.
                     */
                    std::vector<ChannelInfo> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * Retrieve the task description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDRECORDRETRIEVETASKREQUEST_H_
