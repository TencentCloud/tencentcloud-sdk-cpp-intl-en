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
                     * 获取Date
                     * @return Date Date
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param _date Date
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
                     * 获取The number of abnormal UA request events
                     * @return ExceptionUARequestCount The number of abnormal UA request events
                     * 
                     */
                    uint64_t GetExceptionUARequestCount() const;

                    /**
                     * 设置The number of abnormal UA request events
                     * @param _exceptionUARequestCount The number of abnormal UA request events
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
                     * 获取The number of anonymous user permission events
                     * @return AnonymousUserRightCount The number of anonymous user permission events
                     * 
                     */
                    uint64_t GetAnonymousUserRightCount() const;

                    /**
                     * 设置The number of anonymous user permission events
                     * @param _anonymousUserRightCount The number of anonymous user permission events
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
                     * 获取The number of credential information acquisition events
                     * @return CredentialInformationObtainCount The number of credential information acquisition events
                     * 
                     */
                    uint64_t GetCredentialInformationObtainCount() const;

                    /**
                     * 设置The number of credential information acquisition events
                     * @param _credentialInformationObtainCount The number of credential information acquisition events
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
                     * 获取The number of sensitive data mounting events
                     * @return SensitiveDataMountCount The number of sensitive data mounting events
                     * 
                     */
                    uint64_t GetSensitiveDataMountCount() const;

                    /**
                     * 设置The number of sensitive data mounting events
                     * @param _sensitiveDataMountCount The number of sensitive data mounting events
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
                     * 获取The number of command execution events
                     * @return CmdExecCount The number of command execution events
                     * 
                     */
                    uint64_t GetCmdExecCount() const;

                    /**
                     * 设置The number of command execution events
                     * @param _cmdExecCount The number of command execution events
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
                     * 获取The number of abnormal scheduled task events
                     * @return AbnormalScheduledTaskCount The number of abnormal scheduled task events
                     * 
                     */
                    uint64_t GetAbnormalScheduledTaskCount() const;

                    /**
                     * 设置The number of abnormal scheduled task events
                     * @param _abnormalScheduledTaskCount The number of abnormal scheduled task events
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
                     * 获取The number of static pods created
                     * @return StaticsPodCreateCount The number of static pods created
                     * 
                     */
                    uint64_t GetStaticsPodCreateCount() const;

                    /**
                     * 设置The number of static pods created
                     * @param _staticsPodCreateCount The number of static pods created
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
                     * 获取The number of suspicious containers created
                     * @return DoubtfulContainerCreateCount The number of suspicious containers created
                     * 
                     */
                    uint64_t GetDoubtfulContainerCreateCount() const;

                    /**
                     * 设置The number of suspicious containers created
                     * @param _doubtfulContainerCreateCount The number of suspicious containers created
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
                     * 获取The number of custom rule events
                     * @return UserDefinedRuleCount The number of custom rule events
                     * 
                     */
                    uint64_t GetUserDefinedRuleCount() const;

                    /**
                     * 设置The number of custom rule events
                     * @param _userDefinedRuleCount The number of custom rule events
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
                     * 获取The number of anonymous access events
                     * @return AnonymousAccessCount The number of anonymous access events
                     * 
                     */
                    uint64_t GetAnonymousAccessCount() const;

                    /**
                     * 设置The number of anonymous access events
                     * @param _anonymousAccessCount The number of anonymous access events
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
                     * 获取The number of privilege container events
                     * @return PrivilegeContainerCount The number of privilege container events
                     * 
                     */
                    uint64_t GetPrivilegeContainerCount() const;

                    /**
                     * 设置The number of privilege container events
                     * @param _privilegeContainerCount The number of privilege container events
                     * 
                     */
                    void SetPrivilegeContainerCount(const uint64_t& _privilegeContainerCount);

                    /**
                     * 判断参数 PrivilegeContainerCount 是否已赋值
                     * @return PrivilegeContainerCount 是否已赋值
                     * 
                     */
                    bool PrivilegeContainerCountHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * The number of abnormal UA request events
                     */
                    uint64_t m_exceptionUARequestCount;
                    bool m_exceptionUARequestCountHasBeenSet;

                    /**
                     * The number of anonymous user permission events
                     */
                    uint64_t m_anonymousUserRightCount;
                    bool m_anonymousUserRightCountHasBeenSet;

                    /**
                     * The number of credential information acquisition events
                     */
                    uint64_t m_credentialInformationObtainCount;
                    bool m_credentialInformationObtainCountHasBeenSet;

                    /**
                     * The number of sensitive data mounting events
                     */
                    uint64_t m_sensitiveDataMountCount;
                    bool m_sensitiveDataMountCountHasBeenSet;

                    /**
                     * The number of command execution events
                     */
                    uint64_t m_cmdExecCount;
                    bool m_cmdExecCountHasBeenSet;

                    /**
                     * The number of abnormal scheduled task events
                     */
                    uint64_t m_abnormalScheduledTaskCount;
                    bool m_abnormalScheduledTaskCountHasBeenSet;

                    /**
                     * The number of static pods created
                     */
                    uint64_t m_staticsPodCreateCount;
                    bool m_staticsPodCreateCountHasBeenSet;

                    /**
                     * The number of suspicious containers created
                     */
                    uint64_t m_doubtfulContainerCreateCount;
                    bool m_doubtfulContainerCreateCountHasBeenSet;

                    /**
                     * The number of custom rule events
                     */
                    uint64_t m_userDefinedRuleCount;
                    bool m_userDefinedRuleCountHasBeenSet;

                    /**
                     * The number of anonymous access events
                     */
                    uint64_t m_anonymousAccessCount;
                    bool m_anonymousAccessCountHasBeenSet;

                    /**
                     * The number of privilege container events
                     */
                    uint64_t m_privilegeContainerCount;
                    bool m_privilegeContainerCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
