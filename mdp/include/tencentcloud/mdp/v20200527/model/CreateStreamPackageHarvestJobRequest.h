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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGEHARVESTJOBREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGEHARVESTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateStreamPackageHarvestJob request structure.
                */
                class CreateStreamPackageHarvestJobRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageHarvestJobRequest();
                    ~CreateStreamPackageHarvestJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Task start time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     * @return StartTime Task start time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     * @param _startTime Task start time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
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
                     * 获取Task end time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     * @return EndTime Task end time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     * @param _endTime Task end time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
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
                     * 获取The path where the recording file is stored in Cos.
                     * @return Destination The path where the recording file is stored in Cos.
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置The path where the recording file is stored in Cos.
                     * @param _destination The path where the recording file is stored in Cos.
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
                     * 获取The file name of the recording file stored in Cos.
                     * @return Manifest The file name of the recording file stored in Cos.
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置The file name of the recording file stored in Cos.
                     * @param _manifest The file name of the recording file stored in Cos.
                     * 
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

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
                     * Task start time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time supports two formats for TimeFormat input: 1. Epoch seconds: The input box is a numeric input box, and only positive integers can be entered. 2. ISO-8601: The supported format is ISO time, for example: 2023-08-01T10:00:00+08:00.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The path where the recording file is stored in Cos.
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * The file name of the recording file stored in Cos.
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGEHARVESTJOBREQUEST_H_
