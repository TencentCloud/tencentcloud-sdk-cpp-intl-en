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
                     * 获取Order ID. (If the cluster is not delivered yet, the `DescribeResourcesByDealName` API may return the `InvalidParameterValue.DealNameNotFound` error. Please call the API again until it succeeds.)
                     * @return DealName Order ID. (If the cluster is not delivered yet, the `DescribeResourcesByDealName` API may return the `InvalidParameterValue.DealNameNotFound` error. Please call the API again until it succeeds.)
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order ID. (If the cluster is not delivered yet, the `DescribeResourcesByDealName` API may return the `InvalidParameterValue.DealNameNotFound` error. Please call the API again until it succeeds.)
                     * @param DealName Order ID. (If the cluster is not delivered yet, the `DescribeResourcesByDealName` API may return the `InvalidParameterValue.DealNameNotFound` error. Please call the API again until it succeeds.)
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * Order ID. (If the cluster is not delivered yet, the `DescribeResourcesByDealName` API may return the `InvalidParameterValue.DealNameNotFound` error. Please call the API again until it succeeds.)
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCESBYDEALNAMEREQUEST_H_
