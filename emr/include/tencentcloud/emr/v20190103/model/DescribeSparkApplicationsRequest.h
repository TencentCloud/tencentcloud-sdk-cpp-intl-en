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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKAPPLICATIONSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKAPPLICATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeSparkApplications request structure.
                */
                class DescribeSparkApplicationsRequest : public AbstractModel
                {
                public:
                    DescribeSparkApplicationsRequest();
                    ~DescribeSparkApplicationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Querying start time.
                     * @return StartTime Querying start time.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Querying start time.
                     * @param _startTime Querying start time.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Querying end time.
                     * @return EndTime Querying end time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Querying end time.
                     * @param _endTime Querying end time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
                     * @return PageSize Number of entries per page.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _pageSize Number of entries per page.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Which page.
                     * @return Page Which page.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Which page.
                     * @param _page Which page.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Querying start time.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Querying end time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Which page.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESPARKAPPLICATIONSREQUEST_H_
