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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_IPDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_IPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * IP details
                */
                class IPDetail : public AbstractModel
                {
                public:
                    IPDetail();
                    ~IPDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP string
                     * @return IP IP string
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP string
                     * @param _iP IP string
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Network provider. `BGP`: Tencent Cloud BGP (default); `CMCC`: China Mobile; `CUCC`: China Unicom; `CTCC`: China Telecom.
                     * @return Provider Network provider. `BGP`: Tencent Cloud BGP (default); `CMCC`: China Mobile; `CUCC`: China Unicom; `CTCC`: China Telecom.
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置Network provider. `BGP`: Tencent Cloud BGP (default); `CMCC`: China Mobile; `CUCC`: China Unicom; `CTCC`: China Telecom.
                     * @param _provider Network provider. `BGP`: Tencent Cloud BGP (default); `CMCC`: China Mobile; `CUCC`: China Unicom; `CTCC`: China Telecom.
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取Max bandwidth
                     * @return Bandwidth Max bandwidth
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Max bandwidth
                     * @param _bandwidth Max bandwidth
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * IP string
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Network provider. `BGP`: Tencent Cloud BGP (default); `CMCC`: China Mobile; `CUCC`: China Unicom; `CTCC`: China Telecom.
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * Max bandwidth
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_IPDETAIL_H_
