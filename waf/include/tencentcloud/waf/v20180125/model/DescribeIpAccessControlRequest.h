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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeIpAccessControl request structure.
                */
                class DescribeIpAccessControlRequest : public AbstractModel
                {
                public:
                    DescribeIpAccessControlRequest();
                    ~DescribeIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取Count identifier
                     * @return Count Count identifier
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Count identifier
                     * @param _count Count identifier
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Action. 40 for querying the allowlist, 42 for querying the blocklist
                     * @return ActionType Action. 40 for querying the allowlist, 42 for querying the blocklist
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置Action. 40 for querying the allowlist, 42 for querying the blocklist
                     * @param _actionType Action. 40 for querying the allowlist, 42 for querying the blocklist
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Timestamp of the minimum valid time
                     * @return VtsMin Timestamp of the minimum valid time
                     * @deprecated
                     */
                    uint64_t GetVtsMin() const;

                    /**
                     * 设置Timestamp of the minimum valid time
                     * @param _vtsMin Timestamp of the minimum valid time
                     * @deprecated
                     */
                    void SetVtsMin(const uint64_t& _vtsMin);

                    /**
                     * 判断参数 VtsMin 是否已赋值
                     * @return VtsMin 是否已赋值
                     * @deprecated
                     */
                    bool VtsMinHasBeenSet() const;

                    /**
                     * 获取Timestamp of the maximum valid time
                     * @return VtsMax Timestamp of the maximum valid time
                     * @deprecated
                     */
                    uint64_t GetVtsMax() const;

                    /**
                     * 设置Timestamp of the maximum valid time
                     * @param _vtsMax Timestamp of the maximum valid time
                     * @deprecated
                     */
                    void SetVtsMax(const uint64_t& _vtsMax);

                    /**
                     * 判断参数 VtsMax 是否已赋值
                     * @return VtsMax 是否已赋值
                     * @deprecated
                     */
                    bool VtsMaxHasBeenSet() const;

                    /**
                     * 获取Timestamp for minimum creation time
                     * @return CtsMin Timestamp for minimum creation time
                     * 
                     */
                    uint64_t GetCtsMin() const;

                    /**
                     * 设置Timestamp for minimum creation time
                     * @param _ctsMin Timestamp for minimum creation time
                     * 
                     */
                    void SetCtsMin(const uint64_t& _ctsMin);

                    /**
                     * 判断参数 CtsMin 是否已赋值
                     * @return CtsMin 是否已赋值
                     * 
                     */
                    bool CtsMinHasBeenSet() const;

                    /**
                     * 获取Timestamp for Maximum Creation Time
                     * @return CtsMax Timestamp for Maximum Creation Time
                     * 
                     */
                    uint64_t GetCtsMax() const;

                    /**
                     * 设置Timestamp for Maximum Creation Time
                     * @param _ctsMax Timestamp for Maximum Creation Time
                     * 
                     */
                    void SetCtsMax(const uint64_t& _ctsMax);

                    /**
                     * 判断参数 CtsMax 是否已赋值
                     * @return CtsMax 是否已赋值
                     * 
                     */
                    bool CtsMaxHasBeenSet() const;

                    /**
                     * 获取Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * @return OffSet Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * 
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * @param _offSet Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * 
                     */
                    void SetOffSet(const uint64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     * 
                     */
                    bool OffSetHasBeenSet() const;

                    /**
                     * 获取Number of records returned per page, which is 20 by default.
                     * @return Limit Number of records returned per page, which is 20 by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of records returned per page, which is 20 by default.
                     * @param _limit Number of records returned per page, which is 20 by default.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Source.
                     * @return Source Source.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source.
                     * @param _source Source.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Sort parameters
                     * @return Sort Sort parameters
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sort parameters
                     * @param _sort Sort parameters
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Effective status.
                     * @return ValidStatus Effective status.
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置Effective status.
                     * @param _validStatus Effective status.
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取Timestamp of the minimum valid time
                     * @return ValidTimeStampMin Timestamp of the minimum valid time
                     * 
                     */
                    std::string GetValidTimeStampMin() const;

                    /**
                     * 设置Timestamp of the minimum valid time
                     * @param _validTimeStampMin Timestamp of the minimum valid time
                     * 
                     */
                    void SetValidTimeStampMin(const std::string& _validTimeStampMin);

                    /**
                     * 判断参数 ValidTimeStampMin 是否已赋值
                     * @return ValidTimeStampMin 是否已赋值
                     * 
                     */
                    bool ValidTimeStampMinHasBeenSet() const;

                    /**
                     * 获取Timestamp of the maximum valid time
                     * @return ValidTimeStampMax Timestamp of the maximum valid time
                     * 
                     */
                    std::string GetValidTimeStampMax() const;

                    /**
                     * 设置Timestamp of the maximum valid time
                     * @param _validTimeStampMax Timestamp of the maximum valid time
                     * 
                     */
                    void SetValidTimeStampMax(const std::string& _validTimeStampMax);

                    /**
                     * 判断参数 ValidTimeStampMax 是否已赋值
                     * @return ValidTimeStampMax 是否已赋值
                     * 
                     */
                    bool ValidTimeStampMaxHasBeenSet() const;

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
                     * 获取Filter by scheduled task type. Valid values: 0, 1, 2, 3, 4.
                     * @return TimerType Filter by scheduled task type. Valid values: 0, 1, 2, 3, 4.
                     * 
                     */
                    int64_t GetTimerType() const;

                    /**
                     * 设置Filter by scheduled task type. Valid values: 0, 1, 2, 3, 4.
                     * @param _timerType Filter by scheduled task type. Valid values: 0, 1, 2, 3, 4.
                     * 
                     */
                    void SetTimerType(const int64_t& _timerType);

                    /**
                     * 判断参数 TimerType 是否已赋值
                     * @return TimerType 是否已赋值
                     * 
                     */
                    bool TimerTypeHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Count identifier
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Action. 40 for querying the allowlist, 42 for querying the blocklist
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Timestamp of the minimum valid time
                     */
                    uint64_t m_vtsMin;
                    bool m_vtsMinHasBeenSet;

                    /**
                     * Timestamp of the maximum valid time
                     */
                    uint64_t m_vtsMax;
                    bool m_vtsMaxHasBeenSet;

                    /**
                     * Timestamp for minimum creation time
                     */
                    uint64_t m_ctsMin;
                    bool m_ctsMinHasBeenSet;

                    /**
                     * Timestamp for Maximum Creation Time
                     */
                    uint64_t m_ctsMax;
                    bool m_ctsMaxHasBeenSet;

                    /**
                     * Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * Number of records returned per page, which is 20 by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Source.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Sort parameters
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Effective status.
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * Timestamp of the minimum valid time
                     */
                    std::string m_validTimeStampMin;
                    bool m_validTimeStampMinHasBeenSet;

                    /**
                     * Timestamp of the maximum valid time
                     */
                    std::string m_validTimeStampMax;
                    bool m_validTimeStampMaxHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Filter by scheduled task type. Valid values: 0, 1, 2, 3, 4.
                     */
                    int64_t m_timerType;
                    bool m_timerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLREQUEST_H_
