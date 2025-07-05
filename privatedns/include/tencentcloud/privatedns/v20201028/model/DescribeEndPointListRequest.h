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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEENDPOINTLISTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEENDPOINTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeEndPointList request structure.
                */
                class DescribeEndPointListRequest : public AbstractModel
                {
                public:
                    DescribeEndPointListRequest();
                    ~DescribeEndPointListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset, starting from 0.
                     * @return Offset Pagination offset, starting from 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from 0.
                     * @param _offset Pagination offset, starting from 0.
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
                     * 获取Pagination limit. Maximum value: 100. Default value: 20.
                     * @return Limit Pagination limit. Maximum value: 100. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit. Maximum value: 100. Default value: 20.
                     * @param _limit Pagination limit. Maximum value: 100. Default value: 20.
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
                     * 获取Filter parameters. Valid values: EndPointName, EndPointId, EndPointServiceId, and EndPointVip.
                     * @return Filters Filter parameters. Valid values: EndPointName, EndPointId, EndPointServiceId, and EndPointVip.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter parameters. Valid values: EndPointName, EndPointId, EndPointServiceId, and EndPointVip.
                     * @param _filters Filter parameters. Valid values: EndPointName, EndPointId, EndPointServiceId, and EndPointVip.
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
                     * Pagination offset, starting from 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit. Maximum value: 100. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter parameters. Valid values: EndPointName, EndPointId, EndPointServiceId, and EndPointVip.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEENDPOINTLISTREQUEST_H_
