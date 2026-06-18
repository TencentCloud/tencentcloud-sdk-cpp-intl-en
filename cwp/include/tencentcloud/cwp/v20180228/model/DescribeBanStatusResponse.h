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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBanStatus response structure.
                */
                class DescribeBanStatusResponse : public AbstractModel
                {
                public:
                    DescribeBanStatusResponse();
                    ~DescribeBanStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>(Deprecated) Blocking switch status: 0 -- Off; 1 -- Advanced blocking; 2 -- Basic blocking (blocks only blacklisted IPs in the intelligence database)</p>
                     * @return Status <p>(Deprecated) Blocking switch status: 0 -- Off; 1 -- Advanced blocking; 2 -- Basic blocking (blocks only blacklisted IPs in the intelligence database)</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether to show pop-up prompts. false: disabled; true: enabled</p>
                     * @return ShowTips <p>Whether to show pop-up prompts. false: disabled; true: enabled</p>
                     * 
                     */
                    bool GetShowTips() const;

                    /**
                     * 判断参数 ShowTips 是否已赋值
                     * @return ShowTips 是否已赋值
                     * 
                     */
                    bool ShowTipsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable intelligent allowlisting mode</p>
                     * @return OpenSmartMode <p>Whether to enable intelligent allowlisting mode</p>
                     * 
                     */
                    bool GetOpenSmartMode() const;

                    /**
                     * 判断参数 OpenSmartMode 是否已赋值
                     * @return OpenSmartMode 是否已赋值
                     * 
                     */
                    bool OpenSmartModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable threat-intelligence IP blocking</p>
                     * @return BanBlackIp <p>Whether to enable threat-intelligence IP blocking</p>
                     * 
                     */
                    bool GetBanBlackIp() const;

                    /**
                     * 判断参数 BanBlackIp 是否已赋值
                     * @return BanBlackIp 是否已赋值
                     * 
                     */
                    bool BanBlackIpHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable vulnerability-related IP blocking</p>
                     * @return BanVulIp <p>Whether to enable vulnerability-related IP blocking</p>
                     * 
                     */
                    bool GetBanVulIp() const;

                    /**
                     * 判断参数 BanVulIp 是否已赋值
                     * @return BanVulIp 是否已赋值
                     * 
                     */
                    bool BanVulIpHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable rule blocking</p>
                     * @return BanByRule <p>Whether to enable rule blocking</p>
                     * 
                     */
                    bool GetBanByRule() const;

                    /**
                     * 判断参数 BanByRule 是否已赋值
                     * @return BanByRule 是否已赋值
                     * 
                     */
                    bool BanByRuleHasBeenSet() const;

                private:

                    /**
                     * <p>(Deprecated) Blocking switch status: 0 -- Off; 1 -- Advanced blocking; 2 -- Basic blocking (blocks only blacklisted IPs in the intelligence database)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether to show pop-up prompts. false: disabled; true: enabled</p>
                     */
                    bool m_showTips;
                    bool m_showTipsHasBeenSet;

                    /**
                     * <p>Whether to enable intelligent allowlisting mode</p>
                     */
                    bool m_openSmartMode;
                    bool m_openSmartModeHasBeenSet;

                    /**
                     * <p>Whether to enable threat-intelligence IP blocking</p>
                     */
                    bool m_banBlackIp;
                    bool m_banBlackIpHasBeenSet;

                    /**
                     * <p>Whether to enable vulnerability-related IP blocking</p>
                     */
                    bool m_banVulIp;
                    bool m_banVulIpHasBeenSet;

                    /**
                     * <p>Whether to enable rule blocking</p>
                     */
                    bool m_banByRule;
                    bool m_banByRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
