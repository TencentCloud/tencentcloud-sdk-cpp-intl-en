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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETPROCESSINFOLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETPROCESSINFOLISTREQUEST_H_

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
                * DescribeAssetProcessInfoList request structure.
                */
                class DescribeAssetProcessInfoListRequest : public AbstractModel
                {
                public:
                    DescribeAssetProcessInfoListRequest();
                    ~DescribeAssetProcessInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query the information on the host with the specified QUUID
                     * @return Quuid Query the information on the host with the specified QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Query the information on the host with the specified QUUID
                     * @param _quuid Query the information on the host with the specified QUUID
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
                     * 获取Filtering criteria
<li>IP - String - required: no - host IP address</li>
<li>MachineName - String - required: no - host name</li>
<li>InstanceID - string - required: no - instance ID</li>
<li>Name - String - required: no - process name</li>
<li>User - String - required: no - process user</li>
<li>Group - String - required: no - process user group</li>
<li>Pid - uint64 - required: no - process ID</li>
<li>Ppid - uint64 - required: no - parent process ID</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>Status - string - required: no - process status:
1: R, runnable
2: S, interruptible
3: D, uninterruptible
4: T, stopped or traced
5: Z, zombie
6: X, to be terminated</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
<li>InstallByPackage - uint64 - required: no - whether to install by package: 0: no; 1: yes</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * @return Filters Filtering criteria
<li>IP - String - required: no - host IP address</li>
<li>MachineName - String - required: no - host name</li>
<li>InstanceID - string - required: no - instance ID</li>
<li>Name - String - required: no - process name</li>
<li>User - String - required: no - process user</li>
<li>Group - String - required: no - process user group</li>
<li>Pid - uint64 - required: no - process ID</li>
<li>Ppid - uint64 - required: no - parent process ID</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>Status - string - required: no - process status:
1: R, runnable
2: S, interruptible
3: D, uninterruptible
4: T, stopped or traced
5: Z, zombie
6: X, to be terminated</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
<li>InstallByPackage - uint64 - required: no - whether to install by package: 0: no; 1: yes</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filtering criteria
<li>IP - String - required: no - host IP address</li>
<li>MachineName - String - required: no - host name</li>
<li>InstanceID - string - required: no - instance ID</li>
<li>Name - String - required: no - process name</li>
<li>User - String - required: no - process user</li>
<li>Group - String - required: no - process user group</li>
<li>Pid - uint64 - required: no - process ID</li>
<li>Ppid - uint64 - required: no - parent process ID</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>Status - string - required: no - process status:
1: R, runnable
2: S, interruptible
3: D, uninterruptible
4: T, stopped or traced
5: Z, zombie
6: X, to be terminated</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
<li>InstallByPackage - uint64 - required: no - whether to install by package: 0: no; 1: yes</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * @param _filters Filtering criteria
<li>IP - String - required: no - host IP address</li>
<li>MachineName - String - required: no - host name</li>
<li>InstanceID - string - required: no - instance ID</li>
<li>Name - String - required: no - process name</li>
<li>User - String - required: no - process user</li>
<li>Group - String - required: no - process user group</li>
<li>Pid - uint64 - required: no - process ID</li>
<li>Ppid - uint64 - required: no - parent process ID</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>Status - string - required: no - process status:
1: R, runnable
2: S, interruptible
3: D, uninterruptible
4: T, stopped or traced
5: Z, zombie
6: X, to be terminated</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
<li>InstallByPackage - uint64 - required: no - whether to install by package: 0: no; 1: yes</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
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
                     * 获取Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @return Limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * @param _limit Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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
                     * Query the information on the host with the specified QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Filtering criteria
<li>IP - String - required: no - host IP address</li>
<li>MachineName - String - required: no - host name</li>
<li>InstanceID - string - required: no - instance ID</li>
<li>Name - String - required: no - process name</li>
<li>User - String - required: no - process user</li>
<li>Group - String - required: no - process user group</li>
<li>Pid - uint64 - required: no - process ID</li>
<li>Ppid - uint64 - required: no - parent process ID</li>
<li>OsType - uint64 - required: no - Windows/Linux</li>
<li>Status - string - required: no - process status:
1: R, runnable
2: S, interruptible
3: D, uninterruptible
4: T, stopped or traced
5: Z, zombie
6: X, to be terminated</li>
<li>RunTimeStart - String - required: no - running start time</li>
<li>RunTimeEnd - String - required: no - running end time</li>
<li>InstallByPackage - uint64 - required: no - whether to install by package: 0: no; 1: yes</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of items to be returned. It is 10 by default, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETPROCESSINFOLISTREQUEST_H_
