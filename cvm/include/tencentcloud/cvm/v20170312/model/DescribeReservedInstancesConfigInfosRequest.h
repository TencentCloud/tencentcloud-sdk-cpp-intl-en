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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESCONFIGINFOSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESCONFIGINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeReservedInstancesConfigInfos request structure.
                */
                class DescribeReservedInstancesConfigInfosRequest : public AbstractModel
                {
                public:
                    DescribeReservedInstancesConfigInfosRequest();
                    ~DescribeReservedInstancesConfigInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取zone
Filters by the availability zones in which the reserved instance can be purchased, such as `ap-guangzhou-1`.
Type: String
Required: no
Valid values: list of regions/availability zones

product-description
Filters by the platform description (operating system) of the reserved instance, such as `linux`.
Type: String
Required: no
Valid value: linux

duration
Filters by the **validity** of the reserved instance, which is the purchased usage period. For example, `31536000`.
Type: Integer
Unit: second
Required: no
Valid value: 31536000 (1 year)
                     * @return Filters zone
Filters by the availability zones in which the reserved instance can be purchased, such as `ap-guangzhou-1`.
Type: String
Required: no
Valid values: list of regions/availability zones

product-description
Filters by the platform description (operating system) of the reserved instance, such as `linux`.
Type: String
Required: no
Valid value: linux

duration
Filters by the **validity** of the reserved instance, which is the purchased usage period. For example, `31536000`.
Type: Integer
Unit: second
Required: no
Valid value: 31536000 (1 year)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置zone
Filters by the availability zones in which the reserved instance can be purchased, such as `ap-guangzhou-1`.
Type: String
Required: no
Valid values: list of regions/availability zones

product-description
Filters by the platform description (operating system) of the reserved instance, such as `linux`.
Type: String
Required: no
Valid value: linux

duration
Filters by the **validity** of the reserved instance, which is the purchased usage period. For example, `31536000`.
Type: Integer
Unit: second
Required: no
Valid value: 31536000 (1 year)
                     * @param _filters zone
Filters by the availability zones in which the reserved instance can be purchased, such as `ap-guangzhou-1`.
Type: String
Required: no
Valid values: list of regions/availability zones

product-description
Filters by the platform description (operating system) of the reserved instance, such as `linux`.
Type: String
Required: no
Valid value: linux

duration
Filters by the **validity** of the reserved instance, which is the purchased usage period. For example, `31536000`.
Type: Integer
Unit: second
Required: no
Valid value: 31536000 (1 year)
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * zone
Filters by the availability zones in which the reserved instance can be purchased, such as `ap-guangzhou-1`.
Type: String
Required: no
Valid values: list of regions/availability zones

product-description
Filters by the platform description (operating system) of the reserved instance, such as `linux`.
Type: String
Required: no
Valid value: linux

duration
Filters by the **validity** of the reserved instance, which is the purchased usage period. For example, `31536000`.
Type: Integer
Unit: second
Required: no
Valid value: 31536000 (1 year)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBERESERVEDINSTANCESCONFIGINFOSREQUEST_H_
