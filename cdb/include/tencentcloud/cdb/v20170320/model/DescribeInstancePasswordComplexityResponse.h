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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEPASSWORDCOMPLEXITYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEPASSWORDCOMPLEXITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParameterDetail.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstancePasswordComplexity response structure.
                */
                class DescribeInstancePasswordComplexityResponse : public AbstractModel
                {
                public:
                    DescribeInstancePasswordComplexityResponse();
                    ~DescribeInstancePasswordComplexityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of password complexity related parameters
                     * @return TotalCount Total number of password complexity related parameters
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Password complexity parameter details. The policy value ranges from "" to "LOW" or "MEDIUM". Empty or LOW means password complexity is off. MEDIUM means password complexity is on. When the policy parameter value is MEDIUM, the following parameters take effect. length: value ranges from 8 to 64, means the minimum number of characters. mixed_case_count: value ranges from 1 to 16, means the minimum count of uppercase and lowercase letters. number_count: value ranges from 1 to 16, means the minimum count of numeric characters. special_char_count: value ranges from 1 to 16, means the minimum count of special characters.
                     * @return Items Password complexity parameter details. The policy value ranges from "" to "LOW" or "MEDIUM". Empty or LOW means password complexity is off. MEDIUM means password complexity is on. When the policy parameter value is MEDIUM, the following parameters take effect. length: value ranges from 8 to 64, means the minimum number of characters. mixed_case_count: value ranges from 1 to 16, means the minimum count of uppercase and lowercase letters. number_count: value ranges from 1 to 16, means the minimum count of numeric characters. special_char_count: value ranges from 1 to 16, means the minimum count of special characters.
                     * 
                     */
                    std::vector<ParameterDetail> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Total number of password complexity related parameters
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Password complexity parameter details. The policy value ranges from "" to "LOW" or "MEDIUM". Empty or LOW means password complexity is off. MEDIUM means password complexity is on. When the policy parameter value is MEDIUM, the following parameters take effect. length: value ranges from 8 to 64, means the minimum number of characters. mixed_case_count: value ranges from 1 to 16, means the minimum count of uppercase and lowercase letters. number_count: value ranges from 1 to 16, means the minimum count of numeric characters. special_char_count: value ranges from 1 to 16, means the minimum count of special characters.
                     */
                    std::vector<ParameterDetail> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEPASSWORDCOMPLEXITYRESPONSE_H_
