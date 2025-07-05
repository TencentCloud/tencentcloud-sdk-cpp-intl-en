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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETAGSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeTags request structure.
                */
                class DescribeTagsRequest : public AbstractModel
                {
                public:
                    DescribeTagsRequest();
                    ~DescribeTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM type
<li>CVM: indicates Cloud Virtual Machine</li>
<li>BM: indicates Blackstone Physical Machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: indicates hybrid CVMs</li>
                     * @return MachineType CVM type
<li>CVM: indicates Cloud Virtual Machine</li>
<li>BM: indicates Blackstone Physical Machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: indicates hybrid CVMs</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置CVM type
<li>CVM: indicates Cloud Virtual Machine</li>
<li>BM: indicates Blackstone Physical Machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: indicates hybrid CVMs</li>
                     * @param _machineType CVM type
<li>CVM: indicates Cloud Virtual Machine</li>
<li>BM: indicates Blackstone Physical Machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: indicates hybrid CVMs</li>
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
                     * 获取Region where the machine is located, such as ap-guangzhou.
                     * @return MachineRegion Region where the machine is located, such as ap-guangzhou.
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置Region where the machine is located, such as ap-guangzhou.
                     * @param _machineRegion Region where the machine is located, such as ap-guangzhou.
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
                     * 获取Filter criteria
<li>Keywords - String - required: no - query by keywords (machine name/machine IP)</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: uninstalled | SHUTDOWN: shut down)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (DescribeMachineOsList API value)</li>
Each filtering criterion supports only one value; queries of multiple values with OR relationship are not supported.</li>
                     * @return Filters Filter criteria
<li>Keywords - String - required: no - query by keywords (machine name/machine IP)</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: uninstalled | SHUTDOWN: shut down)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (DescribeMachineOsList API value)</li>
Each filtering criterion supports only one value; queries of multiple values with OR relationship are not supported.</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>Keywords - String - required: no - query by keywords (machine name/machine IP)</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: uninstalled | SHUTDOWN: shut down)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (DescribeMachineOsList API value)</li>
Each filtering criterion supports only one value; queries of multiple values with OR relationship are not supported.</li>
                     * @param _filters Filter criteria
<li>Keywords - String - required: no - query by keywords (machine name/machine IP)</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: uninstalled | SHUTDOWN: shut down)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (DescribeMachineOsList API value)</li>
Each filtering criterion supports only one value; queries of multiple values with OR relationship are not supported.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * CVM type
<li>CVM: indicates Cloud Virtual Machine</li>
<li>BM: indicates Blackstone Physical Machine</li>
<li>ECM: indicates Edge Computing Server</li>
<li>LH: indicates Tencent Cloud Lighthouse</li>
<li>Other: indicates hybrid CVMs</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * Region where the machine is located, such as ap-guangzhou.
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * Filter criteria
<li>Keywords - String - required: no - query by keywords (machine name/machine IP)</li>
<li>Status - String - required: no - client online status (OFFLINE: offline | ONLINE: online | UNINSTALLED: uninstalled | SHUTDOWN: shut down)</li>
<li>Version - String - required: no - current protection version (PRO_VERSION: Professional edition | BASIC_VERSION: Basic edition)</li>
<li>Risk - String - required: no - risky host (yes)</li>
<li>Os - String - required: no - operating system (DescribeMachineOsList API value)</li>
Each filtering criterion supports only one value; queries of multiple values with OR relationship are not supported.</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETAGSREQUEST_H_
