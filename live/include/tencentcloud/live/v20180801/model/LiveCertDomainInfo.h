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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVECERTDOMAININFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVECERTDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The domains to bind to a certificate.
                */
                class LiveCertDomainInfo : public AbstractModel
                {
                public:
                    LiveCertDomainInfo();
                    ~LiveCertDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain name.
                     * @return DomainName The domain name.
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置The domain name.
                     * @param DomainName The domain name.
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable HTTPS for the domain.
1: Enable
0: Disable
-1: Keep the current configuration
                     * @return Status Whether to enable HTTPS for the domain.
1: Enable
0: Disable
-1: Keep the current configuration
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Whether to enable HTTPS for the domain.
1: Enable
0: Disable
-1: Keep the current configuration
                     * @param Status Whether to enable HTTPS for the domain.
1: Enable
0: Disable
-1: Keep the current configuration
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Whether to enable HTTPS for the domain.
1: Enable
0: Disable
-1: Keep the current configuration
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVECERTDOMAININFO_H_
