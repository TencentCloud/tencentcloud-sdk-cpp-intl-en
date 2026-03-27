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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * SSL Encryption Configuration
                */
                class SSLConfig : public AbstractModel
                {
                public:
                    SSLConfig();
                    ~SSLConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SSL Encryption Status
enable - Enabled
disable - Disabled
enable_doing - Enabling
disable_doing - Disabling
renew_doing - Updating
wait_doing - Waiting to be executed during maintenance window
                     * @return Encryption SSL Encryption Status
enable - Enabled
disable - Disabled
enable_doing - Enabling
disable_doing - Disabling
renew_doing - Updating
wait_doing - Waiting to be executed during maintenance window
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置SSL Encryption Status
enable - Enabled
disable - Disabled
enable_doing - Enabling
disable_doing - Disabling
renew_doing - Updating
wait_doing - Waiting to be executed during maintenance window
                     * @param _encryption SSL Encryption Status
enable - Enabled
disable - Disabled
enable_doing - Enabling
disable_doing - Disabling
renew_doing - Updating
wait_doing - Waiting to be executed during maintenance window
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取SSL Certificates Validity Period, Time Format YYYY-MM-DD HH:MM:SS
                     * @return SSLValidityPeriod SSL Certificates Validity Period, Time Format YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetSSLValidityPeriod() const;

                    /**
                     * 设置SSL Certificates Validity Period, Time Format YYYY-MM-DD HH:MM:SS
                     * @param _sSLValidityPeriod SSL Certificates Validity Period, Time Format YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetSSLValidityPeriod(const std::string& _sSLValidityPeriod);

                    /**
                     * 判断参数 SSLValidityPeriod 是否已赋值
                     * @return SSLValidityPeriod 是否已赋值
                     * 
                     */
                    bool SSLValidityPeriodHasBeenSet() const;

                    /**
                     * 获取SSL Certificates Validity: 0 - Invalid, 1 - Valid
                     * @return SSLValidity SSL Certificates Validity: 0 - Invalid, 1 - Valid
                     * 
                     */
                    uint64_t GetSSLValidity() const;

                    /**
                     * 设置SSL Certificates Validity: 0 - Invalid, 1 - Valid
                     * @param _sSLValidity SSL Certificates Validity: 0 - Invalid, 1 - Valid
                     * 
                     */
                    void SetSSLValidity(const uint64_t& _sSLValidity);

                    /**
                     * 判断参数 SSLValidity 是否已赋值
                     * @return SSLValidity 是否已赋值
                     * 
                     */
                    bool SSLValidityHasBeenSet() const;

                private:

                    /**
                     * SSL Encryption Status
enable - Enabled
disable - Disabled
enable_doing - Enabling
disable_doing - Disabling
renew_doing - Updating
wait_doing - Waiting to be executed during maintenance window
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * SSL Certificates Validity Period, Time Format YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_sSLValidityPeriod;
                    bool m_sSLValidityPeriodHasBeenSet;

                    /**
                     * SSL Certificates Validity: 0 - Invalid, 1 - Valid
                     */
                    uint64_t m_sSLValidity;
                    bool m_sSLValidityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SSLCONFIG_H_
