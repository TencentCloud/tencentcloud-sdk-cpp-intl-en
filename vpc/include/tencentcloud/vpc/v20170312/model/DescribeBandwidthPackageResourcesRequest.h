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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGERESOURCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGERESOURCESREQUEST_H_

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
                * DescribeBandwidthPackageResources request structure.
                */
                class DescribeBandwidthPackageResourcesRequest : public AbstractModel
                {
                public:
                    DescribeBandwidthPackageResourcesRequest();
                    ~DescribeBandwidthPackageResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the bandwidth package in the form of `bwp-11112222`.
                     * @return BandwidthPackageId Unique ID of the bandwidth package in the form of `bwp-11112222`.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Unique ID of the bandwidth package in the form of `bwp-11112222`.
                     * @param _bandwidthPackageId Unique ID of the bandwidth package in the form of `bwp-11112222`.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取Each request can have up to 10 `Filters` and 5 `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>resource-id - String - Required: no -  (Filter condition) Filters by the unique ID of resources in a bandwidth package, such as `eip-11112222`.</li>
<li>resource-type - String - Required: no - (Filter condition) Filters by the type of resources in a bandwidth package. It now supports only EIP (`Address`) and load balancer (`LoadBalance`).</li>
                     * @return Filters Each request can have up to 10 `Filters` and 5 `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>resource-id - String - Required: no -  (Filter condition) Filters by the unique ID of resources in a bandwidth package, such as `eip-11112222`.</li>
<li>resource-type - String - Required: no - (Filter condition) Filters by the type of resources in a bandwidth package. It now supports only EIP (`Address`) and load balancer (`LoadBalance`).</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Each request can have up to 10 `Filters` and 5 `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>resource-id - String - Required: no -  (Filter condition) Filters by the unique ID of resources in a bandwidth package, such as `eip-11112222`.</li>
<li>resource-type - String - Required: no - (Filter condition) Filters by the type of resources in a bandwidth package. It now supports only EIP (`Address`) and load balancer (`LoadBalance`).</li>
                     * @param _filters Each request can have up to 10 `Filters` and 5 `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>resource-id - String - Required: no -  (Filter condition) Filters by the unique ID of resources in a bandwidth package, such as `eip-11112222`.</li>
<li>resource-type - String - Required: no - (Filter condition) Filters by the type of resources in a bandwidth package. It now supports only EIP (`Address`) and load balancer (`LoadBalance`).</li>
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
                     * 获取The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @return Offset The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @param _offset The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @return Limit The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @param _limit The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the bandwidth package in the form of `bwp-11112222`.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Each request can have up to 10 `Filters` and 5 `Filter.Values`. `AddressIds` and `Filters` cannot be specified at the same time. The specific filter conditions are as follows:
<li>resource-id - String - Required: no -  (Filter condition) Filters by the unique ID of resources in a bandwidth package, such as `eip-11112222`.</li>
<li>resource-type - String - Required: no - (Filter condition) Filters by the type of resources in a bandwidth package. It now supports only EIP (`Address`) and load balancer (`LoadBalance`).</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The offset. Default value: 0. For more information on `Offset`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGERESOURCESREQUEST_H_
