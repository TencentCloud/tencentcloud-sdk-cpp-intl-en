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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDOMAINANDIPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDOMAINANDIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDomainAndIp request structure.
                */
                class CreateDomainAndIpRequest : public AbstractModel
                {
                public:
                    CreateDomainAndIpRequest();
                    ~CreateDomainAndIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Public IP/domain name
                     * @return Content Public IP/domain name
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置Public IP/domain name
                     * @param _content Public IP/domain name
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Asset tags
                     * @return Tags Asset tags
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置Asset tags
                     * @param _tags Asset tags
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Public IP/domain name
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Asset tags
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDOMAINANDIPREQUEST_H_
