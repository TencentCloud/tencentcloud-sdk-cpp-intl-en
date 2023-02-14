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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUS_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The on-chain status of the credential.
                */
                class CredentialStatus : public AbstractModel
                {
                public:
                    CredentialStatus();
                    ~CredentialStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The credential ID.
                     * @return CredentialId The credential ID.
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置The credential ID.
                     * @param CredentialId The credential ID.
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取The credential status. `0`: Invalid; `1`: Valid.
                     * @return Status The credential status. `0`: Invalid; `1`: Valid.
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置The credential status. `0`: Invalid; `1`: Valid.
                     * @param Status The credential status. `0`: Invalid; `1`: Valid.
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The DID of the issuer.
                     * @return Issuer The DID of the issuer.
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置The DID of the issuer.
                     * @param Issuer The DID of the issuer.
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取A summary of the credential.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Digest A summary of the credential.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置A summary of the credential.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Digest A summary of the credential.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取The credential signature.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Signature The credential signature.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置The credential signature.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Signature The credential signature.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     */
                    bool SignatureHasBeenSet() const;

                    /**
                     * 获取The last updated timestamp.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TimeStamp The last updated timestamp.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTimeStamp() const;

                    /**
                     * 设置The last updated timestamp.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param TimeStamp The last updated timestamp.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimeStamp(const uint64_t& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * The credential ID.
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * The credential status. `0`: Invalid; `1`: Valid.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The DID of the issuer.
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * A summary of the credential.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * The credential signature.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                    /**
                     * The last updated timestamp.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUS_H_
