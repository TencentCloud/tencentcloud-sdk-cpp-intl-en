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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEREQUEST_H_

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
                * DescribeModule request structure.
                */
                class DescribeModuleRequest : public AbstractModel
                {
                public:
                    DescribeModuleRequest();
                    ~DescribeModuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter.
module-name - string - Required: no - (Filter) Filter by module name.
module-id - string - Required: no - (Filter) Filter by module ID.
image-id      String      Required: no      (Filter) Filter by image ID.
instance-family      String      Required: no      (Filter) Filter by model family.
security-group-id - string Required: no - (Filter) Filter by ID of the security group bound to the module.
Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     * @return Filters Filter.
module-name - string - Required: no - (Filter) Filter by module name.
module-id - string - Required: no - (Filter) Filter by module ID.
image-id      String      Required: no      (Filter) Filter by image ID.
instance-family      String      Required: no      (Filter) Filter by model family.
security-group-id - string Required: no - (Filter) Filter by ID of the security group bound to the module.
Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
module-name - string - Required: no - (Filter) Filter by module name.
module-id - string - Required: no - (Filter) Filter by module ID.
image-id      String      Required: no      (Filter) Filter by image ID.
instance-family      String      Required: no      (Filter) Filter by model family.
security-group-id - string Required: no - (Filter) Filter by ID of the security group bound to the module.
Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     * @param Filters Filter.
module-name - string - Required: no - (Filter) Filter by module name.
module-id - string - Required: no - (Filter) Filter by module ID.
image-id      String      Required: no      (Filter) Filter by image ID.
instance-family      String      Required: no      (Filter) Filter by model family.
security-group-id - string Required: no - (Filter) Filter by ID of the security group bound to the module.
Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API overview.
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API overview.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API overview.
                     * @param Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API overview.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API overview.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API overview.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API overview.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API overview.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specified sort by field. Currently, valid values are as follows:
instance-num: sort by the number of instances.
node-num: sort by the number of nodes.
timestamp: sort by instance creation time.
If this parameter is not specified, instances will be sorted by creation time by default.
                     * @return OrderByField Specified sort by field. Currently, valid values are as follows:
instance-num: sort by the number of instances.
node-num: sort by the number of nodes.
timestamp: sort by instance creation time.
If this parameter is not specified, instances will be sorted by creation time by default.
                     */
                    std::string GetOrderByField() const;

                    /**
                     * 设置Specified sort by field. Currently, valid values are as follows:
instance-num: sort by the number of instances.
node-num: sort by the number of nodes.
timestamp: sort by instance creation time.
If this parameter is not specified, instances will be sorted by creation time by default.
                     * @param OrderByField Specified sort by field. Currently, valid values are as follows:
instance-num: sort by the number of instances.
node-num: sort by the number of nodes.
timestamp: sort by instance creation time.
If this parameter is not specified, instances will be sorted by creation time by default.
                     */
                    void SetOrderByField(const std::string& _orderByField);

                    /**
                     * 判断参数 OrderByField 是否已赋值
                     * @return OrderByField 是否已赋值
                     */
                    bool OrderByFieldHasBeenSet() const;

                    /**
                     * 获取Sorting order. 0: descending; 1: ascending. If this parameter is not specified, it will be descending by default.
                     * @return OrderDirection Sorting order. 0: descending; 1: ascending. If this parameter is not specified, it will be descending by default.
                     */
                    int64_t GetOrderDirection() const;

                    /**
                     * 设置Sorting order. 0: descending; 1: ascending. If this parameter is not specified, it will be descending by default.
                     * @param OrderDirection Sorting order. 0: descending; 1: ascending. If this parameter is not specified, it will be descending by default.
                     */
                    void SetOrderDirection(const int64_t& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * Filter.
module-name - string - Required: no - (Filter) Filter by module name.
module-id - string - Required: no - (Filter) Filter by module ID.
image-id      String      Required: no      (Filter) Filter by image ID.
instance-family      String      Required: no      (Filter) Filter by model family.
security-group-id - string Required: no - (Filter) Filter by ID of the security group bound to the module.
Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section of the API overview.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section of the API overview.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specified sort by field. Currently, valid values are as follows:
instance-num: sort by the number of instances.
node-num: sort by the number of nodes.
timestamp: sort by instance creation time.
If this parameter is not specified, instances will be sorted by creation time by default.
                     */
                    std::string m_orderByField;
                    bool m_orderByFieldHasBeenSet;

                    /**
                     * Sorting order. 0: descending; 1: ascending. If this parameter is not specified, it will be descending by default.
                     */
                    int64_t m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMODULEREQUEST_H_
