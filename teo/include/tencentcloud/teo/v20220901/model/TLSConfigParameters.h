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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TLSCONFIGPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TLSCONFIGPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * SSL/TLS Security configuration parameters.
                */
                class TLSConfigParameters : public AbstractModel
                {
                public:
                    TLSConfigParameters();
                    ~TLSConfigParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TLS version. at least one must be specified. if multiple versions are specified, they must be consecutive, e.g., enable tls1, 1.1, 1.2, and 1.3. it is not allowed to enable only 1 and 1.2 while disabling 1.1. valid values: <li>`tlsv1`: tlsv1 version;</li><li>`tlsv1.1`: tlsv1.1 version;</li><li>`tlsv1.2`: tlsv1.2 version;</li><li>`tlsv1.3`: tlsv1.3 version.</li>.
                     * @return Version TLS version. at least one must be specified. if multiple versions are specified, they must be consecutive, e.g., enable tls1, 1.1, 1.2, and 1.3. it is not allowed to enable only 1 and 1.2 while disabling 1.1. valid values: <li>`tlsv1`: tlsv1 version;</li><li>`tlsv1.1`: tlsv1.1 version;</li><li>`tlsv1.2`: tlsv1.2 version;</li><li>`tlsv1.3`: tlsv1.3 version.</li>.
                     * 
                     */
                    std::vector<std::string> GetVersion() const;

                    /**
                     * 设置TLS version. at least one must be specified. if multiple versions are specified, they must be consecutive, e.g., enable tls1, 1.1, 1.2, and 1.3. it is not allowed to enable only 1 and 1.2 while disabling 1.1. valid values: <li>`tlsv1`: tlsv1 version;</li><li>`tlsv1.1`: tlsv1.1 version;</li><li>`tlsv1.2`: tlsv1.2 version;</li><li>`tlsv1.3`: tlsv1.3 version.</li>.
                     * @param _version TLS version. at least one must be specified. if multiple versions are specified, they must be consecutive, e.g., enable tls1, 1.1, 1.2, and 1.3. it is not allowed to enable only 1 and 1.2 while disabling 1.1. valid values: <li>`tlsv1`: tlsv1 version;</li><li>`tlsv1.1`: tlsv1.1 version;</li><li>`tlsv1.2`: tlsv1.2 version;</li><li>`tlsv1.3`: tlsv1.3 version.</li>.
                     * 
                     */
                    void SetVersion(const std::vector<std::string>& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Cipher suite. for detailed information, please refer to [tls versions and cipher suites description](https://intl.cloud.tencent.com/document/product/1552/86545?from_cn_redirect=1). valid values: <li>`loose-v2023`: loose-v2023 cipher suite;</li><li>`general-v2023`: general-v2023 cipher suite;</li><li>`strict-v2023`: strict-v2023 cipher suite.</li>.
                     * @return CipherSuite Cipher suite. for detailed information, please refer to [tls versions and cipher suites description](https://intl.cloud.tencent.com/document/product/1552/86545?from_cn_redirect=1). valid values: <li>`loose-v2023`: loose-v2023 cipher suite;</li><li>`general-v2023`: general-v2023 cipher suite;</li><li>`strict-v2023`: strict-v2023 cipher suite.</li>.
                     * 
                     */
                    std::string GetCipherSuite() const;

                    /**
                     * 设置Cipher suite. for detailed information, please refer to [tls versions and cipher suites description](https://intl.cloud.tencent.com/document/product/1552/86545?from_cn_redirect=1). valid values: <li>`loose-v2023`: loose-v2023 cipher suite;</li><li>`general-v2023`: general-v2023 cipher suite;</li><li>`strict-v2023`: strict-v2023 cipher suite.</li>.
                     * @param _cipherSuite Cipher suite. for detailed information, please refer to [tls versions and cipher suites description](https://intl.cloud.tencent.com/document/product/1552/86545?from_cn_redirect=1). valid values: <li>`loose-v2023`: loose-v2023 cipher suite;</li><li>`general-v2023`: general-v2023 cipher suite;</li><li>`strict-v2023`: strict-v2023 cipher suite.</li>.
                     * 
                     */
                    void SetCipherSuite(const std::string& _cipherSuite);

                    /**
                     * 判断参数 CipherSuite 是否已赋值
                     * @return CipherSuite 是否已赋值
                     * 
                     */
                    bool CipherSuiteHasBeenSet() const;

                private:

                    /**
                     * TLS version. at least one must be specified. if multiple versions are specified, they must be consecutive, e.g., enable tls1, 1.1, 1.2, and 1.3. it is not allowed to enable only 1 and 1.2 while disabling 1.1. valid values: <li>`tlsv1`: tlsv1 version;</li><li>`tlsv1.1`: tlsv1.1 version;</li><li>`tlsv1.2`: tlsv1.2 version;</li><li>`tlsv1.3`: tlsv1.3 version.</li>.
                     */
                    std::vector<std::string> m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Cipher suite. for detailed information, please refer to [tls versions and cipher suites description](https://intl.cloud.tencent.com/document/product/1552/86545?from_cn_redirect=1). valid values: <li>`loose-v2023`: loose-v2023 cipher suite;</li><li>`general-v2023`: general-v2023 cipher suite;</li><li>`strict-v2023`: strict-v2023 cipher suite.</li>.
                     */
                    std::string m_cipherSuite;
                    bool m_cipherSuiteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TLSCONFIGPARAMETERS_H_
