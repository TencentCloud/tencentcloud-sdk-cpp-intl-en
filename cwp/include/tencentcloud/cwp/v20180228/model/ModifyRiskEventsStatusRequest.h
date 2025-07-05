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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRiskEventsStatus request structure.
                */
                class ModifyRiskEventsStatusRequest : public AbstractModel
                {
                public:
                    ModifyRiskEventsStatusRequest();
                    ~ModifyRiskEventsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operations - 0: Mark as Handled, 1: Ignore, 2: Delete Record, 3: Trojan Isolation, 4: Isolated Trojan Resumption, 5: Trojan Trust, 6: Trojan Untrust, 7: Kill Exceptional Process.
                     * @return Operate Operations - 0: Mark as Handled, 1: Ignore, 2: Delete Record, 3: Trojan Isolation, 4: Isolated Trojan Resumption, 5: Trojan Trust, 6: Trojan Untrust, 7: Kill Exceptional Process.
                     * 
                     */
                    uint64_t GetOperate() const;

                    /**
                     * 设置Operations - 0: Mark as Handled, 1: Ignore, 2: Delete Record, 3: Trojan Isolation, 4: Isolated Trojan Resumption, 5: Trojan Trust, 6: Trojan Untrust, 7: Kill Exceptional Process.
                     * @param _operate Operations - 0: Mark as Handled, 1: Ignore, 2: Delete Record, 3: Trojan Isolation, 4: Isolated Trojan Resumption, 5: Trojan Trust, 6: Trojan Untrust, 7: Kill Exceptional Process.
                     * 
                     */
                    void SetOperate(const uint64_t& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取Operation event types, file scan: MALWARE, exceptional login: HOST_LOGIN, password brute attack: BRUTE_ATTACK, malicious request: MALICIOUS_REQUEST, high-risk command: BASH_EVENT, local privilege escalation: PRIVILEGE_EVENT, reverse shell: REVERSE_SHELL, exceptional process: PROCESS.
                     * @return RiskType Operation event types, file scan: MALWARE, exceptional login: HOST_LOGIN, password brute attack: BRUTE_ATTACK, malicious request: MALICIOUS_REQUEST, high-risk command: BASH_EVENT, local privilege escalation: PRIVILEGE_EVENT, reverse shell: REVERSE_SHELL, exceptional process: PROCESS.
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置Operation event types, file scan: MALWARE, exceptional login: HOST_LOGIN, password brute attack: BRUTE_ATTACK, malicious request: MALICIOUS_REQUEST, high-risk command: BASH_EVENT, local privilege escalation: PRIVILEGE_EVENT, reverse shell: REVERSE_SHELL, exceptional process: PROCESS.
                     * @param _riskType Operation event types, file scan: MALWARE, exceptional login: HOST_LOGIN, password brute attack: BRUTE_ATTACK, malicious request: MALICIOUS_REQUEST, high-risk command: BASH_EVENT, local privilege escalation: PRIVILEGE_EVENT, reverse shell: REVERSE_SHELL, exceptional process: PROCESS.
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取An array of event IDs that need to be modified, and batch operation is supported.
                     * @return Ids An array of event IDs that need to be modified, and batch operation is supported.
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置An array of event IDs that need to be modified, and batch operation is supported.
                     * @param _ids An array of event IDs that need to be modified, and batch operation is supported.
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * @return UpdateAll Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * 
                     */
                    bool GetUpdateAll() const;

                    /**
                     * 设置Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * @param _updateAll Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     * 
                     */
                    void SetUpdateAll(const bool& _updateAll);

                    /**
                     * 判断参数 UpdateAll 是否已赋值
                     * @return UpdateAll 是否已赋值
                     * 
                     */
                    bool UpdateAllHasBeenSet() const;

                    /**
                     * 获取Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * @return ExcludeId Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * 
                     */
                    std::vector<uint64_t> GetExcludeId() const;

                    /**
                     * 设置Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * @param _excludeId Excluded event ID: When operating on all events, this ID needs to be excluded.
                     * 
                     */
                    void SetExcludeId(const std::vector<uint64_t>& _excludeId);

                    /**
                     * 判断参数 ExcludeId 是否已赋值
                     * @return ExcludeId 是否已赋值
                     * 
                     */
                    bool ExcludeIdHasBeenSet() const;

                    /**
                     * 获取When Operate is Trojan isolation, it indicates whether to kill the process, other operations are invalid
                     * @return KillProcess When Operate is Trojan isolation, it indicates whether to kill the process, other operations are invalid
                     * 
                     */
                    bool GetKillProcess() const;

                    /**
                     * 设置When Operate is Trojan isolation, it indicates whether to kill the process, other operations are invalid
                     * @param _killProcess When Operate is Trojan isolation, it indicates whether to kill the process, other operations are invalid
                     * 
                     */
                    void SetKillProcess(const bool& _killProcess);

                    /**
                     * 判断参数 KillProcess 是否已赋值
                     * @return KillProcess 是否已赋值
                     * 
                     */
                    bool KillProcessHasBeenSet() const;

                    /**
                     * 获取When RiskType is cross-region log-in and IDs are left blank, you can modify the status of events from all source IPs.
                     * @return Ip When RiskType is cross-region log-in and IDs are left blank, you can modify the status of events from all source IPs.
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置When RiskType is cross-region log-in and IDs are left blank, you can modify the status of events from all source IPs.
                     * @param _ip When RiskType is cross-region log-in and IDs are left blank, you can modify the status of events from all source IPs.
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Filtering criteria. When RiskType is MALWARE.
1. When RiskType is MALWARE:
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - filter by status: 4 - pending; 5 -- trusted; 6 - isolated; 10 - isolation in progress; 11 - recovering from isolation</li>
When RiskType is PROCESS:
Filter criteria
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * @return Filters Filtering criteria. When RiskType is MALWARE.
1. When RiskType is MALWARE:
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - filter by status: 4 - pending; 5 -- trusted; 6 - isolated; 10 - isolation in progress; 11 - recovering from isolation</li>
When RiskType is PROCESS:
Filter criteria
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filtering criteria. When RiskType is MALWARE.
1. When RiskType is MALWARE:
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - filter by status: 4 - pending; 5 -- trusted; 6 - isolated; 10 - isolation in progress; 11 - recovering from isolation</li>
When RiskType is PROCESS:
Filter criteria
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * @param _filters Filtering criteria. When RiskType is MALWARE.
1. When RiskType is MALWARE:
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - filter by status: 4 - pending; 5 -- trusted; 6 - isolated; 10 - isolation in progress; 11 - recovering from isolation</li>
When RiskType is PROCESS:
Filter criteria
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Operations - 0: Mark as Handled, 1: Ignore, 2: Delete Record, 3: Trojan Isolation, 4: Isolated Trojan Resumption, 5: Trojan Trust, 6: Trojan Untrust, 7: Kill Exceptional Process.
                     */
                    uint64_t m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Operation event types, file scan: MALWARE, exceptional login: HOST_LOGIN, password brute attack: BRUTE_ATTACK, malicious request: MALICIOUS_REQUEST, high-risk command: BASH_EVENT, local privilege escalation: PRIVILEGE_EVENT, reverse shell: REVERSE_SHELL, exceptional process: PROCESS.
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * An array of event IDs that need to be modified, and batch operation is supported.
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * Whether to update all, i.e. whether to operate on all events; this parameter is invalid when IDs are not left blank.
                     */
                    bool m_updateAll;
                    bool m_updateAllHasBeenSet;

                    /**
                     * Excluded event ID: When operating on all events, this ID needs to be excluded.
                     */
                    std::vector<uint64_t> m_excludeId;
                    bool m_excludeIdHasBeenSet;

                    /**
                     * When Operate is Trojan isolation, it indicates whether to kill the process, other operations are invalid
                     */
                    bool m_killProcess;
                    bool m_killProcessHasBeenSet;

                    /**
                     * When RiskType is cross-region log-in and IDs are left blank, you can modify the status of events from all source IPs.
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Filtering criteria. When RiskType is MALWARE.
1. When RiskType is MALWARE:
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>FilePath - String - required: no - filter by path</li>
<li>VirusName - String - required: no - filter by description</li>
<li>CreateBeginTime - String - required: no - filter by creation time - start time</li>
<li>CreateEndTime - String - required: no - filter by creation time - end time</li>
<li>Status - String - required: no - filter by status: 4 - pending; 5 -- trusted; 6 - isolated; 10 - isolation in progress; 11 - recovering from isolation</li>
When RiskType is PROCESS:
Filter criteria
<li>IpOrName - String - required: no - host IP or host name</li>
<li>VirusName - String - required: no - virus name</li>
<li>BeginTime - String - required: no - process startup time - begin</li>
<li>BeginTime - String - required: no - process startup time - end</li>
<li>Status - String - required: no - filter by status: 0 - pending; 1 - under detection; 2 - detected; 3 - exited; 4 - trusted</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKEVENTSSTATUSREQUEST_H_
