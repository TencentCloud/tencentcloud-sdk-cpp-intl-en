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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETMACHINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETMACHINELISTREQUEST_H_

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
                * DescribeAssetMachineList request structure.
                */
                class DescribeAssetMachineListRequest : public AbstractModel
                {
                public:
                    DescribeAssetMachineListRequest();
                    ~DescribeAssetMachineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>MachineName  Host name</li>
<li>InstanceID  Instance ID  </li>
<li>IP   Private or public IP address</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
	0: unknown; 1: low load;
	2: medium load; 3: high load</li>
<li>DiskLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>Quuid: Host QUUID</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * @return Filters Filter criteria
<li>MachineName  Host name</li>
<li>InstanceID  Instance ID  </li>
<li>IP   Private or public IP address</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
	0: unknown; 1: low load;
	2: medium load; 3: high load</li>
<li>DiskLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>Quuid: Host QUUID</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>MachineName  Host name</li>
<li>InstanceID  Instance ID  </li>
<li>IP   Private or public IP address</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
	0: unknown; 1: low load;
	2: medium load; 3: high load</li>
<li>DiskLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>Quuid: Host QUUID</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     * @param _filters Filter criteria
<li>MachineName  Host name</li>
<li>InstanceID  Instance ID  </li>
<li>IP   Private or public IP address</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
	0: unknown; 1: low load;
	2: medium load; 3: high load</li>
<li>DiskLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>Quuid: Host QUUID</li>
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
                     * 获取Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 10. Maximum value: 100.
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
                     * 获取Optional sorting method [FirstTime|PartitionCount]
                     * @return By Optional sorting method [FirstTime|PartitionCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Optional sorting method [FirstTime|PartitionCount]
                     * @param _by Optional sorting method [FirstTime|PartitionCount]
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
<li>MachineName  Host name</li>
<li>InstanceID  Instance ID  </li>
<li>IP   Private or public IP address</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
	0: unknown; 1: low load;
	2: medium load; 3: high load</li>
<li>DiskLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
	0: 0% or unknown; 1: 0%-20%;
	2: 20%～50%  3: 50%～80%
	4: 80%～100%</li>
<li>Quuid: Host QUUID</li>
<li>Os - String required: no - operating system (value of DescribeMachineOsList)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 10. Maximum value: 100.
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
                     * Optional sorting method [FirstTime|PartitionCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETMACHINELISTREQUEST_H_
