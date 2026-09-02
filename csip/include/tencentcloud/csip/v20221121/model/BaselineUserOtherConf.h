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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEUSEROTHERCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEUSEROTHERCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Other user-level baseline configuration (synchronize authorization, clear risks offline, Agent scan timeout, etc.).
                */
                class BaselineUserOtherConf : public AbstractModel
                {
                public:
                    BaselineUserOtherConf();
                    ~BaselineUserOtherConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to allow the Group Administrator to sync the baseline configuration to this account. true means allowed, and false means not allowed.</p>
                     * @return AllowSync <p>Whether to allow the Group Administrator to sync the baseline configuration to this account. true means allowed, and false means not allowed.</p>
                     * 
                     */
                    bool GetAllowSync() const;

                    /**
                     * 设置<p>Whether to allow the Group Administrator to sync the baseline configuration to this account. true means allowed, and false means not allowed.</p>
                     * @param _allowSync <p>Whether to allow the Group Administrator to sync the baseline configuration to this account. true means allowed, and false means not allowed.</p>
                     * 
                     */
                    void SetAllowSync(const bool& _allowSync);

                    /**
                     * 判断参数 AllowSync 是否已赋值
                     * @return AllowSync 是否已赋值
                     * 
                     */
                    bool AllowSyncHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically clear the historical risk results of an asset when it goes offline. true: clear; false: retain.</p>
                     * @return CleanRiskWhenOffline <p>Whether to automatically clear the historical risk results of an asset when it goes offline. true: clear; false: retain.</p>
                     * 
                     */
                    bool GetCleanRiskWhenOffline() const;

                    /**
                     * 设置<p>Whether to automatically clear the historical risk results of an asset when it goes offline. true: clear; false: retain.</p>
                     * @param _cleanRiskWhenOffline <p>Whether to automatically clear the historical risk results of an asset when it goes offline. true: clear; false: retain.</p>
                     * 
                     */
                    void SetCleanRiskWhenOffline(const bool& _cleanRiskWhenOffline);

                    /**
                     * 判断参数 CleanRiskWhenOffline 是否已赋值
                     * @return CleanRiskWhenOffline 是否已赋值
                     * 
                     */
                    bool CleanRiskWhenOfflineHasBeenSet() const;

                    /**
                     * 获取<p>Timeout period for a single scan by the Agent, in seconds. Value ranges from 60 to 86400. Default: 1800.</p>
                     * @return AgentScanTimeout <p>Timeout period for a single scan by the Agent, in seconds. Value ranges from 60 to 86400. Default: 1800.</p>
                     * 
                     */
                    uint64_t GetAgentScanTimeout() const;

                    /**
                     * 设置<p>Timeout period for a single scan by the Agent, in seconds. Value ranges from 60 to 86400. Default: 1800.</p>
                     * @param _agentScanTimeout <p>Timeout period for a single scan by the Agent, in seconds. Value ranges from 60 to 86400. Default: 1800.</p>
                     * 
                     */
                    void SetAgentScanTimeout(const uint64_t& _agentScanTimeout);

                    /**
                     * 判断参数 AgentScanTimeout 是否已赋值
                     * @return AgentScanTimeout 是否已赋值
                     * 
                     */
                    bool AgentScanTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to allow the Group Administrator to sync the baseline configuration to this account. true means allowed, and false means not allowed.</p>
                     */
                    bool m_allowSync;
                    bool m_allowSyncHasBeenSet;

                    /**
                     * <p>Whether to automatically clear the historical risk results of an asset when it goes offline. true: clear; false: retain.</p>
                     */
                    bool m_cleanRiskWhenOffline;
                    bool m_cleanRiskWhenOfflineHasBeenSet;

                    /**
                     * <p>Timeout period for a single scan by the Agent, in seconds. Value ranges from 60 to 86400. Default: 1800.</p>
                     */
                    uint64_t m_agentScanTimeout;
                    bool m_agentScanTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEUSEROTHERCONF_H_
