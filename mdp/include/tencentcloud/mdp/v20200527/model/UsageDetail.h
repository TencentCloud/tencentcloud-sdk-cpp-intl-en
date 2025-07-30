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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_USAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Ad insertion configuration and SSAI usage detail by advertisement type dimension.
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ad insertion configuration uniq_id.
                     * @return UniqId Ad insertion configuration uniq_id.
                     * 
                     */
                    std::string GetUniqId() const;

                    /**
                     * 设置Ad insertion configuration uniq_id.
                     * @param _uniqId Ad insertion configuration uniq_id.
                     * 
                     */
                    void SetUniqId(const std::string& _uniqId);

                    /**
                     * 判断参数 UniqId 是否已赋值
                     * @return UniqId 是否已赋值
                     * 
                     */
                    bool UniqIdHasBeenSet() const;

                    /**
                     * 获取Ad insertion configuration id.
                     * @return ChannelId Ad insertion configuration id.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Ad insertion configuration id.
                     * @param _channelId Ad insertion configuration id.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Ad insertion configuration name.
                     * @return ChannelName Ad insertion configuration name.
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Ad insertion configuration name.
                     * @param _channelName Ad insertion configuration name.
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Ad type.
                     * @return AdType Ad type.
                     * 
                     */
                    std::string GetAdType() const;

                    /**
                     * 设置Ad type.
                     * @param _adType Ad type.
                     * 
                     */
                    void SetAdType(const std::string& _adType);

                    /**
                     * 判断参数 AdType 是否已赋值
                     * @return AdType 是否已赋值
                     * 
                     */
                    bool AdTypeHasBeenSet() const;

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
                     * 获取Number of ad exposures.
                     * @return Impression Number of ad exposures.
                     * 
                     */
                    uint64_t GetImpression() const;

                    /**
                     * 设置Number of ad exposures.
                     * @param _impression Number of ad exposures.
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
                     * 获取Number of ad playbacks started.
                     * @return Start Number of ad playbacks started.
                     * 
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置Number of ad playbacks started.
                     * @param _start Number of ad playbacks started.
                     * 
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Ad plays at 1/4 point.
                     * @return FirstQuarter Ad plays at 1/4 point.
                     * 
                     */
                    uint64_t GetFirstQuarter() const;

                    /**
                     * 设置Ad plays at 1/4 point.
                     * @param _firstQuarter Ad plays at 1/4 point.
                     * 
                     */
                    void SetFirstQuarter(const uint64_t& _firstQuarter);

                    /**
                     * 判断参数 FirstQuarter 是否已赋值
                     * @return FirstQuarter 是否已赋值
                     * 
                     */
                    bool FirstQuarterHasBeenSet() const;

                    /**
                     * 获取Ad plays at 1/2 point.
                     * @return Midpoint Ad plays at 1/2 point.
                     * 
                     */
                    uint64_t GetMidpoint() const;

                    /**
                     * 设置Ad plays at 1/2 point.
                     * @param _midpoint Ad plays at 1/2 point.
                     * 
                     */
                    void SetMidpoint(const uint64_t& _midpoint);

                    /**
                     * 判断参数 Midpoint 是否已赋值
                     * @return Midpoint 是否已赋值
                     * 
                     */
                    bool MidpointHasBeenSet() const;

                    /**
                     * 获取Ad plays at 3/4 point.
                     * @return ThirdQuarter Ad plays at 3/4 point.
                     * 
                     */
                    uint64_t GetThirdQuarter() const;

                    /**
                     * 设置Ad plays at 3/4 point.
                     * @param _thirdQuarter Ad plays at 3/4 point.
                     * 
                     */
                    void SetThirdQuarter(const uint64_t& _thirdQuarter);

                    /**
                     * 判断参数 ThirdQuarter 是否已赋值
                     * @return ThirdQuarter 是否已赋值
                     * 
                     */
                    bool ThirdQuarterHasBeenSet() const;

                    /**
                     * 获取Number of ad playbacks completed.
                     * @return Complete Number of ad playbacks completed.
                     * 
                     */
                    uint64_t GetComplete() const;

                    /**
                     * 设置Number of ad playbacks completed.
                     * @param _complete Number of ad playbacks completed.
                     * 
                     */
                    void SetComplete(const uint64_t& _complete);

                    /**
                     * 判断参数 Complete 是否已赋值
                     * @return Complete 是否已赋值
                     * 
                     */
                    bool CompleteHasBeenSet() const;

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

                private:

                    /**
                     * Ad insertion configuration uniq_id.
                     */
                    std::string m_uniqId;
                    bool m_uniqIdHasBeenSet;

                    /**
                     * Ad insertion configuration id.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Ad insertion configuration name.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Ad type.
                     */
                    std::string m_adType;
                    bool m_adTypeHasBeenSet;

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
                     * Number of ad exposures.
                     */
                    uint64_t m_impression;
                    bool m_impressionHasBeenSet;

                    /**
                     * Number of ad playbacks started.
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Ad plays at 1/4 point.
                     */
                    uint64_t m_firstQuarter;
                    bool m_firstQuarterHasBeenSet;

                    /**
                     * Ad plays at 1/2 point.
                     */
                    uint64_t m_midpoint;
                    bool m_midpointHasBeenSet;

                    /**
                     * Ad plays at 3/4 point.
                     */
                    uint64_t m_thirdQuarter;
                    bool m_thirdQuarterHasBeenSet;

                    /**
                     * Number of ad playbacks completed.
                     */
                    uint64_t m_complete;
                    bool m_completeHasBeenSet;

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
                     * Fill factor for personalized ads.
                     */
                    double m_midFillRate;
                    bool m_midFillRateHasBeenSet;

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
                     * Ad replacement rate.
                     */
                    double m_preReplaceRate;
                    bool m_preReplaceRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_USAGEDETAIL_H_
