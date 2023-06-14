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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CCPOLICY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CCPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCRule.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Custom CC protection rule
                */
                class CCPolicy : public AbstractModel
                {
                public:
                    CCPolicy();
                    ~CCPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy name
                     * @return Name Policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param _name Policy name
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
                     * 获取Matching mode. Valid values: [matching (matching mode), speedlimit (speed limiting mode)]
                     * @return Smode Matching mode. Valid values: [matching (matching mode), speedlimit (speed limiting mode)]
                     * 
                     */
                    std::string GetSmode() const;

                    /**
                     * 设置Matching mode. Valid values: [matching (matching mode), speedlimit (speed limiting mode)]
                     * @param _smode Matching mode. Valid values: [matching (matching mode), speedlimit (speed limiting mode)]
                     * 
                     */
                    void SetSmode(const std::string& _smode);

                    /**
                     * 判断参数 Smode 是否已赋值
                     * @return Smode 是否已赋值
                     * 
                     */
                    bool SmodeHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return SetId Policy ID
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置Policy ID
                     * @param _setId Policy ID
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取Number of requests allowed per minute
                     * @return Frequency Number of requests allowed per minute
                     * 
                     */
                    uint64_t GetFrequency() const;

                    /**
                     * 设置Number of requests allowed per minute
                     * @param _frequency Number of requests allowed per minute
                     * 
                     */
                    void SetFrequency(const uint64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Executed policy mode. Valid values: [alg (verification code), drop (blocking)]
                     * @return ExeMode Executed policy mode. Valid values: [alg (verification code), drop (blocking)]
                     * 
                     */
                    std::string GetExeMode() const;

                    /**
                     * 设置Executed policy mode. Valid values: [alg (verification code), drop (blocking)]
                     * @param _exeMode Executed policy mode. Valid values: [alg (verification code), drop (blocking)]
                     * 
                     */
                    void SetExeMode(const std::string& _exeMode);

                    /**
                     * 判断参数 ExeMode 是否已赋值
                     * @return ExeMode 是否已赋值
                     * 
                     */
                    bool ExeModeHasBeenSet() const;

                    /**
                     * 获取Specifies whether the policy is activated
                     * @return Switch Specifies whether the policy is activated
                     * 
                     */
                    uint64_t GetSwitch() const;

                    /**
                     * 设置Specifies whether the policy is activated
                     * @param _switch Specifies whether the policy is activated
                     * 
                     */
                    void SetSwitch(const uint64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Rule list
                     * @return RuleList Rule list
                     * 
                     */
                    std::vector<CCRule> GetRuleList() const;

                    /**
                     * 设置Rule list
                     * @param _ruleList Rule list
                     * 
                     */
                    void SetRuleList(const std::vector<CCRule>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取IP list. If this field is to be left empty, please pass in an empty instead of null;
                     * @return IpList IP list. If this field is to be left empty, please pass in an empty instead of null;
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP list. If this field is to be left empty, please pass in an empty instead of null;
                     * @param _ipList IP list. If this field is to be left empty, please pass in an empty instead of null;
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
                     * 获取CC protection type. Valid values: [http, https]
                     * @return Protocol CC protection type. Valid values: [http, https]
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置CC protection type. Valid values: [http, https]
                     * @param _protocol CC protection type. Valid values: [http, https]
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取ID of the forwarding rule corresponding to the HTTPS CC protection domain name
                     * @return RuleId ID of the forwarding rule corresponding to the HTTPS CC protection domain name
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置ID of the forwarding rule corresponding to the HTTPS CC protection domain name
                     * @param _ruleId ID of the forwarding rule corresponding to the HTTPS CC protection domain name
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取HTTPS CC protection domain name
                     * @return Domain HTTPS CC protection domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置HTTPS CC protection domain name
                     * @param _domain HTTPS CC protection domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Matching mode. Valid values: [matching (matching mode), speedlimit (speed limiting mode)]
                     */
                    std::string m_smode;
                    bool m_smodeHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * Number of requests allowed per minute
                     */
                    uint64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Executed policy mode. Valid values: [alg (verification code), drop (blocking)]
                     */
                    std::string m_exeMode;
                    bool m_exeModeHasBeenSet;

                    /**
                     * Specifies whether the policy is activated
                     */
                    uint64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Rule list
                     */
                    std::vector<CCRule> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * IP list. If this field is to be left empty, please pass in an empty instead of null;
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * CC protection type. Valid values: [http, https]
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * ID of the forwarding rule corresponding to the HTTPS CC protection domain name
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * HTTPS CC protection domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CCPOLICY_H_
