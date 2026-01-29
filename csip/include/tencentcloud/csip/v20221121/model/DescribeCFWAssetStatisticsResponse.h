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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFWASSETSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFWASSETSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCFWAssetStatistics response structure.
                */
                class DescribeCFWAssetStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeCFWAssetStatisticsResponse();
                    ~DescribeCFWAssetStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of network assets
                     * @return NetworkTotal Total number of network assets
                     * 
                     */
                    int64_t GetNetworkTotal() const;

                    /**
                     * 判断参数 NetworkTotal 是否已赋值
                     * @return NetworkTotal 是否已赋值
                     * 
                     */
                    bool NetworkTotalHasBeenSet() const;

                    /**
                     * 获取Asset CLB Quantity
                     * @return ClbTotal Asset CLB Quantity
                     * 
                     */
                    int64_t GetClbTotal() const;

                    /**
                     * 判断参数 ClbTotal 是否已赋值
                     * @return ClbTotal 是否已赋值
                     * 
                     */
                    bool ClbTotalHasBeenSet() const;

                    /**
                     * 获取Number of NATs
                     * @return NatTotal Number of NATs
                     * 
                     */
                    int64_t GetNatTotal() const;

                    /**
                     * 判断参数 NatTotal 是否已赋值
                     * @return NatTotal 是否已赋值
                     * 
                     */
                    bool NatTotalHasBeenSet() const;

                    /**
                     * 获取Number of Public IP Addresses
                     * @return PublicAssetTotal Number of Public IP Addresses
                     * 
                     */
                    int64_t GetPublicAssetTotal() const;

                    /**
                     * 判断参数 PublicAssetTotal 是否已赋值
                     * @return PublicAssetTotal 是否已赋值
                     * 
                     */
                    bool PublicAssetTotalHasBeenSet() const;

                    /**
                     * 获取Number of hosts
                     * @return CVMAssetTotal Number of hosts
                     * 
                     */
                    int64_t GetCVMAssetTotal() const;

                    /**
                     * 判断参数 CVMAssetTotal 是否已赋值
                     * @return CVMAssetTotal 是否已赋值
                     * 
                     */
                    bool CVMAssetTotalHasBeenSet() const;

                    /**
                     * 获取Configuration risk.
                     * @return CFGTotal Configuration risk.
                     * 
                     */
                    int64_t GetCFGTotal() const;

                    /**
                     * 判断参数 CFGTotal 是否已赋值
                     * @return CFGTotal 是否已赋值
                     * 
                     */
                    bool CFGTotalHasBeenSet() const;

                    /**
                     * 获取Port risk.
                     * @return PortTotal Port risk.
                     * 
                     */
                    int64_t GetPortTotal() const;

                    /**
                     * 判断参数 PortTotal 是否已赋值
                     * @return PortTotal 是否已赋值
                     * 
                     */
                    bool PortTotalHasBeenSet() const;

                    /**
                     * 获取Content risk.
                     * @return WebsiteTotal Content risk.
                     * 
                     */
                    int64_t GetWebsiteTotal() const;

                    /**
                     * 判断参数 WebsiteTotal 是否已赋值
                     * @return WebsiteTotal 是否已赋值
                     * 
                     */
                    bool WebsiteTotalHasBeenSet() const;

                    /**
                     * 获取Risk service exposure.
                     * @return ServerTotal Risk service exposure.
                     * 
                     */
                    int64_t GetServerTotal() const;

                    /**
                     * 判断参数 ServerTotal 是否已赋值
                     * @return ServerTotal 是否已赋值
                     * 
                     */
                    bool ServerTotalHasBeenSet() const;

                    /**
                     * 获取Weak password risk.
                     * @return WeakPasswordTotal Weak password risk.
                     * 
                     */
                    int64_t GetWeakPasswordTotal() const;

                    /**
                     * 判断参数 WeakPasswordTotal 是否已赋值
                     * @return WeakPasswordTotal 是否已赋值
                     * 
                     */
                    bool WeakPasswordTotalHasBeenSet() const;

                    /**
                     * 获取Vulnerability risk.
                     * @return VULTotal Vulnerability risk.
                     * 
                     */
                    int64_t GetVULTotal() const;

                    /**
                     * 判断参数 VULTotal 是否已赋值
                     * @return VULTotal 是否已赋值
                     * 
                     */
                    bool VULTotalHasBeenSet() const;

                private:

                    /**
                     * Total number of network assets
                     */
                    int64_t m_networkTotal;
                    bool m_networkTotalHasBeenSet;

                    /**
                     * Asset CLB Quantity
                     */
                    int64_t m_clbTotal;
                    bool m_clbTotalHasBeenSet;

                    /**
                     * Number of NATs
                     */
                    int64_t m_natTotal;
                    bool m_natTotalHasBeenSet;

                    /**
                     * Number of Public IP Addresses
                     */
                    int64_t m_publicAssetTotal;
                    bool m_publicAssetTotalHasBeenSet;

                    /**
                     * Number of hosts
                     */
                    int64_t m_cVMAssetTotal;
                    bool m_cVMAssetTotalHasBeenSet;

                    /**
                     * Configuration risk.
                     */
                    int64_t m_cFGTotal;
                    bool m_cFGTotalHasBeenSet;

                    /**
                     * Port risk.
                     */
                    int64_t m_portTotal;
                    bool m_portTotalHasBeenSet;

                    /**
                     * Content risk.
                     */
                    int64_t m_websiteTotal;
                    bool m_websiteTotalHasBeenSet;

                    /**
                     * Risk service exposure.
                     */
                    int64_t m_serverTotal;
                    bool m_serverTotalHasBeenSet;

                    /**
                     * Weak password risk.
                     */
                    int64_t m_weakPasswordTotal;
                    bool m_weakPasswordTotalHasBeenSet;

                    /**
                     * Vulnerability risk.
                     */
                    int64_t m_vULTotal;
                    bool m_vULTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFWASSETSTATISTICSRESPONSE_H_
