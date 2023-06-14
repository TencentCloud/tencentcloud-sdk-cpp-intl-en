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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CLIENTIPPLAYSUMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CLIENTIPPLAYSUMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Aggregated playback information of client IP.
                */
                class ClientIpPlaySumInfo : public AbstractModel
                {
                public:
                    ClientIpPlaySumInfo();
                    ~ClientIpPlaySumInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Client IP in dotted-decimal notation.
                     * @return ClientIp Client IP in dotted-decimal notation.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP in dotted-decimal notation.
                     * @param _clientIp Client IP in dotted-decimal notation.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取District where the client is located.
                     * @return Province District where the client is located.
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置District where the client is located.
                     * @param _province District where the client is located.
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取Total traffic.
                     * @return TotalFlux Total traffic.
                     * 
                     */
                    double GetTotalFlux() const;

                    /**
                     * 设置Total traffic.
                     * @param _totalFlux Total traffic.
                     * 
                     */
                    void SetTotalFlux(const double& _totalFlux);

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     * 
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取Total number of requests.
                     * @return TotalRequest Total number of requests.
                     * 
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 设置Total number of requests.
                     * @param _totalRequest Total number of requests.
                     * 
                     */
                    void SetTotalRequest(const uint64_t& _totalRequest);

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     * 
                     */
                    bool TotalRequestHasBeenSet() const;

                    /**
                     * 获取Total number of failed requests.
                     * @return TotalFailedRequest Total number of failed requests.
                     * 
                     */
                    uint64_t GetTotalFailedRequest() const;

                    /**
                     * 设置Total number of failed requests.
                     * @param _totalFailedRequest Total number of failed requests.
                     * 
                     */
                    void SetTotalFailedRequest(const uint64_t& _totalFailedRequest);

                    /**
                     * 判断参数 TotalFailedRequest 是否已赋值
                     * @return TotalFailedRequest 是否已赋值
                     * 
                     */
                    bool TotalFailedRequestHasBeenSet() const;

                    /**
                     * 获取Country/region where the client is located.
                     * @return CountryArea Country/region where the client is located.
                     * 
                     */
                    std::string GetCountryArea() const;

                    /**
                     * 设置Country/region where the client is located.
                     * @param _countryArea Country/region where the client is located.
                     * 
                     */
                    void SetCountryArea(const std::string& _countryArea);

                    /**
                     * 判断参数 CountryArea 是否已赋值
                     * @return CountryArea 是否已赋值
                     * 
                     */
                    bool CountryAreaHasBeenSet() const;

                private:

                    /**
                     * Client IP in dotted-decimal notation.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * District where the client is located.
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * Total traffic.
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * Total number of requests.
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                    /**
                     * Total number of failed requests.
                     */
                    uint64_t m_totalFailedRequest;
                    bool m_totalFailedRequestHasBeenSet;

                    /**
                     * Country/region where the client is located.
                     */
                    std::string m_countryArea;
                    bool m_countryAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CLIENTIPPLAYSUMINFO_H_
