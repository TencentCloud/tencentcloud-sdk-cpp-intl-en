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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCESBYDEALNAMEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCESBYDEALNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeResourcesByDealName request structure.
                */
                class DescribeResourcesByDealNameRequest : public AbstractModel
                {
                public:
                    DescribeResourcesByDealNameRequest();
                    ~DescribeResourcesByDealNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing order ID (if billing has not called back business delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, the business needs to retry the DescribeResourcesByDealName API until it succeeds).
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * @return DealName Billing order ID (if billing has not called back business delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, the business needs to retry the DescribeResourcesByDealName API until it succeeds).
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Billing order ID (if billing has not called back business delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, the business needs to retry the DescribeResourcesByDealName API until it succeeds).
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * @param _dealName Billing order ID (if billing has not called back business delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, the business needs to retry the DescribeResourcesByDealName API until it succeeds).
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取List of billing order IDs. You can query the resource information for several order IDs in a single query. If billing has not yet called back the business for delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, retry the DescribeResourcesByDealName API until it succeeds.
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * @return DealNames List of billing order IDs. You can query the resource information for several order IDs in a single query. If billing has not yet called back the business for delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, retry the DescribeResourcesByDealName API until it succeeds.
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置List of billing order IDs. You can query the resource information for several order IDs in a single query. If billing has not yet called back the business for delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, retry the DescribeResourcesByDealName API until it succeeds.
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * @param _dealNames List of billing order IDs. You can query the resource information for several order IDs in a single query. If billing has not yet called back the business for delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, retry the DescribeResourcesByDealName API until it succeeds.
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * Billing order ID (if billing has not called back business delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, the business needs to retry the DescribeResourcesByDealName API until it succeeds).
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * List of billing order IDs. You can query the resource information for several order IDs in a single query. If billing has not yet called back the business for delivery, the error code InvalidParameterValue.DealNameNotFound may occur. In this case, retry the DescribeResourcesByDealName API until it succeeds.
Enter at least one of DealName and DealNames. If both are entered, DealName takes precedence.
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCESBYDEALNAMEREQUEST_H_
