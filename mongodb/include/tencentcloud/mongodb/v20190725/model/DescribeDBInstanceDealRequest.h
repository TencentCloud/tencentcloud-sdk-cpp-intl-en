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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceDeal request structure.
                */
                class DescribeDBInstanceDealRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceDealRequest();
                    ~DescribeDBInstanceDealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Order ID.
- Pay-as-you-go instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstanceHour](https://www.tencentcloud.comom/document/product/240/38570?from_cn_redirect=1) API.
- Yearly/monthly subscription instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstance](https://www.tencentcloud.comom/document/product/240/38571?from_cn_redirect=1) API.
                     * @return DealId Order ID.
- Pay-as-you-go instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstanceHour](https://www.tencentcloud.comom/document/product/240/38570?from_cn_redirect=1) API.
- Yearly/monthly subscription instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstance](https://www.tencentcloud.comom/document/product/240/38571?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetDealId() const;

                    /**
                     * 设置Order ID.
- Pay-as-you-go instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstanceHour](https://www.tencentcloud.comom/document/product/240/38570?from_cn_redirect=1) API.
- Yearly/monthly subscription instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstance](https://www.tencentcloud.comom/document/product/240/38571?from_cn_redirect=1) API.
                     * @param _dealId Order ID.
- Pay-as-you-go instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstanceHour](https://www.tencentcloud.comom/document/product/240/38570?from_cn_redirect=1) API.
- Yearly/monthly subscription instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstance](https://www.tencentcloud.comom/document/product/240/38571?from_cn_redirect=1) API.
                     * 
                     */
                    void SetDealId(const std::string& _dealId);

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * 
                     */
                    bool DealIdHasBeenSet() const;

                private:

                    /**
                     * Order ID.
- Pay-as-you-go instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstanceHour](https://www.tencentcloud.comom/document/product/240/38570?from_cn_redirect=1) API.
- Yearly/monthly subscription instance. It can be obtained through the output parameter **DealId** of the [CreateDBInstance](https://www.tencentcloud.comom/document/product/240/38571?from_cn_redirect=1) API.
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCEDEALREQUEST_H_
