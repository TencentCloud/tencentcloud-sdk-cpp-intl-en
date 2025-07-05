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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIREPRICECREATEDIRECTCONNECTGATEWAYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIREPRICECREATEDIRECTCONNECTGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquirePriceCreateDirectConnectGateway response structure.
                */
                class InquirePriceCreateDirectConnectGatewayResponse : public AbstractModel
                {
                public:
                    InquirePriceCreateDirectConnectGatewayResponse();
                    ~InquirePriceCreateDirectConnectGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Standard access fee for a direct connect gateway
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalCost Standard access fee for a direct connect gateway
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCost() const;

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Actual access fee for a direct connect gateway
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RealTotalCost Actual access fee for a direct connect gateway
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRealTotalCost() const;

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                private:

                    /**
                     * Standard access fee for a direct connect gateway
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Actual access fee for a direct connect gateway
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIREPRICECREATEDIRECTCONNECTGATEWAYRESPONSE_H_
