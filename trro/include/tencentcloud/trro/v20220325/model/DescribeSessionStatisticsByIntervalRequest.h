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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSBYINTERVALREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSBYINTERVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeSessionStatisticsByInterval request structure.
                */
                class DescribeSessionStatisticsByIntervalRequest : public AbstractModel
                {
                public:
                    DescribeSessionStatisticsByIntervalRequest();
                    ~DescribeSessionStatisticsByIntervalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id.
                     * @return ProjectId Project id.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id.
                     * @param _projectId Project id.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Statistical time interval: hour|day|month.
                     * @return StatisticInterval Statistical time interval: hour|day|month.
                     * 
                     */
                    std::string GetStatisticInterval() const;

                    /**
                     * 设置Statistical time interval: hour|day|month.
                     * @param _statisticInterval Statistical time interval: hour|day|month.
                     * 
                     */
                    void SetStatisticInterval(const std::string& _statisticInterval);

                    /**
                     * 判断参数 StatisticInterval 是否已赋值
                     * @return StatisticInterval 是否已赋值
                     * 
                     */
                    bool StatisticIntervalHasBeenSet() const;

                    /**
                     * 获取Device id.
                     * @return DeviceId Device id.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device id.
                     * @param _deviceId Device id.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Start time in seconds.
                     * @return StartTime Start time in seconds.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time in seconds.
                     * @param _startTime Start time in seconds.
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
                     * 获取End time in seconds.
                     * @return EndTime End time in seconds.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time in seconds.
                     * @param _endTime End time in seconds.
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
                     * Project id.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Statistical time interval: hour|day|month.
                     */
                    std::string m_statisticInterval;
                    bool m_statisticIntervalHasBeenSet;

                    /**
                     * Device id.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Start time in seconds.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in seconds.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSBYINTERVALREQUEST_H_
