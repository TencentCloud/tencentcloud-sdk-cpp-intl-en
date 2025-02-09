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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEDOMAININFOPARAM_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEDOMAININFOPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Domain information
                */
                class DescribeDomainInfoParam : public AbstractModel
                {
                public:
                    DescribeDomainInfoParam();
                    ~DescribeDomainInfoParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Multiple domain separators ';'
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainUrl Multiple domain separators ';'
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomainUrl() const;

                    /**
                     * 设置Multiple domain separators ';'
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainUrl Multiple domain separators ';'
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainUrl(const std::string& _domainUrl);

                    /**
                     * 判断参数 DomainUrl 是否已赋值
                     * @return DomainUrl 是否已赋值
                     * 
                     */
                    bool DomainUrlHasBeenSet() const;

                    /**
                     * 获取Domain type 1-requests domain 2-WebView load domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainType Domain type 1-requests domain 2-WebView load domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Domain type 1-requests domain 2-WebView load domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainType Domain type 1-requests domain 2-WebView load domain
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                private:

                    /**
                     * Multiple domain separators ';'
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainUrl;
                    bool m_domainUrlHasBeenSet;

                    /**
                     * Domain type 1-requests domain 2-WebView load domain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEDOMAININFOPARAM_H_
