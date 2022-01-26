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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceDealDetail request structure.
                */
                class DescribeInstanceDealDetailRequest : public AbstractModel
                {
                public:
                    DescribeInstanceDealDetailRequest();
                    ~DescribeInstanceDealDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of order IDs. It is the same as the response parameter `DealId` in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     * @return DealIds Array of order IDs. It is the same as the response parameter `DealId` in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> GetDealIds() const;

                    /**
                     * 设置Array of order IDs. It is the same as the response parameter `DealId` in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     * @param DealIds Array of order IDs. It is the same as the response parameter `DealId` in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     */
                    void SetDealIds(const std::vector<std::string>& _dealIds);

                    /**
                     * 判断参数 DealIds 是否已赋值
                     * @return DealIds 是否已赋值
                     */
                    bool DealIdsHasBeenSet() const;

                private:

                    /**
                     * Array of order IDs. It is the same as the response parameter `DealId` in the [CreateInstances](https://intl.cloud.tencent.com/document/api/239/20026?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_dealIds;
                    bool m_dealIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEDEALDETAILREQUEST_H_
