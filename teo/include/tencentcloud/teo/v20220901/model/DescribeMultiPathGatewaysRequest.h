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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeMultiPathGateways request structure.
                */
                class DescribeMultiPathGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeMultiPathGatewaysRequest();
                    ~DescribeMultiPathGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
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
                     * 获取Pagination limit. Default value: 20, maximum value: 1000.
                     * @return Limit Pagination limit. Default value: 20, maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit. Default value: 20, maximum value: 1000.
                     * @param _limit Pagination limit. Default value: 20, maximum value: 1000.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter fields for gateway list. If this parameter is left empty, return the current appid's all gateway information. detailed filter criteria:.
<Li>Gateway-Type: filter by gateway type. valid values: cloud and private, representing cloud gateway and private gateway respectively.</li>
<Li>Keyword: filter by keyword in the gateway name.</li>
                     * @return Filters Filter fields for gateway list. If this parameter is left empty, return the current appid's all gateway information. detailed filter criteria:.
<Li>Gateway-Type: filter by gateway type. valid values: cloud and private, representing cloud gateway and private gateway respectively.</li>
<Li>Keyword: filter by keyword in the gateway name.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter fields for gateway list. If this parameter is left empty, return the current appid's all gateway information. detailed filter criteria:.
<Li>Gateway-Type: filter by gateway type. valid values: cloud and private, representing cloud gateway and private gateway respectively.</li>
<Li>Keyword: filter by keyword in the gateway name.</li>
                     * @param _filters Filter fields for gateway list. If this parameter is left empty, return the current appid's all gateway information. detailed filter criteria:.
<Li>Gateway-Type: filter by gateway type. valid values: cloud and private, representing cloud gateway and private gateway respectively.</li>
<Li>Keyword: filter by keyword in the gateway name.</li>
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
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit. Default value: 20, maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter fields for gateway list. If this parameter is left empty, return the current appid's all gateway information. detailed filter criteria:.
<Li>Gateway-Type: filter by gateway type. valid values: cloud and private, representing cloud gateway and private gateway respectively.</li>
<Li>Keyword: filter by keyword in the gateway name.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSREQUEST_H_
