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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAMASKSTRATEGIESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAMASKSTRATEGIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataMaskStrategies request structure.
                */
                class DescribeDataMaskStrategiesRequest : public AbstractModel
                {
                public:
                    DescribeDataMaskStrategiesRequest();
                    ~DescribeDataMaskStrategiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The pagination parameter, specifies the amount of data returned per page. it is 10 by default.
                     * @return Limit The pagination parameter, specifies the amount of data returned per page. it is 10 by default.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The pagination parameter, specifies the amount of data returned per page. it is 10 by default.
                     * @param _limit The pagination parameter, specifies the amount of data returned per page. it is 10 by default.
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
                     * 获取Pagination parameters. data offset. default: 0.
                     * @return Offset Pagination parameters. data offset. default: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameters. data offset. default: 0.
                     * @param _offset Pagination parameters. data offset. default: 0.
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
                     * 获取Filter field. strategy-name: search by policy name.
                     * @return Filters Filter field. strategy-name: search by policy name.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter field. strategy-name: search by policy name.
                     * @param _filters Filter field. strategy-name: search by policy name.
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
                     * The pagination parameter, specifies the amount of data returned per page. it is 10 by default.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination parameters. data offset. default: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter field. strategy-name: search by policy name.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAMASKSTRATEGIESREQUEST_H_
