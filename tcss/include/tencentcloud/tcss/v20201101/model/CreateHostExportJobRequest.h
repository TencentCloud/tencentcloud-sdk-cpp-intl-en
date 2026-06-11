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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEHOSTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEHOSTEXPORTJOBREQUEST_H_

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
                * CreateHostExportJob request structure.
                */
                class CreateHostExportJobRequest : public AbstractModel
                {
                public:
                    CreateHostExportJobRequest();
                    ~CreateHostExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter conditions.<li>Status-String-Required: No-Filter by agent Status. "ALL": "ALL" (or leave this field blank), "UNINSTALL": "Not installed", "OFFLINE": "OFFLINE", "ONLINE": "Under protection"</li><li>HostName-String-Required: No-HostName Filtering</li><li>Group-String-Required: No-Host Group search</li><li>HostIP-String-Required: No-Search by host ip</li><li>HostID-String-Required: No-Search by host id</li><li>DockerVersion-String-Required: No-docker version search</li><li>MachineType-String-Required: No-Host origin MachineType search. "ALL": "ALL" (or leave this field blank). Host source: One of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server.</li><li>DockerStatus-String-Required: No-docker installation Status. "ALL": "ALL" (or leave this field blank), "INSTALL": "Installed", "UNINSTALL": "Not installed"</li><li>ProjectID-String-Required: No-Project id search</li><li>Tag:(Tag: key)-String-Required: No-Tag key-value search. Example Filters":[{"Name":"Tag: tke-kind","Values":["service"]}]</li>
                     * @return Filters Filter conditions.<li>Status-String-Required: No-Filter by agent Status. "ALL": "ALL" (or leave this field blank), "UNINSTALL": "Not installed", "OFFLINE": "OFFLINE", "ONLINE": "Under protection"</li><li>HostName-String-Required: No-HostName Filtering</li><li>Group-String-Required: No-Host Group search</li><li>HostIP-String-Required: No-Search by host ip</li><li>HostID-String-Required: No-Search by host id</li><li>DockerVersion-String-Required: No-docker version search</li><li>MachineType-String-Required: No-Host origin MachineType search. "ALL": "ALL" (or leave this field blank). Host source: One of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server.</li><li>DockerStatus-String-Required: No-docker installation Status. "ALL": "ALL" (or leave this field blank), "INSTALL": "Installed", "UNINSTALL": "Not installed"</li><li>ProjectID-String-Required: No-Project id search</li><li>Tag:(Tag: key)-String-Required: No-Tag key-value search. Example Filters":[{"Name":"Tag: tke-kind","Values":["service"]}]</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter conditions.<li>Status-String-Required: No-Filter by agent Status. "ALL": "ALL" (or leave this field blank), "UNINSTALL": "Not installed", "OFFLINE": "OFFLINE", "ONLINE": "Under protection"</li><li>HostName-String-Required: No-HostName Filtering</li><li>Group-String-Required: No-Host Group search</li><li>HostIP-String-Required: No-Search by host ip</li><li>HostID-String-Required: No-Search by host id</li><li>DockerVersion-String-Required: No-docker version search</li><li>MachineType-String-Required: No-Host origin MachineType search. "ALL": "ALL" (or leave this field blank). Host source: One of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server.</li><li>DockerStatus-String-Required: No-docker installation Status. "ALL": "ALL" (or leave this field blank), "INSTALL": "Installed", "UNINSTALL": "Not installed"</li><li>ProjectID-String-Required: No-Project id search</li><li>Tag:(Tag: key)-String-Required: No-Tag key-value search. Example Filters":[{"Name":"Tag: tke-kind","Values":["service"]}]</li>
                     * @param _filters Filter conditions.<li>Status-String-Required: No-Filter by agent Status. "ALL": "ALL" (or leave this field blank), "UNINSTALL": "Not installed", "OFFLINE": "OFFLINE", "ONLINE": "Under protection"</li><li>HostName-String-Required: No-HostName Filtering</li><li>Group-String-Required: No-Host Group search</li><li>HostIP-String-Required: No-Search by host ip</li><li>HostID-String-Required: No-Search by host id</li><li>DockerVersion-String-Required: No-docker version search</li><li>MachineType-String-Required: No-Host origin MachineType search. "ALL": "ALL" (or leave this field blank). Host source: One of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server.</li><li>DockerStatus-String-Required: No-docker installation Status. "ALL": "ALL" (or leave this field blank), "INSTALL": "Installed", "UNINSTALL": "Not installed"</li><li>ProjectID-String-Required: No-Project id search</li><li>Tag:(Tag: key)-String-Required: No-Tag key-value search. Example Filters":[{"Name":"Tag: tke-kind","Values":["service"]}]</li>
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
                     * 获取Offset. Default value: `0`.
                     * @return Limit Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _limit Offset. Default value: `0`.
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
                     * 获取The number of results to return. Default value: 10. Maximum value: 10,000.
                     * @return Offset The number of results to return. Default value: 10. Maximum value: 10,000.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The number of results to return. Default value: 10. Maximum value: 10,000.
                     * @param _offset The number of results to return. Default value: 10. Maximum value: 10,000.
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
                     * 获取Valid values: `asc`, `desc`.
                     * @return Order Valid values: `asc`, `desc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Valid values: `asc`, `desc`.
                     * @param _order Valid values: `asc`, `desc`.
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
                     * 获取Export field
                     * @return ExportField Export field
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置Export field
                     * @param _exportField Export field
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                private:

                    /**
                     * Filter conditions.<li>Status-String-Required: No-Filter by agent Status. "ALL": "ALL" (or leave this field blank), "UNINSTALL": "Not installed", "OFFLINE": "OFFLINE", "ONLINE": "Under protection"</li><li>HostName-String-Required: No-HostName Filtering</li><li>Group-String-Required: No-Host Group search</li><li>HostIP-String-Required: No-Search by host ip</li><li>HostID-String-Required: No-Search by host id</li><li>DockerVersion-String-Required: No-docker version search</li><li>MachineType-String-Required: No-Host origin MachineType search. "ALL": "ALL" (or leave this field blank). Host source: One of ["CVM", "ECM", "LH", "BM"] is a Tencent Cloud server; one of ["Other"] is a non-Tencent Cloud server.</li><li>DockerStatus-String-Required: No-docker installation Status. "ALL": "ALL" (or leave this field blank), "INSTALL": "Installed", "UNINSTALL": "Not installed"</li><li>ProjectID-String-Required: No-Project id search</li><li>Tag:(Tag: key)-String-Required: No-Tag key-value search. Example Filters":[{"Name":"Tag: tke-kind","Values":["service"]}]</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The number of results to return. Default value: 10. Maximum value: 10,000.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Valid values: `asc`, `desc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Export field
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEHOSTEXPORTJOBREQUEST_H_
