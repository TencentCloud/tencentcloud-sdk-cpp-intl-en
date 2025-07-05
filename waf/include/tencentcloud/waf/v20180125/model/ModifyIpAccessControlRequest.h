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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyIpAccessControl request structure.
                */
                class ModifyIpAccessControlRequest : public AbstractModel
                {
                public:
                    ModifyIpAccessControlRequest();
                    ~ModifyIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * @return Domain Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * @param _domain Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
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
                     * 获取IP parameter list.
                     * @return IpList IP parameter list.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP parameter list.
                     * @param _ipList IP parameter list.
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取42: blocklist; 40: allowlist.
                     * @return ActionType 42: blocklist; 40: allowlist.
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置42: blocklist; 40: allowlist.
                     * @param _actionType 42: blocklist; 40: allowlist.
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取valid_ts indicates a valid date. Its value is a second-level timestamp, such as 1680570420, which indicates 2023-04-04 09:07:00.
                     * @return ValidTS valid_ts indicates a valid date. Its value is a second-level timestamp, such as 1680570420, which indicates 2023-04-04 09:07:00.
                     * @deprecated
                     */
                    int64_t GetValidTS() const;

                    /**
                     * 设置valid_ts indicates a valid date. Its value is a second-level timestamp, such as 1680570420, which indicates 2023-04-04 09:07:00.
                     * @param _validTS valid_ts indicates a valid date. Its value is a second-level timestamp, such as 1680570420, which indicates 2023-04-04 09:07:00.
                     * @deprecated
                     */
                    void SetValidTS(const int64_t& _validTS);

                    /**
                     * 判断参数 ValidTS 是否已赋值
                     * @return ValidTS 是否已赋值
                     * @deprecated
                     */
                    bool ValidTSHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * @return Edition WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * @param _edition WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * @return SourceType Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * @param _sourceType Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Note Remarks
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Remarks
                     * @param _note Remarks
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Scheduled configuration type.
                     * @return JobType Scheduled configuration type.
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Scheduled configuration type.
                     * @param _jobType Scheduled configuration type.
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Details of scheduled configuration.
                     * @return JobDateTime Details of scheduled configuration.
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置Details of scheduled configuration.
                     * @param _jobDateTime Details of scheduled configuration.
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                private:

                    /**
                     * Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP parameter list.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 42: blocklist; 40: allowlist.
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * valid_ts indicates a valid date. Its value is a second-level timestamp, such as 1680570420, which indicates 2023-04-04 09:07:00.
                     */
                    int64_t m_validTS;
                    bool m_validTSHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * WAF instance type: sparta-waf for SaaS WAF, clb-waf for CLB WAF.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Scheduled configuration type.
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Details of scheduled configuration.
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYIPACCESSCONTROLREQUEST_H_
