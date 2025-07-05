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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETPORTINFOLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETPORTINFOLISTREQUEST_H_

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
                * ExportAssetPortInfoList request structure.
                */
                class ExportAssetPortInfoListRequest : public AbstractModel
                {
                public:
                    ExportAssetPortInfoListRequest();
                    ~ExportAssetPortInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query information of a specified QUUID host
                     * @return Quuid Query information of a specified QUUID host
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Query information of a specified QUUID host
                     * @param _quuid Query information of a specified QUUID host
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Filter criteria
<li>Port - uint64 - required: no - port</li>
<li>Ip - String - required: no - bound IP address</li>
<li>ProcessName - String - required: no - process name</li>
<li>Pid - uint64 - required: no - PID</li>
<li>User - String - required: no - running user</li>
<li>Group - String - required: no - user group</li>
<li>Ppid - uint64 - required: no - PPID</li>
<li>Proto - string - required: no - tcp/udp or "" (empty string to filter unknown status)</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
                     * @return Filters Filter criteria
<li>Port - uint64 - required: no - port</li>
<li>Ip - String - required: no - bound IP address</li>
<li>ProcessName - String - required: no - process name</li>
<li>Pid - uint64 - required: no - PID</li>
<li>User - String - required: no - running user</li>
<li>Group - String - required: no - user group</li>
<li>Ppid - uint64 - required: no - PPID</li>
<li>Proto - string - required: no - tcp/udp or "" (empty string to filter unknown status)</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Port - uint64 - required: no - port</li>
<li>Ip - String - required: no - bound IP address</li>
<li>ProcessName - String - required: no - process name</li>
<li>Pid - uint64 - required: no - PID</li>
<li>User - String - required: no - running user</li>
<li>Group - String - required: no - user group</li>
<li>Ppid - uint64 - required: no - PPID</li>
<li>Proto - string - required: no - tcp/udp or "" (empty string to filter unknown status)</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
                     * @param _filters Filter criteria
<li>Port - uint64 - required: no - port</li>
<li>Ip - String - required: no - bound IP address</li>
<li>ProcessName - String - required: no - process name</li>
<li>Pid - uint64 - required: no - PID</li>
<li>User - String - required: no - running user</li>
<li>Group - String - required: no - user group</li>
<li>Ppid - uint64 - required: no - PPID</li>
<li>Proto - string - required: no - tcp/udp or "" (empty string to filter unknown status)</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
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
                     * 获取Sorting method: asc for ascending order or desc for descending order
                     * @return Order Sorting method: asc for ascending order or desc for descending order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: asc for ascending order or desc for descending order
                     * @param _order Sorting method: asc for ascending order or desc for descending order
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
                     * 获取Sorting method: [FirstTime|StartTime]
                     * @return By Sorting method: [FirstTime|StartTime]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting method: [FirstTime|StartTime]
                     * @param _by Sorting method: [FirstTime|StartTime]
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
                     * Query information of a specified QUUID host
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filter criteria
<li>Port - uint64 - required: no - port</li>
<li>Ip - String - required: no - bound IP address</li>
<li>ProcessName - String - required: no - process name</li>
<li>Pid - uint64 - required: no - PID</li>
<li>User - String - required: no - running user</li>
<li>Group - String - required: no - user group</li>
<li>Ppid - uint64 - required: no - PPID</li>
<li>Proto - string - required: no - tcp/udp or "" (empty string to filter unknown status)</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: asc for ascending order or desc for descending order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting method: [FirstTime|StartTime]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETPORTINFOLISTREQUEST_H_
