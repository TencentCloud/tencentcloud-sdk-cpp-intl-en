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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAININFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Reverse-check domain information
                */
                class DomainInfo : public AbstractModel
                {
                public:
                    DomainInfo();
                    ~DomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取<p>Analysis time</p>
                     * @return AnalysisTime <p>Analysis time</p>
                     * 
                     */
                    std::string GetAnalysisTime() const;

                    /**
                     * 设置<p>Analysis time</p>
                     * @param _analysisTime <p>Analysis time</p>
                     * 
                     */
                    void SetAnalysisTime(const std::string& _analysisTime);

                    /**
                     * 判断参数 AnalysisTime 是否已赋值
                     * @return AnalysisTime 是否已赋值
                     * 
                     */
                    bool AnalysisTimeHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Tags <p>Tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tags <p>Tag.</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>Domain name</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Analysis time</p>
                     */
                    std::string m_analysisTime;
                    bool m_analysisTimeHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAININFO_H_
