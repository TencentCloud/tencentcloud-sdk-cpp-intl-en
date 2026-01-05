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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_HARVESTJOBRESP_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_HARVESTJOBRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * HarvestJob response info.
                */
                class HarvestJobResp : public AbstractModel
                {
                public:
                    HarvestJobResp();
                    ~HarvestJobResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HarvestJob ID, a globally unique identifier.
                     * @return ID HarvestJob ID, a globally unique identifier.
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置HarvestJob ID, a globally unique identifier.
                     * @param _iD HarvestJob ID, a globally unique identifier.
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取The associated channel name.
                     * @return ChannelName The associated channel name.
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置The associated channel name.
                     * @param _channelName The associated channel name.
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取The associated endpoint name.
                     * @return EndpointName The associated endpoint name.
                     * 
                     */
                    std::string GetEndpointName() const;

                    /**
                     * 设置The associated endpoint name.
                     * @param _endpointName The associated endpoint name.
                     * 
                     */
                    void SetEndpointName(const std::string& _endpointName);

                    /**
                     * 判断参数 EndpointName 是否已赋值
                     * @return EndpointName 是否已赋值
                     * 
                     */
                    bool EndpointNameHasBeenSet() const;

                    /**
                     * 获取Time format, supports the following types: 1. Epoch seconds 2. ISO-8601
                     * @return TimeFormat Time format, supports the following types: 1. Epoch seconds 2. ISO-8601
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time format, supports the following types: 1. Epoch seconds 2. ISO-8601
                     * @param _timeFormat Time format, supports the following types: 1. Epoch seconds 2. ISO-8601
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取HarvestJob start time.
                     * @return StartTime HarvestJob start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置HarvestJob start time.
                     * @param _startTime HarvestJob start time.
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
                     * 获取HarvestJob end time.
                     * @return EndTime HarvestJob end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置HarvestJob end time.
                     * @param _endTime HarvestJob end time.
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
                     * 获取The path where the recording file is stored in COS.
                     * @return Destination The path where the recording file is stored in COS.
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置The path where the recording file is stored in COS.
                     * @param _destination The path where the recording file is stored in COS.
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取The file name of the recording file stored in COS.
                     * @return Manifest The file name of the recording file stored in COS.
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置The file name of the recording file stored in COS.
                     * @param _manifest The file name of the recording file stored in COS.
                     * 
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取The task status is divided into running: Running, execution completed: Completed, and execution failure: Failed.
                     * @return Status The task status is divided into running: Running, execution completed: Completed, and execution failure: Failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status is divided into running: Running, execution completed: Completed, and execution failure: Failed.
                     * @param _status The task status is divided into running: Running, execution completed: Completed, and execution failure: Failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取HarvestJob error message.
                     * @return ErrMessage HarvestJob error message.
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置HarvestJob error message.
                     * @param _errMessage HarvestJob error message.
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取HarvestJob creation time, timestamp in seconds.
                     * @return CreateTime HarvestJob creation time, timestamp in seconds.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置HarvestJob creation time, timestamp in seconds.
                     * @param _createTime HarvestJob creation time, timestamp in seconds.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The associated ChannelID.
                     * @return ChannelId The associated ChannelID.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置The associated ChannelID.
                     * @param _channelId The associated ChannelID.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取The region corresponding to the harvest job.
                     * @return Region The region corresponding to the harvest job.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region corresponding to the harvest job.
                     * @param _region The region corresponding to the harvest job.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Callback URL after recording is completed
                     * @return CallbackURL Callback URL after recording is completed
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置Callback URL after recording is completed
                     * @param _callbackURL Callback URL after recording is completed
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                private:

                    /**
                     * HarvestJob ID, a globally unique identifier.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * The associated channel name.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * The associated endpoint name.
                     */
                    std::string m_endpointName;
                    bool m_endpointNameHasBeenSet;

                    /**
                     * Time format, supports the following types: 1. Epoch seconds 2. ISO-8601
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * HarvestJob start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * HarvestJob end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The path where the recording file is stored in COS.
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * The file name of the recording file stored in COS.
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * The task status is divided into running: Running, execution completed: Completed, and execution failure: Failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * HarvestJob error message.
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * HarvestJob creation time, timestamp in seconds.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The associated ChannelID.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * The region corresponding to the harvest job.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Callback URL after recording is completed
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_HARVESTJOBRESP_H_
