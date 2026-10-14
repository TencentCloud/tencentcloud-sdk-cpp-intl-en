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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * CreateStreamLinkSecurityGroup request structure.
                */
                class CreateStreamLinkSecurityGroupRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkSecurityGroupRequest();
                    ~CreateStreamLinkSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Security group name, supporting letters, digits, and underscores, unique within a Region.</p>
                     * @return Name <p>Security group name, supporting letters, digits, and underscores, unique within a Region.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Security group name, supporting letters, digits, and underscores, unique within a Region.</p>
                     * @param _name <p>Security group name, supporting letters, digits, and underscores, unique within a Region.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist, maximum number: 10.</p>
                     * @return Whitelist <p>Allowlist, maximum number: 10.</p>
                     * 
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置<p>Allowlist, maximum number: 10.</p>
                     * @param _whitelist <p>Allowlist, maximum number: 10.</p>
                     * 
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * <p>Security group name, supporting letters, digits, and underscores, unique within a Region.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Allowlist, maximum number: 10.</p>
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKSECURITYGROUPREQUEST_H_
