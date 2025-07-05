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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTREQUEST_H_

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
                * DescribeRecentSessionList request structure.
                */
                class DescribeRecentSessionListRequest : public AbstractModel
                {
                public:
                    DescribeRecentSessionListRequest();
                    ~DescribeRecentSessionListRequest() = default;
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
                     * 获取Page number, beginning from 1.
                     * @return PageNumber Page number, beginning from 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, beginning from 1.
                     * @param _pageNumber Page number, beginning from 1.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
                     * @return PageSize Number of entries per page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _pageSize Number of entries per page.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Device id, supports filtering by remote device or on-site device.
                     * @return DeviceId Device id, supports filtering by remote device or on-site device.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device id, supports filtering by remote device or on-site device.
                     * @param _deviceId Device id, supports filtering by remote device or on-site device.
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
                     * 获取Start time of the time range. the maximum time range is the last two hours. if not specified or out of range, the start time is calculated as two hours ago.
                     * @return StartTime Start time of the time range. the maximum time range is the last two hours. if not specified or out of range, the start time is calculated as two hours ago.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time of the time range. the maximum time range is the last two hours. if not specified or out of range, the start time is calculated as two hours ago.
                     * @param _startTime Start time of the time range. the maximum time range is the last two hours. if not specified or out of range, the start time is calculated as two hours ago.
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
                     * 获取End time of the time range. the maximum time range is the last two hours. if not specified or out of range, the end time is calculated as the current time.
                     * @return EndTime End time of the time range. the maximum time range is the last two hours. if not specified or out of range, the end time is calculated as the current time.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time of the time range. the maximum time range is the last two hours. if not specified or out of range, the end time is calculated as the current time.
                     * @param _endTime End time of the time range. the maximum time range is the last two hours. if not specified or out of range, the end time is calculated as the current time.
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
                     * Page number, beginning from 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Device id, supports filtering by remote device or on-site device.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Start time of the time range. the maximum time range is the last two hours. if not specified or out of range, the start time is calculated as two hours ago.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the time range. the maximum time range is the last two hours. if not specified or out of range, the end time is calculated as the current time.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTREQUEST_H_
