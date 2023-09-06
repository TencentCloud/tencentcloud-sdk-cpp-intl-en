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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECUSTOMACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECUSTOMACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/CustomAccount.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeCustomAccounts response structure.
                */
                class DescribeCustomAccountsResponse : public AbstractModel
                {
                public:
                    DescribeCustomAccountsResponse();
                    ~DescribeCustomAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of custom accounts
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CustomAccounts List of custom accounts
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CustomAccount> GetCustomAccounts() const;

                    /**
                     * 判断参数 CustomAccounts 是否已赋值
                     * @return CustomAccounts 是否已赋值
                     * 
                     */
                    bool CustomAccountsHasBeenSet() const;

                    /**
                     * 获取Number of custom accounts
                     * @return TotalCount Number of custom accounts
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of custom accounts
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<CustomAccount> m_customAccounts;
                    bool m_customAccountsHasBeenSet;

                    /**
                     * Number of custom accounts
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECUSTOMACCOUNTSRESPONSE_H_
