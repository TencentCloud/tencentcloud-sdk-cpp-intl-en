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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MUTUALTLS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MUTUALTLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 
                */
                class MutualTLS : public AbstractModel
                {
                public:
                    MutualTLS();
                    ~MutualTLS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Switch 
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置
                     * @param _switch 
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Mutual authentication certificate list.
Note: When using MutualTLS as an input parameter in ModifyHostsCertificate, you only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * @return CertInfos Mutual authentication certificate list.
Note: When using MutualTLS as an input parameter in ModifyHostsCertificate, you only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * 
                     */
                    std::vector<CertificateInfo> GetCertInfos() const;

                    /**
                     * 设置Mutual authentication certificate list.
Note: When using MutualTLS as an input parameter in ModifyHostsCertificate, you only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * @param _certInfos Mutual authentication certificate list.
Note: When using MutualTLS as an input parameter in ModifyHostsCertificate, you only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     * 
                     */
                    void SetCertInfos(const std::vector<CertificateInfo>& _certInfos);

                    /**
                     * 判断参数 CertInfos 是否已赋值
                     * @return CertInfos 是否已赋值
                     * 
                     */
                    bool CertInfosHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Mutual authentication certificate list.
Note: When using MutualTLS as an input parameter in ModifyHostsCertificate, you only need to provide the CertId of the corresponding certificate. You can check the CertId from the [SSL Certificate List](https://console.cloud.tencent.com/ssl).
                     */
                    std::vector<CertificateInfo> m_certInfos;
                    bool m_certInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MUTUALTLS_H_
