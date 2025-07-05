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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_

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
                * DescribeMachines request structure.
                */
                class DescribeMachinesRequest : public AbstractModel
                {
                public:
                    DescribeMachinesRequest();
                    ~DescribeMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type of the machine's zone
CVM: Cloud Virtual Machine
BM: BMECM: Edge Computing Machine
LH: Lighthouse
Other: Hybrid Cloud Zone
                     * @return MachineType Type of the machine's zone
CVM: Cloud Virtual Machine
BM: BMECM: Edge Computing Machine
LH: Lighthouse
Other: Hybrid Cloud Zone
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Type of the machine's zone
CVM: Cloud Virtual Machine
BM: BMECM: Edge Computing Machine
LH: Lighthouse
Other: Hybrid Cloud Zone
                     * @param _machineType Type of the machine's zone
CVM: Cloud Virtual Machine
BM: BMECM: Edge Computing Machine
LH: Lighthouse
Other: Hybrid Cloud Zone
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取Machine region. For example, ap-guangzhou and ap-shanghai.
                     * @return MachineRegion Machine region. For example, ap-guangzhou and ap-shanghai.
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置Machine region. For example, ap-guangzhou and ap-shanghai.
                     * @param _machineRegion Machine region. For example, ap-guangzhou and ap-shanghai.
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取Number of returns. It is 10 by default, and the maximum value is 100.
                     * @return Limit Number of returns. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns. It is 10 by default, and the maximum value is 100.
                     * @param _limit Number of returns. It is 10 by default, and the maximum value is 100.
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
                     * 获取Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>Names - String - required: no - query by instance name</li>
<li>InstanceIds - String - required: no - instance ID for query </li>
<li>Status - String - required: no - client online status (OFFLINE: offline/shut down | ONLINE: online | UNINSTALLED: not installed | AGENT_OFFLINE: agent offline | AGENT_SHUTDOWN: agent shut down)</li>
<li>Version - String required: no - current edition ( PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Edition | Flagship: Ultimate Edition | ProtectedMachines: Pro + Ultimate Editions)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (value of DescribeMachineOsList)</li>
Each filter criterion supports only one value.
<li>Quuid - String - required: no - CVM instance UUID. Maximum value: 100.</li>
<li>AddedOnTheFifteen - String required: no - whether to query only hosts added within the last 15 days (1: yes) </li>
<li> TagId - String required: no - query the list of hosts associated with the specified tag </li>
                     * @return Filters Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>Names - String - required: no - query by instance name</li>
<li>InstanceIds - String - required: no - instance ID for query </li>
<li>Status - String - required: no - client online status (OFFLINE: offline/shut down | ONLINE: online | UNINSTALLED: not installed | AGENT_OFFLINE: agent offline | AGENT_SHUTDOWN: agent shut down)</li>
<li>Version - String required: no - current edition ( PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Edition | Flagship: Ultimate Edition | ProtectedMachines: Pro + Ultimate Editions)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (value of DescribeMachineOsList)</li>
Each filter criterion supports only one value.
<li>Quuid - String - required: no - CVM instance UUID. Maximum value: 100.</li>
<li>AddedOnTheFifteen - String required: no - whether to query only hosts added within the last 15 days (1: yes) </li>
<li> TagId - String required: no - query the list of hosts associated with the specified tag </li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>Names - String - required: no - query by instance name</li>
<li>InstanceIds - String - required: no - instance ID for query </li>
<li>Status - String - required: no - client online status (OFFLINE: offline/shut down | ONLINE: online | UNINSTALLED: not installed | AGENT_OFFLINE: agent offline | AGENT_SHUTDOWN: agent shut down)</li>
<li>Version - String required: no - current edition ( PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Edition | Flagship: Ultimate Edition | ProtectedMachines: Pro + Ultimate Editions)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (value of DescribeMachineOsList)</li>
Each filter criterion supports only one value.
<li>Quuid - String - required: no - CVM instance UUID. Maximum value: 100.</li>
<li>AddedOnTheFifteen - String required: no - whether to query only hosts added within the last 15 days (1: yes) </li>
<li> TagId - String required: no - query the list of hosts associated with the specified tag </li>
                     * @param _filters Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>Names - String - required: no - query by instance name</li>
<li>InstanceIds - String - required: no - instance ID for query </li>
<li>Status - String - required: no - client online status (OFFLINE: offline/shut down | ONLINE: online | UNINSTALLED: not installed | AGENT_OFFLINE: agent offline | AGENT_SHUTDOWN: agent shut down)</li>
<li>Version - String required: no - current edition ( PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Edition | Flagship: Ultimate Edition | ProtectedMachines: Pro + Ultimate Editions)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (value of DescribeMachineOsList)</li>
Each filter criterion supports only one value.
<li>Quuid - String - required: no - CVM instance UUID. Maximum value: 100.</li>
<li>AddedOnTheFifteen - String required: no - whether to query only hosts added within the last 15 days (1: yes) </li>
<li> TagId - String required: no - query the list of hosts associated with the specified tag </li>
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
                     * 获取ID List of Businesses to which machines belong
                     * @return ProjectIds ID List of Businesses to which machines belong
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置ID List of Businesses to which machines belong
                     * @param _projectIds ID List of Businesses to which machines belong
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                private:

                    /**
                     * Type of the machine's zone
CVM: Cloud Virtual Machine
BM: BMECM: Edge Computing Machine
LH: Lighthouse
Other: Hybrid Cloud Zone
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Machine region. For example, ap-guangzhou and ap-shanghai.
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * Number of returns. It is 10 by default, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria
<li>Ips - String - required: no - query by IP</li>
<li>Names - String - required: no - query by instance name</li>
<li>InstanceIds - String - required: no - instance ID for query </li>
<li>Status - String - required: no - client online status (OFFLINE: offline/shut down | ONLINE: online | UNINSTALLED: not installed | AGENT_OFFLINE: agent offline | AGENT_SHUTDOWN: agent shut down)</li>
<li>Version - String required: no - current edition ( PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Edition | Flagship: Ultimate Edition | ProtectedMachines: Pro + Ultimate Editions)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (value of DescribeMachineOsList)</li>
Each filter criterion supports only one value.
<li>Quuid - String - required: no - CVM instance UUID. Maximum value: 100.</li>
<li>AddedOnTheFifteen - String required: no - whether to query only hosts added within the last 15 days (1: yes) </li>
<li> TagId - String required: no - query the list of hosts associated with the specified tag </li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * ID List of Businesses to which machines belong
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_
