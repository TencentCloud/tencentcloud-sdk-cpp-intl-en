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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEORDERSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeOrders request structure.
                */
                class DescribeOrdersRequest : public AbstractModel
                {
                public:
                    DescribeOrdersRequest();
                    ~DescribeOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of long order IDs to be queried, which are returned by the APIs for creating, renewing, or scaling instances.
                     * @return DealNames List of long order IDs to be queried, which are returned by the APIs for creating, renewing, or scaling instances.
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置List of long order IDs to be queried, which are returned by the APIs for creating, renewing, or scaling instances.
                     * @param _dealNames List of long order IDs to be queried, which are returned by the APIs for creating, renewing, or scaling instances.
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
                     * List of long order IDs to be queried, which are returned by the APIs for creating, renewing, or scaling instances.
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEORDERSREQUEST_H_
