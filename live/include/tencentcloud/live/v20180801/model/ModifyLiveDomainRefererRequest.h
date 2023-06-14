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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINREFERERREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINREFERERREQUEST_H_

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
                * ModifyLiveDomainReferer request structure.
                */
                class ModifyLiveDomainRefererRequest : public AbstractModel
                {
                public:
                    ModifyLiveDomainRefererRequest();
                    ~ModifyLiveDomainRefererRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Playback domain name
                     * @return DomainName Playback domain name
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Playback domain name
                     * @param _domainName Playback domain name
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable referer allowlist/blocklist authentication for the current domain name
                     * @return Enable Whether to enable referer allowlist/blocklist authentication for the current domain name
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable referer allowlist/blocklist authentication for the current domain name
                     * @param _enable Whether to enable referer allowlist/blocklist authentication for the current domain name
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取List type. Valid values: `0` (blocklist), `1` (allowlist)
                     * @return Type List type. Valid values: `0` (blocklist), `1` (allowlist)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置List type. Valid values: `0` (blocklist), `1` (allowlist)
                     * @param _type List type. Valid values: `0` (blocklist), `1` (allowlist)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to allow empty referer. Valid values: `0` (no), `1` (yes)
                     * @return AllowEmpty Whether to allow empty referer. Valid values: `0` (no), `1` (yes)
                     * 
                     */
                    int64_t GetAllowEmpty() const;

                    /**
                     * 设置Whether to allow empty referer. Valid values: `0` (no), `1` (yes)
                     * @param _allowEmpty Whether to allow empty referer. Valid values: `0` (no), `1` (yes)
                     * 
                     */
                    void SetAllowEmpty(const int64_t& _allowEmpty);

                    /**
                     * 判断参数 AllowEmpty 是否已赋值
                     * @return AllowEmpty 是否已赋值
                     * 
                     */
                    bool AllowEmptyHasBeenSet() const;

                    /**
                     * 获取Referer list. Separate items in it with semicolons (;).
                     * @return Rules Referer list. Separate items in it with semicolons (;).
                     * 
                     */
                    std::string GetRules() const;

                    /**
                     * 设置Referer list. Separate items in it with semicolons (;).
                     * @param _rules Referer list. Separate items in it with semicolons (;).
                     * 
                     */
                    void SetRules(const std::string& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Playback domain name
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Whether to enable referer allowlist/blocklist authentication for the current domain name
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * List type. Valid values: `0` (blocklist), `1` (allowlist)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to allow empty referer. Valid values: `0` (no), `1` (yes)
                     */
                    int64_t m_allowEmpty;
                    bool m_allowEmptyHasBeenSet;

                    /**
                     * Referer list. Separate items in it with semicolons (;).
                     */
                    std::string m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEDOMAINREFERERREQUEST_H_
