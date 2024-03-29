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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_

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
                * Information of the acceleration domain name certificate.
                */
                class AccelerationDomainCertificate : public AbstractModel
                {
                public:
                    AccelerationDomainCertificate();
                    ~AccelerationDomainCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * @return Mode Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * @param _mode Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取List of certificates
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return List List of certificates
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CertificateInfo> GetList() const;

                    /**
                     * 设置List of certificates
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _list List of certificates
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetList(const std::vector<CertificateInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Certificate configuration mode. Values: <li>`disable`: Do not configure the certificate;</li><li>`eofreecert`: Use a free certificate provided by EdgeOne; </li><li>`sslcert`: Configure an SSL certificate.</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * List of certificates
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<CertificateInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
