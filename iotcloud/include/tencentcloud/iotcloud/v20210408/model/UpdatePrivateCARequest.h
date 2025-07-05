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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRIVATECAREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRIVATECAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UpdatePrivateCA request structure.
                */
                class UpdatePrivateCARequest : public AbstractModel
                {
                public:
                    UpdatePrivateCARequest();
                    ~UpdatePrivateCARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CA certificate name
                     * @return CertName CA certificate name
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置CA certificate name
                     * @param _certName CA certificate name
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取CA certificate content
                     * @return CertText CA certificate content
                     * 
                     */
                    std::string GetCertText() const;

                    /**
                     * 设置CA certificate content
                     * @param _certText CA certificate content
                     * 
                     */
                    void SetCertText(const std::string& _certText);

                    /**
                     * 判断参数 CertText 是否已赋值
                     * @return CertText 是否已赋值
                     * 
                     */
                    bool CertTextHasBeenSet() const;

                    /**
                     * 获取Content verifying the CA certificate
                     * @return VerifyCertText Content verifying the CA certificate
                     * 
                     */
                    std::string GetVerifyCertText() const;

                    /**
                     * 设置Content verifying the CA certificate
                     * @param _verifyCertText Content verifying the CA certificate
                     * 
                     */
                    void SetVerifyCertText(const std::string& _verifyCertText);

                    /**
                     * 判断参数 VerifyCertText 是否已赋值
                     * @return VerifyCertText 是否已赋值
                     * 
                     */
                    bool VerifyCertTextHasBeenSet() const;

                private:

                    /**
                     * CA certificate name
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * CA certificate content
                     */
                    std::string m_certText;
                    bool m_certTextHasBeenSet;

                    /**
                     * Content verifying the CA certificate
                     */
                    std::string m_verifyCertText;
                    bool m_verifyCertTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_UPDATEPRIVATECAREQUEST_H_
