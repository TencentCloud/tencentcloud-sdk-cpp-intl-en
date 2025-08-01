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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKPROCESSEVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKPROCESSEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportRiskProcessEvents request structure.
                */
                class ExportRiskProcessEventsRequest : public AbstractModel
                {
                public:
                    ExportRiskProcessEventsRequest();
                    ~ExportRiskProcessEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>HostId - String - Required: No - Host ID</li>
<li>IpOrName - String - whether required: no - host IP or host name</li>
<li>VirusName - String - whether required: no - virus name</li>
<li>ProcessId - String - whether required: no - process ID</li>
<li>ProcessPath - String - whether required: no - process path</li>
<li>BeginTime - String - whether required: no - process startup time - begin</li>
<li>BeginTime - String - whether required: no - process startup time - end</li>
<li>Status - String - whether required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * @return Filters Filter criteria
<li>HostId - String - Required: No - Host ID</li>
<li>IpOrName - String - whether required: no - host IP or host name</li>
<li>VirusName - String - whether required: no - virus name</li>
<li>ProcessId - String - whether required: no - process ID</li>
<li>ProcessPath - String - whether required: no - process path</li>
<li>BeginTime - String - whether required: no - process startup time - begin</li>
<li>BeginTime - String - whether required: no - process startup time - end</li>
<li>Status - String - whether required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>HostId - String - Required: No - Host ID</li>
<li>IpOrName - String - whether required: no - host IP or host name</li>
<li>VirusName - String - whether required: no - virus name</li>
<li>ProcessId - String - whether required: no - process ID</li>
<li>ProcessPath - String - whether required: no - process path</li>
<li>BeginTime - String - whether required: no - process startup time - begin</li>
<li>BeginTime - String - whether required: no - process startup time - end</li>
<li>Status - String - whether required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * @param _filters Filter criteria
<li>HostId - String - Required: No - Host ID</li>
<li>IpOrName - String - whether required: no - host IP or host name</li>
<li>VirusName - String - whether required: no - virus name</li>
<li>ProcessId - String - whether required: no - process ID</li>
<li>ProcessPath - String - whether required: no - process path</li>
<li>BeginTime - String - whether required: no - process startup time - begin</li>
<li>BeginTime - String - whether required: no - process startup time - end</li>
<li>Status - String - whether required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting method: [ASC: ascending order|DESC: descending order]
                     * @return Order Sorting method: [ASC: ascending order|DESC: descending order]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: [ASC: ascending order|DESC: descending order]
                     * @param _order Sorting method: [ASC: ascending order|DESC: descending order]
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取[StartTime: Process start time | DetectTime: Last detection time]
                     * @return By [StartTime: Process start time | DetectTime: Last detection time]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置[StartTime: Process start time | DetectTime: Last detection time]
                     * @param _by [StartTime: Process start time | DetectTime: Last detection time]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filter criteria
<li>HostId - String - Required: No - Host ID</li>
<li>IpOrName - String - whether required: no - host IP or host name</li>
<li>VirusName - String - whether required: no - virus name</li>
<li>ProcessId - String - whether required: no - process ID</li>
<li>ProcessPath - String - whether required: no - process path</li>
<li>BeginTime - String - whether required: no - process startup time - begin</li>
<li>BeginTime - String - whether required: no - process startup time - end</li>
<li>Status - String - whether required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: [ASC: ascending order|DESC: descending order]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * [StartTime: Process start time | DetectTime: Last detection time]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKPROCESSEVENTSREQUEST_H_
