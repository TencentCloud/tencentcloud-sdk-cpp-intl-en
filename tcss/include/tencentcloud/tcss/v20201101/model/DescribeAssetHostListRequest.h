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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetHostList request structure.
                */
                class DescribeAssetHostListRequest : public AbstractModel
                {
                public:
                    DescribeAssetHostListRequest();
                    ~DescribeAssetHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param _limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Filter criteria. <li>Status-String-Required: No-agent Status filtering, "ALL": "ALL" (or omit this field), "UNINSTALL": "not installed", "OFFLINE": "OFFLINE", "ONLINE": "under protection"</li> <li>HostName-String-Required: No-HostName filtering</li> <li>Group-String-Required: No-host Group search</li> <li>HostIP-String-Required: No-search by host ip</li> <li>HostID-String-Required: No-search by host id</li> <li>DockerVersion-String-Required: No-docker version search</li> <li>MachineType-String-Required: No-host origin MachineType search, "ALL": "ALL" (or omit this field), host source: one of ["CVM", "ECM", "LH", "BM"] for Tencent Cloud server; one of ["Other"] for non-Tencent Cloud server</li> <li>DockerStatus-String-Required: No-docker installation Status, "ALL": "ALL" (or omit this field), "INSTALL": "installed", "UNINSTALL": "not installed"</li> <li>ProjectID-String-Required: No-project id search</li> <li>Tag:(Tag: key)-String-Required: No-Tag key-value search example filter":[{"Name":"Tag: tke-kind","Values":["service"]}]</li> <li>NonClusterNode: whether to query non-cluster nodes (true: yes, false: no)</li>
                     * @return Filters Filter criteria. <li>Status-String-Required: No-agent Status filtering, "ALL": "ALL" (or omit this field), "UNINSTALL": "not installed", "OFFLINE": "OFFLINE", "ONLINE": "under protection"</li> <li>HostName-String-Required: No-HostName filtering</li> <li>Group-String-Required: No-host Group search</li> <li>HostIP-String-Required: No-search by host ip</li> <li>HostID-String-Required: No-search by host id</li> <li>DockerVersion-String-Required: No-docker version search</li> <li>MachineType-String-Required: No-host origin MachineType search, "ALL": "ALL" (or omit this field), host source: one of ["CVM", "ECM", "LH", "BM"] for Tencent Cloud server; one of ["Other"] for non-Tencent Cloud server</li> <li>DockerStatus-String-Required: No-docker installation Status, "ALL": "ALL" (or omit this field), "INSTALL": "installed", "UNINSTALL": "not installed"</li> <li>ProjectID-String-Required: No-project id search</li> <li>Tag:(Tag: key)-String-Required: No-Tag key-value search example filter":[{"Name":"Tag: tke-kind","Values":["service"]}]</li> <li>NonClusterNode: whether to query non-cluster nodes (true: yes, false: no)</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter criteria. <li>Status-String-Required: No-agent Status filtering, "ALL": "ALL" (or omit this field), "UNINSTALL": "not installed", "OFFLINE": "OFFLINE", "ONLINE": "under protection"</li> <li>HostName-String-Required: No-HostName filtering</li> <li>Group-String-Required: No-host Group search</li> <li>HostIP-String-Required: No-search by host ip</li> <li>HostID-String-Required: No-search by host id</li> <li>DockerVersion-String-Required: No-docker version search</li> <li>MachineType-String-Required: No-host origin MachineType search, "ALL": "ALL" (or omit this field), host source: one of ["CVM", "ECM", "LH", "BM"] for Tencent Cloud server; one of ["Other"] for non-Tencent Cloud server</li> <li>DockerStatus-String-Required: No-docker installation Status, "ALL": "ALL" (or omit this field), "INSTALL": "installed", "UNINSTALL": "not installed"</li> <li>ProjectID-String-Required: No-project id search</li> <li>Tag:(Tag: key)-String-Required: No-Tag key-value search example filter":[{"Name":"Tag: tke-kind","Values":["service"]}]</li> <li>NonClusterNode: whether to query non-cluster nodes (true: yes, false: no)</li>
                     * @param _filters Filter criteria. <li>Status-String-Required: No-agent Status filtering, "ALL": "ALL" (or omit this field), "UNINSTALL": "not installed", "OFFLINE": "OFFLINE", "ONLINE": "under protection"</li> <li>HostName-String-Required: No-HostName filtering</li> <li>Group-String-Required: No-host Group search</li> <li>HostIP-String-Required: No-search by host ip</li> <li>HostID-String-Required: No-search by host id</li> <li>DockerVersion-String-Required: No-docker version search</li> <li>MachineType-String-Required: No-host origin MachineType search, "ALL": "ALL" (or omit this field), host source: one of ["CVM", "ECM", "LH", "BM"] for Tencent Cloud server; one of ["Other"] for non-Tencent Cloud server</li> <li>DockerStatus-String-Required: No-docker installation Status, "ALL": "ALL" (or omit this field), "INSTALL": "installed", "UNINSTALL": "not installed"</li> <li>ProjectID-String-Required: No-project id search</li> <li>Tag:(Tag: key)-String-Required: No-Tag key-value search example filter":[{"Name":"Tag: tke-kind","Values":["service"]}]</li> <li>NonClusterNode: whether to query non-cluster nodes (true: yes, false: no)</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc`, `desc`.
                     * @return Order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `asc`, `desc`.
                     * @param _order Sorting order. Valid values: `asc`, `desc`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria. <li>Status-String-Required: No-agent Status filtering, "ALL": "ALL" (or omit this field), "UNINSTALL": "not installed", "OFFLINE": "OFFLINE", "ONLINE": "under protection"</li> <li>HostName-String-Required: No-HostName filtering</li> <li>Group-String-Required: No-host Group search</li> <li>HostIP-String-Required: No-search by host ip</li> <li>HostID-String-Required: No-search by host id</li> <li>DockerVersion-String-Required: No-docker version search</li> <li>MachineType-String-Required: No-host origin MachineType search, "ALL": "ALL" (or omit this field), host source: one of ["CVM", "ECM", "LH", "BM"] for Tencent Cloud server; one of ["Other"] for non-Tencent Cloud server</li> <li>DockerStatus-String-Required: No-docker installation Status, "ALL": "ALL" (or omit this field), "INSTALL": "installed", "UNINSTALL": "not installed"</li> <li>ProjectID-String-Required: No-project id search</li> <li>Tag:(Tag: key)-String-Required: No-Tag key-value search example filter":[{"Name":"Tag: tke-kind","Values":["service"]}]</li> <li>NonClusterNode: whether to query non-cluster nodes (true: yes, false: no)</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc`, `desc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETHOSTLISTREQUEST_H_
