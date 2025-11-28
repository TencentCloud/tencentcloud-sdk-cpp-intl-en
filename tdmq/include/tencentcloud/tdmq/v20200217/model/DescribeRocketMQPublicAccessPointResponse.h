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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQPublicAccessPoint response structure.
                */
                class DescribeRocketMQPublicAccessPointResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessPointResponse();
                    ~DescribeRocketMQPublicAccessPointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Indicates the public network access point status.
0. enabled.
Closed.
2: enabled.
Disabling.
Modifying.
                     * @return Status Indicates the public network access point status.
0. enabled.
Closed.
2: enabled.
Disabling.
Modifying.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Payment status.
0 or unknown.
Normal.
Indicates arrears.
                     * @return PayStatus Payment status.
0 or unknown.
Normal.
Indicates arrears.
                     * 
                     */
                    int64_t GetPayStatus() const;

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     * 
                     */
                    bool PayStatusHasBeenSet() const;

                    /**
                     * 获取Endpoint address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessUrl Endpoint address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessUrl() const;

                    /**
                     * 判断参数 AccessUrl 是否已赋值
                     * @return AccessUrl 是否已赋值
                     * 
                     */
                    bool AccessUrlHasBeenSet() const;

                    /**
                     * 获取Security Access Rule List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules Security Access Rule List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PublicAccessRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bandwidth Bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Whether public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingFlow Whether public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                private:

                    /**
                     * Indicates the public network access point status.
0. enabled.
Closed.
2: enabled.
Disabling.
Modifying.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Payment status.
0 or unknown.
Normal.
Indicates arrears.
                     */
                    int64_t m_payStatus;
                    bool m_payStatusHasBeenSet;

                    /**
                     * Endpoint address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessUrl;
                    bool m_accessUrlHasBeenSet;

                    /**
                     * Security Access Rule List
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PublicAccessRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Bandwidth
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Payment mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether public network is billed by traffic.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTRESPONSE_H_
