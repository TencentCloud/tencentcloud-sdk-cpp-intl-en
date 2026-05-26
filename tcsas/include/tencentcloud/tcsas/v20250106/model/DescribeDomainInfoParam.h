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
                * Response parameters for querying domain information.
                */
                class DescribeDomainInfoParam : public AbstractModel
                {
                public:
                    DescribeDomainInfoParam();
                    ~DescribeDomainInfoParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Multiple domains concatenated with semicolons (;). 
                     * @return DomainUrl Multiple domains concatenated with semicolons (;). 
                     * 
                     */
                    std::string GetDomainUrl() const;

                    /**
                     * 设置Multiple domains concatenated with semicolons (;). 
                     * @param _domainUrl Multiple domains concatenated with semicolons (;). 
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
                     * 获取Domain type. Valid values: 1 Requests domain; 2 web-view domain.
                     * @return DomainType Domain type. Valid values: 1 Requests domain; 2 web-view domain.
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Domain type. Valid values: 1 Requests domain; 2 web-view domain.
                     * @param _domainType Domain type. Valid values: 1 Requests domain; 2 web-view domain.
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
                     * Multiple domains concatenated with semicolons (;). 
                     */
                    std::string m_domainUrl;
                    bool m_domainUrlHasBeenSet;

                    /**
                     * Domain type. Valid values: 1 Requests domain; 2 web-view domain.
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEDOMAININFOPARAM_H_
