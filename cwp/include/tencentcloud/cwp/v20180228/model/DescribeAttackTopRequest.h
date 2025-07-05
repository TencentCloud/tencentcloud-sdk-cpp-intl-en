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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTOPREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTOPREQUEST_H_

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
                * DescribeAttackTop request structure.
                */
                class DescribeAttackTopRequest : public AbstractModel
                {
                public:
                    DescribeAttackTopRequest();
                    ~DescribeAttackTopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取 Filter criteria
<li>BeginTime - String - start time, defaulted to last 7 days - required: no</li>
                     * @return Filters  Filter criteria
<li>BeginTime - String - start time, defaulted to last 7 days - required: no</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置 Filter criteria
<li>BeginTime - String - start time, defaulted to last 7 days - required: no</li>
                     * @param _filters  Filter criteria
<li>BeginTime - String - start time, defaulted to last 7 days - required: no</li>
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
                     *  Filter criteria
<li>BeginTime - String - start time, defaulted to last 7 days - required: no</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKTOPREQUEST_H_
