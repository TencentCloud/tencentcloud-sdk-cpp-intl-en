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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SIGNRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SIGNRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Signature verification conclusion
                */
                class SignResult : public AbstractModel
                {
                public:
                    SignResult();
                    ~SignResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Signature verification status. 1 indicates that the signature verification is passed.</p>
                     * @return VerifyStatus <p>Signature verification status. 1 indicates that the signature verification is passed.</p>
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置<p>Signature verification status. 1 indicates that the signature verification is passed.</p>
                     * @param _verifyStatus <p>Signature verification status. 1 indicates that the signature verification is passed.</p>
                     * 
                     */
                    void SetVerifyStatus(const int64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取<p>Signer name</p>
                     * @return SignerName <p>Signer name</p>
                     * 
                     */
                    std::string GetSignerName() const;

                    /**
                     * 设置<p>Signer name</p>
                     * @param _signerName <p>Signer name</p>
                     * 
                     */
                    void SetSignerName(const std::string& _signerName);

                    /**
                     * 判断参数 SignerName 是否已赋值
                     * @return SignerName 是否已赋值
                     * 
                     */
                    bool SignerNameHasBeenSet() const;

                    /**
                     * 获取<p>Signature algorithm, such as SHA256withRSA</p>
                     * @return SignAlgorithm <p>Signature algorithm, such as SHA256withRSA</p>
                     * 
                     */
                    std::string GetSignAlgorithm() const;

                    /**
                     * 设置<p>Signature algorithm, such as SHA256withRSA</p>
                     * @param _signAlgorithm <p>Signature algorithm, such as SHA256withRSA</p>
                     * 
                     */
                    void SetSignAlgorithm(const std::string& _signAlgorithm);

                    /**
                     * 判断参数 SignAlgorithm 是否已赋值
                     * @return SignAlgorithm 是否已赋值
                     * 
                     */
                    bool SignAlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>Signature time (Unix timestamp in milliseconds)</p>
                     * @return SignTime <p>Signature time (Unix timestamp in milliseconds)</p>
                     * 
                     */
                    int64_t GetSignTime() const;

                    /**
                     * 设置<p>Signature time (Unix timestamp in milliseconds)</p>
                     * @param _signTime <p>Signature time (Unix timestamp in milliseconds)</p>
                     * 
                     */
                    void SetSignTime(const int64_t& _signTime);

                    /**
                     * 判断参数 SignTime 是否已赋值
                     * @return SignTime 是否已赋值
                     * 
                     */
                    bool SignTimeHasBeenSet() const;

                    /**
                     * 获取<p>Signature verification information</p>
                     * @return CertSn <p>Signature verification information</p>
                     * 
                     */
                    std::string GetCertSn() const;

                    /**
                     * 设置<p>Signature verification information</p>
                     * @param _certSn <p>Signature verification information</p>
                     * 
                     */
                    void SetCertSn(const std::string& _certSn);

                    /**
                     * 判断参数 CertSn 是否已赋值
                     * @return CertSn 是否已赋值
                     * 
                     */
                    bool CertSnHasBeenSet() const;

                private:

                    /**
                     * <p>Signature verification status. 1 indicates that the signature verification is passed.</p>
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * <p>Signer name</p>
                     */
                    std::string m_signerName;
                    bool m_signerNameHasBeenSet;

                    /**
                     * <p>Signature algorithm, such as SHA256withRSA</p>
                     */
                    std::string m_signAlgorithm;
                    bool m_signAlgorithmHasBeenSet;

                    /**
                     * <p>Signature time (Unix timestamp in milliseconds)</p>
                     */
                    int64_t m_signTime;
                    bool m_signTimeHasBeenSet;

                    /**
                     * <p>Signature verification information</p>
                     */
                    std::string m_certSn;
                    bool m_certSnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SIGNRESULT_H_
