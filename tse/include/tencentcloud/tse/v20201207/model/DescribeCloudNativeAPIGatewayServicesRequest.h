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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSERVICESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ListFilter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayServices request structure.
                */
                class DescribeCloudNativeAPIGatewayServicesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayServicesRequest();
                    ~DescribeCloudNativeAPIGatewayServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取gateway ID
                     * @return GatewayId gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置gateway ID
                     * @param _gatewayId gateway ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Number of tables in the list
                     * @return Limit Number of tables in the list
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of tables in the list
                     * @param _limit Number of tables in the list
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
                     * 获取List offset
                     * @return Offset List offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置List offset
                     * @param _offset List offset
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
                     * 获取Filter criteria. Multiple filter conditions are in an AND relationship with each other. Support name and upstreamType.
                     * @return Filters Filter criteria. Multiple filter conditions are in an AND relationship with each other. Support name and upstreamType.
                     * 
                     */
                    std::vector<ListFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Multiple filter conditions are in an AND relationship with each other. Support name and upstreamType.
                     * @param _filters Filter criteria. Multiple filter conditions are in an AND relationship with each other. Support name and upstreamType.
                     * 
                     */
                    void SetFilters(const std::vector<ListFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Number of tables in the list
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * List offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria. Multiple filter conditions are in an AND relationship with each other. Support name and upstreamType.
                     */
                    std::vector<ListFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYSERVICESREQUEST_H_
