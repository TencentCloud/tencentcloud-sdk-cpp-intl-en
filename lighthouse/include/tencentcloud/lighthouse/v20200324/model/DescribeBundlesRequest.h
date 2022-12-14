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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBundles request structure.
                */
                class DescribeBundlesRequest : public AbstractModel
                {
                public:
                    DescribeBundlesRequest();
                    ~DescribeBundlesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Package ID list.
                     * @return BundleIds Package ID list.
                     */
                    std::vector<std::string> GetBundleIds() const;

                    /**
                     * 设置Package ID list.
                     * @param BundleIds Package ID list.
                     */
                    void SetBundleIds(const std::vector<std::string>& _bundleIds);

                    /**
                     * 判断参数 BundleIds 是否已赋值
                     * @return BundleIds 是否已赋值
                     */
                    bool BundleIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param Offset Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter list
<li>bundle-id</li>Filter by the **bundle ID**.
Type: String
Required: No
<li>support-platform-type</li>Filter by the **OS type**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: No
<li>bundle-type</li>Filter by the **bundle type**.
Valid values: `GENERAL_BUNDLE` (General bundle), `STORAGE_BUNDLE` (Storage bundle), `ENTERPRISE_BUNDLE` (Enterprise bundle), `EXCLUSIVE_BUNDLE` (Dedicated bundle), `BEFAST_BUNDLE` (BeFast bundle)
Type: String
Required: No
<li>bundle-state</li>Filter by the **bundle status**.
Valid values: `ONLINE`, `OFFLINE`
Type: String
Required: No
Each request can contain up to 10 `Filters`, and up to 5 `Filter.Values` for each filter. You cannot specify both `BundleIds` and `Filters` at the same time.
                     * @return Filters Filter list
<li>bundle-id</li>Filter by the **bundle ID**.
Type: String
Required: No
<li>support-platform-type</li>Filter by the **OS type**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: No
<li>bundle-type</li>Filter by the **bundle type**.
Valid values: `GENERAL_BUNDLE` (General bundle), `STORAGE_BUNDLE` (Storage bundle), `ENTERPRISE_BUNDLE` (Enterprise bundle), `EXCLUSIVE_BUNDLE` (Dedicated bundle), `BEFAST_BUNDLE` (BeFast bundle)
Type: String
Required: No
<li>bundle-state</li>Filter by the **bundle status**.
Valid values: `ONLINE`, `OFFLINE`
Type: String
Required: No
Each request can contain up to 10 `Filters`, and up to 5 `Filter.Values` for each filter. You cannot specify both `BundleIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list
<li>bundle-id</li>Filter by the **bundle ID**.
Type: String
Required: No
<li>support-platform-type</li>Filter by the **OS type**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: No
<li>bundle-type</li>Filter by the **bundle type**.
Valid values: `GENERAL_BUNDLE` (General bundle), `STORAGE_BUNDLE` (Storage bundle), `ENTERPRISE_BUNDLE` (Enterprise bundle), `EXCLUSIVE_BUNDLE` (Dedicated bundle), `BEFAST_BUNDLE` (BeFast bundle)
Type: String
Required: No
<li>bundle-state</li>Filter by the **bundle status**.
Valid values: `ONLINE`, `OFFLINE`
Type: String
Required: No
Each request can contain up to 10 `Filters`, and up to 5 `Filter.Values` for each filter. You cannot specify both `BundleIds` and `Filters` at the same time.
                     * @param Filters Filter list
<li>bundle-id</li>Filter by the **bundle ID**.
Type: String
Required: No
<li>support-platform-type</li>Filter by the **OS type**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: No
<li>bundle-type</li>Filter by the **bundle type**.
Valid values: `GENERAL_BUNDLE` (General bundle), `STORAGE_BUNDLE` (Storage bundle), `ENTERPRISE_BUNDLE` (Enterprise bundle), `EXCLUSIVE_BUNDLE` (Dedicated bundle), `BEFAST_BUNDLE` (BeFast bundle)
Type: String
Required: No
<li>bundle-state</li>Filter by the **bundle status**.
Valid values: `ONLINE`, `OFFLINE`
Type: String
Required: No
Each request can contain up to 10 `Filters`, and up to 5 `Filter.Values` for each filter. You cannot specify both `BundleIds` and `Filters` at the same time.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取AZ list, which contains all AZs by default.
                     * @return Zones AZ list, which contains all AZs by default.
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置AZ list, which contains all AZs by default.
                     * @param Zones AZ list, which contains all AZs by default.
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * Package ID list.
                     */
                    std::vector<std::string> m_bundleIds;
                    bool m_bundleIdsHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter list
<li>bundle-id</li>Filter by the **bundle ID**.
Type: String
Required: No
<li>support-platform-type</li>Filter by the **OS type**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: No
<li>bundle-type</li>Filter by the **bundle type**.
Valid values: `GENERAL_BUNDLE` (General bundle), `STORAGE_BUNDLE` (Storage bundle), `ENTERPRISE_BUNDLE` (Enterprise bundle), `EXCLUSIVE_BUNDLE` (Dedicated bundle), `BEFAST_BUNDLE` (BeFast bundle)
Type: String
Required: No
<li>bundle-state</li>Filter by the **bundle status**.
Valid values: `ONLINE`, `OFFLINE`
Type: String
Required: No
Each request can contain up to 10 `Filters`, and up to 5 `Filter.Values` for each filter. You cannot specify both `BundleIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * AZ list, which contains all AZs by default.
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESREQUEST_H_
