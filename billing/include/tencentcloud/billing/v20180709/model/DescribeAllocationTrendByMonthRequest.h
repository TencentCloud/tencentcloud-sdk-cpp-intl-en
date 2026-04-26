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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_

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
                * DescribeAllocationTrendByMonth request structure.
                */
                class DescribeAllocationTrendByMonthRequest : public AbstractModel
                {
                public:
                    DescribeAllocationTrendByMonthRequest();
                    ~DescribeAllocationTrendByMonthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Bill month, in the format of 2024-02, which is the current month by default if not provided
                     * @return Month Bill month, in the format of 2024-02, which is the current month by default if not provided
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month, in the format of 2024-02, which is the current month by default if not provided
                     * @param _month Bill month, in the format of 2024-02, which is the current month by default if not provided
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
                     * 获取Unique identifier of a cost allocation unit
                     * @return TreeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置Unique identifier of a cost allocation unit
                     * @param _treeNodeUniqKey Unique identifier of a cost allocation unit
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取Product code, used for filtering
                     * @return BusinessCode Product code, used for filtering
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code, used for filtering
                     * @param _businessCode Product code, used for filtering
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                private:

                    /**
                     * Bill month, in the format of 2024-02, which is the current month by default if not provided
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Unique identifier of a cost allocation unit
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * Product code, used for filtering
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTRENDBYMONTHREQUEST_H_
