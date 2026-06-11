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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8SAPIRuleTypeCountItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Items in the list of K8sApi abnormal request trends
                */
                class K8sApiAbnormalTendencyItem : public AbstractModel
                {
                public:
                    K8sApiAbnormalTendencyItem();
                    ~K8sApiAbnormalTendencyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Date</p>
                     * @return Date <p>Date</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>Date</p>
                     * @param _date <p>Date</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>Number of abnormal UA request events.</p>
                     * @return ExceptionUARequestCount <p>Number of abnormal UA request events.</p>
                     * 
                     */
                    uint64_t GetExceptionUARequestCount() const;

                    /**
                     * 设置<p>Number of abnormal UA request events.</p>
                     * @param _exceptionUARequestCount <p>Number of abnormal UA request events.</p>
                     * 
                     */
                    void SetExceptionUARequestCount(const uint64_t& _exceptionUARequestCount);

                    /**
                     * 判断参数 ExceptionUARequestCount 是否已赋值
                     * @return ExceptionUARequestCount 是否已赋值
                     * 
                     */
                    bool ExceptionUARequestCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of anonymous user permission events.</p>
                     * @return AnonymousUserRightCount <p>Number of anonymous user permission events.</p>
                     * 
                     */
                    uint64_t GetAnonymousUserRightCount() const;

                    /**
                     * 设置<p>Number of anonymous user permission events.</p>
                     * @param _anonymousUserRightCount <p>Number of anonymous user permission events.</p>
                     * 
                     */
                    void SetAnonymousUserRightCount(const uint64_t& _anonymousUserRightCount);

                    /**
                     * 判断参数 AnonymousUserRightCount 是否已赋值
                     * @return AnonymousUserRightCount 是否已赋值
                     * 
                     */
                    bool AnonymousUserRightCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of credential information acquisition events.</p>
                     * @return CredentialInformationObtainCount <p>Number of credential information acquisition events.</p>
                     * 
                     */
                    uint64_t GetCredentialInformationObtainCount() const;

                    /**
                     * 设置<p>Number of credential information acquisition events.</p>
                     * @param _credentialInformationObtainCount <p>Number of credential information acquisition events.</p>
                     * 
                     */
                    void SetCredentialInformationObtainCount(const uint64_t& _credentialInformationObtainCount);

                    /**
                     * 判断参数 CredentialInformationObtainCount 是否已赋值
                     * @return CredentialInformationObtainCount 是否已赋值
                     * 
                     */
                    bool CredentialInformationObtainCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of sensitive data mount events.</p>
                     * @return SensitiveDataMountCount <p>Number of sensitive data mount events.</p>
                     * 
                     */
                    uint64_t GetSensitiveDataMountCount() const;

                    /**
                     * 设置<p>Number of sensitive data mount events.</p>
                     * @param _sensitiveDataMountCount <p>Number of sensitive data mount events.</p>
                     * 
                     */
                    void SetSensitiveDataMountCount(const uint64_t& _sensitiveDataMountCount);

                    /**
                     * 判断参数 SensitiveDataMountCount 是否已赋值
                     * @return SensitiveDataMountCount 是否已赋值
                     * 
                     */
                    bool SensitiveDataMountCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of command execution events.</p>
                     * @return CmdExecCount <p>Number of command execution events.</p>
                     * 
                     */
                    uint64_t GetCmdExecCount() const;

                    /**
                     * 设置<p>Number of command execution events.</p>
                     * @param _cmdExecCount <p>Number of command execution events.</p>
                     * 
                     */
                    void SetCmdExecCount(const uint64_t& _cmdExecCount);

                    /**
                     * 判断参数 CmdExecCount 是否已赋值
                     * @return CmdExecCount 是否已赋值
                     * 
                     */
                    bool CmdExecCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of abnormal scheduled task events.</p>
                     * @return AbnormalScheduledTaskCount <p>Number of abnormal scheduled task events.</p>
                     * 
                     */
                    uint64_t GetAbnormalScheduledTaskCount() const;

                    /**
                     * 设置<p>Number of abnormal scheduled task events.</p>
                     * @param _abnormalScheduledTaskCount <p>Number of abnormal scheduled task events.</p>
                     * 
                     */
                    void SetAbnormalScheduledTaskCount(const uint64_t& _abnormalScheduledTaskCount);

                    /**
                     * 判断参数 AbnormalScheduledTaskCount 是否已赋值
                     * @return AbnormalScheduledTaskCount 是否已赋值
                     * 
                     */
                    bool AbnormalScheduledTaskCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of static Pod creations.</p>
                     * @return StaticsPodCreateCount <p>Number of static Pod creations.</p>
                     * 
                     */
                    uint64_t GetStaticsPodCreateCount() const;

                    /**
                     * 设置<p>Number of static Pod creations.</p>
                     * @param _staticsPodCreateCount <p>Number of static Pod creations.</p>
                     * 
                     */
                    void SetStaticsPodCreateCount(const uint64_t& _staticsPodCreateCount);

                    /**
                     * 判断参数 StaticsPodCreateCount 是否已赋值
                     * @return StaticsPodCreateCount 是否已赋值
                     * 
                     */
                    bool StaticsPodCreateCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of suspicious container creations.</p>
                     * @return DoubtfulContainerCreateCount <p>Number of suspicious container creations.</p>
                     * 
                     */
                    uint64_t GetDoubtfulContainerCreateCount() const;

                    /**
                     * 设置<p>Number of suspicious container creations.</p>
                     * @param _doubtfulContainerCreateCount <p>Number of suspicious container creations.</p>
                     * 
                     */
                    void SetDoubtfulContainerCreateCount(const uint64_t& _doubtfulContainerCreateCount);

                    /**
                     * 判断参数 DoubtfulContainerCreateCount 是否已赋值
                     * @return DoubtfulContainerCreateCount 是否已赋值
                     * 
                     */
                    bool DoubtfulContainerCreateCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of custom rule events.</p>
                     * @return UserDefinedRuleCount <p>Number of custom rule events.</p>
                     * 
                     */
                    uint64_t GetUserDefinedRuleCount() const;

                    /**
                     * 设置<p>Number of custom rule events.</p>
                     * @param _userDefinedRuleCount <p>Number of custom rule events.</p>
                     * 
                     */
                    void SetUserDefinedRuleCount(const uint64_t& _userDefinedRuleCount);

                    /**
                     * 判断参数 UserDefinedRuleCount 是否已赋值
                     * @return UserDefinedRuleCount 是否已赋值
                     * 
                     */
                    bool UserDefinedRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of anonymous access events.</p>
                     * @return AnonymousAccessCount <p>Number of anonymous access events.</p>
                     * 
                     */
                    uint64_t GetAnonymousAccessCount() const;

                    /**
                     * 设置<p>Number of anonymous access events.</p>
                     * @param _anonymousAccessCount <p>Number of anonymous access events.</p>
                     * 
                     */
                    void SetAnonymousAccessCount(const uint64_t& _anonymousAccessCount);

                    /**
                     * 判断参数 AnonymousAccessCount 是否已赋值
                     * @return AnonymousAccessCount 是否已赋值
                     * 
                     */
                    bool AnonymousAccessCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of privileged container events.</p>
                     * @return PrivilegeContainerCount <p>Number of privileged container events.</p>
                     * 
                     */
                    uint64_t GetPrivilegeContainerCount() const;

                    /**
                     * 设置<p>Number of privileged container events.</p>
                     * @param _privilegeContainerCount <p>Number of privileged container events.</p>
                     * 
                     */
                    void SetPrivilegeContainerCount(const uint64_t& _privilegeContainerCount);

                    /**
                     * 判断参数 PrivilegeContainerCount 是否已赋值
                     * @return PrivilegeContainerCount 是否已赋值
                     * 
                     */
                    bool PrivilegeContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of alarms corresponding to the rule type.</p>
                     * @return RuleTypeCountSet <p>Number of alarms corresponding to the rule type.</p>
                     * 
                     */
                    std::vector<K8SAPIRuleTypeCountItem> GetRuleTypeCountSet() const;

                    /**
                     * 设置<p>Number of alarms corresponding to the rule type.</p>
                     * @param _ruleTypeCountSet <p>Number of alarms corresponding to the rule type.</p>
                     * 
                     */
                    void SetRuleTypeCountSet(const std::vector<K8SAPIRuleTypeCountItem>& _ruleTypeCountSet);

                    /**
                     * 判断参数 RuleTypeCountSet 是否已赋值
                     * @return RuleTypeCountSet 是否已赋值
                     * 
                     */
                    bool RuleTypeCountSetHasBeenSet() const;

                private:

                    /**
                     * <p>Date</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>Number of abnormal UA request events.</p>
                     */
                    uint64_t m_exceptionUARequestCount;
                    bool m_exceptionUARequestCountHasBeenSet;

                    /**
                     * <p>Number of anonymous user permission events.</p>
                     */
                    uint64_t m_anonymousUserRightCount;
                    bool m_anonymousUserRightCountHasBeenSet;

                    /**
                     * <p>Number of credential information acquisition events.</p>
                     */
                    uint64_t m_credentialInformationObtainCount;
                    bool m_credentialInformationObtainCountHasBeenSet;

                    /**
                     * <p>Number of sensitive data mount events.</p>
                     */
                    uint64_t m_sensitiveDataMountCount;
                    bool m_sensitiveDataMountCountHasBeenSet;

                    /**
                     * <p>Number of command execution events.</p>
                     */
                    uint64_t m_cmdExecCount;
                    bool m_cmdExecCountHasBeenSet;

                    /**
                     * <p>Number of abnormal scheduled task events.</p>
                     */
                    uint64_t m_abnormalScheduledTaskCount;
                    bool m_abnormalScheduledTaskCountHasBeenSet;

                    /**
                     * <p>Number of static Pod creations.</p>
                     */
                    uint64_t m_staticsPodCreateCount;
                    bool m_staticsPodCreateCountHasBeenSet;

                    /**
                     * <p>Number of suspicious container creations.</p>
                     */
                    uint64_t m_doubtfulContainerCreateCount;
                    bool m_doubtfulContainerCreateCountHasBeenSet;

                    /**
                     * <p>Number of custom rule events.</p>
                     */
                    uint64_t m_userDefinedRuleCount;
                    bool m_userDefinedRuleCountHasBeenSet;

                    /**
                     * <p>Number of anonymous access events.</p>
                     */
                    uint64_t m_anonymousAccessCount;
                    bool m_anonymousAccessCountHasBeenSet;

                    /**
                     * <p>Number of privileged container events.</p>
                     */
                    uint64_t m_privilegeContainerCount;
                    bool m_privilegeContainerCountHasBeenSet;

                    /**
                     * <p>Number of alarms corresponding to the rule type.</p>
                     */
                    std::vector<K8SAPIRuleTypeCountItem> m_ruleTypeCountSet;
                    bool m_ruleTypeCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
