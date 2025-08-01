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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAlarms request structure.
                */
                class DescribeAlarmsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmsRequest();
                    ~DescribeAlarmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取name
- Filter by **alarm policy name**
- Type: String
- Required: No

alarmId
- Filter by **alarm policy ID**
- Type: String
- Required: No

topicId
- Filter by **log topic ID**
- Type: String
- Required: No

enable
- Filter by **enablement status**
- Type: String
- Note: The valid values of `enable` include `1`, `t`, `T`, `TRUE`, `true`, `True`, `0`, `f`, `F`, `FALSE`, `false`, and `False`. If other values are entered, an "invalid parameter" error will be returned.
- Required: No

Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     * @return Filters name
- Filter by **alarm policy name**
- Type: String
- Required: No

alarmId
- Filter by **alarm policy ID**
- Type: String
- Required: No

topicId
- Filter by **log topic ID**
- Type: String
- Required: No

enable
- Filter by **enablement status**
- Type: String
- Note: The valid values of `enable` include `1`, `t`, `T`, `TRUE`, `true`, `True`, `0`, `f`, `F`, `FALSE`, `false`, and `False`. If other values are entered, an "invalid parameter" error will be returned.
- Required: No

Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置name
- Filter by **alarm policy name**
- Type: String
- Required: No

alarmId
- Filter by **alarm policy ID**
- Type: String
- Required: No

topicId
- Filter by **log topic ID**
- Type: String
- Required: No

enable
- Filter by **enablement status**
- Type: String
- Note: The valid values of `enable` include `1`, `t`, `T`, `TRUE`, `true`, `True`, `0`, `f`, `F`, `FALSE`, `false`, and `False`. If other values are entered, an "invalid parameter" error will be returned.
- Required: No

Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     * @param _filters name
- Filter by **alarm policy name**
- Type: String
- Required: No

alarmId
- Filter by **alarm policy ID**
- Type: String
- Required: No

topicId
- Filter by **log topic ID**
- Type: String
- Required: No

enable
- Filter by **enablement status**
- Type: String
- Note: The valid values of `enable` include `1`, `t`, `T`, `TRUE`, `true`, `True`, `0`, `f`, `F`, `FALSE`, `false`, and `False`. If other values are entered, an "invalid parameter" error will be returned.
- Required: No

Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
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
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
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
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
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
                     * name
- Filter by **alarm policy name**
- Type: String
- Required: No

alarmId
- Filter by **alarm policy ID**
- Type: String
- Required: No

topicId
- Filter by **log topic ID**
- Type: String
- Required: No

enable
- Filter by **enablement status**
- Type: String
- Note: The valid values of `enable` include `1`, `t`, `T`, `TRUE`, `true`, `True`, `0`, `f`, `F`, `FALSE`, `false`, and `False`. If other values are entered, an "invalid parameter" error will be returned.
- Required: No

Each request can contain up to 10 `Filters` and 5 `Filter.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSREQUEST_H_
