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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMCERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MutualTLS.h>
#include <tencentcloud/teo/v20220901/model/OriginCertificateVerify.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Used to enable/disable origin-pull mutual authentication and origin certificate verification. the certificate for origin-pull mutual authentication is carried by EO during origin-pull, and the origin server can optionally validate this certificate to ensure the request originates from a trusted EO node. when enabled, the certificate configuration is used for EO nodes to verify whether the origin certificate is trustworthy.
                */
                class UpstreamCertInfo : public AbstractModel
                {
                public:
                    UpstreamCertInfo();
                    ~UpstreamCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取In the origin-pull mutual authentication scenario, this field represents the certificate (including the public and private keys) carried during EO node origin-pull, which is deployed in the EO node for the origin server to authenticate the EO node. When used as an input parameter, it is left blank to indicate retaining the original configuration.
                     * @return UpstreamMutualTLS In the origin-pull mutual authentication scenario, this field represents the certificate (including the public and private keys) carried during EO node origin-pull, which is deployed in the EO node for the origin server to authenticate the EO node. When used as an input parameter, it is left blank to indicate retaining the original configuration.
                     * 
                     */
                    MutualTLS GetUpstreamMutualTLS() const;

                    /**
                     * 设置In the origin-pull mutual authentication scenario, this field represents the certificate (including the public and private keys) carried during EO node origin-pull, which is deployed in the EO node for the origin server to authenticate the EO node. When used as an input parameter, it is left blank to indicate retaining the original configuration.
                     * @param _upstreamMutualTLS In the origin-pull mutual authentication scenario, this field represents the certificate (including the public and private keys) carried during EO node origin-pull, which is deployed in the EO node for the origin server to authenticate the EO node. When used as an input parameter, it is left blank to indicate retaining the original configuration.
                     * 
                     */
                    void SetUpstreamMutualTLS(const MutualTLS& _upstreamMutualTLS);

                    /**
                     * 判断参数 UpstreamMutualTLS 是否已赋值
                     * @return UpstreamMutualTLS 是否已赋值
                     * 
                     */
                    bool UpstreamMutualTLSHasBeenSet() const;

                    /**
                     * 获取In the origin certificate verification scenario, this field represents the CA certificate used by the EO node to verify the server-side certificate when returning to the origin. it is deployed in the EO node and used for the EO node to authenticate the server certificate. when used as an input parameter, leave blank to indicate retaining the original configuration.
                     * @return UpstreamCertificateVerify In the origin certificate verification scenario, this field represents the CA certificate used by the EO node to verify the server-side certificate when returning to the origin. it is deployed in the EO node and used for the EO node to authenticate the server certificate. when used as an input parameter, leave blank to indicate retaining the original configuration.
                     * 
                     */
                    OriginCertificateVerify GetUpstreamCertificateVerify() const;

                    /**
                     * 设置In the origin certificate verification scenario, this field represents the CA certificate used by the EO node to verify the server-side certificate when returning to the origin. it is deployed in the EO node and used for the EO node to authenticate the server certificate. when used as an input parameter, leave blank to indicate retaining the original configuration.
                     * @param _upstreamCertificateVerify In the origin certificate verification scenario, this field represents the CA certificate used by the EO node to verify the server-side certificate when returning to the origin. it is deployed in the EO node and used for the EO node to authenticate the server certificate. when used as an input parameter, leave blank to indicate retaining the original configuration.
                     * 
                     */
                    void SetUpstreamCertificateVerify(const OriginCertificateVerify& _upstreamCertificateVerify);

                    /**
                     * 判断参数 UpstreamCertificateVerify 是否已赋值
                     * @return UpstreamCertificateVerify 是否已赋值
                     * 
                     */
                    bool UpstreamCertificateVerifyHasBeenSet() const;

                private:

                    /**
                     * In the origin-pull mutual authentication scenario, this field represents the certificate (including the public and private keys) carried during EO node origin-pull, which is deployed in the EO node for the origin server to authenticate the EO node. When used as an input parameter, it is left blank to indicate retaining the original configuration.
                     */
                    MutualTLS m_upstreamMutualTLS;
                    bool m_upstreamMutualTLSHasBeenSet;

                    /**
                     * In the origin certificate verification scenario, this field represents the CA certificate used by the EO node to verify the server-side certificate when returning to the origin. it is deployed in the EO node and used for the EO node to authenticate the server certificate. when used as an input parameter, leave blank to indicate retaining the original configuration.
                     */
                    OriginCertificateVerify m_upstreamCertificateVerify;
                    bool m_upstreamCertificateVerifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMCERTINFO_H_
