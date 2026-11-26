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
                * edgeone package information
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Settlement currency type. Valid values:
<li> CNY: settlement in RMB; </li>
<li> USD: Dollar settlement.</li>
                     * @return Currency Settlement currency type. Valid values:
<li> CNY: settlement in RMB; </li>
<li> USD: Dollar settlement.</li>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Settlement currency type. Valid values:
<li> CNY: settlement in RMB; </li>
<li> USD: Dollar settlement.</li>
                     * @param _currency Settlement currency type. Valid values:
<li> CNY: settlement in RMB; </li>
<li> USD: Dollar settlement.</li>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取Total traffic included in the package. This value is the sum of security acceleration traffic, content acceleration traffic, and smart acceleration traffic (unit: byte).
                     * @return Flux Total traffic included in the package. This value is the sum of security acceleration traffic, content acceleration traffic, and smart acceleration traffic (unit: byte).
                     * 
                     */
                    uint64_t GetFlux() const;

                    /**
                     * 设置Total traffic included in the package. This value is the sum of security acceleration traffic, content acceleration traffic, and smart acceleration traffic (unit: byte).
                     * @param _flux Total traffic included in the package. This value is the sum of security acceleration traffic, content acceleration traffic, and smart acceleration traffic (unit: byte).
                     * 
                     */
                    void SetFlux(const uint64_t& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     * 
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取Billing cycle. Valid values:
<li> y: settle by year; </li>
<li> m: monthly settlement;</li>
<li> h: settled by hour; </li>
<li> M: settle by minute;</li>
<li> s: settle by second. </li>
                     * @return Frequency Billing cycle. Valid values:
<li> y: settle by year; </li>
<li> m: monthly settlement;</li>
<li> h: settled by hour; </li>
<li> M: settle by minute;</li>
<li> s: settle by second. </li>
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置Billing cycle. Valid values:
<li> y: settle by year; </li>
<li> m: monthly settlement;</li>
<li> h: settled by hour; </li>
<li> M: settle by minute;</li>
<li> s: settle by second. </li>
                     * @param _frequency Billing cycle. Valid values:
<li> y: settle by year; </li>
<li> m: monthly settlement;</li>
<li> h: settled by hour; </li>
<li> M: settle by minute;</li>
<li> s: settle by second. </li>
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Package type. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan for Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan for global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan of the global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Global content delivery network (excluding Chinese mainland) enterprise package with bundled bot management;</li>
<li> ent_cm: Enterprise edition package for CDN in Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise package with bundled bot management in the Chinese mainland;</li>
<li> ent_global: global content delivery network (including Chinese mainland) enterprise package; </li>
<li> ent_global_with_bot: Global content delivery network (including Chinese mainland) enterprise package with bundled bot management.</li>
                     * @return PlanType Package type. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan for Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan for global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan of the global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Global content delivery network (excluding Chinese mainland) enterprise package with bundled bot management;</li>
<li> ent_cm: Enterprise edition package for CDN in Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise package with bundled bot management in the Chinese mainland;</li>
<li> ent_global: global content delivery network (including Chinese mainland) enterprise package; </li>
<li> ent_global_with_bot: Global content delivery network (including Chinese mainland) enterprise package with bundled bot management.</li>
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置Package type. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan for Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan for global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan of the global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Global content delivery network (excluding Chinese mainland) enterprise package with bundled bot management;</li>
<li> ent_cm: Enterprise edition package for CDN in Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise package with bundled bot management in the Chinese mainland;</li>
<li> ent_global: global content delivery network (including Chinese mainland) enterprise package; </li>
<li> ent_global_with_bot: Global content delivery network (including Chinese mainland) enterprise package with bundled bot management.</li>
                     * @param _planType Package type. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan for Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan for global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan of the global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Global content delivery network (excluding Chinese mainland) enterprise package with bundled bot management;</li>
<li> ent_cm: Enterprise edition package for CDN in Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise package with bundled bot management in the Chinese mainland;</li>
<li> ent_global: global content delivery network (including Chinese mainland) enterprise package; </li>
<li> ent_global_with_bot: Global content delivery network (including Chinese mainland) enterprise package with bundled bot management.</li>
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取Package pricing (unit: cent).
                     * @return Price Package pricing (unit: cent).
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置Package pricing (unit: cent).
                     * @param _price Package pricing (unit: cent).
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Request count included in the package. This is the security acceleration request count. (Unit: count).
                     * @return Request Request count included in the package. This is the security acceleration request count. (Unit: count).
                     * 
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置Request count included in the package. This is the security acceleration request count. (Unit: count).
                     * @param _request Request count included in the package. This is the security acceleration request count. (Unit: count).
                     * 
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取Number of sites that can be bound to the package.
                     * @return SiteNumber Number of sites that can be bound to the package.
                     * 
                     */
                    uint64_t GetSiteNumber() const;

                    /**
                     * 设置Number of sites that can be bound to the package.
                     * @param _siteNumber Number of sites that can be bound to the package.
                     * 
                     */
                    void SetSiteNumber(const uint64_t& _siteNumber);

                    /**
                     * 判断参数 SiteNumber 是否已赋值
                     * @return SiteNumber 是否已赋值
                     * 
                     */
                    bool SiteNumberHasBeenSet() const;

                    /**
                     * 获取Acceleration region type of the package. Valid values:
<li>mainland: Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland);</li>
<li> global: worldwide (including Chinese mainland). </li>
                     * @return Area Acceleration region type of the package. Valid values:
<li>mainland: Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland);</li>
<li> global: worldwide (including Chinese mainland). </li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region type of the package. Valid values:
<li>mainland: Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland);</li>
<li> global: worldwide (including Chinese mainland). </li>
                     * @param _area Acceleration region type of the package. Valid values:
<li>mainland: Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland);</li>
<li> global: worldwide (including Chinese mainland). </li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Settlement currency type. Valid values:
<li> CNY: settlement in RMB; </li>
<li> USD: Dollar settlement.</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Total traffic included in the package. This value is the sum of security acceleration traffic, content acceleration traffic, and smart acceleration traffic (unit: byte).
                     */
                    uint64_t m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * Billing cycle. Valid values:
<li> y: settle by year; </li>
<li> m: monthly settlement;</li>
<li> h: settled by hour; </li>
<li> M: settle by minute;</li>
<li> s: settle by second. </li>
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Package type. Valid values:
<li> sta: Global content delivery network (excluding Chinese mainland) Standard Edition Plan; </li>
<li> sta_with_bot: Standard Edition Plan of the global content delivery network (excluding Chinese mainland) with bundled bot management;</li>
<li> sta_cm: CDN Standard Edition Plan for the Chinese mainland; </li>
<li> sta_cm_with_bot: CDN Standard Edition Plan for Chinese mainland with bundled bot management;</li>
<li> sta_global: Global content delivery network (including Chinese mainland) Standard Edition Plan; </li>
<li> sta_global_with_bot: Standard Edition Plan for global content delivery network (including Chinese mainland) with bundled bot management;</li>
<li> ent: Enterprise plan of the global content delivery network (excluding Chinese mainland); </li>
<li> ent_with_bot: Global content delivery network (excluding Chinese mainland) enterprise package with bundled bot management;</li>
<li> ent_cm: Enterprise edition package for CDN in Chinese mainland; </li>
<li> ent_cm_with_bot: CDN enterprise package with bundled bot management in the Chinese mainland;</li>
<li> ent_global: global content delivery network (including Chinese mainland) enterprise package; </li>
<li> ent_global_with_bot: Global content delivery network (including Chinese mainland) enterprise package with bundled bot management.</li>
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * Package pricing (unit: cent).
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Request count included in the package. This is the security acceleration request count. (Unit: count).
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * Number of sites that can be bound to the package.
                     */
                    uint64_t m_siteNumber;
                    bool m_siteNumberHasBeenSet;

                    /**
                     * Acceleration region type of the package. Valid values:
<li>mainland: Chinese mainland;</li>
<li>overseas: global (excluding the Chinese mainland);</li>
<li> global: worldwide (including Chinese mainland). </li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_
