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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETELLMCONTENTRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETELLMCONTENTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteLLMContentRule request structure.
                */
                class DeleteLLMContentRuleRequest : public AbstractModel
                {
                public:
                    DeleteLLMContentRuleRequest();
                    ~DeleteLLMContentRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of IDs</p>
                     * @return Ids <p>List of IDs</p>
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置<p>List of IDs</p>
                     * @param _ids <p>List of IDs</p>
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取<p>Domain name</p>
                     * @return Domain <p>Domain name</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name</p>
                     * @param _domain <p>Domain name</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * <p>List of IDs</p>
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * <p>Domain name</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETELLMCONTENTRULEREQUEST_H_
