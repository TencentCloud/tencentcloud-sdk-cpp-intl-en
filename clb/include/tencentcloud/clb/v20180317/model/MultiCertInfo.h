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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MULTICERTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MULTICERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Information of multiple certificates bound with the load balancer listener or rule.
                */
                class MultiCertInfo : public AbstractModel
                {
                public:
                    MultiCertInfo();
                    ~MultiCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication type. Values: `UNIDIRECTIONAL` (one-way authentication), `MUTUAL` (two-way authentication)
                     * @return SSLMode Authentication type. Values: `UNIDIRECTIONAL` (one-way authentication), `MUTUAL` (two-way authentication)
                     */
                    std::string GetSSLMode() const;

                    /**
                     * 设置Authentication type. Values: `UNIDIRECTIONAL` (one-way authentication), `MUTUAL` (two-way authentication)
                     * @param SSLMode Authentication type. Values: `UNIDIRECTIONAL` (one-way authentication), `MUTUAL` (two-way authentication)
                     */
                    void SetSSLMode(const std::string& _sSLMode);

                    /**
                     * 判断参数 SSLMode 是否已赋值
                     * @return SSLMode 是否已赋值
                     */
                    bool SSLModeHasBeenSet() const;

                    /**
                     * 获取List of listener or rule certificates. One-way and two-way authentication are supported. Only one certificate can be specified for one algorithm. If `SSLMode` is `MUTUAL` (two-way authentication), at least one CA certificate is required. 
                     * @return CertList List of listener or rule certificates. One-way and two-way authentication are supported. Only one certificate can be specified for one algorithm. If `SSLMode` is `MUTUAL` (two-way authentication), at least one CA certificate is required. 
                     */
                    std::vector<CertInfo> GetCertList() const;

                    /**
                     * 设置List of listener or rule certificates. One-way and two-way authentication are supported. Only one certificate can be specified for one algorithm. If `SSLMode` is `MUTUAL` (two-way authentication), at least one CA certificate is required. 
                     * @param CertList List of listener or rule certificates. One-way and two-way authentication are supported. Only one certificate can be specified for one algorithm. If `SSLMode` is `MUTUAL` (two-way authentication), at least one CA certificate is required. 
                     */
                    void SetCertList(const std::vector<CertInfo>& _certList);

                    /**
                     * 判断参数 CertList 是否已赋值
                     * @return CertList 是否已赋值
                     */
                    bool CertListHasBeenSet() const;

                private:

                    /**
                     * Authentication type. Values: `UNIDIRECTIONAL` (one-way authentication), `MUTUAL` (two-way authentication)
                     */
                    std::string m_sSLMode;
                    bool m_sSLModeHasBeenSet;

                    /**
                     * List of listener or rule certificates. One-way and two-way authentication are supported. Only one certificate can be specified for one algorithm. If `SSLMode` is `MUTUAL` (two-way authentication), at least one CA certificate is required. 
                     */
                    std::vector<CertInfo> m_certList;
                    bool m_certListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MULTICERTINFO_H_
