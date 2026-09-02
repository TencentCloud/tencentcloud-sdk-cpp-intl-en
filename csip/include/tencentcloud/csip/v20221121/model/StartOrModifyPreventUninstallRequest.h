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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * StartOrModifyPreventUninstall request structure.
                */
                class StartOrModifyPreventUninstallRequest : public AbstractModel
                {
                public:
                    StartOrModifyPreventUninstallRequest();
                    ~StartOrModifyPreventUninstallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Operation source 0   Host Page 1   Client Settings Page</p>
                     * @return From <p>Operation source 0   Host Page 1   Client Settings Page</p>
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置<p>Operation source 0   Host Page 1   Client Settings Page</p>
                     * @param _from <p>Operation source 0   Host Page 1   Client Settings Page</p>
                     * 
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     * @return Scope <p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     * @param _scope <p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Selected quuid set</p>
                     * @return IncludeQuuid <p>Selected quuid set</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 设置<p>Selected quuid set</p>
                     * @param _includeQuuid <p>Selected quuid set</p>
                     * 
                     */
                    void SetIncludeQuuid(const std::vector<std::string>& _includeQuuid);

                    /**
                     * 判断参数 IncludeQuuid 是否已赋值
                     * @return IncludeQuuid 是否已赋值
                     * 
                     */
                    bool IncludeQuuidHasBeenSet() const;

                    /**
                     * 获取<p>Excluded quuid set</p>
                     * @return ExcludeQuuid <p>Excluded quuid set</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 设置<p>Excluded quuid set</p>
                     * @param _excludeQuuid <p>Excluded quuid set</p>
                     * 
                     */
                    void SetExcludeQuuid(const std::vector<std::string>& _excludeQuuid);

                    /**
                     * 判断参数 ExcludeQuuid 是否已赋值
                     * @return ExcludeQuuid 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidHasBeenSet() const;

                private:

                    /**
                     * <p>Operation source 0   Host Page 1   Client Settings Page</p>
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>Enable scope: 0 - selected host; 1 - all hosts</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Selected quuid set</p>
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * <p>Excluded quuid set</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLREQUEST_H_
