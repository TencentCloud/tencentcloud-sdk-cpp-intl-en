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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SSAICONF_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SSAICONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/ConfigAliasesInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * SSAI ad insertion configuration.
                */
                class SSAIConf : public AbstractModel
                {
                public:
                    SSAIConf();
                    ~SSAIConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advertising Decision Server URL (ADS).
                     * @return AdsUrl Advertising Decision Server URL (ADS).
                     * 
                     */
                    std::string GetAdsUrl() const;

                    /**
                     * 设置Advertising Decision Server URL (ADS).
                     * @param _adsUrl Advertising Decision Server URL (ADS).
                     * 
                     */
                    void SetAdsUrl(const std::string& _adsUrl);

                    /**
                     * 判断参数 AdsUrl 是否已赋值
                     * @return AdsUrl 是否已赋值
                     * 
                     */
                    bool AdsUrlHasBeenSet() const;

                    /**
                     * 获取Parameter configuration.
                     * @return ConfigAliases Parameter configuration.
                     * 
                     */
                    std::vector<ConfigAliasesInfo> GetConfigAliases() const;

                    /**
                     * 设置Parameter configuration.
                     * @param _configAliases Parameter configuration.
                     * 
                     */
                    void SetConfigAliases(const std::vector<ConfigAliasesInfo>& _configAliases);

                    /**
                     * 判断参数 ConfigAliases 是否已赋值
                     * @return ConfigAliases 是否已赋值
                     * 
                     */
                    bool ConfigAliasesHasBeenSet() const;

                    /**
                     * 获取Whether to enable transparent transmission of advertising tags.
                     * @return AdMarkerPassthrough Whether to enable transparent transmission of advertising tags.
                     * 
                     */
                    bool GetAdMarkerPassthrough() const;

                    /**
                     * 设置Whether to enable transparent transmission of advertising tags.
                     * @param _adMarkerPassthrough Whether to enable transparent transmission of advertising tags.
                     * 
                     */
                    void SetAdMarkerPassthrough(const bool& _adMarkerPassthrough);

                    /**
                     * 判断参数 AdMarkerPassthrough 是否已赋值
                     * @return AdMarkerPassthrough 是否已赋值
                     * 
                     */
                    bool AdMarkerPassthroughHasBeenSet() const;

                    /**
                     * 获取How to process tags in advertisements, optional values: [1,2] 
1: Process all SCTE-35 type tags - all (default) 
2: SCTE-35enhanced, parse some types.
                     * @return SCTE35AdType How to process tags in advertisements, optional values: [1,2] 
1: Process all SCTE-35 type tags - all (default) 
2: SCTE-35enhanced, parse some types.
                     * 
                     */
                    uint64_t GetSCTE35AdType() const;

                    /**
                     * 设置How to process tags in advertisements, optional values: [1,2] 
1: Process all SCTE-35 type tags - all (default) 
2: SCTE-35enhanced, parse some types.
                     * @param _sCTE35AdType How to process tags in advertisements, optional values: [1,2] 
1: Process all SCTE-35 type tags - all (default) 
2: SCTE-35enhanced, parse some types.
                     * 
                     */
                    void SetSCTE35AdType(const uint64_t& _sCTE35AdType);

                    /**
                     * 判断参数 SCTE35AdType 是否已赋值
                     * @return SCTE35AdType 是否已赋值
                     * 
                     */
                    bool SCTE35AdTypeHasBeenSet() const;

                    /**
                     * 获取Default advertising url.
                     * @return SlateAd Default advertising url.
                     * 
                     */
                    std::string GetSlateAd() const;

                    /**
                     * 设置Default advertising url.
                     * @param _slateAd Default advertising url.
                     * 
                     */
                    void SetSlateAd(const std::string& _slateAd);

                    /**
                     * 判断参数 SlateAd 是否已赋值
                     * @return SlateAd 是否已赋值
                     * 
                     */
                    bool SlateAdHasBeenSet() const;

                    /**
                     * 获取Maximum unfilled duration, unit: seconds.
                     * @return Threshold Maximum unfilled duration, unit: seconds.
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置Maximum unfilled duration, unit: seconds.
                     * @param _threshold Maximum unfilled duration, unit: seconds.
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取Whether to enable mpd location, true corresponds to enable, false corresponds to disable.
                     * @return DashMPDLocation Whether to enable mpd location, true corresponds to enable, false corresponds to disable.
                     * 
                     */
                    bool GetDashMPDLocation() const;

                    /**
                     * 设置Whether to enable mpd location, true corresponds to enable, false corresponds to disable.
                     * @param _dashMPDLocation Whether to enable mpd location, true corresponds to enable, false corresponds to disable.
                     * 
                     */
                    void SetDashMPDLocation(const bool& _dashMPDLocation);

                    /**
                     * 判断参数 DashMPDLocation 是否已赋值
                     * @return DashMPDLocation 是否已赋值
                     * 
                     */
                    bool DashMPDLocationHasBeenSet() const;

                    /**
                     * 获取The type of tag that is regarded as an advertisement, optional values: [1,8]
1. Splice insert 
2. Provider advertisement 
3. Distributor advertisement 
4. Provider placement opportunity 
5. Distributor placement opportunity 
6. Break 
7. Provider overlay placement opportunity 
8. Distributor overlay placement opportunity.
                     * @return AdTriggers The type of tag that is regarded as an advertisement, optional values: [1,8]
1. Splice insert 
2. Provider advertisement 
3. Distributor advertisement 
4. Provider placement opportunity 
5. Distributor placement opportunity 
6. Break 
7. Provider overlay placement opportunity 
8. Distributor overlay placement opportunity.
                     * 
                     */
                    std::vector<uint64_t> GetAdTriggers() const;

                    /**
                     * 设置The type of tag that is regarded as an advertisement, optional values: [1,8]
1. Splice insert 
2. Provider advertisement 
3. Distributor advertisement 
4. Provider placement opportunity 
5. Distributor placement opportunity 
6. Break 
7. Provider overlay placement opportunity 
8. Distributor overlay placement opportunity.
                     * @param _adTriggers The type of tag that is regarded as an advertisement, optional values: [1,8]
1. Splice insert 
2. Provider advertisement 
3. Distributor advertisement 
4. Provider placement opportunity 
5. Distributor placement opportunity 
6. Break 
7. Provider overlay placement opportunity 
8. Distributor overlay placement opportunity.
                     * 
                     */
                    void SetAdTriggers(const std::vector<uint64_t>& _adTriggers);

                    /**
                     * 判断参数 AdTriggers 是否已赋值
                     * @return AdTriggers 是否已赋值
                     * 
                     */
                    bool AdTriggersHasBeenSet() const;

                    /**
                     * 获取The type of distribution restriction that is considered an advertisement, optional values: [1,4]
1:None 
2:Restricted (default) 
3:Unrestricted 
4.Both.
                     * @return DeliveryRestrictions The type of distribution restriction that is considered an advertisement, optional values: [1,4]
1:None 
2:Restricted (default) 
3:Unrestricted 
4.Both.
                     * 
                     */
                    uint64_t GetDeliveryRestrictions() const;

                    /**
                     * 设置The type of distribution restriction that is considered an advertisement, optional values: [1,4]
1:None 
2:Restricted (default) 
3:Unrestricted 
4.Both.
                     * @param _deliveryRestrictions The type of distribution restriction that is considered an advertisement, optional values: [1,4]
1:None 
2:Restricted (default) 
3:Unrestricted 
4.Both.
                     * 
                     */
                    void SetDeliveryRestrictions(const uint64_t& _deliveryRestrictions);

                    /**
                     * 判断参数 DeliveryRestrictions 是否已赋值
                     * @return DeliveryRestrictions 是否已赋值
                     * 
                     */
                    bool DeliveryRestrictionsHasBeenSet() const;

                    /**
                     * 获取Source CDN prefix, needs to start with http:// or https://
                     * @return SourceCDNPrefix Source CDN prefix, needs to start with http:// or https://
                     * 
                     */
                    std::string GetSourceCDNPrefix() const;

                    /**
                     * 设置Source CDN prefix, needs to start with http:// or https://
                     * @param _sourceCDNPrefix Source CDN prefix, needs to start with http:// or https://
                     * 
                     */
                    void SetSourceCDNPrefix(const std::string& _sourceCDNPrefix);

                    /**
                     * 判断参数 SourceCDNPrefix 是否已赋值
                     * @return SourceCDNPrefix 是否已赋值
                     * 
                     */
                    bool SourceCDNPrefixHasBeenSet() const;

                    /**
                     * 获取Advertising CDN prefix needs to start with http:// or https://
                     * @return AdCDNPrefix Advertising CDN prefix needs to start with http:// or https://
                     * 
                     */
                    std::string GetAdCDNPrefix() const;

                    /**
                     * 设置Advertising CDN prefix needs to start with http:// or https://
                     * @param _adCDNPrefix Advertising CDN prefix needs to start with http:// or https://
                     * 
                     */
                    void SetAdCDNPrefix(const std::string& _adCDNPrefix);

                    /**
                     * 判断参数 AdCDNPrefix 是否已赋值
                     * @return AdCDNPrefix 是否已赋值
                     * 
                     */
                    bool AdCDNPrefixHasBeenSet() const;

                    /**
                     * 获取Pre-roll ad decision service address.
                     * @return PreRollAdsUrl Pre-roll ad decision service address.
                     * 
                     */
                    std::string GetPreRollAdsUrl() const;

                    /**
                     * 设置Pre-roll ad decision service address.
                     * @param _preRollAdsUrl Pre-roll ad decision service address.
                     * 
                     */
                    void SetPreRollAdsUrl(const std::string& _preRollAdsUrl);

                    /**
                     * 判断参数 PreRollAdsUrl 是否已赋值
                     * @return PreRollAdsUrl 是否已赋值
                     * 
                     */
                    bool PreRollAdsUrlHasBeenSet() const;

                    /**
                     * 获取The maximum allowed duration of pre-roll ads, (0, 3600].
                     * @return PreRollMaxAllowedDuration The maximum allowed duration of pre-roll ads, (0, 3600].
                     * 
                     */
                    int64_t GetPreRollMaxAllowedDuration() const;

                    /**
                     * 设置The maximum allowed duration of pre-roll ads, (0, 3600].
                     * @param _preRollMaxAllowedDuration The maximum allowed duration of pre-roll ads, (0, 3600].
                     * 
                     */
                    void SetPreRollMaxAllowedDuration(const int64_t& _preRollMaxAllowedDuration);

                    /**
                     * 判断参数 PreRollMaxAllowedDuration 是否已赋值
                     * @return PreRollMaxAllowedDuration 是否已赋值
                     * 
                     */
                    bool PreRollMaxAllowedDurationHasBeenSet() const;

                private:

                    /**
                     * Advertising Decision Server URL (ADS).
                     */
                    std::string m_adsUrl;
                    bool m_adsUrlHasBeenSet;

                    /**
                     * Parameter configuration.
                     */
                    std::vector<ConfigAliasesInfo> m_configAliases;
                    bool m_configAliasesHasBeenSet;

                    /**
                     * Whether to enable transparent transmission of advertising tags.
                     */
                    bool m_adMarkerPassthrough;
                    bool m_adMarkerPassthroughHasBeenSet;

                    /**
                     * How to process tags in advertisements, optional values: [1,2] 
1: Process all SCTE-35 type tags - all (default) 
2: SCTE-35enhanced, parse some types.
                     */
                    uint64_t m_sCTE35AdType;
                    bool m_sCTE35AdTypeHasBeenSet;

                    /**
                     * Default advertising url.
                     */
                    std::string m_slateAd;
                    bool m_slateAdHasBeenSet;

                    /**
                     * Maximum unfilled duration, unit: seconds.
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * Whether to enable mpd location, true corresponds to enable, false corresponds to disable.
                     */
                    bool m_dashMPDLocation;
                    bool m_dashMPDLocationHasBeenSet;

                    /**
                     * The type of tag that is regarded as an advertisement, optional values: [1,8]
1. Splice insert 
2. Provider advertisement 
3. Distributor advertisement 
4. Provider placement opportunity 
5. Distributor placement opportunity 
6. Break 
7. Provider overlay placement opportunity 
8. Distributor overlay placement opportunity.
                     */
                    std::vector<uint64_t> m_adTriggers;
                    bool m_adTriggersHasBeenSet;

                    /**
                     * The type of distribution restriction that is considered an advertisement, optional values: [1,4]
1:None 
2:Restricted (default) 
3:Unrestricted 
4.Both.
                     */
                    uint64_t m_deliveryRestrictions;
                    bool m_deliveryRestrictionsHasBeenSet;

                    /**
                     * Source CDN prefix, needs to start with http:// or https://
                     */
                    std::string m_sourceCDNPrefix;
                    bool m_sourceCDNPrefixHasBeenSet;

                    /**
                     * Advertising CDN prefix needs to start with http:// or https://
                     */
                    std::string m_adCDNPrefix;
                    bool m_adCDNPrefixHasBeenSet;

                    /**
                     * Pre-roll ad decision service address.
                     */
                    std::string m_preRollAdsUrl;
                    bool m_preRollAdsUrlHasBeenSet;

                    /**
                     * The maximum allowed duration of pre-roll ads, (0, 3600].
                     */
                    int64_t m_preRollMaxAllowedDuration;
                    bool m_preRollMaxAllowedDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SSAICONF_H_
