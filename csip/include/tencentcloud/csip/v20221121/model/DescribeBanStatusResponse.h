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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBANSTATUSRESPONSE_H_

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
                     * 获取<p>(Abandoned) Block switch status: 0 -- Off  1 -- Advanced blocking 2 -- Basic block (blocklist IPs in the intelligence database only)</p>
                     * @return Status <p>(Abandoned) Block switch status: 0 -- Off  1 -- Advanced blocking 2 -- Basic block (blocklist IPs in the intelligence database only)</p>
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
                     * 获取<p>Whether to display pop-up prompt information. false: turn off, true: turn on</p>
                     * @return ShowTips <p>Whether to display pop-up prompt information. false: turn off, true: turn on</p>
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
                     * 获取<p>Whether intelligent over-whitening mode is enabled</p>
                     * @return OpenSmartMode <p>Whether intelligent over-whitening mode is enabled</p>
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
                     * 获取<p>Whether intelligence IP blocking is enabled</p>
                     * @return BanBlackIp <p>Whether intelligence IP blocking is enabled</p>
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
                     * 获取<p>Enable vulnerability IP blocking or not</p>
                     * @return BanVulIp <p>Enable vulnerability IP blocking or not</p>
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
                     * <p>(Abandoned) Block switch status: 0 -- Off  1 -- Advanced blocking 2 -- Basic block (blocklist IPs in the intelligence database only)</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Whether to display pop-up prompt information. false: turn off, true: turn on</p>
                     */
                    bool m_showTips;
                    bool m_showTipsHasBeenSet;

                    /**
                     * <p>Whether intelligent over-whitening mode is enabled</p>
                     */
                    bool m_openSmartMode;
                    bool m_openSmartModeHasBeenSet;

                    /**
                     * <p>Whether intelligence IP blocking is enabled</p>
                     */
                    bool m_banBlackIp;
                    bool m_banBlackIpHasBeenSet;

                    /**
                     * <p>Enable vulnerability IP blocking or not</p>
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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBANSTATUSRESPONSE_H_
