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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeComplianceTaskPolicyItemSummaryList request structure.
                */
                class DescribeComplianceTaskPolicyItemSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeComplianceTaskPolicyItemSummaryListRequest();
                    ~DescribeComplianceTaskPolicyItemSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset type, which indicates to only query check items related to the specified asset type.

`ASSET_CONTAINER`: Container.

`ASSET_IMAGE`: Image.

`ASSET_HOST`: Server.

`ASSET_K8S`: K8s asset.
                     * @return AssetType Asset type, which indicates to only query check items related to the specified asset type.

`ASSET_CONTAINER`: Container.

`ASSET_IMAGE`: Image.

`ASSET_HOST`: Server.

`ASSET_K8S`: K8s asset.
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type, which indicates to only query check items related to the specified asset type.

`ASSET_CONTAINER`: Container.

`ASSET_IMAGE`: Image.

`ASSET_HOST`: Server.

`ASSET_K8S`: K8s asset.
                     * @param AssetType Asset type, which indicates to only query check items related to the specified asset type.

`ASSET_CONTAINER`: Container.

`ASSET_IMAGE`: Image.

`ASSET_HOST`: Server.

`ASSET_K8S`: K8s asset.
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Initial offset. Default value: `0`.
                     * @return Offset Initial offset. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Initial offset. Default value: `0`.
                     * @param Offset Initial offset. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter
Name - String
Name. Valid values: `ItemType`, `StandardId`, `RiskLevel`.
`ClusterName` is also available for K8s assets.
                     * @return Filters Filter
Name - String
Name. Valid values: `ItemType`, `StandardId`, `RiskLevel`.
`ClusterName` is also available for K8s assets.
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Filter
Name - String
Name. Valid values: `ItemType`, `StandardId`, `RiskLevel`.
`ClusterName` is also available for K8s assets.
                     * @param Filters Filter
Name - String
Name. Valid values: `ItemType`, `StandardId`, `RiskLevel`.
`ClusterName` is also available for K8s assets.
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Asset type, which indicates to only query check items related to the specified asset type.

`ASSET_CONTAINER`: Container.

`ASSET_IMAGE`: Image.

`ASSET_HOST`: Server.

`ASSET_K8S`: K8s asset.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Initial offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter
Name - String
Name. Valid values: `ItemType`, `StandardId`, `RiskLevel`.
`ClusterName` is also available for K8s assets.
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCETASKPOLICYITEMSUMMARYLISTREQUEST_H_
