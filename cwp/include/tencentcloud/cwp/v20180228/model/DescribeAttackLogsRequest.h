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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKLOGSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackLogs request structure.
                */
                class DescribeAttackLogsRequest : public AbstractModel
                {
                public:
                    DescribeAttackLogsRequest();
                    ~DescribeAttackLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returns. The maximum value is 100.
                     * @return Limit Number of returns. The maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns. The maximum value is 100.
                     * @param _limit Number of returns. The maximum value is 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Filter criteria
<li>HttpMethod - String - required: no - attack method (POST|GET)</li>
<li>DateRange - String - required: no - timeframe (store data from the past 3 months), such as the last month ["2019-11-17", "2019-12-17"]</li>
<li>VulType - String threat type - required: no</li>
<li>SrcIp - String attack source IP - required: no</li>
<li>DstIp - String attack target IP - required: no</li>
<li>SrcPort - String attack source port - required: no</li>
<li>DstPort - String attack target port - required: no</li>
                     * @return Filters Filter criteria
<li>HttpMethod - String - required: no - attack method (POST|GET)</li>
<li>DateRange - String - required: no - timeframe (store data from the past 3 months), such as the last month ["2019-11-17", "2019-12-17"]</li>
<li>VulType - String threat type - required: no</li>
<li>SrcIp - String attack source IP - required: no</li>
<li>DstIp - String attack target IP - required: no</li>
<li>SrcPort - String attack source port - required: no</li>
<li>DstPort - String attack target port - required: no</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>HttpMethod - String - required: no - attack method (POST|GET)</li>
<li>DateRange - String - required: no - timeframe (store data from the past 3 months), such as the last month ["2019-11-17", "2019-12-17"]</li>
<li>VulType - String threat type - required: no</li>
<li>SrcIp - String attack source IP - required: no</li>
<li>DstIp - String attack target IP - required: no</li>
<li>SrcPort - String attack source port - required: no</li>
<li>DstPort - String attack target port - required: no</li>
                     * @param _filters Filter criteria
<li>HttpMethod - String - required: no - attack method (POST|GET)</li>
<li>DateRange - String - required: no - timeframe (store data from the past 3 months), such as the last month ["2019-11-17", "2019-12-17"]</li>
<li>VulType - String threat type - required: no</li>
<li>SrcIp - String attack source IP - required: no</li>
<li>DstIp - String attack target IP - required: no</li>
<li>SrcPort - String attack source port - required: no</li>
<li>DstPort - String attack target port - required: no</li>
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
                     * 获取CWPP client ID
                     * @return Uuid CWPP client ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP client ID
                     * @param _uuid CWPP client ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取CVM machine ID
                     * @return Quuid CVM machine ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置CVM machine ID
                     * @param _quuid CVM machine ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * Number of returns. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria
<li>HttpMethod - String - required: no - attack method (POST|GET)</li>
<li>DateRange - String - required: no - timeframe (store data from the past 3 months), such as the last month ["2019-11-17", "2019-12-17"]</li>
<li>VulType - String threat type - required: no</li>
<li>SrcIp - String attack source IP - required: no</li>
<li>DstIp - String attack target IP - required: no</li>
<li>SrcPort - String attack source port - required: no</li>
<li>DstPort - String attack target port - required: no</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * CWPP client ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * CVM machine ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKLOGSREQUEST_H_
