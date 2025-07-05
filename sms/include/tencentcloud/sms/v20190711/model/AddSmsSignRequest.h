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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_ADDSMSSIGNREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_ADDSMSSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * AddSmsSign request structure.
                */
                class AddSmsSignRequest : public AbstractModel
                {
                public:
                    AddSmsSignRequest();
                    ~AddSmsSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Signature name.
                     * @return SignName Signature name.
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置Signature name.
                     * @param _signName Signature name.
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取Signature type. Each of these types is followed by their `DocumentType` (identity document type) option:
0: company (0, 1, 2, 3).
1: app (0, 1, 2, 3, 4).
2: website (0, 1, 2, 3, 5).
3: WeChat Official Account or WeChat Mini Program (0, 1, 2, 3, 6).
4: trademark (7).
5: governmental/public institution or others (2, 3).
Note: the identity document type must be selected according to the correspondence; otherwise, the review will fail.
                     * @return SignType Signature type. Each of these types is followed by their `DocumentType` (identity document type) option:
0: company (0, 1, 2, 3).
1: app (0, 1, 2, 3, 4).
2: website (0, 1, 2, 3, 5).
3: WeChat Official Account or WeChat Mini Program (0, 1, 2, 3, 6).
4: trademark (7).
5: governmental/public institution or others (2, 3).
Note: the identity document type must be selected according to the correspondence; otherwise, the review will fail.
                     * 
                     */
                    uint64_t GetSignType() const;

                    /**
                     * 设置Signature type. Each of these types is followed by their `DocumentType` (identity document type) option:
0: company (0, 1, 2, 3).
1: app (0, 1, 2, 3, 4).
2: website (0, 1, 2, 3, 5).
3: WeChat Official Account or WeChat Mini Program (0, 1, 2, 3, 6).
4: trademark (7).
5: governmental/public institution or others (2, 3).
Note: the identity document type must be selected according to the correspondence; otherwise, the review will fail.
                     * @param _signType Signature type. Each of these types is followed by their `DocumentType` (identity document type) option:
0: company (0, 1, 2, 3).
1: app (0, 1, 2, 3, 4).
2: website (0, 1, 2, 3, 5).
3: WeChat Official Account or WeChat Mini Program (0, 1, 2, 3, 6).
4: trademark (7).
5: governmental/public institution or others (2, 3).
Note: the identity document type must be selected according to the correspondence; otherwise, the review will fail.
                     * 
                     */
                    void SetSignType(const uint64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取Identity document type:
0: 3-in-1 license.
1: business license.
2: organization code certificate.
3: certificate of unified social credit code.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
                     * @return DocumentType Identity document type:
0: 3-in-1 license.
1: business license.
2: organization code certificate.
3: certificate of unified social credit code.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
                     * 
                     */
                    uint64_t GetDocumentType() const;

                    /**
                     * 设置Identity document type:
0: 3-in-1 license.
1: business license.
2: organization code certificate.
3: certificate of unified social credit code.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
                     * @param _documentType Identity document type:
0: 3-in-1 license.
1: business license.
2: organization code certificate.
3: certificate of unified social credit code.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
                     * 
                     */
                    void SetDocumentType(const uint64_t& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @return International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @param _international Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Signature use:
0: for self-use.
1: for others.
                     * @return UsedMethod Signature use:
0: for self-use.
1: for others.
                     * 
                     */
                    uint64_t GetUsedMethod() const;

                    /**
                     * 设置Signature use:
0: for self-use.
1: for others.
                     * @param _usedMethod Signature use:
0: for self-use.
1: for others.
                     * 
                     */
                    void SetUsedMethod(const uint64_t& _usedMethod);

                    /**
                     * 判断参数 UsedMethod 是否已赋值
                     * @return UsedMethod 是否已赋值
                     * 
                     */
                    bool UsedMethodHasBeenSet() const;

                    /**
                     * 获取You should Base64-encode the image of the identity document corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * @return ProofImage You should Base64-encode the image of the identity document corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * 
                     */
                    std::string GetProofImage() const;

                    /**
                     * 设置You should Base64-encode the image of the identity document corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * @param _proofImage You should Base64-encode the image of the identity document corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     * 
                     */
                    void SetProofImage(const std::string& _proofImage);

                    /**
                     * 判断参数 ProofImage 是否已赋值
                     * @return ProofImage 是否已赋值
                     * 
                     */
                    bool ProofImageHasBeenSet() const;

                    /**
                     * 获取Authorization letter, which should be submitted if `UsedMethod` is for others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `UsedMethod` is 1 (for others).
                     * @return CommissionImage Authorization letter, which should be submitted if `UsedMethod` is for others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `UsedMethod` is 1 (for others).
                     * 
                     */
                    std::string GetCommissionImage() const;

                    /**
                     * 设置Authorization letter, which should be submitted if `UsedMethod` is for others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `UsedMethod` is 1 (for others).
                     * @param _commissionImage Authorization letter, which should be submitted if `UsedMethod` is for others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `UsedMethod` is 1 (for others).
                     * 
                     */
                    void SetCommissionImage(const std::string& _commissionImage);

                    /**
                     * 判断参数 CommissionImage 是否已赋值
                     * @return CommissionImage 是否已赋值
                     * 
                     */
                    bool CommissionImageHasBeenSet() const;

                    /**
                     * 获取Signature application remarks.
                     * @return Remark Signature application remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Signature application remarks.
                     * @param _remark Signature application remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Signature name.
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * Signature type. Each of these types is followed by their `DocumentType` (identity document type) option:
0: company (0, 1, 2, 3).
1: app (0, 1, 2, 3, 4).
2: website (0, 1, 2, 3, 5).
3: WeChat Official Account or WeChat Mini Program (0, 1, 2, 3, 6).
4: trademark (7).
5: governmental/public institution or others (2, 3).
Note: the identity document type must be selected according to the correspondence; otherwise, the review will fail.
                     */
                    uint64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * Identity document type:
0: 3-in-1 license.
1: business license.
2: organization code certificate.
3: certificate of unified social credit code.
4: screenshot of application backend management (for personal app).
5: screenshot of website ICP filing backend (for personal website).
6: screenshot of WeChat Mini Program settings page (for personal WeChat Mini Program).
7: trademark registration certificate.
                     */
                    uint64_t m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * Signature use:
0: for self-use.
1: for others.
                     */
                    uint64_t m_usedMethod;
                    bool m_usedMethodHasBeenSet;

                    /**
                     * You should Base64-encode the image of the identity document corresponding to the signature first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
                     */
                    std::string m_proofImage;
                    bool m_proofImageHasBeenSet;

                    /**
                     * Authorization letter, which should be submitted if `UsedMethod` is for others.
You should Base64-encode the image first, remove the prefix `data:image/jpeg;base64,` from the resulted string, and then use it as the value of this parameter.
Note: this field will take effect only when `UsedMethod` is 1 (for others).
                     */
                    std::string m_commissionImage;
                    bool m_commissionImageHasBeenSet;

                    /**
                     * Signature application remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_ADDSMSSIGNREQUEST_H_
