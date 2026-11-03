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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYHEADERSTOORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYHEADERSTOORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Security headers to include in requests to the origin. After the configuration takes effect, request headers with the corresponding `keyname` will be sent to the origin.
                */
                class SecurityHeadersToOrigin : public AbstractModel
                {
                public:
                    SecurityHeadersToOrigin();
                    ~SecurityHeadersToOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Configuration of origin request headers for Bot identification information. Valid values:<ul><li>`EO-Bot-Botnet-ID`: Identifier generated based on Bot request characteristics.</li></ul></p>
                     * @return BotIdentificationHeaders <p>Configuration of origin request headers for Bot identification information. Valid values:<ul><li>`EO-Bot-Botnet-ID`: Identifier generated based on Bot request characteristics.</li></ul></p>
                     * 
                     */
                    std::vector<std::string> GetBotIdentificationHeaders() const;

                    /**
                     * 设置<p>Configuration of origin request headers for Bot identification information. Valid values:<ul><li>`EO-Bot-Botnet-ID`: Identifier generated based on Bot request characteristics.</li></ul></p>
                     * @param _botIdentificationHeaders <p>Configuration of origin request headers for Bot identification information. Valid values:<ul><li>`EO-Bot-Botnet-ID`: Identifier generated based on Bot request characteristics.</li></ul></p>
                     * 
                     */
                    void SetBotIdentificationHeaders(const std::vector<std::string>& _botIdentificationHeaders);

                    /**
                     * 判断参数 BotIdentificationHeaders 是否已赋值
                     * @return BotIdentificationHeaders 是否已赋值
                     * 
                     */
                    bool BotIdentificationHeadersHasBeenSet() const;

                    /**
                     * 获取<p>Configuration of origin request headers for identification results from the Advanced Bot Management module. Valid values:<ul><li>`EO-Bot-Client-Attestation`: Advanced Bot Management - Authentication ticket verification result from the Client Attestation module;</li><li>`EO-Bot-Client-Risk`: Advanced Bot Management - Device risk assessment result from the Client Attestation module;</li><li>`EO-Bot-Intelligence`: Advanced Bot Management - Identification result from the Bot Intelligence Analysis module;</li><li>`EO-Bot-IP-Reputation`: Advanced Bot Management - Identification result from Client Reputation module;</li><li>`EO-Bot-Known-Tool`: Advanced Bot Management - Basic Feature Management - Identification result from the UA Feature Rule module;</li><li>`EO-Bot-Search-Engine`: Advanced Bot Management - Basic Feature Management - Identification result from the Search Engine Rule module;</li><li>`EO-Bot-Source-IDC`: Advanced Bot Management - Basic Feature Management - Identification result from the IDC Rule module;</li><li>`EO-Bot-User-Risk`: Advanced Bot Management - Account risk assessment result from the Client Attestation module.</li></ul></p>
                     * @return BotManagementHeaders <p>Configuration of origin request headers for identification results from the Advanced Bot Management module. Valid values:<ul><li>`EO-Bot-Client-Attestation`: Advanced Bot Management - Authentication ticket verification result from the Client Attestation module;</li><li>`EO-Bot-Client-Risk`: Advanced Bot Management - Device risk assessment result from the Client Attestation module;</li><li>`EO-Bot-Intelligence`: Advanced Bot Management - Identification result from the Bot Intelligence Analysis module;</li><li>`EO-Bot-IP-Reputation`: Advanced Bot Management - Identification result from Client Reputation module;</li><li>`EO-Bot-Known-Tool`: Advanced Bot Management - Basic Feature Management - Identification result from the UA Feature Rule module;</li><li>`EO-Bot-Search-Engine`: Advanced Bot Management - Basic Feature Management - Identification result from the Search Engine Rule module;</li><li>`EO-Bot-Source-IDC`: Advanced Bot Management - Basic Feature Management - Identification result from the IDC Rule module;</li><li>`EO-Bot-User-Risk`: Advanced Bot Management - Account risk assessment result from the Client Attestation module.</li></ul></p>
                     * 
                     */
                    std::vector<std::string> GetBotManagementHeaders() const;

                    /**
                     * 设置<p>Configuration of origin request headers for identification results from the Advanced Bot Management module. Valid values:<ul><li>`EO-Bot-Client-Attestation`: Advanced Bot Management - Authentication ticket verification result from the Client Attestation module;</li><li>`EO-Bot-Client-Risk`: Advanced Bot Management - Device risk assessment result from the Client Attestation module;</li><li>`EO-Bot-Intelligence`: Advanced Bot Management - Identification result from the Bot Intelligence Analysis module;</li><li>`EO-Bot-IP-Reputation`: Advanced Bot Management - Identification result from Client Reputation module;</li><li>`EO-Bot-Known-Tool`: Advanced Bot Management - Basic Feature Management - Identification result from the UA Feature Rule module;</li><li>`EO-Bot-Search-Engine`: Advanced Bot Management - Basic Feature Management - Identification result from the Search Engine Rule module;</li><li>`EO-Bot-Source-IDC`: Advanced Bot Management - Basic Feature Management - Identification result from the IDC Rule module;</li><li>`EO-Bot-User-Risk`: Advanced Bot Management - Account risk assessment result from the Client Attestation module.</li></ul></p>
                     * @param _botManagementHeaders <p>Configuration of origin request headers for identification results from the Advanced Bot Management module. Valid values:<ul><li>`EO-Bot-Client-Attestation`: Advanced Bot Management - Authentication ticket verification result from the Client Attestation module;</li><li>`EO-Bot-Client-Risk`: Advanced Bot Management - Device risk assessment result from the Client Attestation module;</li><li>`EO-Bot-Intelligence`: Advanced Bot Management - Identification result from the Bot Intelligence Analysis module;</li><li>`EO-Bot-IP-Reputation`: Advanced Bot Management - Identification result from Client Reputation module;</li><li>`EO-Bot-Known-Tool`: Advanced Bot Management - Basic Feature Management - Identification result from the UA Feature Rule module;</li><li>`EO-Bot-Search-Engine`: Advanced Bot Management - Basic Feature Management - Identification result from the Search Engine Rule module;</li><li>`EO-Bot-Source-IDC`: Advanced Bot Management - Basic Feature Management - Identification result from the IDC Rule module;</li><li>`EO-Bot-User-Risk`: Advanced Bot Management - Account risk assessment result from the Client Attestation module.</li></ul></p>
                     * 
                     */
                    void SetBotManagementHeaders(const std::vector<std::string>& _botManagementHeaders);

                    /**
                     * 判断参数 BotManagementHeaders 是否已赋值
                     * @return BotManagementHeaders 是否已赋值
                     * 
                     */
                    bool BotManagementHeadersHasBeenSet() const;

                    /**
                     * 获取<p>Configuration of origin request headers for client fingerprint information. Valid values:<ul><li>`EO-Bot-Fingerprint`: Client fingerprint information.</li></ul></p>
                     * @return ClientFingerprintHeaders <p>Configuration of origin request headers for client fingerprint information. Valid values:<ul><li>`EO-Bot-Fingerprint`: Client fingerprint information.</li></ul></p>
                     * 
                     */
                    std::vector<std::string> GetClientFingerprintHeaders() const;

                    /**
                     * 设置<p>Configuration of origin request headers for client fingerprint information. Valid values:<ul><li>`EO-Bot-Fingerprint`: Client fingerprint information.</li></ul></p>
                     * @param _clientFingerprintHeaders <p>Configuration of origin request headers for client fingerprint information. Valid values:<ul><li>`EO-Bot-Fingerprint`: Client fingerprint information.</li></ul></p>
                     * 
                     */
                    void SetClientFingerprintHeaders(const std::vector<std::string>& _clientFingerprintHeaders);

                    /**
                     * 判断参数 ClientFingerprintHeaders 是否已赋值
                     * @return ClientFingerprintHeaders 是否已赋值
                     * 
                     */
                    bool ClientFingerprintHeadersHasBeenSet() const;

                private:

                    /**
                     * <p>Configuration of origin request headers for Bot identification information. Valid values:<ul><li>`EO-Bot-Botnet-ID`: Identifier generated based on Bot request characteristics.</li></ul></p>
                     */
                    std::vector<std::string> m_botIdentificationHeaders;
                    bool m_botIdentificationHeadersHasBeenSet;

                    /**
                     * <p>Configuration of origin request headers for identification results from the Advanced Bot Management module. Valid values:<ul><li>`EO-Bot-Client-Attestation`: Advanced Bot Management - Authentication ticket verification result from the Client Attestation module;</li><li>`EO-Bot-Client-Risk`: Advanced Bot Management - Device risk assessment result from the Client Attestation module;</li><li>`EO-Bot-Intelligence`: Advanced Bot Management - Identification result from the Bot Intelligence Analysis module;</li><li>`EO-Bot-IP-Reputation`: Advanced Bot Management - Identification result from Client Reputation module;</li><li>`EO-Bot-Known-Tool`: Advanced Bot Management - Basic Feature Management - Identification result from the UA Feature Rule module;</li><li>`EO-Bot-Search-Engine`: Advanced Bot Management - Basic Feature Management - Identification result from the Search Engine Rule module;</li><li>`EO-Bot-Source-IDC`: Advanced Bot Management - Basic Feature Management - Identification result from the IDC Rule module;</li><li>`EO-Bot-User-Risk`: Advanced Bot Management - Account risk assessment result from the Client Attestation module.</li></ul></p>
                     */
                    std::vector<std::string> m_botManagementHeaders;
                    bool m_botManagementHeadersHasBeenSet;

                    /**
                     * <p>Configuration of origin request headers for client fingerprint information. Valid values:<ul><li>`EO-Bot-Fingerprint`: Client fingerprint information.</li></ul></p>
                     */
                    std::vector<std::string> m_clientFingerprintHeaders;
                    bool m_clientFingerprintHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECURITYHEADERSTOORIGIN_H_
