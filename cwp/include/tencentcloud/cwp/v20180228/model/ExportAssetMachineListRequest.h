/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETMACHINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETMACHINELISTREQUEST_H_

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
                * ExportAssetMachineList request structure.
                */
                class ExportAssetMachineListRequest : public AbstractModel
                {
                public:
                    ExportAssetMachineListRequest();
                    ~ExportAssetMachineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>IP - String - Required: No - Host IP</li>
<li>MachineName - String - Required: No - hostname</li>
<li>InstanceID - string - Required: No - Instance ID</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     * @return Filters Filter criteria
<li>IP - String - Required: No - Host IP</li>
<li>MachineName - String - Required: No - hostname</li>
<li>InstanceID - string - Required: No - Instance ID</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>IP - String - Required: No - Host IP</li>
<li>MachineName - String - Required: No - hostname</li>
<li>InstanceID - string - Required: No - Instance ID</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     * @param _filters Filter criteria
<li>IP - String - Required: No - Host IP</li>
<li>MachineName - String - Required: No - hostname</li>
<li>InstanceID - string - Required: No - Instance ID</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
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
<li>IP - String - Required: No - Host IP</li>
<li>MachineName - String - Required: No - hostname</li>
<li>InstanceID - string - Required: No - Instance ID</li>
<li>OsType - String - required: no - Windows or Linux</li>
<li>CpuLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - required: no - 
0: 0% or unknown; 1: 0% to 20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETMACHINELISTREQUEST_H_
