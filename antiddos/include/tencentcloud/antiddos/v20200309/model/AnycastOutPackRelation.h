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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ANYCASTOUTPACKRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ANYCASTOUTPACKRELATION_H_

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
                * Details of the Anycast package
                */
                class AnycastOutPackRelation : public AbstractModel
                {
                public:
                    AnycastOutPackRelation();
                    ~AnycastOutPackRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application bandwidth (in Mbps).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NormalBandwidth Application bandwidth (in Mbps).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetNormalBandwidth() const;

                    /**
                     * 设置Application bandwidth (in Mbps).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _normalBandwidth Application bandwidth (in Mbps).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of forwarding rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForwardRulesLimit Number of forwarding rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetForwardRulesLimit() const;

                    /**
                     * 设置Number of forwarding rules
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forwardRulesLimit Number of forwarding rules
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenewFlag Auto-renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRenewFlag Auto-renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurDeadline Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _curDeadline Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Application bandwidth (in Mbps).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_normalBandwidth;
                    bool m_normalBandwidthHasBeenSet;

                    /**
                     * Number of forwarding rules
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_forwardRulesLimit;
                    bool m_forwardRulesLimitHasBeenSet;

                    /**
                     * Auto-renewal flag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Expiration date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ANYCASTOUTPACKRELATION_H_
