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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Certificate information
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the certificate. If it's not specified, `CertContent` and `CertKey` are required. For a server certificate, you also need to specify `CertName`. 
                     * @return CertId ID of the certificate. If it's not specified, `CertContent` and `CertKey` are required. For a server certificate, you also need to specify `CertName`. 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ID of the certificate. If it's not specified, `CertContent` and `CertKey` are required. For a server certificate, you also need to specify `CertName`. 
                     * @param CertId ID of the certificate. If it's not specified, `CertContent` and `CertKey` are required. For a server certificate, you also need to specify `CertName`. 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Name of the uploaded certificate. It's required if `CertId` is not specified.
                     * @return CertName Name of the uploaded certificate. It's required if `CertId` is not specified.
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置Name of the uploaded certificate. It's required if `CertId` is not specified.
                     * @param CertName Name of the uploaded certificate. It's required if `CertId` is not specified.
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取Public key of the uploaded certificate. This is required if `CertId` is not specified.
                     * @return CertContent Public key of the uploaded certificate. This is required if `CertId` is not specified.
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置Public key of the uploaded certificate. This is required if `CertId` is not specified.
                     * @param CertContent Public key of the uploaded certificate. This is required if `CertId` is not specified.
                     */
                    void SetCertContent(const std::string& _certContent);

                    /**
                     * 判断参数 CertContent 是否已赋值
                     * @return CertContent 是否已赋值
                     */
                    bool CertContentHasBeenSet() const;

                    /**
                     * 获取Private key of the uploaded server certificate. This is required if `CertId` is not specified.
                     * @return CertKey Private key of the uploaded server certificate. This is required if `CertId` is not specified.
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置Private key of the uploaded server certificate. This is required if `CertId` is not specified.
                     * @param CertKey Private key of the uploaded server certificate. This is required if `CertId` is not specified.
                     */
                    void SetCertKey(const std::string& _certKey);

                    /**
                     * 判断参数 CertKey 是否已赋值
                     * @return CertKey 是否已赋值
                     */
                    bool CertKeyHasBeenSet() const;

                private:

                    /**
                     * ID of the certificate. If it's not specified, `CertContent` and `CertKey` are required. For a server certificate, you also need to specify `CertName`. 
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Name of the uploaded certificate. It's required if `CertId` is not specified.
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * Public key of the uploaded certificate. This is required if `CertId` is not specified.
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * Private key of the uploaded server certificate. This is required if `CertId` is not specified.
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTINFO_H_
