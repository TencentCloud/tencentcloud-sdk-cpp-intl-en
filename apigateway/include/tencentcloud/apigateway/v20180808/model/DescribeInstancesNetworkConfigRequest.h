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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEINSTANCESNETWORKCONFIGREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEINSTANCESNETWORKCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeInstancesNetworkConfig request structure.
                */
                class DescribeInstancesNetworkConfigRequest : public AbstractModel
                {
                public:
                    DescribeInstancesNetworkConfigRequest();
                    ~DescribeInstancesNetworkConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returns, with a default value of 20 and a maximum value of 100.

                     * @return Limit Number of returns, with a default value of 20 and a maximum value of 100.

                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns, with a default value of 20 and a maximum value of 100.

                     * @param _limit Number of returns, with a default value of 20 and a maximum value of 100.

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
                     * 获取Offset, which is 0 by default.

                     * @return Offset Offset, which is 0 by default.

                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.

                     * @param _offset Offset, which is 0 by default.

                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Number of returns, with a default value of 20 and a maximum value of 100.

                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEINSTANCESNETWORKCONFIGREQUEST_H_
