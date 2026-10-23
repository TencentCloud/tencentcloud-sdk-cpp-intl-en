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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisDownloadTasks request structure.
                */
                class DescribeLogAnalysisDownloadTasksRequest : public AbstractModel
                {
                public:
                    DescribeLogAnalysisDownloadTasksRequest();
                    ~DescribeLogAnalysisDownloadTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul> Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * @return Area <p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul> Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul> Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * @param _area <p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul> Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * @return LogType <p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * @param _logType <p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Filtering Conditions. The maximum number of Filters.Values is 20. Detailed filter criteria are as follows:<ul><li>task-id: Filter by log download task id. For optional Values, refer to the TaskId returned by the CreateLogAnalysisDownloadTask api.</li></ul></p><p>For reference: CreateLogAnalysisDownloadTask</p>
                     * @return Filters <p>Filtering Conditions. The maximum number of Filters.Values is 20. Detailed filter criteria are as follows:<ul><li>task-id: Filter by log download task id. For optional Values, refer to the TaskId returned by the CreateLogAnalysisDownloadTask api.</li></ul></p><p>For reference: CreateLogAnalysisDownloadTask</p>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>Filtering Conditions. The maximum number of Filters.Values is 20. Detailed filter criteria are as follows:<ul><li>task-id: Filter by log download task id. For optional Values, refer to the TaskId returned by the CreateLogAnalysisDownloadTask api.</li></ul></p><p>For reference: CreateLogAnalysisDownloadTask</p>
                     * @param _filters <p>Filtering Conditions. The maximum number of Filters.Values is 20. Detailed filter criteria are as follows:<ul><li>task-id: Filter by log download task id. For optional Values, refer to the TaskId returned by the CreateLogAnalysisDownloadTask api.</li></ul></p><p>For reference: CreateLogAnalysisDownloadTask</p>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * @return Limit <p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * @param _limit <p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query offset, defaults to 0.</p>
                     * @return Offset <p>Paginated query offset, defaults to 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset, defaults to 0.</p>
                     * @param _offset <p>Paginated query offset, defaults to 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul> Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Filtering Conditions. The maximum number of Filters.Values is 20. Detailed filter criteria are as follows:<ul><li>task-id: Filter by log download task id. For optional Values, refer to the TaskId returned by the CreateLogAnalysisDownloadTask api.</li></ul></p><p>For reference: CreateLogAnalysisDownloadTask</p>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paginated query offset, defaults to 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSREQUEST_H_
