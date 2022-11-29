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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * EdgeOne plan information
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Settlement currency. Values:
<li>`CNY`: Settled by Chinese RMB;</li>
<li>`USD`: Settled by US dollars.</li>
                     * @return Currency Settlement currency. Values:
<li>`CNY`: Settled by Chinese RMB;</li>
<li>`USD`: Settled by US dollars.</li>
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Settlement currency. Values:
<li>`CNY`: Settled by Chinese RMB;</li>
<li>`USD`: Settled by US dollars.</li>
                     * @param Currency Settlement currency. Values:
<li>`CNY`: Settled by Chinese RMB;</li>
<li>`USD`: Settled by US dollars.</li>
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Traffic quota of the plan. It includes the traffic for security acceleration, content acceleration and smart acceleration. Unit: byte.
                     * @return Flux Traffic quota of the plan. It includes the traffic for security acceleration, content acceleration and smart acceleration. Unit: byte.
                     */
                    uint64_t GetFlux() const;

                    /**
                     * 设置Traffic quota of the plan. It includes the traffic for security acceleration, content acceleration and smart acceleration. Unit: byte.
                     * @param Flux Traffic quota of the plan. It includes the traffic for security acceleration, content acceleration and smart acceleration. Unit: byte.
                     */
                    void SetFlux(const uint64_t& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取Settlement cycle. Values:
<li>`y`: Settled by year;</li>
<li>`m`: Settled by month;</li>
<li>`h`: Settled by hour;</li>
<li>`M`: Settled by minute;</li>
<li>`s`: Settled by second.</li>
                     * @return Frequency Settlement cycle. Values:
<li>`y`: Settled by year;</li>
<li>`m`: Settled by month;</li>
<li>`h`: Settled by hour;</li>
<li>`M`: Settled by minute;</li>
<li>`s`: Settled by second.</li>
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置Settlement cycle. Values:
<li>`y`: Settled by year;</li>
<li>`m`: Settled by month;</li>
<li>`h`: Settled by hour;</li>
<li>`M`: Settled by minute;</li>
<li>`s`: Settled by second.</li>
                     * @param Frequency Settlement cycle. Values:
<li>`y`: Settled by year;</li>
<li>`m`: Settled by month;</li>
<li>`h`: Settled by hour;</li>
<li>`M`: Settled by minute;</li>
<li>`s`: Settled by second.</li>
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取The plan option. Values:
<li>`sta`: Standard plan that supports content delivery network outside the Chinese mainland.</li>
<li>`sta_with_bot`: Standard plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`sta_cm`: Standard plan that supports content delivery network inside the Chinese mainland.</li>
<li>`sta_cm_with_bot`: Standard plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`sta`: Standard plan that supports content delivery network over the globe.</li>
<li>`sta_global_with_bot`: Standard plan that supports content delivery network over the globe and bot management.</li>
<li>`ent`: Enterprise plan that supports content delivery network outside the Chinese mainland.</li>
<li>`ent_with_bot`: Enterprise plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`ent_cm`: Enterprise plan that supports content delivery network inside the Chinese mainland.</li>
<li>`ent_cm_with_bot`: Enterprise plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`ent_global`: Enterprise plan that supports content delivery network over the globe.</li>
<li>`ent_global_with_bot`: Enterprise plan that supports content delivery network over the globe and bot management.</li>
                     * @return PlanType The plan option. Values:
<li>`sta`: Standard plan that supports content delivery network outside the Chinese mainland.</li>
<li>`sta_with_bot`: Standard plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`sta_cm`: Standard plan that supports content delivery network inside the Chinese mainland.</li>
<li>`sta_cm_with_bot`: Standard plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`sta`: Standard plan that supports content delivery network over the globe.</li>
<li>`sta_global_with_bot`: Standard plan that supports content delivery network over the globe and bot management.</li>
<li>`ent`: Enterprise plan that supports content delivery network outside the Chinese mainland.</li>
<li>`ent_with_bot`: Enterprise plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`ent_cm`: Enterprise plan that supports content delivery network inside the Chinese mainland.</li>
<li>`ent_cm_with_bot`: Enterprise plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`ent_global`: Enterprise plan that supports content delivery network over the globe.</li>
<li>`ent_global_with_bot`: Enterprise plan that supports content delivery network over the globe and bot management.</li>
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置The plan option. Values:
<li>`sta`: Standard plan that supports content delivery network outside the Chinese mainland.</li>
<li>`sta_with_bot`: Standard plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`sta_cm`: Standard plan that supports content delivery network inside the Chinese mainland.</li>
<li>`sta_cm_with_bot`: Standard plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`sta`: Standard plan that supports content delivery network over the globe.</li>
<li>`sta_global_with_bot`: Standard plan that supports content delivery network over the globe and bot management.</li>
<li>`ent`: Enterprise plan that supports content delivery network outside the Chinese mainland.</li>
<li>`ent_with_bot`: Enterprise plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`ent_cm`: Enterprise plan that supports content delivery network inside the Chinese mainland.</li>
<li>`ent_cm_with_bot`: Enterprise plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`ent_global`: Enterprise plan that supports content delivery network over the globe.</li>
<li>`ent_global_with_bot`: Enterprise plan that supports content delivery network over the globe and bot management.</li>
                     * @param PlanType The plan option. Values:
<li>`sta`: Standard plan that supports content delivery network outside the Chinese mainland.</li>
<li>`sta_with_bot`: Standard plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`sta_cm`: Standard plan that supports content delivery network inside the Chinese mainland.</li>
<li>`sta_cm_with_bot`: Standard plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`sta`: Standard plan that supports content delivery network over the globe.</li>
<li>`sta_global_with_bot`: Standard plan that supports content delivery network over the globe and bot management.</li>
<li>`ent`: Enterprise plan that supports content delivery network outside the Chinese mainland.</li>
<li>`ent_with_bot`: Enterprise plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`ent_cm`: Enterprise plan that supports content delivery network inside the Chinese mainland.</li>
<li>`ent_cm_with_bot`: Enterprise plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`ent_global`: Enterprise plan that supports content delivery network over the globe.</li>
<li>`ent_global_with_bot`: Enterprise plan that supports content delivery network over the globe and bot management.</li>
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取Plan price (in CNY fen/US cent). The price unit depends on the settlement currency.
                     * @return Price Plan price (in CNY fen/US cent). The price unit depends on the settlement currency.
                     */
                    double GetPrice() const;

                    /**
                     * 设置Plan price (in CNY fen/US cent). The price unit depends on the settlement currency.
                     * @param Price Plan price (in CNY fen/US cent). The price unit depends on the settlement currency.
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Quota on security acceleration requests
                     * @return Request Quota on security acceleration requests
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置Quota on security acceleration requests
                     * @param Request Quota on security acceleration requests
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取Number of sites to be bound to the plan
                     * @return SiteNumber Number of sites to be bound to the plan
                     */
                    uint64_t GetSiteNumber() const;

                    /**
                     * 设置Number of sites to be bound to the plan
                     * @param SiteNumber Number of sites to be bound to the plan
                     */
                    void SetSiteNumber(const uint64_t& _siteNumber);

                    /**
                     * 判断参数 SiteNumber 是否已赋值
                     * @return SiteNumber 是否已赋值
                     */
                    bool SiteNumberHasBeenSet() const;

                    /**
                     * 获取The acceleration region. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Global (Chinese mainland not included)</li>
<li>`global`: Global (Chinese mainland included)</li>
                     * @return Area The acceleration region. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Global (Chinese mainland not included)</li>
<li>`global`: Global (Chinese mainland included)</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The acceleration region. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Global (Chinese mainland not included)</li>
<li>`global`: Global (Chinese mainland included)</li>
                     * @param Area The acceleration region. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Global (Chinese mainland not included)</li>
<li>`global`: Global (Chinese mainland included)</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Settlement currency. Values:
<li>`CNY`: Settled by Chinese RMB;</li>
<li>`USD`: Settled by US dollars.</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Traffic quota of the plan. It includes the traffic for security acceleration, content acceleration and smart acceleration. Unit: byte.
                     */
                    uint64_t m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * Settlement cycle. Values:
<li>`y`: Settled by year;</li>
<li>`m`: Settled by month;</li>
<li>`h`: Settled by hour;</li>
<li>`M`: Settled by minute;</li>
<li>`s`: Settled by second.</li>
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * The plan option. Values:
<li>`sta`: Standard plan that supports content delivery network outside the Chinese mainland.</li>
<li>`sta_with_bot`: Standard plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`sta_cm`: Standard plan that supports content delivery network inside the Chinese mainland.</li>
<li>`sta_cm_with_bot`: Standard plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`sta`: Standard plan that supports content delivery network over the globe.</li>
<li>`sta_global_with_bot`: Standard plan that supports content delivery network over the globe and bot management.</li>
<li>`ent`: Enterprise plan that supports content delivery network outside the Chinese mainland.</li>
<li>`ent_with_bot`: Enterprise plan that supports content delivery network outside the Chinese mainland and bot management.</li>
<li>`ent_cm`: Enterprise plan that supports content delivery network inside the Chinese mainland.</li>
<li>`ent_cm_with_bot`: Enterprise plan that supports content delivery network inside the Chinese mainland and bot management.</li>
<li>`ent_global`: Enterprise plan that supports content delivery network over the globe.</li>
<li>`ent_global_with_bot`: Enterprise plan that supports content delivery network over the globe and bot management.</li>
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * Plan price (in CNY fen/US cent). The price unit depends on the settlement currency.
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Quota on security acceleration requests
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * Number of sites to be bound to the plan
                     */
                    uint64_t m_siteNumber;
                    bool m_siteNumberHasBeenSet;

                    /**
                     * The acceleration region. Values:
<li>`mainland`: Chinese mainland</li>
<li>`overseas`: Global (Chinese mainland not included)</li>
<li>`global`: Global (Chinese mainland included)</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_
