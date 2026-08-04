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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTLOGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServiceDeploymentLogs request structure.
                */
                class DescribeInferenceServiceDeploymentLogsRequest : public AbstractModel
                {
                public:
                    DescribeInferenceServiceDeploymentLogsRequest();
                    ~DescribeInferenceServiceDeploymentLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取ID of the inference service.
                     * @return ServiceId ID of the inference service.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置ID of the inference service.
                     * @param _serviceId ID of the inference service.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Deployment record ID.
                     * @return RecordId Deployment record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Deployment record ID.
                     * @param _recordId Deployment record ID.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Start time for retrieving logs.
                     * @return StartTime Start time for retrieving logs.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for retrieving logs.
                     * @param _startTime Start time for retrieving logs.
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
                     * 获取End time for retrieving logs. Default query time range (EndTime - StartTime) is the most recent 7 days.
                     * @return EndTime End time for retrieving logs. Default query time range (EndTime - StartTime) is the most recent 7 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for retrieving logs. Default query time range (EndTime - StartTime) is the most recent 7 days.
                     * @param _endTime End time for retrieving logs. Default query time range (EndTime - StartTime) is the most recent 7 days.
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
                     * 获取Sorting field. Valid values: <li>timestamp: Log generation time.</li>Default value: timestamp.
                     * @return SortBy Sorting field. Valid values: <li>timestamp: Log generation time.</li>Default value: timestamp.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting field. Valid values: <li>timestamp: Log generation time.</li>Default value: timestamp.
                     * @param _sortBy Sorting field. Valid values: <li>timestamp: Log generation time.</li>Default value: timestamp.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method. Valid values: <li>asc: ascending order;</li><li>desc: descending order.</li>Default value: desc.</p>
                     * @return SortOrder <p>Sorting method. Valid values: <li>asc: ascending order;</li><li>desc: descending order.</li>Default value: desc.</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>Sorting method. Valid values: <li>asc: ascending order;</li><li>desc: descending order.</li>Default value: desc.</p>
                     * @param _sortOrder <p>Sorting method. Valid values: <li>asc: ascending order;</li><li>desc: descending order.</li>Default value: desc.</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 20. Maximum value: 1000.
                     * @return Limit Number of returned entries. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 20. Maximum value: 1000.
                     * @param _limit Number of returned entries. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * ID of the inference service.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Deployment record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Start time for retrieving logs.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for retrieving logs. Default query time range (EndTime - StartTime) is the most recent 7 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Sorting field. Valid values: <li>timestamp: Log generation time.</li>Default value: timestamp.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>Sorting method. Valid values: <li>asc: ascending order;</li><li>desc: descending order.</li>Default value: desc.</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTLOGSREQUEST_H_
