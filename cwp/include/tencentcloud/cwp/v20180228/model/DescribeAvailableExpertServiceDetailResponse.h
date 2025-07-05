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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAVAILABLEEXPERTSERVICEDETAILRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAVAILABLEEXPERTSERVICEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ExpertServiceOrderInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAvailableExpertServiceDetail response structure.
                */
                class DescribeAvailableExpertServiceDetailResponse : public AbstractModel
                {
                public:
                    DescribeAvailableExpertServiceDetailResponse();
                    ~DescribeAvailableExpertServiceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Security manager order
                     * @return ExpertService Security manager order
                     * 
                     */
                    std::vector<ExpertServiceOrderInfo> GetExpertService() const;

                    /**
                     * 判断参数 ExpertService 是否已赋值
                     * @return ExpertService 是否已赋值
                     * 
                     */
                    bool ExpertServiceHasBeenSet() const;

                    /**
                     * 获取Number of available emergency responses
                     * @return EmergencyResponse Number of available emergency responses
                     * 
                     */
                    uint64_t GetEmergencyResponse() const;

                    /**
                     * 判断参数 EmergencyResponse 是否已赋值
                     * @return EmergencyResponse 是否已赋值
                     * 
                     */
                    bool EmergencyResponseHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProtectNet 
                     * 
                     */
                    uint64_t GetProtectNet() const;

                    /**
                     * 判断参数 ProtectNet 是否已赋值
                     * @return ProtectNet 是否已赋值
                     * 
                     */
                    bool ProtectNetHasBeenSet() const;

                    /**
                     * 获取Whether you purchased security manager
                     * @return ExpertServiceBuy Whether you purchased security manager
                     * 
                     */
                    bool GetExpertServiceBuy() const;

                    /**
                     * 判断参数 ExpertServiceBuy 是否已赋值
                     * @return ExpertServiceBuy 是否已赋值
                     * 
                     */
                    bool ExpertServiceBuyHasBeenSet() const;

                    /**
                     * 获取Whether you purchased emergency response
                     * @return EmergencyResponseBuy Whether you purchased emergency response
                     * 
                     */
                    bool GetEmergencyResponseBuy() const;

                    /**
                     * 判断参数 EmergencyResponseBuy 是否已赋值
                     * @return EmergencyResponseBuy 是否已赋值
                     * 
                     */
                    bool EmergencyResponseBuyHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProtectNetBuy 
                     * 
                     */
                    bool GetProtectNetBuy() const;

                    /**
                     * 判断参数 ProtectNetBuy 是否已赋值
                     * @return ProtectNetBuy 是否已赋值
                     * 
                     */
                    bool ProtectNetBuyHasBeenSet() const;

                private:

                    /**
                     * Security manager order
                     */
                    std::vector<ExpertServiceOrderInfo> m_expertService;
                    bool m_expertServiceHasBeenSet;

                    /**
                     * Number of available emergency responses
                     */
                    uint64_t m_emergencyResponse;
                    bool m_emergencyResponseHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_protectNet;
                    bool m_protectNetHasBeenSet;

                    /**
                     * Whether you purchased security manager
                     */
                    bool m_expertServiceBuy;
                    bool m_expertServiceBuyHasBeenSet;

                    /**
                     * Whether you purchased emergency response
                     */
                    bool m_emergencyResponseBuy;
                    bool m_emergencyResponseBuyHasBeenSet;

                    /**
                     * 
                     */
                    bool m_protectNetBuy;
                    bool m_protectNetBuyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAVAILABLEEXPERTSERVICEDETAILRESPONSE_H_
