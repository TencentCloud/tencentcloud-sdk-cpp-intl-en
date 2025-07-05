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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STATICPACKRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STATICPACKRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Non-BGP package details
                */
                class StaticPackRelation : public AbstractModel
                {
                public:
                    StaticPackRelation();
                    ~StaticPackRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base protection bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ProtectBandwidth Base protection bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetProtectBandwidth() const;

                    /**
                     * 设置Base protection bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _protectBandwidth Base protection bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProtectBandwidth(const uint64_t& _protectBandwidth);

                    /**
                     * 判断参数 ProtectBandwidth 是否已赋值
                     * @return ProtectBandwidth 是否已赋值
                     * 
                     */
                    bool ProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取Application bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return NormalBandwidth Application bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetNormalBandwidth() const;

                    /**
                     * 设置Application bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _normalBandwidth Application bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNormalBandwidth(const uint64_t& _normalBandwidth);

                    /**
                     * 判断参数 NormalBandwidth 是否已赋值
                     * @return NormalBandwidth 是否已赋值
                     * 
                     */
                    bool NormalBandwidthHasBeenSet() const;

                    /**
                     * 获取Forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ForwardRulesLimit Forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetForwardRulesLimit() const;

                    /**
                     * 设置Forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _forwardRulesLimit Forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetForwardRulesLimit(const uint64_t& _forwardRulesLimit);

                    /**
                     * 判断参数 ForwardRulesLimit 是否已赋值
                     * @return ForwardRulesLimit 是否已赋值
                     * 
                     */
                    bool ForwardRulesLimitHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AutoRenewFlag Auto-renewal flag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _autoRenewFlag Auto-renewal flag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiration time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CurDeadline Expiration time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置Expiration time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _curDeadline Expiration time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                private:

                    /**
                     * Base protection bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_protectBandwidth;
                    bool m_protectBandwidthHasBeenSet;

                    /**
                     * Application bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_normalBandwidth;
                    bool m_normalBandwidthHasBeenSet;

                    /**
                     * Forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_forwardRulesLimit;
                    bool m_forwardRulesLimitHasBeenSet;

                    /**
                     * Auto-renewal flag
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Expiration time
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_STATICPACKRELATION_H_
