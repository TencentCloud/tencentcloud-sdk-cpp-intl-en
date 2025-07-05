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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODERULESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeLiveTranscodeRules request structure.
                */
                class DescribeLiveTranscodeRulesRequest : public AbstractModel
                {
                public:
                    DescribeLiveTranscodeRulesRequest();
                    ~DescribeLiveTranscodeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取An array of template IDs to be filtered.
                     * @return TemplateIds An array of template IDs to be filtered.
                     * 
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置An array of template IDs to be filtered.
                     * @param _templateIds An array of template IDs to be filtered.
                     * 
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取An array of domain names to be filtered.
                     * @return DomainNames An array of domain names to be filtered.
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置An array of domain names to be filtered.
                     * @param _domainNames An array of domain names to be filtered.
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                private:

                    /**
                     * An array of template IDs to be filtered.
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * An array of domain names to be filtered.
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETRANSCODERULESREQUEST_H_
