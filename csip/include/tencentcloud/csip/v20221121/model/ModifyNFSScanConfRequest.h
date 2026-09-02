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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNFSSCANCONFREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNFSSCANCONFREQUEST_H_

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
                * ModifyNFSScanConf request structure.
                */
                class ModifyNFSScanConfRequest : public AbstractModel
                {
                public:
                    ModifyNFSScanConfRequest();
                    ~ModifyNFSScanConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     * @return Enable <p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     * @param _enable <p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Enable scope 0 Selected host 1 All hosts</p>
                     * @return Scope <p>Enable scope 0 Selected host 1 All hosts</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Enable scope 0 Selected host 1 All hosts</p>
                     * @param _scope <p>Enable scope 0 Selected host 1 All hosts</p>
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
                     * 获取<p>Record ID, which is 0 when projects are added</p>
                     * @return Id <p>Record ID, which is 0 when projects are added</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Record ID, which is 0 when projects are added</p>
                     * @param _id <p>Record ID, which is 0 when projects are added</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>List of selected quuid configurations</p>
                     * @return IncludeQuuid <p>List of selected quuid configurations</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 设置<p>List of selected quuid configurations</p>
                     * @param _includeQuuid <p>List of selected quuid configurations</p>
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
                     * 获取<p>List of unselected quuid configurations</p>
                     * @return ExcludeQuuid <p>List of unselected quuid configurations</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 设置<p>List of unselected quuid configurations</p>
                     * @param _excludeQuuid <p>List of unselected quuid configurations</p>
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
                     * <p>Whether NFS scan is enabled. 0: No, 1: Yes, 9: Not set. Same as 0, it is not enabled.</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Enable scope 0 Selected host 1 All hosts</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Record ID, which is 0 when projects are added</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>List of selected quuid configurations</p>
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * <p>List of unselected quuid configurations</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNFSSCANCONFREQUEST_H_
