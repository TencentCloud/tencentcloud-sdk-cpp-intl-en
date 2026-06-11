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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPRULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRaspRules request structure.
                */
                class ModifyRaspRulesRequest : public AbstractModel
                {
                public:
                    ModifyRaspRulesRequest();
                    ~ModifyRaspRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID. (Leave it blank during addition, and specify it during editing.)
                     * @return Id Rule ID. (Leave it blank during addition, and specify it during editing.)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID. (Leave it blank during addition, and specify it during editing.)
                     * @param _id Rule ID. (Leave it blank during addition, and specify it during editing.)
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID array.
                     * @return VulVulsIDs Vulnerability ID array.
                     * 
                     */
                    std::vector<uint64_t> GetVulVulsIDs() const;

                    /**
                     * 设置Vulnerability ID array.
                     * @param _vulVulsIDs Vulnerability ID array.
                     * 
                     */
                    void SetVulVulsIDs(const std::vector<uint64_t>& _vulVulsIDs);

                    /**
                     * 判断参数 VulVulsIDs 是否已赋值
                     * @return VulVulsIDs 是否已赋值
                     * 
                     */
                    bool VulVulsIDsHasBeenSet() const;

                    /**
                     * 获取Base64-encoded regular expression for allowlisting requests within a custom request scope. It cannot be left blank unless all requests are to be allowlisted.
                     * @return URLRegexp Base64-encoded regular expression for allowlisting requests within a custom request scope. It cannot be left blank unless all requests are to be allowlisted.
                     * 
                     */
                    std::string GetURLRegexp() const;

                    /**
                     * 设置Base64-encoded regular expression for allowlisting requests within a custom request scope. It cannot be left blank unless all requests are to be allowlisted.
                     * @param _uRLRegexp Base64-encoded regular expression for allowlisting requests within a custom request scope. It cannot be left blank unless all requests are to be allowlisted.
                     * 
                     */
                    void SetURLRegexp(const std::string& _uRLRegexp);

                    /**
                     * 判断参数 URLRegexp 是否已赋值
                     * @return URLRegexp 是否已赋值
                     * 
                     */
                    bool URLRegexpHasBeenSet() const;

                    /**
                     * 获取Allowlisting method. 0: allowlist requests within a custom request scope; 1: allowlist all requests.
                     * @return WhiteType Allowlisting method. 0: allowlist requests within a custom request scope; 1: allowlist all requests.
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置Allowlisting method. 0: allowlist requests within a custom request scope; 1: allowlist all requests.
                     * @param _whiteType Allowlisting method. 0: allowlist requests within a custom request scope; 1: allowlist all requests.
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                private:

                    /**
                     * Rule ID. (Leave it blank during addition, and specify it during editing.)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Vulnerability ID array.
                     */
                    std::vector<uint64_t> m_vulVulsIDs;
                    bool m_vulVulsIDsHasBeenSet;

                    /**
                     * Base64-encoded regular expression for allowlisting requests within a custom request scope. It cannot be left blank unless all requests are to be allowlisted.
                     */
                    std::string m_uRLRegexp;
                    bool m_uRLRegexpHasBeenSet;

                    /**
                     * Allowlisting method. 0: allowlist requests within a custom request scope; 1: allowlist all requests.
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRASPRULESREQUEST_H_
