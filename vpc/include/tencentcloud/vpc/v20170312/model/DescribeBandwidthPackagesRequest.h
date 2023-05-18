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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBandwidthPackages request structure.
                */
                class DescribeBandwidthPackagesRequest : public AbstractModel
                {
                public:
                    DescribeBandwidthPackagesRequest();
                    ~DescribeBandwidthPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID list of bandwidth packages.
                     * @return BandwidthPackageIds The unique ID list of bandwidth packages.
                     */
                    std::vector<std::string> GetBandwidthPackageIds() const;

                    /**
                     * 设置The unique ID list of bandwidth packages.
                     * @param BandwidthPackageIds The unique ID list of bandwidth packages.
                     */
                    void SetBandwidthPackageIds(const std::vector<std::string>& _bandwidthPackageIds);

                    /**
                     * 判断参数 BandwidthPackageIds 是否已赋值
                     * @return BandwidthPackageIds 是否已赋值
                     */
                    bool BandwidthPackageIdsHasBeenSet() const;

                    /**
                     * 获取Each request can have up to 10 `Filters`. `BandwidthPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> bandwidth-package_id - String - Required: No - (Filter condition) Filter by the unique ID of the bandwidth package.</li>
<li> bandwidth-package-name - String - Required: No - (Filter condition) Filter by the bandwidth package name. Fuzzy filtering is not supported.</li>
<li> network-type - String - Required: No - (Filter condition) Filter by the bandwidth package type. Valid values: `HIGH_QUALITY_BGP`, `BGP`, `SINGLEISP`, and `ANYCAST`.</li>
<li> charge-type - String - Required: No - (Filter condition) Filter by the bandwidth package billing mode. Valid values: `TOP5_POSTPAID_BY_MONTH` and `PERCENT95_POSTPAID_BY_MONTH`.</li>
<li> resource.resource-type - String - Required: No - (Filter condition) Filter by the bandwidth package resource type. Valid values: `Address` and `LoadBalance`.</li>
<li> resource.resource-id - String - Required: No - (Filter condition) Filter by the bandwidth package resource ID, such as `eip-xxxx` and `lb-xxxx`.</li>
<li> resource.address-ip - String - Required: No - (Filter condition) Filter by the bandwidth package resource IP.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag-value - String - Required: No - (Filter condition) Filter by tag value.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`.</li>
                     * @return Filters Each request can have up to 10 `Filters`. `BandwidthPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> bandwidth-package_id - String - Required: No - (Filter condition) Filter by the unique ID of the bandwidth package.</li>
<li> bandwidth-package-name - String - Required: No - (Filter condition) Filter by the bandwidth package name. Fuzzy filtering is not supported.</li>
<li> network-type - String - Required: No - (Filter condition) Filter by the bandwidth package type. Valid values: `HIGH_QUALITY_BGP`, `BGP`, `SINGLEISP`, and `ANYCAST`.</li>
<li> charge-type - String - Required: No - (Filter condition) Filter by the bandwidth package billing mode. Valid values: `TOP5_POSTPAID_BY_MONTH` and `PERCENT95_POSTPAID_BY_MONTH`.</li>
<li> resource.resource-type - String - Required: No - (Filter condition) Filter by the bandwidth package resource type. Valid values: `Address` and `LoadBalance`.</li>
<li> resource.resource-id - String - Required: No - (Filter condition) Filter by the bandwidth package resource ID, such as `eip-xxxx` and `lb-xxxx`.</li>
<li> resource.address-ip - String - Required: No - (Filter condition) Filter by the bandwidth package resource IP.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag-value - String - Required: No - (Filter condition) Filter by tag value.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters`. `BandwidthPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> bandwidth-package_id - String - Required: No - (Filter condition) Filter by the unique ID of the bandwidth package.</li>
<li> bandwidth-package-name - String - Required: No - (Filter condition) Filter by the bandwidth package name. Fuzzy filtering is not supported.</li>
<li> network-type - String - Required: No - (Filter condition) Filter by the bandwidth package type. Valid values: `HIGH_QUALITY_BGP`, `BGP`, `SINGLEISP`, and `ANYCAST`.</li>
<li> charge-type - String - Required: No - (Filter condition) Filter by the bandwidth package billing mode. Valid values: `TOP5_POSTPAID_BY_MONTH` and `PERCENT95_POSTPAID_BY_MONTH`.</li>
<li> resource.resource-type - String - Required: No - (Filter condition) Filter by the bandwidth package resource type. Valid values: `Address` and `LoadBalance`.</li>
<li> resource.resource-id - String - Required: No - (Filter condition) Filter by the bandwidth package resource ID, such as `eip-xxxx` and `lb-xxxx`.</li>
<li> resource.address-ip - String - Required: No - (Filter condition) Filter by the bandwidth package resource IP.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag-value - String - Required: No - (Filter condition) Filter by tag value.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`.</li>
                     * @param Filters Each request can have up to 10 `Filters`. `BandwidthPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> bandwidth-package_id - String - Required: No - (Filter condition) Filter by the unique ID of the bandwidth package.</li>
<li> bandwidth-package-name - String - Required: No - (Filter condition) Filter by the bandwidth package name. Fuzzy filtering is not supported.</li>
<li> network-type - String - Required: No - (Filter condition) Filter by the bandwidth package type. Valid values: `HIGH_QUALITY_BGP`, `BGP`, `SINGLEISP`, and `ANYCAST`.</li>
<li> charge-type - String - Required: No - (Filter condition) Filter by the bandwidth package billing mode. Valid values: `TOP5_POSTPAID_BY_MONTH` and `PERCENT95_POSTPAID_BY_MONTH`.</li>
<li> resource.resource-type - String - Required: No - (Filter condition) Filter by the bandwidth package resource type. Valid values: `Address` and `LoadBalance`.</li>
<li> resource.resource-id - String - Required: No - (Filter condition) Filter by the bandwidth package resource ID, such as `eip-xxxx` and `lb-xxxx`.</li>
<li> resource.address-ip - String - Required: No - (Filter condition) Filter by the bandwidth package resource IP.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag-value - String - Required: No - (Filter condition) Filter by tag value.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. This value defaults to 0. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. This value defaults to 0. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. This value defaults to 0. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param Offset Offset. This value defaults to 0. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of bandwidth packages returned. This value defaults to 20. The maximum is 100. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of bandwidth packages returned. This value defaults to 20. The maximum is 100. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of bandwidth packages returned. This value defaults to 20. The maximum is 100. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param Limit Number of bandwidth packages returned. This value defaults to 20. The maximum is 100. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The unique ID list of bandwidth packages.
                     */
                    std::vector<std::string> m_bandwidthPackageIds;
                    bool m_bandwidthPackageIdsHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters`. `BandwidthPackageIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li> bandwidth-package_id - String - Required: No - (Filter condition) Filter by the unique ID of the bandwidth package.</li>
<li> bandwidth-package-name - String - Required: No - (Filter condition) Filter by the bandwidth package name. Fuzzy filtering is not supported.</li>
<li> network-type - String - Required: No - (Filter condition) Filter by the bandwidth package type. Valid values: `HIGH_QUALITY_BGP`, `BGP`, `SINGLEISP`, and `ANYCAST`.</li>
<li> charge-type - String - Required: No - (Filter condition) Filter by the bandwidth package billing mode. Valid values: `TOP5_POSTPAID_BY_MONTH` and `PERCENT95_POSTPAID_BY_MONTH`.</li>
<li> resource.resource-type - String - Required: No - (Filter condition) Filter by the bandwidth package resource type. Valid values: `Address` and `LoadBalance`.</li>
<li> resource.resource-id - String - Required: No - (Filter condition) Filter by the bandwidth package resource ID, such as `eip-xxxx` and `lb-xxxx`.</li>
<li> resource.address-ip - String - Required: No - (Filter condition) Filter by the bandwidth package resource IP.</li>
<li> tag-key - String - Required: No - (Filter condition) Filter by tag key.</li>
<li> tag-value - String - Required: No - (Filter condition) Filter by tag value.</li>
<li> tag:tag-key - String - Required: No - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. This value defaults to 0. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of bandwidth packages returned. This value defaults to 20. The maximum is 100. For more information, see the relevant sections in API [Overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGESREQUEST_H_
