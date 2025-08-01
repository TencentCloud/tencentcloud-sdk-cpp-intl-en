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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETPROCESSINFOLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETPROCESSINFOLISTREQUEST_H_

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
                * ExportAssetProcessInfoList request structure.
                */
                class ExportAssetProcessInfoListRequest : public AbstractModel
                {
                public:
                    ExportAssetProcessInfoListRequest();
                    ~ExportAssetProcessInfoListRequest() = default;
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
<li>Name - String - whether required: no - process name</li>
<li>User - String - whether required: no - Process user</li>
<li>Group - String - whether required: no - Process user group</li>
<li>Pid - uint64 - whether required: no - process ID</li>
<li>Ppid - uint64 - whether required: no - parent process ID</li>
<li>OsType - uint64 - whether required: no - windows/Linux</li>
<li>Status - string - whether required: no - process status:
0: all
1: R executable
2: S interruptible
3: Uninterruptible</li>
<li>RunTimeStart - String - whether required: no - start time of running</li>
<li>RunTimeEnd - String - whether required: no - end time of running</li>
<li>InstallByPackage - uint64 - whether required: no - whether to install via a package: 0 - no; 1 - yes</li>
                     * @return Filters Filter criteria
<li>Name - String - whether required: no - process name</li>
<li>User - String - whether required: no - Process user</li>
<li>Group - String - whether required: no - Process user group</li>
<li>Pid - uint64 - whether required: no - process ID</li>
<li>Ppid - uint64 - whether required: no - parent process ID</li>
<li>OsType - uint64 - whether required: no - windows/Linux</li>
<li>Status - string - whether required: no - process status:
0: all
1: R executable
2: S interruptible
3: Uninterruptible</li>
<li>RunTimeStart - String - whether required: no - start time of running</li>
<li>RunTimeEnd - String - whether required: no - end time of running</li>
<li>InstallByPackage - uint64 - whether required: no - whether to install via a package: 0 - no; 1 - yes</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Name - String - whether required: no - process name</li>
<li>User - String - whether required: no - Process user</li>
<li>Group - String - whether required: no - Process user group</li>
<li>Pid - uint64 - whether required: no - process ID</li>
<li>Ppid - uint64 - whether required: no - parent process ID</li>
<li>OsType - uint64 - whether required: no - windows/Linux</li>
<li>Status - string - whether required: no - process status:
0: all
1: R executable
2: S interruptible
3: Uninterruptible</li>
<li>RunTimeStart - String - whether required: no - start time of running</li>
<li>RunTimeEnd - String - whether required: no - end time of running</li>
<li>InstallByPackage - uint64 - whether required: no - whether to install via a package: 0 - no; 1 - yes</li>
                     * @param _filters Filter criteria
<li>Name - String - whether required: no - process name</li>
<li>User - String - whether required: no - Process user</li>
<li>Group - String - whether required: no - Process user group</li>
<li>Pid - uint64 - whether required: no - process ID</li>
<li>Ppid - uint64 - whether required: no - parent process ID</li>
<li>OsType - uint64 - whether required: no - windows/Linux</li>
<li>Status - string - whether required: no - process status:
0: all
1: R executable
2: S interruptible
3: Uninterruptible</li>
<li>RunTimeStart - String - whether required: no - start time of running</li>
<li>RunTimeEnd - String - whether required: no - end time of running</li>
<li>InstallByPackage - uint64 - whether required: no - whether to install via a package: 0 - no; 1 - yes</li>
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
<li>Name - String - whether required: no - process name</li>
<li>User - String - whether required: no - Process user</li>
<li>Group - String - whether required: no - Process user group</li>
<li>Pid - uint64 - whether required: no - process ID</li>
<li>Ppid - uint64 - whether required: no - parent process ID</li>
<li>OsType - uint64 - whether required: no - windows/Linux</li>
<li>Status - string - whether required: no - process status:
0: all
1: R executable
2: S interruptible
3: Uninterruptible</li>
<li>RunTimeStart - String - whether required: no - start time of running</li>
<li>RunTimeEnd - String - whether required: no - end time of running</li>
<li>InstallByPackage - uint64 - whether required: no - whether to install via a package: 0 - no; 1 - yes</li>
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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETPROCESSINFOLISTREQUEST_H_
