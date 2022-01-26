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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_INSL7RULES_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_INSL7RULES_H_

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
                * Layer-7 instance rules
                */
                class InsL7Rules : public AbstractModel
                {
                public:
                    InsL7Rules();
                    ~InsL7Rules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule status. Valid values: `0` (the rule is working), `1` (the rule goes into effect), `2` (rule configuration failed), `3` (the rule is being deleted), `5` (rule deletion failed), `6` (waiting to add rules), `7` (waiting to delete rules), `8` (waiting to upload certificates), `9` (resources for the rule not found), `10` (waiting to modify rules), `11` (the rule is being modifying).
                     * @return Status Rule status. Valid values: `0` (the rule is working), `1` (the rule goes into effect), `2` (rule configuration failed), `3` (the rule is being deleted), `5` (rule deletion failed), `6` (waiting to add rules), `7` (waiting to delete rules), `8` (waiting to upload certificates), `9` (resources for the rule not found), `10` (waiting to modify rules), `11` (the rule is being modifying).
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule status. Valid values: `0` (the rule is working), `1` (the rule goes into effect), `2` (rule configuration failed), `3` (the rule is being deleted), `5` (rule deletion failed), `6` (waiting to add rules), `7` (waiting to delete rules), `8` (waiting to upload certificates), `9` (resources for the rule not found), `10` (waiting to modify rules), `11` (the rule is being modifying).
                     * @param Status Rule status. Valid values: `0` (the rule is working), `1` (the rule goes into effect), `2` (rule configuration failed), `3` (the rule is being deleted), `5` (rule deletion failed), `6` (waiting to add rules), `7` (waiting to delete rules), `8` (waiting to upload certificates), `9` (resources for the rule not found), `10` (waiting to modify rules), `11` (the rule is being modifying).
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取Protocol
                     * @return Protocol Protocol
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
                     * @param Protocol Protocol
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InsId Instance ID
                     */
                    std::string GetInsId() const;

                    /**
                     * 设置Instance ID
                     * @param InsId Instance ID
                     */
                    void SetInsId(const std::string& _insId);

                    /**
                     * 判断参数 InsId 是否已赋值
                     * @return InsId 是否已赋值
                     */
                    bool InsIdHasBeenSet() const;

                    /**
                     * 获取User App ID
                     * @return AppId User App ID
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User App ID
                     * @param AppId User App ID
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取High-defense port
                     * @return VirtualPort High-defense port
                     */
                    std::string GetVirtualPort() const;

                    /**
                     * 设置High-defense port
                     * @param VirtualPort High-defense port
                     */
                    void SetVirtualPort(const std::string& _virtualPort);

                    /**
                     * 判断参数 VirtualPort 是否已赋值
                     * @return VirtualPort 是否已赋值
                     */
                    bool VirtualPortHasBeenSet() const;

                    /**
                     * 获取Certificate ID
                     * @return SSLId Certificate ID
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置Certificate ID
                     * @param SSLId Certificate ID
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     */
                    bool SSLIdHasBeenSet() const;

                private:

                    /**
                     * Rule status. Valid values: `0` (the rule is working), `1` (the rule goes into effect), `2` (rule configuration failed), `3` (the rule is being deleted), `5` (rule deletion failed), `6` (waiting to add rules), `7` (waiting to delete rules), `8` (waiting to upload certificates), `9` (resources for the rule not found), `10` (waiting to modify rules), `11` (the rule is being modifying).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_insId;
                    bool m_insIdHasBeenSet;

                    /**
                     * User App ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * High-defense port
                     */
                    std::string m_virtualPort;
                    bool m_virtualPortHasBeenSet;

                    /**
                     * Certificate ID
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_INSL7RULES_H_
