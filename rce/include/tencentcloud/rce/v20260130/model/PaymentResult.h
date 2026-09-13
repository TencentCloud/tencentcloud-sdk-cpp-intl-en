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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTRESULT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Payment result
                */
                class PaymentResult : public AbstractModel
                {
                public:
                    PaymentResult();
                    ~PaymentResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The status of the payment</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>failure: Failure.</li></ul>
                     * @return Status <p>The status of the payment</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>failure: Failure.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>The status of the payment</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>failure: Failure.</li></ul>
                     * @param _status <p>The status of the payment</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>failure: Failure.</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>The reason why the payment has been declined. e.g.card_declined</p>
                     * @return FailureReason <p>The reason why the payment has been declined. e.g.card_declined</p>
                     * 
                     */
                    std::string GetFailureReason() const;

                    /**
                     * 设置<p>The reason why the payment has been declined. e.g.card_declined</p>
                     * @param _failureReason <p>The reason why the payment has been declined. e.g.card_declined</p>
                     * 
                     */
                    void SetFailureReason(const std::string& _failureReason);

                    /**
                     * 判断参数 FailureReason 是否已赋值
                     * @return FailureReason 是否已赋值
                     * 
                     */
                    bool FailureReasonHasBeenSet() const;

                    /**
                     * 获取<p>Whether the 3DS has been used in the payment,  enumeration value:</p><ul><li>Yes: true</li><li>No: false</li></ul>
                     * @return ThreeDomainSecure <p>Whether the 3DS has been used in the payment,  enumeration value:</p><ul><li>Yes: true</li><li>No: false</li></ul>
                     * 
                     */
                    bool GetThreeDomainSecure() const;

                    /**
                     * 设置<p>Whether the 3DS has been used in the payment,  enumeration value:</p><ul><li>Yes: true</li><li>No: false</li></ul>
                     * @param _threeDomainSecure <p>Whether the 3DS has been used in the payment,  enumeration value:</p><ul><li>Yes: true</li><li>No: false</li></ul>
                     * 
                     */
                    void SetThreeDomainSecure(const bool& _threeDomainSecure);

                    /**
                     * 判断参数 ThreeDomainSecure 是否已赋值
                     * @return ThreeDomainSecure 是否已赋值
                     * 
                     */
                    bool ThreeDomainSecureHasBeenSet() const;

                    /**
                     * 获取<p>The ECI code returned when 3DS used</p>
                     * @return ECICode <p>The ECI code returned when 3DS used</p>
                     * 
                     */
                    std::string GetECICode() const;

                    /**
                     * 设置<p>The ECI code returned when 3DS used</p>
                     * @param _eCICode <p>The ECI code returned when 3DS used</p>
                     * 
                     */
                    void SetECICode(const std::string& _eCICode);

                    /**
                     * 判断参数 ECICode 是否已赋值
                     * @return ECICode 是否已赋值
                     * 
                     */
                    bool ECICodeHasBeenSet() const;

                    /**
                     * 获取<p>Response code from the AVS used for address verification</p>
                     * @return AVSCode <p>Response code from the AVS used for address verification</p>
                     * 
                     */
                    std::string GetAVSCode() const;

                    /**
                     * 设置<p>Response code from the AVS used for address verification</p>
                     * @param _aVSCode <p>Response code from the AVS used for address verification</p>
                     * 
                     */
                    void SetAVSCode(const std::string& _aVSCode);

                    /**
                     * 判断参数 AVSCode 是否已赋值
                     * @return AVSCode 是否已赋值
                     * 
                     */
                    bool AVSCodeHasBeenSet() const;

                    /**
                     * 获取<p>Response code from the CVC used for payment authenticity</p>
                     * @return CVCCode <p>Response code from the CVC used for payment authenticity</p>
                     * 
                     */
                    std::string GetCVCCode() const;

                    /**
                     * 设置<p>Response code from the CVC used for payment authenticity</p>
                     * @param _cVCCode <p>Response code from the CVC used for payment authenticity</p>
                     * 
                     */
                    void SetCVCCode(const std::string& _cVCCode);

                    /**
                     * 判断参数 CVCCode 是否已赋值
                     * @return CVCCode 是否已赋值
                     * 
                     */
                    bool CVCCodeHasBeenSet() const;

                private:

                    /**
                     * <p>The status of the payment</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>failure: Failure.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>The reason why the payment has been declined. e.g.card_declined</p>
                     */
                    std::string m_failureReason;
                    bool m_failureReasonHasBeenSet;

                    /**
                     * <p>Whether the 3DS has been used in the payment,  enumeration value:</p><ul><li>Yes: true</li><li>No: false</li></ul>
                     */
                    bool m_threeDomainSecure;
                    bool m_threeDomainSecureHasBeenSet;

                    /**
                     * <p>The ECI code returned when 3DS used</p>
                     */
                    std::string m_eCICode;
                    bool m_eCICodeHasBeenSet;

                    /**
                     * <p>Response code from the AVS used for address verification</p>
                     */
                    std::string m_aVSCode;
                    bool m_aVSCodeHasBeenSet;

                    /**
                     * <p>Response code from the CVC used for payment authenticity</p>
                     */
                    std::string m_cVCCode;
                    bool m_cVCCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PAYMENTRESULT_H_
