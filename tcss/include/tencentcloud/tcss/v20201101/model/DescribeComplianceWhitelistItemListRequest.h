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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEWHITELISTITEMLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEWHITELISTITEMLISTREQUEST_H_

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
                * DescribeComplianceWhitelistItemList request structure.
                */
                class DescribeComplianceWhitelistItemListRequest : public AbstractModel
                {
                public:
                    DescribeComplianceWhitelistItemListRequest();
                    ~DescribeComplianceWhitelistItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Initial offset. Default value: `0`.
                     * @return Offset Initial offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Initial offset. Default value: `0`.
                     * @param _offset Initial offset. Default value: `0`.
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
                     * 获取Number of results to be obtained. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be obtained. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be obtained. Default value: `10`. Maximum value: `100`.
                     * @param _limit Number of results to be obtained. Default value: `10`. Maximum value: `100`.
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
                     * 获取List of asset types
                     * @return AssetTypeSet List of asset types
                     * 
                     */
                    std::vector<std::string> GetAssetTypeSet() const;

                    /**
                     * 设置List of asset types
                     * @param _assetTypeSet List of asset types
                     * 
                     */
                    void SetAssetTypeSet(const std::vector<std::string>& _assetTypeSet);

                    /**
                     * 判断参数 AssetTypeSet 是否已赋值
                     * @return AssetTypeSet 是否已赋值
                     * 
                     */
                    bool AssetTypeSetHasBeenSet() const;

                    /**
                     * 获取Query filter
                     * @return Filters Query filter
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Query filter
                     * @param _filters Query filter
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

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
                     * 获取Sorting order. Valid values: `desc`, `asc`.
                     * @return Order Sorting order. Valid values: `desc`, `asc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `desc`, `asc`.
                     * @param _order Sorting order. Valid values: `desc`, `asc`.
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
                     * Initial offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be obtained. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * List of asset types
                     */
                    std::vector<std::string> m_assetTypeSet;
                    bool m_assetTypeSetHasBeenSet;

                    /**
                     * Query filter
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order. Valid values: `desc`, `asc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEWHITELISTITEMLISTREQUEST_H_
