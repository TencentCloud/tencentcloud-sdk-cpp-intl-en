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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENER_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Certificate.h>
#include <tencentcloud/ssl/v20191205/model/ClbListenerRule.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of a CLB instance listener
                */
                class ClbListener : public AbstractModel
                {
                public:
                    ClbListener();
                    ~ClbListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The listener ID.
                     * @return ListenerId The listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置The listener ID.
                     * @param _listenerId The listener ID.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取The listener name.
                     * @return ListenerName The listener name.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置The listener name.
                     * @param _listenerName The listener name.
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable SNI. Valid values: `1` (enable) and `0` (disable).
                     * @return SniSwitch Whether to enable SNI. Valid values: `1` (enable) and `0` (disable).
                     * 
                     */
                    uint64_t GetSniSwitch() const;

                    /**
                     * 设置Whether to enable SNI. Valid values: `1` (enable) and `0` (disable).
                     * @param _sniSwitch Whether to enable SNI. Valid values: `1` (enable) and `0` (disable).
                     * 
                     */
                    void SetSniSwitch(const uint64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取The listener protocol type. Valid values: `HTTPS` and `TCP_SSL`.
                     * @return Protocol The listener protocol type. Valid values: `HTTPS` and `TCP_SSL`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The listener protocol type. Valid values: `HTTPS` and `TCP_SSL`.
                     * @param _protocol The listener protocol type. Valid values: `HTTPS` and `TCP_SSL`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取The information of the certificate bound to the listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Certificate The information of the certificate bound to the listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Certificate GetCertificate() const;

                    /**
                     * 设置The information of the certificate bound to the listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificate The information of the certificate bound to the listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificate(const Certificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取The list of the listener rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules The list of the listener rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClbListenerRule> GetRules() const;

                    /**
                     * 设置The list of the listener rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rules The list of the listener rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<ClbListenerRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取The list of non-matching domains.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NoMatchDomains The list of non-matching domains.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置The list of non-matching domains.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _noMatchDomains The list of non-matching domains.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                private:

                    /**
                     * The listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * The listener name.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Whether to enable SNI. Valid values: `1` (enable) and `0` (disable).
                     */
                    uint64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * The listener protocol type. Valid values: `HTTPS` and `TCP_SSL`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The information of the certificate bound to the listener.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Certificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * The list of the listener rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClbListenerRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * The list of non-matching domains.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CLBLISTENER_H_
