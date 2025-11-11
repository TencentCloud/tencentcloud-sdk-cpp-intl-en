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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBESECURITYGROUPROUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBESECURITYGROUPROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceRoute.h>
#include <tencentcloud/ckafka/v20190819/model/RouteFilter.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupRoutes request structure.
                */
                class DescribeSecurityGroupRoutesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupRoutesRequest();
                    ~DescribeSecurityGroupRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the routing information.
                     * @return InstanceRoute Specifies the routing information.
                     * 
                     */
                    InstanceRoute GetInstanceRoute() const;

                    /**
                     * 设置Specifies the routing information.
                     * @param _instanceRoute Specifies the routing information.
                     * 
                     */
                    void SetInstanceRoute(const InstanceRoute& _instanceRoute);

                    /**
                     * 判断参数 InstanceRoute 是否已赋值
                     * @return InstanceRoute 是否已赋值
                     * 
                     */
                    bool InstanceRouteHasBeenSet() const;

                    /**
                     * 获取Filter.
                     * @return Filters Filter.
                     * 
                     */
                    std::vector<RouteFilter> GetFilters() const;

                    /**
                     * 设置Filter.
                     * @param _filters Filter.
                     * 
                     */
                    void SetFilters(const std::vector<RouteFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Specifies the pagination Offset. default is 0.
                     * @return Offset Specifies the pagination Offset. default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the pagination Offset. default is 0.
                     * @param _offset Specifies the pagination Offset. default is 0.
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
                     * 获取Pagination Limit. default: 20.
                     * @return Limit Pagination Limit. default: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination Limit. default: 20.
                     * @param _limit Pagination Limit. default: 20.
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
                     * 获取Keyword. specifies fuzzy search by instance id, instance name, or vip.
                     * @return SearchWord Keyword. specifies fuzzy search by instance id, instance name, or vip.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Keyword. specifies fuzzy search by instance id, instance name, or vip.
                     * @param _searchWord Keyword. specifies fuzzy search by instance id, instance name, or vip.
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * Specifies the routing information.
                     */
                    InstanceRoute m_instanceRoute;
                    bool m_instanceRouteHasBeenSet;

                    /**
                     * Filter.
                     */
                    std::vector<RouteFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Specifies the pagination Offset. default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination Limit. default: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Keyword. specifies fuzzy search by instance id, instance name, or vip.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBESECURITYGROUPROUTESREQUEST_H_
