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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGDOMAININFORESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGDOMAININFORESP_H_

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
                * Response parameters for querying domain information
                */
                class DescribeMNGDomainInfoResp : public AbstractModel
                {
                public:
                    DescribeMNGDomainInfoResp();
                    ~DescribeMNGDomainInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Multiple domain names are concatenated with the separator ;</p>
                     * @return DomainUrl <p>Multiple domain names are concatenated with the separator ;</p>
                     * 
                     */
                    std::string GetDomainUrl() const;

                    /**
                     * 设置<p>Multiple domain names are concatenated with the separator ;</p>
                     * @param _domainUrl <p>Multiple domain names are concatenated with the separator ;</p>
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
                     * 获取<p>Domain type. Valid values: 1: Requests domain; 2: web-view domain</p>
                     * @return DomainType <p>Domain type. Valid values: 1: Requests domain; 2: web-view domain</p>
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置<p>Domain type. Valid values: 1: Requests domain; 2: web-view domain</p>
                     * @param _domainType <p>Domain type. Valid values: 1: Requests domain; 2: web-view domain</p>
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
                     * <p>Multiple domain names are concatenated with the separator ;</p>
                     */
                    std::string m_domainUrl;
                    bool m_domainUrlHasBeenSet;

                    /**
                     * <p>Domain type. Valid values: 1: Requests domain; 2: web-view domain</p>
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGDOMAININFORESP_H_
