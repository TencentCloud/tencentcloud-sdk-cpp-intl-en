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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEVPCSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEVPCSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeVpcs request structure.
                */
                class DescribeVpcsRequest : public AbstractModel
                {
                public:
                    DescribeVpcsRequest();
                    ~DescribeVpcsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * @return VpcIds VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * @param _vpcIds VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取Filter. `VpcIds` and `Filters` cannot be specified at the same time.
vpc-name - String - VPC instance name. Only fuzzy query by a single value is supported.
vpc-id - String - VPC instance ID, such as `vpc-f49l6u0z`.
cidr-block - String - VPC CIDR. Only fuzzy query by a single value is supported.
region - String - VPC region.
tag-key - String - Required: no - Filter by tag key.
tag:tag-key - String - Required: no - Filter by tag key-value pair.
                     * @return Filters Filter. `VpcIds` and `Filters` cannot be specified at the same time.
vpc-name - String - VPC instance name. Only fuzzy query by a single value is supported.
vpc-id - String - VPC instance ID, such as `vpc-f49l6u0z`.
cidr-block - String - VPC CIDR. Only fuzzy query by a single value is supported.
region - String - VPC region.
tag-key - String - Required: no - Filter by tag key.
tag:tag-key - String - Required: no - Filter by tag key-value pair.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `VpcIds` and `Filters` cannot be specified at the same time.
vpc-name - String - VPC instance name. Only fuzzy query by a single value is supported.
vpc-id - String - VPC instance ID, such as `vpc-f49l6u0z`.
cidr-block - String - VPC CIDR. Only fuzzy query by a single value is supported.
region - String - VPC region.
tag-key - String - Required: no - Filter by tag key.
tag:tag-key - String - Required: no - Filter by tag key-value pair.
                     * @param _filters Filter. `VpcIds` and `Filters` cannot be specified at the same time.
vpc-name - String - VPC instance name. Only fuzzy query by a single value is supported.
vpc-id - String - VPC instance ID, such as `vpc-f49l6u0z`.
cidr-block - String - VPC CIDR. Only fuzzy query by a single value is supported.
region - String - VPC region.
tag-key - String - Required: no - Filter by tag key.
tag:tag-key - String - Required: no - Filter by tag key-value pair.
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Number of returned results.
                     * @return Limit Number of returned results.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results.
                     * @param _limit Number of returned results.
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
                     * 获取Region
                     * @return EcmRegion Region
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置Region
                     * @param _ecmRegion Region
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Sorting method. time: sort in reverse chronological order; default: sort by network planning.
                     * @return Sort Sorting method. time: sort in reverse chronological order; default: sort by network planning.
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting method. time: sort in reverse chronological order; default: sort by network planning.
                     * @param _sort Sorting method. time: sort in reverse chronological order; default: sort by network planning.
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID, such as `vpc-f49l6u0z`. Each request supports a maximum of 100 instances. `VpcIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * Filter. `VpcIds` and `Filters` cannot be specified at the same time.
vpc-name - String - VPC instance name. Only fuzzy query by a single value is supported.
vpc-id - String - VPC instance ID, such as `vpc-f49l6u0z`.
cidr-block - String - VPC CIDR. Only fuzzy query by a single value is supported.
region - String - VPC region.
tag-key - String - Required: no - Filter by tag key.
tag:tag-key - String - Required: no - Filter by tag key-value pair.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Sorting method. time: sort in reverse chronological order; default: sort by network planning.
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEVPCSREQUEST_H_
