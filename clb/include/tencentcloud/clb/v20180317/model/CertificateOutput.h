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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEOUTPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEOUTPUT_H_

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
                class CertificateOutput : public AbstractModel
                {
                public:
                    CertificateOutput();
                    ~CertificateOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     * @return SSLMode Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     * @param SSLMode Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取Server certificate ID.
                     * @return CertId Server certificate ID.
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Server certificate ID.
                     * @param CertId Server certificate ID.
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Client certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertCaId Client certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置Client certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CertCaId Client certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     */
                    bool CertCaIdHasBeenSet() const;

                private:

                    /**
                     * Authentication type. Value range: UNIDIRECTIONAL (unidirectional authentication), MUTUAL (mutual authentication)
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * Server certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Client certificate ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIFICATEOUTPUT_H_
