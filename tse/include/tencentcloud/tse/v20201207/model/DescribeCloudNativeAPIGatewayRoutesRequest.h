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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_

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
                * DescribeCloudNativeAPIGatewayRoutes request structure.
                */
                class DescribeCloudNativeAPIGatewayRoutesRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayRoutesRequest();
                    ~DescribeCloudNativeAPIGatewayRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
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
                     * 获取Pagination query limit count [0,1000], default value 0
                     * @return Limit Pagination query limit count [0,1000], default value 0
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination query limit count [0,1000], default value 0
                     * @param _limit Pagination query limit count [0,1000], default value 0
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
                     * 获取Page offset amount for pagination. Default value: 0
                     * @return Offset Page offset amount for pagination. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset amount for pagination. Default value: 0
                     * @param _offset Page offset amount for pagination. Default value: 0
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
                     * 获取Service name, exact match
                     * @return ServiceName Service name, exact match
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name, exact match
                     * @param _serviceName Service name, exact match
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Route name, exact match
                     * @return RouteName Route name, exact match
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置Route name, exact match
                     * @param _routeName Route name, exact match
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取Filter conditions. Multiple filter conditions have an AND relationship with each other, supporting name, path, host, method, service, and protocol.
                     * @return Filters Filter conditions. Multiple filter conditions have an AND relationship with each other, supporting name, path, host, method, service, and protocol.
                     * 
                     */
                    std::vector<ListFilter> GetFilters() const;

                    /**
                     * 设置Filter conditions. Multiple filter conditions have an AND relationship with each other, supporting name, path, host, method, service, and protocol.
                     * @param _filters Filter conditions. Multiple filter conditions have an AND relationship with each other, supporting name, path, host, method, service, and protocol.
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
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Pagination query limit count [0,1000], default value 0
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page offset amount for pagination. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Service name, exact match
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Route name, exact match
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * Filter conditions. Multiple filter conditions have an AND relationship with each other, supporting name, path, host, method, service, and protocol.
                     */
                    std::vector<ListFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYROUTESREQUEST_H_
