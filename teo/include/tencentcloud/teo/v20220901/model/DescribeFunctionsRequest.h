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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONSREQUEST_H_

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
                * DescribeFunctions request structure.
                */
                class DescribeFunctionsRequest : public AbstractModel
                {
                public:
                    DescribeFunctionsRequest();
                    ~DescribeFunctionsRequest() = default;
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
                     * 获取Filter by function ID list.
                     * @return FunctionIds Filter by function ID list.
                     * 
                     */
                    std::vector<std::string> GetFunctionIds() const;

                    /**
                     * 设置Filter by function ID list.
                     * @param _functionIds Filter by function ID list.
                     * 
                     */
                    void SetFunctionIds(const std::vector<std::string>& _functionIds);

                    /**
                     * 判断参数 FunctionIds 是否已赋值
                     * @return FunctionIds 是否已赋值
                     * 
                     */
                    bool FunctionIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>name: Fuzzy match by [function name].</li>
<li>remark: Fuzzy match by [function description].</li>
                     * @return Filters Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>name: Fuzzy match by [function name].</li>
<li>remark: Fuzzy match by [function description].</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>name: Fuzzy match by [function name].</li>
<li>remark: Fuzzy match by [function description].</li>
                     * @param _filters Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>name: Fuzzy match by [function name].</li>
<li>remark: Fuzzy match by [function description].</li>
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
                     * 获取The offset of paginated query. Default value: 0.
                     * @return Offset The offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset of paginated query. Default value: 0.
                     * @param _offset The offset of paginated query. Default value: 0.
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
                     * 获取Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * @return Limit Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * @param _limit Number limit of paginated query. Default value: 20. Maximum value: 200.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter by function ID list.
                     */
                    std::vector<std::string> m_functionIds;
                    bool m_functionIdsHasBeenSet;

                    /**
                     * Filter criteria list. There is an AND relationship between different criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>name: Fuzzy match by [function name].</li>
<li>remark: Fuzzy match by [function description].</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Maximum value: 200.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONSREQUEST_H_
