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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LISTENERCCTHREHOLDCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LISTENERCCTHREHOLDCONFIG_H_

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
                * CC protection thresholds of the domain name and protocol
                */
                class ListenerCcThreholdConfig : public AbstractModel
                {
                public:
                    ListenerCcThreholdConfig();
                    ~ListenerCcThreholdConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param Domain Domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Protocol. Value: `https`.
                     * @return Protocol Protocol. Value: `https`.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Value: `https`.
                     * @param Protocol Protocol. Value: `https`.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `0` (disabled), `1` (enabled).
                     * @return CCEnable Status. Valid values: `0` (disabled), `1` (enabled).
                     */
                    int64_t GetCCEnable() const;

                    /**
                     * 设置Status. Valid values: `0` (disabled), `1` (enabled).
                     * @param CCEnable Status. Valid values: `0` (disabled), `1` (enabled).
                     */
                    void SetCCEnable(const int64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取CC protection threshold
                     * @return CCThreshold CC protection threshold
                     */
                    int64_t GetCCThreshold() const;

                    /**
                     * 设置CC protection threshold
                     * @param CCThreshold CC protection threshold
                     */
                    void SetCCThreshold(const int64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     */
                    bool CCThresholdHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protocol. Value: `https`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Status. Valid values: `0` (disabled), `1` (enabled).
                     */
                    int64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * CC protection threshold
                     */
                    int64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LISTENERCCTHREHOLDCONFIG_H_
