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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DOMAINVALIDATIONRESULT_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DOMAINVALIDATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Domain validation result of the certificate
                */
                class DomainValidationResult : public AbstractModel
                {
                public:
                    DomainValidationResult();
                    ~DomainValidationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain names bound to the certificate.
                     * @return Domain Domain names bound to the certificate.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain names bound to the certificate.
                     * @param _domain Domain names bound to the certificate.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain name validation type. Value is DNS, FILE, DNS_AUTO, DNS_PROXY, or FILE_PROXY.
                     * @return VerifyType Domain name validation type. Value is DNS, FILE, DNS_AUTO, DNS_PROXY, or FILE_PROXY.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Domain name validation type. Value is DNS, FILE, DNS_AUTO, DNS_PROXY, or FILE_PROXY.
                     * @param _verifyType Domain name validation type. Value is DNS, FILE, DNS_AUTO, DNS_PROXY, or FILE_PROXY.
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud detection result, Value: 1 (verified); -1 (rate limited or txt record not found); -2 (txt record not match); -3 (ns record not found); -4 (file not found); -5 (file not match); -6 (cname record not found); -7 (cname record not match); -8 (ns record not found); -9 (file not found); -10 (file not match).

                     * @return LocalCheck Tencent Cloud detection result, Value: 1 (verified); -1 (rate limited or txt record not found); -2 (txt record not match); -3 (ns record not found); -4 (file not found); -5 (file not match); -6 (cname record not found); -7 (cname record not match); -8 (ns record not found); -9 (file not found); -10 (file not match).

                     * 
                     */
                    int64_t GetLocalCheck() const;

                    /**
                     * 设置Tencent Cloud detection result, Value: 1 (verified); -1 (rate limited or txt record not found); -2 (txt record not match); -3 (ns record not found); -4 (file not found); -5 (file not match); -6 (cname record not found); -7 (cname record not match); -8 (ns record not found); -9 (file not found); -10 (file not match).

                     * @param _localCheck Tencent Cloud detection result, Value: 1 (verified); -1 (rate limited or txt record not found); -2 (txt record not match); -3 (ns record not found); -4 (file not found); -5 (file not match); -6 (cname record not found); -7 (cname record not match); -8 (ns record not found); -9 (file not found); -10 (file not match).

                     * 
                     */
                    void SetLocalCheck(const int64_t& _localCheck);

                    /**
                     * 判断参数 LocalCheck 是否已赋值
                     * @return LocalCheck 是否已赋值
                     * 
                     */
                    bool LocalCheckHasBeenSet() const;

                    /**
                     * 获取CA check result. Value: -1 (detection failed); 2 (detection passed).
                     * @return CaCheck CA check result. Value: -1 (detection failed); 2 (detection passed).
                     * 
                     */
                    int64_t GetCaCheck() const;

                    /**
                     * 设置CA check result. Value: -1 (detection failed); 2 (detection passed).
                     * @param _caCheck CA check result. Value: -1 (detection failed); 2 (detection passed).
                     * 
                     */
                    void SetCaCheck(const int64_t& _caCheck);

                    /**
                     * 判断参数 CaCheck 是否已赋值
                     * @return CaCheck 是否已赋值
                     * 
                     */
                    bool CaCheckHasBeenSet() const;

                    /**
                     * 获取Check failure reasons. Description of the LocalCheck status.
                     * @return LocalCheckFailReason Check failure reasons. Description of the LocalCheck status.
                     * 
                     */
                    std::string GetLocalCheckFailReason() const;

                    /**
                     * 设置Check failure reasons. Description of the LocalCheck status.
                     * @param _localCheckFailReason Check failure reasons. Description of the LocalCheck status.
                     * 
                     */
                    void SetLocalCheckFailReason(const std::string& _localCheckFailReason);

                    /**
                     * 判断参数 LocalCheckFailReason 是否已赋值
                     * @return LocalCheckFailReason 是否已赋值
                     * 
                     */
                    bool LocalCheckFailReasonHasBeenSet() const;

                    /**
                     * 获取Detected value.
                     * @return CheckValue Detected value.
                     * 
                     */
                    std::vector<std::string> GetCheckValue() const;

                    /**
                     * 设置Detected value.
                     * @param _checkValue Detected value.
                     * 
                     */
                    void SetCheckValue(const std::vector<std::string>& _checkValue);

                    /**
                     * 判断参数 CheckValue 是否已赋值
                     * @return CheckValue 是否已赋值
                     * 
                     */
                    bool CheckValueHasBeenSet() const;

                    /**
                     * 获取Whether the request is rate-limited. Valid values: false (not rate-limited); true (rate-limited).
                     * @return Frequently Whether the request is rate-limited. Valid values: false (not rate-limited); true (rate-limited).
                     * 
                     */
                    bool GetFrequently() const;

                    /**
                     * 设置Whether the request is rate-limited. Valid values: false (not rate-limited); true (rate-limited).
                     * @param _frequently Whether the request is rate-limited. Valid values: false (not rate-limited); true (rate-limited).
                     * 
                     */
                    void SetFrequently(const bool& _frequently);

                    /**
                     * 判断参数 Frequently 是否已赋值
                     * @return Frequently 是否已赋值
                     * 
                     */
                    bool FrequentlyHasBeenSet() const;

                    /**
                     * 获取Whether the certificate has been issued. Value: false (not issued); true (issued).
                     * @return Issued Whether the certificate has been issued. Value: false (not issued); true (issued).
                     * 
                     */
                    bool GetIssued() const;

                    /**
                     * 设置Whether the certificate has been issued. Value: false (not issued); true (issued).
                     * @param _issued Whether the certificate has been issued. Value: false (not issued); true (issued).
                     * 
                     */
                    void SetIssued(const bool& _issued);

                    /**
                     * 判断参数 Issued 是否已赋值
                     * @return Issued 是否已赋值
                     * 
                     */
                    bool IssuedHasBeenSet() const;

                private:

                    /**
                     * Domain names bound to the certificate.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain name validation type. Value is DNS, FILE, DNS_AUTO, DNS_PROXY, or FILE_PROXY.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * Tencent Cloud detection result, Value: 1 (verified); -1 (rate limited or txt record not found); -2 (txt record not match); -3 (ns record not found); -4 (file not found); -5 (file not match); -6 (cname record not found); -7 (cname record not match); -8 (ns record not found); -9 (file not found); -10 (file not match).

                     */
                    int64_t m_localCheck;
                    bool m_localCheckHasBeenSet;

                    /**
                     * CA check result. Value: -1 (detection failed); 2 (detection passed).
                     */
                    int64_t m_caCheck;
                    bool m_caCheckHasBeenSet;

                    /**
                     * Check failure reasons. Description of the LocalCheck status.
                     */
                    std::string m_localCheckFailReason;
                    bool m_localCheckFailReasonHasBeenSet;

                    /**
                     * Detected value.
                     */
                    std::vector<std::string> m_checkValue;
                    bool m_checkValueHasBeenSet;

                    /**
                     * Whether the request is rate-limited. Valid values: false (not rate-limited); true (rate-limited).
                     */
                    bool m_frequently;
                    bool m_frequentlyHasBeenSet;

                    /**
                     * Whether the certificate has been issued. Value: false (not issued); true (issued).
                     */
                    bool m_issued;
                    bool m_issuedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DOMAINVALIDATIONRESULT_H_
