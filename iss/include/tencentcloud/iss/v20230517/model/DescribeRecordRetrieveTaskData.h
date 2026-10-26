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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDRETRIEVETASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDRETRIEVETASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/RecordRetrieveTaskChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * data for querying the details of a cloud recording retrieval task
                */
                class DescribeRecordRetrieveTaskData : public AbstractModel
                {
                public:
                    DescribeRecordRetrieveTaskData();
                    ~DescribeRecordRetrieveTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retrieval task ID
                     * @return TaskId Retrieval task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Retrieval task ID
                     * @param _taskId Retrieval task ID
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
                     * 获取Task name for retrieval
                     * @return TaskName Task name for retrieval
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name for retrieval
                     * @param _taskName Task name for retrieval
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
                     * 获取Start time of video recording retrieval
                     * @return StartTime Start time of video recording retrieval
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time of video recording retrieval
                     * @param _startTime Start time of video recording retrieval
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
                     * 获取Retrieval end time of the video recording
                     * @return EndTime Retrieval end time of the video recording
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Retrieval end time of the video recording
                     * @param _endTime Retrieval end time of the video recording
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
                     * 获取Retrieval mode. 1: speed mode. Others not supported currently.
                     * @return Mode Retrieval mode. 1: speed mode. Others not supported currently.
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Retrieval mode. 1: speed mode. Others not supported currently.
                     * @param _mode Retrieval mode. 1: speed mode. Others not supported currently.
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
                     * 获取Replica validity period
                     * @return Expiration Replica validity period
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置Replica validity period
                     * @param _expiration Replica validity period
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
                     * 获取Task status. 0: Retrieved, 1: Retrieving, 2: To be retrieved
                     * @return Status Task status. 0: Retrieved, 1: Retrieving, 2: To be retrieved
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 0: Retrieved, 1: Retrieving, 2: To be retrieved
                     * @param _status Task status. 0: Retrieved, 1: Retrieving, 2: To be retrieved
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
                     * 获取Retrieval capacity, in MB.
                     * @return Capacity Retrieval capacity, in MB.
                     * 
                     */
                    double GetCapacity() const;

                    /**
                     * 设置Retrieval capacity, in MB.
                     * @param _capacity Retrieval capacity, in MB.
                     * 
                     */
                    void SetCapacity(const double& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取Task device channel id
                     * @return Channels Task device channel id
                     * 
                     */
                    std::vector<RecordRetrieveTaskChannelInfo> GetChannels() const;

                    /**
                     * 设置Task device channel id
                     * @param _channels Task device channel id
                     * 
                     */
                    void SetChannels(const std::vector<RecordRetrieveTaskChannelInfo>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取Task description
                     * @return Describe Task description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Task description
                     * @param _describe Task description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Number of task channels
                     * @return ChannelCount Number of task channels
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置Number of task channels
                     * @param _channelCount Number of task channels
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                private:

                    /**
                     * Retrieval task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name for retrieval
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Start time of video recording retrieval
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Retrieval end time of the video recording
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Retrieval mode. 1: speed mode. Others not supported currently.
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Replica validity period
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * Task status. 0: Retrieved, 1: Retrieving, 2: To be retrieved
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Retrieval capacity, in MB.
                     */
                    double m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * Task device channel id
                     */
                    std::vector<RecordRetrieveTaskChannelInfo> m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * Task description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Number of task channels
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDRETRIEVETASKDATA_H_
