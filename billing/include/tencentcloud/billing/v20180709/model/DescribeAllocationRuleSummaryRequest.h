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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationRuleSummary request structure.
                */
                class DescribeAllocationRuleSummaryRequest : public AbstractModel
                {
                public:
                    DescribeAllocationRuleSummaryRequest();
                    ~DescribeAllocationRuleSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the data quantity per fetch. the maximum value is 1000.
                     * @return Limit Specifies the data quantity per fetch. the maximum value is 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Specifies the data quantity per fetch. the maximum value is 1000.
                     * @param _limit Specifies the data quantity per fetch. the maximum value is 1000.
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Month, which is the current month by default if not provided.
                     * @return Month Month, which is the current month by default if not provided.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Month, which is the current month by default if not provided.
                     * @param _month Month, which is the current month by default if not provided.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Public area policy type, for filtering.
Enumeration values are as follows:. 
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * @return Type Public area policy type, for filtering.
Enumeration values are as follows:. 
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Public area policy type, for filtering.
Enumeration values are as follows:. 
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * @param _type Public area policy type, for filtering.
Enumeration values are as follows:. 
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Sharing rule name or cost allocation unit name, used for fuzzy filter criteria.
                     * @return Name Sharing rule name or cost allocation unit name, used for fuzzy filter criteria.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Sharing rule name or cost allocation unit name, used for fuzzy filter criteria.
                     * @param _name Sharing rule name or cost allocation unit name, used for fuzzy filter criteria.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Specifies the data quantity per fetch. the maximum value is 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Month, which is the current month by default if not provided.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Public area policy type, for filtering.
Enumeration values are as follows:. 
1 - custom sharing proportion. 
2 - proportional allocation. 
3 - allocation by proportion.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Sharing rule name or cost allocation unit name, used for fuzzy filter criteria.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONRULESUMMARYREQUEST_H_
