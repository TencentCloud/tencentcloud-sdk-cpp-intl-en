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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_SSAIUSAGEINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_SSAIUSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/UsageDetail.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * SSAI usage information.
                */
                class SSAIUsageInfo : public AbstractModel
                {
                public:
                    SSAIUsageInfo();
                    ~SSAIUsageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of successful ad requests.
                     * @return AdRequestSuccess Number of successful ad requests.
                     * 
                     */
                    uint64_t GetAdRequestSuccess() const;

                    /**
                     * 设置Number of successful ad requests.
                     * @param _adRequestSuccess Number of successful ad requests.
                     * 
                     */
                    void SetAdRequestSuccess(const uint64_t& _adRequestSuccess);

                    /**
                     * 判断参数 AdRequestSuccess 是否已赋值
                     * @return AdRequestSuccess 是否已赋值
                     * 
                     */
                    bool AdRequestSuccessHasBeenSet() const;

                    /**
                     * 获取Number of failed ad requests.
                     * @return AdRequestFail Number of failed ad requests.
                     * 
                     */
                    uint64_t GetAdRequestFail() const;

                    /**
                     * 设置Number of failed ad requests.
                     * @param _adRequestFail Number of failed ad requests.
                     * 
                     */
                    void SetAdRequestFail(const uint64_t& _adRequestFail);

                    /**
                     * 判断参数 AdRequestFail 是否已赋值
                     * @return AdRequestFail 是否已赋值
                     * 
                     */
                    bool AdRequestFailHasBeenSet() const;

                    /**
                     * 获取Exposure count.
                     * @return Impression Exposure count.
                     * 
                     */
                    uint64_t GetImpression() const;

                    /**
                     * 设置Exposure count.
                     * @param _impression Exposure count.
                     * 
                     */
                    void SetImpression(const uint64_t& _impression);

                    /**
                     * 判断参数 Impression 是否已赋值
                     * @return Impression 是否已赋值
                     * 
                     */
                    bool ImpressionHasBeenSet() const;

                    /**
                     * 获取Fill factor for personalized ads.
                     * @return MidFillRate Fill factor for personalized ads.
                     * 
                     */
                    double GetMidFillRate() const;

                    /**
                     * 设置Fill factor for personalized ads.
                     * @param _midFillRate Fill factor for personalized ads.
                     * 
                     */
                    void SetMidFillRate(const double& _midFillRate);

                    /**
                     * 判断参数 MidFillRate 是否已赋值
                     * @return MidFillRate 是否已赋值
                     * 
                     */
                    bool MidFillRateHasBeenSet() const;

                    /**
                     * 获取Advertising tag time.
                     * @return AdMarkerTime Advertising tag time.
                     * 
                     */
                    double GetAdMarkerTime() const;

                    /**
                     * 设置Advertising tag time.
                     * @param _adMarkerTime Advertising tag time.
                     * 
                     */
                    void SetAdMarkerTime(const double& _adMarkerTime);

                    /**
                     * 判断参数 AdMarkerTime 是否已赋值
                     * @return AdMarkerTime 是否已赋值
                     * 
                     */
                    bool AdMarkerTimeHasBeenSet() const;

                    /**
                     * 获取Personalization replacement time.
                     * @return ReplacedTime Personalization replacement time.
                     * 
                     */
                    double GetReplacedTime() const;

                    /**
                     * 设置Personalization replacement time.
                     * @param _replacedTime Personalization replacement time.
                     * 
                     */
                    void SetReplacedTime(const double& _replacedTime);

                    /**
                     * 判断参数 ReplacedTime 是否已赋值
                     * @return ReplacedTime 是否已赋值
                     * 
                     */
                    bool ReplacedTimeHasBeenSet() const;

                    /**
                     * 获取Ad replacement rate.
                     * @return PreReplaceRate Ad replacement rate.
                     * 
                     */
                    double GetPreReplaceRate() const;

                    /**
                     * 设置Ad replacement rate.
                     * @param _preReplaceRate Ad replacement rate.
                     * 
                     */
                    void SetPreReplaceRate(const double& _preReplaceRate);

                    /**
                     * 判断参数 PreReplaceRate 是否已赋值
                     * @return PreReplaceRate 是否已赋值
                     * 
                     */
                    bool PreReplaceRateHasBeenSet() const;

                    /**
                     * 获取Number of pre-roll ad requests.
                     * @return PreReqNum Number of pre-roll ad requests.
                     * 
                     */
                    uint64_t GetPreReqNum() const;

                    /**
                     * 设置Number of pre-roll ad requests.
                     * @param _preReqNum Number of pre-roll ad requests.
                     * 
                     */
                    void SetPreReqNum(const uint64_t& _preReqNum);

                    /**
                     * 判断参数 PreReqNum 是否已赋值
                     * @return PreReqNum 是否已赋值
                     * 
                     */
                    bool PreReqNumHasBeenSet() const;

                    /**
                     * 获取Number of pre-roll ad replacements.
                     * @return PreReplacedNum Number of pre-roll ad replacements.
                     * 
                     */
                    uint64_t GetPreReplacedNum() const;

                    /**
                     * 设置Number of pre-roll ad replacements.
                     * @param _preReplacedNum Number of pre-roll ad replacements.
                     * 
                     */
                    void SetPreReplacedNum(const uint64_t& _preReplacedNum);

                    /**
                     * 判断参数 PreReplacedNum 是否已赋值
                     * @return PreReplacedNum 是否已赋值
                     * 
                     */
                    bool PreReplacedNumHasBeenSet() const;

                    /**
                     * 获取Configures usage for each ad.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UsageDetails Configures usage for each ad.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UsageDetail> GetUsageDetails() const;

                    /**
                     * 设置Configures usage for each ad.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _usageDetails Configures usage for each ad.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsageDetails(const std::vector<UsageDetail>& _usageDetails);

                    /**
                     * 判断参数 UsageDetails 是否已赋值
                     * @return UsageDetails 是否已赋值
                     * 
                     */
                    bool UsageDetailsHasBeenSet() const;

                private:

                    /**
                     * Number of successful ad requests.
                     */
                    uint64_t m_adRequestSuccess;
                    bool m_adRequestSuccessHasBeenSet;

                    /**
                     * Number of failed ad requests.
                     */
                    uint64_t m_adRequestFail;
                    bool m_adRequestFailHasBeenSet;

                    /**
                     * Exposure count.
                     */
                    uint64_t m_impression;
                    bool m_impressionHasBeenSet;

                    /**
                     * Fill factor for personalized ads.
                     */
                    double m_midFillRate;
                    bool m_midFillRateHasBeenSet;

                    /**
                     * Advertising tag time.
                     */
                    double m_adMarkerTime;
                    bool m_adMarkerTimeHasBeenSet;

                    /**
                     * Personalization replacement time.
                     */
                    double m_replacedTime;
                    bool m_replacedTimeHasBeenSet;

                    /**
                     * Ad replacement rate.
                     */
                    double m_preReplaceRate;
                    bool m_preReplaceRateHasBeenSet;

                    /**
                     * Number of pre-roll ad requests.
                     */
                    uint64_t m_preReqNum;
                    bool m_preReqNumHasBeenSet;

                    /**
                     * Number of pre-roll ad replacements.
                     */
                    uint64_t m_preReplacedNum;
                    bool m_preReplacedNumHasBeenSet;

                    /**
                     * Configures usage for each ad.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UsageDetail> m_usageDetails;
                    bool m_usageDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_SSAIUSAGEINFO_H_
