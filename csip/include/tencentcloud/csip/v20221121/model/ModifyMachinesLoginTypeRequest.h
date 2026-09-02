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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPEREQUEST_H_

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
                * ModifyMachinesLoginType request structure.
                */
                class ModifyMachinesLoginTypeRequest : public AbstractModel
                {
                public:
                    ModifyMachinesLoginTypeRequest();
                    ~ModifyMachinesLoginTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Login method: 0 - original method, 1 - scan code for password-free log-in</p>
                     * @return LoginType <p>Login method: 0 - original method, 1 - scan code for password-free log-in</p>
                     * 
                     */
                    uint64_t GetLoginType() const;

                    /**
                     * 设置<p>Login method: 0 - original method, 1 - scan code for password-free log-in</p>
                     * @param _loginType <p>Login method: 0 - original method, 1 - scan code for password-free log-in</p>
                     * 
                     */
                    void SetLoginType(const uint64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
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
                     * 获取<p>instance_id list (at least one of instance_ids and quuids must be specified)</p>
                     * @return InstanceIds <p>instance_id list (at least one of instance_ids and quuids must be specified)</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>instance_id list (at least one of instance_ids and quuids must be specified)</p>
                     * @param _instanceIds <p>instance_id list (at least one of instance_ids and quuids must be specified)</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Host quuid list (fill in at least one of instance_ids and quuids)</p>
                     * @return Quuids <p>Host quuid list (fill in at least one of instance_ids and quuids)</p>
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置<p>Host quuid list (fill in at least one of instance_ids and quuids)</p>
                     * @param _quuids <p>Host quuid list (fill in at least one of instance_ids and quuids)</p>
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

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

                    /**
                     * 获取<p>Enable scope: 0 - selected host, 1 - all hosts</p>
                     * @return Scope <p>Enable scope: 0 - selected host, 1 - all hosts</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>Enable scope: 0 - selected host, 1 - all hosts</p>
                     * @param _scope <p>Enable scope: 0 - selected host, 1 - all hosts</p>
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
                     * 获取<p>Operation source:<br>0 Host Page<br>1 Client Settings page<br>2 Security Center page<br>3 LightHouse purchase page<br>4 LightHouse console</p>
                     * @return From <p>Operation source:<br>0 Host Page<br>1 Client Settings page<br>2 Security Center page<br>3 LightHouse purchase page<br>4 LightHouse console</p>
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置<p>Operation source:<br>0 Host Page<br>1 Client Settings page<br>2 Security Center page<br>3 LightHouse purchase page<br>4 LightHouse console</p>
                     * @param _from <p>Operation source:<br>0 Host Page<br>1 Client Settings page<br>2 Security Center page<br>3 LightHouse purchase page<br>4 LightHouse console</p>
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
                     * 获取<p>Request version 0   Original version 1   Policy-based request</p>
                     * @return RequestVersion <p>Request version 0   Original version 1   Policy-based request</p>
                     * 
                     */
                    int64_t GetRequestVersion() const;

                    /**
                     * 设置<p>Request version 0   Original version 1   Policy-based request</p>
                     * @param _requestVersion <p>Request version 0   Original version 1   Policy-based request</p>
                     * 
                     */
                    void SetRequestVersion(const int64_t& _requestVersion);

                    /**
                     * 判断参数 RequestVersion 是否已赋值
                     * @return RequestVersion 是否已赋值
                     * 
                     */
                    bool RequestVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Login method: 0 - original method, 1 - scan code for password-free log-in</p>
                     */
                    uint64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>instance_id list (at least one of instance_ids and quuids must be specified)</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Host quuid list (fill in at least one of instance_ids and quuids)</p>
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * <p>Excluded quuid set</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                    /**
                     * <p>Enable scope: 0 - selected host, 1 - all hosts</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Operation source:<br>0 Host Page<br>1 Client Settings page<br>2 Security Center page<br>3 LightHouse purchase page<br>4 LightHouse console</p>
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>Request version 0   Original version 1   Policy-based request</p>
                     */
                    int64_t m_requestVersion;
                    bool m_requestVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPEREQUEST_H_
