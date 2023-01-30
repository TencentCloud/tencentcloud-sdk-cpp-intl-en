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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_

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
                * DescribeAssetImageRegistryList request structure.
                */
                class DescribeAssetImageRegistryListRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryListRequest();
                    ~DescribeAssetImageRegistryListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter field
`IsAuthorized` (whether licensed). Valid values: `all` (all); `0` (unlicensed); `1` (licensed).
                     * @return Filters Filter field
`IsAuthorized` (whether licensed). Valid values: `all` (all); `0` (unlicensed); `1` (licensed).
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter field
`IsAuthorized` (whether licensed). Valid values: `all` (all); `0` (unlicensed); `1` (licensed).
                     * @param Filters Filter field
`IsAuthorized` (whether licensed). Valid values: `all` (all); `0` (unlicensed); `1` (licensed).
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param By Sorting field
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc`, `desc`.
                     * @return Order Sorting order. Valid values: `asc`, `desc`.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `asc`, `desc`.
                     * @param Order Sorting order. Valid values: `asc`, `desc`.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Whether to show only the latest repository images. Default value: `false`.
                     * @return OnlyShowLatest Whether to show only the latest repository images. Default value: `false`.
                     */
                    bool GetOnlyShowLatest() const;

                    /**
                     * 设置Whether to show only the latest repository images. Default value: `false`.
                     * @param OnlyShowLatest Whether to show only the latest repository images. Default value: `false`.
                     */
                    void SetOnlyShowLatest(const bool& _onlyShowLatest);

                    /**
                     * 判断参数 OnlyShowLatest 是否已赋值
                     * @return OnlyShowLatest 是否已赋值
                     */
                    bool OnlyShowLatestHasBeenSet() const;

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
                     * Filter field
`IsAuthorized` (whether licensed). Valid values: `all` (all); `0` (unlicensed); `1` (licensed).
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

                    /**
                     * Whether to show only the latest repository images. Default value: `false`.
                     */
                    bool m_onlyShowLatest;
                    bool m_onlyShowLatestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_
