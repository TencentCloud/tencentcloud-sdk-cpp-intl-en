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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineList request structure.
                */
                class DescribeMachineListRequest : public AbstractModel
                {
                public:
                    DescribeMachineListRequest();
                    ~DescribeMachineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM type.
<li>CVM: Represent a virtual host</li>
<li>BM: Represent a physical machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     * @return MachineType CVM type.
<li>CVM: Represent a virtual host</li>
<li>BM: Represent a physical machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置CVM type.
<li>CVM: Represent a virtual host</li>
<li>BM: Represent a physical machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     * @param _machineType CVM type.
<li>CVM: Represent a virtual host</li>
<li>BM: Represent a physical machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
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
                     * 获取Number of entries to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of entries to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of entries to be returned. Default value: 10. Maximum value: 100.
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
                     * 获取Filter criteria.
<li>Keywords - String - required: no - query by keywords</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: not installed)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
Only one value is allowed for each filter criterion. Multiple values with the OR relationship are not supported for queries.
                     * @return Filters Filter criteria.
<li>Keywords - String - required: no - query by keywords</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: not installed)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
Only one value is allowed for each filter criterion. Multiple values with the OR relationship are not supported for queries.
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter criteria.
<li>Keywords - String - required: no - query by keywords</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: not installed)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
Only one value is allowed for each filter criterion. Multiple values with the OR relationship are not supported for queries.
                     * @param _filters Filter criteria.
<li>Keywords - String - required: no - query by keywords</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: not installed)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
Only one value is allowed for each filter criterion. Multiple values with the OR relationship are not supported for queries.
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * CVM type.
<li>CVM: Represent a virtual host</li>
<li>BM: Represent a physical machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: Indicates Hybrid cloud machines.</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Machine region. For example, ap-guangzhou and ap-shanghai.
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * Number of entries to be returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria.
<li>Keywords - String - required: no - query by keywords</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: not installed)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
Only one value is allowed for each filter criterion. Multiple values with the OR relationship are not supported for queries.
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINELISTREQUEST_H_
