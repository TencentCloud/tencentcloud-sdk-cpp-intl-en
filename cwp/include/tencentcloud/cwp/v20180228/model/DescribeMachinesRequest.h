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
                     * 获取<p>Machine zone type<br>CVM: Cloud Virtual Machine<br>BM: Blackstone<br>ECM: Edge Computing Machine<br>LH: Lighthouse<br>Other: Hybrid cloud zone</p>
                     * @return MachineType <p>Machine zone type<br>CVM: Cloud Virtual Machine<br>BM: Blackstone<br>ECM: Edge Computing Machine<br>LH: Lighthouse<br>Other: Hybrid cloud zone</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>Machine zone type<br>CVM: Cloud Virtual Machine<br>BM: Blackstone<br>ECM: Edge Computing Machine<br>LH: Lighthouse<br>Other: Hybrid cloud zone</p>
                     * @param _machineType <p>Machine zone type<br>CVM: Cloud Virtual Machine<br>BM: Blackstone<br>ECM: Edge Computing Machine<br>LH: Lighthouse<br>Other: Hybrid cloud zone</p>
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
                     * 获取<p>Machine region, for example, ap-guangzhou or ap-shanghai. For non-Tencent Cloud hosts, use ap-others.</p>
                     * @return MachineRegion <p>Machine region, for example, ap-guangzhou or ap-shanghai. For non-Tencent Cloud hosts, use ap-others.</p>
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置<p>Machine region, for example, ap-guangzhou or ap-shanghai. For non-Tencent Cloud hosts, use ap-others.</p>
                     * @param _machineRegion <p>Machine region, for example, ap-guangzhou or ap-shanghai. For non-Tencent Cloud hosts, use ap-others.</p>
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
                     * 获取<p>Number of returned results. The default number is 10, and the maximum value is 100.</p>
                     * @return Limit <p>Number of returned results. The default number is 10, and the maximum value is 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results. The default number is 10, and the maximum value is 100.</p>
                     * @param _limit <p>Number of returned results. The default number is 10, and the maximum value is 100.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Filter criteria.</p><li>Ips - String - Required: No - Query by IP</li><li>Names - String - Required: No - Query by instance name</li><li>InstanceIds - String - Required: No - Query by instance id</li><li>Version - String - Required: No - Current protection edition (PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Version | Flagship: Ultimate Edition | ProtectedMachines: Pro Edition + Ultimate Edition)</li><li>Risk - String - Required: No - Risk host (yes)</li><li>Os - String - Required: No - Operating system (DescribeMachineOsList API value). Each filter criterion only supports one value and does not support multiple values or relationship query.</li><li>Quuid - String - Required: No - Cloud server UUID. Maximum 100 entries.</li><li>AddedOnTheFifteen - String - Required: No - Query only hosts added within the last 15 days (1: yes)</li><li>TagId - String - Required: No - Query host list associated with the specified tag</li><li>AgentStatus - String - Required: No - ALL: All; ONLINE: Under protection; OFFLINE: Offline; UNINSTALLED: Not installed</li><li>MachineStatus - String - Required: No - ALL: All; RUNNING: Running; STOPPED: Shut down; EXPIRED: Pending recycling</li>
                     * @return Filters <p>Filter criteria.</p><li>Ips - String - Required: No - Query by IP</li><li>Names - String - Required: No - Query by instance name</li><li>InstanceIds - String - Required: No - Query by instance id</li><li>Version - String - Required: No - Current protection edition (PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Version | Flagship: Ultimate Edition | ProtectedMachines: Pro Edition + Ultimate Edition)</li><li>Risk - String - Required: No - Risk host (yes)</li><li>Os - String - Required: No - Operating system (DescribeMachineOsList API value). Each filter criterion only supports one value and does not support multiple values or relationship query.</li><li>Quuid - String - Required: No - Cloud server UUID. Maximum 100 entries.</li><li>AddedOnTheFifteen - String - Required: No - Query only hosts added within the last 15 days (1: yes)</li><li>TagId - String - Required: No - Query host list associated with the specified tag</li><li>AgentStatus - String - Required: No - ALL: All; ONLINE: Under protection; OFFLINE: Offline; UNINSTALLED: Not installed</li><li>MachineStatus - String - Required: No - ALL: All; RUNNING: Running; STOPPED: Shut down; EXPIRED: Pending recycling</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria.</p><li>Ips - String - Required: No - Query by IP</li><li>Names - String - Required: No - Query by instance name</li><li>InstanceIds - String - Required: No - Query by instance id</li><li>Version - String - Required: No - Current protection edition (PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Version | Flagship: Ultimate Edition | ProtectedMachines: Pro Edition + Ultimate Edition)</li><li>Risk - String - Required: No - Risk host (yes)</li><li>Os - String - Required: No - Operating system (DescribeMachineOsList API value). Each filter criterion only supports one value and does not support multiple values or relationship query.</li><li>Quuid - String - Required: No - Cloud server UUID. Maximum 100 entries.</li><li>AddedOnTheFifteen - String - Required: No - Query only hosts added within the last 15 days (1: yes)</li><li>TagId - String - Required: No - Query host list associated with the specified tag</li><li>AgentStatus - String - Required: No - ALL: All; ONLINE: Under protection; OFFLINE: Offline; UNINSTALLED: Not installed</li><li>MachineStatus - String - Required: No - ALL: All; RUNNING: Running; STOPPED: Shut down; EXPIRED: Pending recycling</li>
                     * @param _filters <p>Filter criteria.</p><li>Ips - String - Required: No - Query by IP</li><li>Names - String - Required: No - Query by instance name</li><li>InstanceIds - String - Required: No - Query by instance id</li><li>Version - String - Required: No - Current protection edition (PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Version | Flagship: Ultimate Edition | ProtectedMachines: Pro Edition + Ultimate Edition)</li><li>Risk - String - Required: No - Risk host (yes)</li><li>Os - String - Required: No - Operating system (DescribeMachineOsList API value). Each filter criterion only supports one value and does not support multiple values or relationship query.</li><li>Quuid - String - Required: No - Cloud server UUID. Maximum 100 entries.</li><li>AddedOnTheFifteen - String - Required: No - Query only hosts added within the last 15 days (1: yes)</li><li>TagId - String - Required: No - Query host list associated with the specified tag</li><li>AgentStatus - String - Required: No - ALL: All; ONLINE: Under protection; OFFLINE: Offline; UNINSTALLED: Not installed</li><li>MachineStatus - String - Required: No - ALL: All; RUNNING: Running; STOPPED: Shut down; EXPIRED: Pending recycling</li>
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
                     * 获取<p>List of business IDs to which the machines belong</p>
                     * @return ProjectIds <p>List of business IDs to which the machines belong</p>
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置<p>List of business IDs to which the machines belong</p>
                     * @param _projectIds <p>List of business IDs to which the machines belong</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>APPID of the machine</p>
                     * @return MachineAppId <p>APPID of the machine</p>
                     * 
                     */
                    uint64_t GetMachineAppId() const;

                    /**
                     * 设置<p>APPID of the machine</p>
                     * @param _machineAppId <p>APPID of the machine</p>
                     * 
                     */
                    void SetMachineAppId(const uint64_t& _machineAppId);

                    /**
                     * 判断参数 MachineAppId 是否已赋值
                     * @return MachineAppId 是否已赋值
                     * 
                     */
                    bool MachineAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>Machine zone type<br>CVM: Cloud Virtual Machine<br>BM: Blackstone<br>ECM: Edge Computing Machine<br>LH: Lighthouse<br>Other: Hybrid cloud zone</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>Machine region, for example, ap-guangzhou or ap-shanghai. For non-Tencent Cloud hosts, use ap-others.</p>
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * <p>Number of returned results. The default number is 10, and the maximum value is 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Filter criteria.</p><li>Ips - String - Required: No - Query by IP</li><li>Names - String - Required: No - Query by instance name</li><li>InstanceIds - String - Required: No - Query by instance id</li><li>Version - String - Required: No - Current protection edition (PRO_VERSION: Pro Edition | BASIC_VERSION: Basic Version | Flagship: Ultimate Edition | ProtectedMachines: Pro Edition + Ultimate Edition)</li><li>Risk - String - Required: No - Risk host (yes)</li><li>Os - String - Required: No - Operating system (DescribeMachineOsList API value). Each filter criterion only supports one value and does not support multiple values or relationship query.</li><li>Quuid - String - Required: No - Cloud server UUID. Maximum 100 entries.</li><li>AddedOnTheFifteen - String - Required: No - Query only hosts added within the last 15 days (1: yes)</li><li>TagId - String - Required: No - Query host list associated with the specified tag</li><li>AgentStatus - String - Required: No - ALL: All; ONLINE: Under protection; OFFLINE: Offline; UNINSTALLED: Not installed</li><li>MachineStatus - String - Required: No - ALL: All; RUNNING: Running; STOPPED: Shut down; EXPIRED: Pending recycling</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>List of business IDs to which the machines belong</p>
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>APPID of the machine</p>
                     */
                    uint64_t m_machineAppId;
                    bool m_machineAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_
