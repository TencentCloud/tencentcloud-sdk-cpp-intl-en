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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTISOLATIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTISOLATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EdrAlertTarget.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyEdrAlertIsolation request structure.
                */
                class ModifyEdrAlertIsolationRequest : public AbstractModel
                {
                public:
                    ModifyEdrAlertIsolationRequest();
                    ~ModifyEdrAlertIsolationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Alarm locating list (1-500)</p>
                     * @return Targets <p>Alarm locating list (1-500)</p>
                     * 
                     */
                    std::vector<EdrAlertTarget> GetTargets() const;

                    /**
                     * 设置<p>Alarm locating list (1-500)</p>
                     * @param _targets <p>Alarm locating list (1-500)</p>
                     * 
                     */
                    void SetTargets(const std::vector<EdrAlertTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>Operation type: Isolate / RestoreIsolate / KillProcess. Enumeration values: Isolate: isolate. RestoreIsolate: restore quarantine. KillProcess: kill process</p>
                     * @return Status <p>Operation type: Isolate / RestoreIsolate / KillProcess. Enumeration values: Isolate: isolate. RestoreIsolate: restore quarantine. KillProcess: kill process</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Operation type: Isolate / RestoreIsolate / KillProcess. Enumeration values: Isolate: isolate. RestoreIsolate: restore quarantine. KillProcess: kill process</p>
                     * @param _status <p>Operation type: Isolate / RestoreIsolate / KillProcess. Enumeration values: Isolate: isolate. RestoreIsolate: restore quarantine. KillProcess: kill process</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取<p>Whether to terminate the associated process. This parameter is valid only when Status=Isolate. It is ignored when Status=KillProcess.</p>
                     * @return KillProcess <p>Whether to terminate the associated process. This parameter is valid only when Status=Isolate. It is ignored when Status=KillProcess.</p>
                     * 
                     */
                    bool GetKillProcess() const;

                    /**
                     * 设置<p>Whether to terminate the associated process. This parameter is valid only when Status=Isolate. It is ignored when Status=KillProcess.</p>
                     * @param _killProcess <p>Whether to terminate the associated process. This parameter is valid only when Status=Isolate. It is ignored when Status=KillProcess.</p>
                     * 
                     */
                    void SetKillProcess(const bool& _killProcess);

                    /**
                     * 判断参数 KillProcess 是否已赋值
                     * @return KillProcess 是否已赋值
                     * 
                     */
                    bool KillProcessHasBeenSet() const;

                private:

                    /**
                     * <p>Alarm locating list (1-500)</p>
                     */
                    std::vector<EdrAlertTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>Operation type: Isolate / RestoreIsolate / KillProcess. Enumeration values: Isolate: isolate. RestoreIsolate: restore quarantine. KillProcess: kill process</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Whether to terminate the associated process. This parameter is valid only when Status=Isolate. It is ignored when Status=KillProcess.</p>
                     */
                    bool m_killProcess;
                    bool m_killProcessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRALERTISOLATIONREQUEST_H_
