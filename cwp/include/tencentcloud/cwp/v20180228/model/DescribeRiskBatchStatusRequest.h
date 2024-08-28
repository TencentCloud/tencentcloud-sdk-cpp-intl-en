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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKBATCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKBATCHSTATUSREQUEST_H_

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
                * DescribeRiskBatchStatus request structure.
                */
                class DescribeRiskBatchStatusRequest : public AbstractModel
                {
                public:
                    DescribeRiskBatchStatusRequest();
                    ~DescribeRiskBatchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operation event type. MALWARE: virus scanning; HOST_LOGIN: abnormal log-in; BRUTE_ATTACK: password cracking; MALICIOUS_REQUEST: malicious request; BASH_EVENT: high-risk command; PRIVILEGE_EVENT: local privilege escalation; REVERSE_SHELL: reverse shell.
                     * @return RiskType Operation event type. MALWARE: virus scanning; HOST_LOGIN: abnormal log-in; BRUTE_ATTACK: password cracking; MALICIOUS_REQUEST: malicious request; BASH_EVENT: high-risk command; PRIVILEGE_EVENT: local privilege escalation; REVERSE_SHELL: reverse shell.
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置Operation event type. MALWARE: virus scanning; HOST_LOGIN: abnormal log-in; BRUTE_ATTACK: password cracking; MALICIOUS_REQUEST: malicious request; BASH_EVENT: high-risk command; PRIVILEGE_EVENT: local privilege escalation; REVERSE_SHELL: reverse shell.
                     * @param _riskType Operation event type. MALWARE: virus scanning; HOST_LOGIN: abnormal log-in; BRUTE_ATTACK: password cracking; MALICIOUS_REQUEST: malicious request; BASH_EVENT: high-risk command; PRIVILEGE_EVENT: local privilege escalation; REVERSE_SHELL: reverse shell.
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                private:

                    /**
                     * Operation event type. MALWARE: virus scanning; HOST_LOGIN: abnormal log-in; BRUTE_ATTACK: password cracking; MALICIOUS_REQUEST: malicious request; BASH_EVENT: high-risk command; PRIVILEGE_EVENT: local privilege escalation; REVERSE_SHELL: reverse shell.
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERISKBATCHSTATUSREQUEST_H_
