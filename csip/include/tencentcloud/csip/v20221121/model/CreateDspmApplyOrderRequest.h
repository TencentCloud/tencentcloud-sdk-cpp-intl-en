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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAccountPrivilege.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmApplyOrder request structure.
                */
                class CreateDspmApplyOrderRequest : public AbstractModel
                {
                public:
                    CreateDspmApplyOrderRequest();
                    ~CreateDspmApplyOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset ID
                     * @return AssetId Asset ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetId Asset ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Application type. `0`: sub-account authorization. `1`: visitor authorization.
                     * @return ApplyType Application type. `0`: sub-account authorization. `1`: visitor authorization.
                     * 
                     */
                    int64_t GetApplyType() const;

                    /**
                     * 设置Application type. `0`: sub-account authorization. `1`: visitor authorization.
                     * @param _applyType Application type. `0`: sub-account authorization. `1`: visitor authorization.
                     * 
                     */
                    void SetApplyType(const int64_t& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取Permission information.
                     * @return Privilege Permission information.
                     * 
                     */
                    DspmDbAccountPrivilege GetPrivilege() const;

                    /**
                     * 设置Permission information.
                     * @param _privilege Permission information.
                     * 
                     */
                    void SetPrivilege(const DspmDbAccountPrivilege& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取Host address. Currently only support '%'. Default: '%'.
                     * @return Host Host address. Currently only support '%'. Default: '%'.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address. Currently only support '%'. Default: '%'.
                     * @param _host Host address. Currently only support '%'. Default: '%'.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Access privilege expiration time calculated after approval is complete. The temporary account is valid. Milliseconds.
                     * @return ValidatePeriod Access privilege expiration time calculated after approval is complete. The temporary account is valid. Milliseconds.
                     * 
                     */
                    int64_t GetValidatePeriod() const;

                    /**
                     * 设置Access privilege expiration time calculated after approval is complete. The temporary account is valid. Milliseconds.
                     * @param _validatePeriod Access privilege expiration time calculated after approval is complete. The temporary account is valid. Milliseconds.
                     * 
                     */
                    void SetValidatePeriod(const int64_t& _validatePeriod);

                    /**
                     * 判断参数 ValidatePeriod 是否已赋值
                     * @return ValidatePeriod 是否已赋值
                     * 
                     */
                    bool ValidatePeriodHasBeenSet() const;

                    /**
                     * 获取List of approvers. If empty, all asset admins are used.
                     * @return ApproverUin List of approvers. If empty, all asset admins are used.
                     * 
                     */
                    std::vector<std::string> GetApproverUin() const;

                    /**
                     * 设置List of approvers. If empty, all asset admins are used.
                     * @param _approverUin List of approvers. If empty, all asset admins are used.
                     * 
                     */
                    void SetApproverUin(const std::vector<std::string>& _approverUin);

                    /**
                     * 判断参数 ApproverUin 是否已赋值
                     * @return ApproverUin 是否已赋值
                     * 
                     */
                    bool ApproverUinHasBeenSet() const;

                    /**
                     * 获取Reason for request
                     * @return Reason Reason for request
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Reason for request
                     * @param _reason Reason for request
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Management type. 0: ordinary member; 1: admin.
                     * @return ManagerType Management type. 0: ordinary member; 1: admin.
                     * 
                     */
                    int64_t GetManagerType() const;

                    /**
                     * 设置Management type. 0: ordinary member; 1: admin.
                     * @param _managerType Management type. 0: ordinary member; 1: admin.
                     * 
                     */
                    void SetManagerType(const int64_t& _managerType);

                    /**
                     * 判断参数 ManagerType 是否已赋值
                     * @return ManagerType 是否已赋值
                     * 
                     */
                    bool ManagerTypeHasBeenSet() const;

                    /**
                     * 获取Authorized person. For sub-account authorization, pass the target uin. If empty, use the current uin by default. For visitor authorization, pass the visitor identity ID.
                     * @return Subject Authorized person. For sub-account authorization, pass the target uin. If empty, use the current uin by default. For visitor authorization, pass the visitor identity ID.
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Authorized person. For sub-account authorization, pass the target uin. If empty, use the current uin by default. For visitor authorization, pass the visitor identity ID.
                     * @param _subject Authorized person. For sub-account authorization, pass the target uin. If empty, use the current uin by default. For visitor authorization, pass the visitor identity ID.
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                private:

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Application type. `0`: sub-account authorization. `1`: visitor authorization.
                     */
                    int64_t m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * Permission information.
                     */
                    DspmDbAccountPrivilege m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * Host address. Currently only support '%'. Default: '%'.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Access privilege expiration time calculated after approval is complete. The temporary account is valid. Milliseconds.
                     */
                    int64_t m_validatePeriod;
                    bool m_validatePeriodHasBeenSet;

                    /**
                     * List of approvers. If empty, all asset admins are used.
                     */
                    std::vector<std::string> m_approverUin;
                    bool m_approverUinHasBeenSet;

                    /**
                     * Reason for request
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Management type. 0: ordinary member; 1: admin.
                     */
                    int64_t m_managerType;
                    bool m_managerTypeHasBeenSet;

                    /**
                     * Authorized person. For sub-account authorization, pass the target uin. If empty, use the current uin by default. For visitor authorization, pass the visitor identity ID.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERREQUEST_H_
