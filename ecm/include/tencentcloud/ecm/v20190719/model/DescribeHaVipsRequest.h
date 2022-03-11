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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEHAVIPSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEHAVIPSREQUEST_H_

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
                * DescribeHaVips request structure.
                */
                class DescribeHaVipsRequest : public AbstractModel
                {
                public:
                    DescribeHaVipsRequest();
                    ~DescribeHaVipsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of unique HAVIP IDs, such as `havip-9o233uri`.
                     * @return HaVipIds Array of unique HAVIP IDs, such as `havip-9o233uri`.
                     */
                    std::vector<std::string> GetHaVipIds() const;

                    /**
                     * 设置Array of unique HAVIP IDs, such as `havip-9o233uri`.
                     * @param HaVipIds Array of unique HAVIP IDs, such as `havip-9o233uri`.
                     */
                    void SetHaVipIds(const std::vector<std::string>& _haVipIds);

                    /**
                     * 判断参数 HaVipIds 是否已赋值
                     * @return HaVipIds 是否已赋值
                     */
                    bool HaVipIdsHasBeenSet() const;

                    /**
                     * 获取Filter. `HaVipIds` and `Filters` cannot be specified at the same time.
havip-id - String - Unique HAVIP ID, such as `havip-9o233uri`.
havip-name - String - HAVIP name.
vpc-id - String - VPC ID of the HAVIP.
subnet-id - String - Subnet ID of the HAVIP.
                     * @return Filters Filter. `HaVipIds` and `Filters` cannot be specified at the same time.
havip-id - String - Unique HAVIP ID, such as `havip-9o233uri`.
havip-name - String - HAVIP name.
vpc-id - String - VPC ID of the HAVIP.
subnet-id - String - Subnet ID of the HAVIP.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `HaVipIds` and `Filters` cannot be specified at the same time.
havip-id - String - Unique HAVIP ID, such as `havip-9o233uri`.
havip-name - String - HAVIP name.
vpc-id - String - VPC ID of the HAVIP.
subnet-id - String - Subnet ID of the HAVIP.
                     * @param Filters Filter. `HaVipIds` and `Filters` cannot be specified at the same time.
havip-id - String - Unique HAVIP ID, such as `havip-9o233uri`.
havip-name - String - HAVIP name.
vpc-id - String - VPC ID of the HAVIP.
subnet-id - String - Subnet ID of the HAVIP.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取ECM region. If this parameter is left empty, it will indicate all regions.
                     * @return EcmRegion ECM region. If this parameter is left empty, it will indicate all regions.
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region. If this parameter is left empty, it will indicate all regions.
                     * @param EcmRegion ECM region. If this parameter is left empty, it will indicate all regions.
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * Array of unique HAVIP IDs, such as `havip-9o233uri`.
                     */
                    std::vector<std::string> m_haVipIds;
                    bool m_haVipIdsHasBeenSet;

                    /**
                     * Filter. `HaVipIds` and `Filters` cannot be specified at the same time.
havip-id - String - Unique HAVIP ID, such as `havip-9o233uri`.
havip-name - String - HAVIP name.
vpc-id - String - VPC ID of the HAVIP.
subnet-id - String - Subnet ID of the HAVIP.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ECM region. If this parameter is left empty, it will indicate all regions.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEHAVIPSREQUEST_H_
