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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4RULESERRHEALTHRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4RULESERRHEALTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeL4RulesErrHealth response structure.
                */
                class DescribeL4RulesErrHealthResponse : public AbstractModel
                {
                public:
                    DescribeL4RulesErrHealthResponse();
                    ~DescribeL4RulesErrHealthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of exceptional rules
                     * @return Total Total number of exceptional rules
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Exceptional rule list. Returned value description: `Key` is the rule ID, while `Value` is the exceptional IP. Multiple IPs are separated by ","
                     * @return ErrHealths Exceptional rule list. Returned value description: `Key` is the rule ID, while `Value` is the exceptional IP. Multiple IPs are separated by ","
                     */
                    std::vector<KeyValue> GetErrHealths() const;

                    /**
                     * 判断参数 ErrHealths 是否已赋值
                     * @return ErrHealths 是否已赋值
                     */
                    bool ErrHealthsHasBeenSet() const;

                    /**
                     * 获取Exceptional rule list (which provides more error-related information). Returned value description:
If `key` is `RuleId`, `Value` indicates the rule ID;
If `key` is `Protocol`, `Value` indicates the forwarding protocol of a rule;
If `key` is `VirtualPort`, `Value` indicates the forwarding port of a rule;
If `Key` is `ErrMessage`, `Value` indicates the exception message for health check;
Exception message for health check in the format of `"SourceIp:1.1.1.1|SourcePort:1234|AbnormalStatTime:1570689065|AbnormalReason:connection time out|Interval:20|CheckNum:6|FailNum:6"`. Multiple error messages for the source IP should be separated by `,`,
SourceIp: real server IP, SourcePort: real server port, AbnormalStatTime: exception time, AbnormalReason: cause of exception, Interval: check frequency, CheckNum: number of checks, FailNum: number of failures;
                     * @return ExtErrHealths Exceptional rule list (which provides more error-related information). Returned value description:
If `key` is `RuleId`, `Value` indicates the rule ID;
If `key` is `Protocol`, `Value` indicates the forwarding protocol of a rule;
If `key` is `VirtualPort`, `Value` indicates the forwarding port of a rule;
If `Key` is `ErrMessage`, `Value` indicates the exception message for health check;
Exception message for health check in the format of `"SourceIp:1.1.1.1|SourcePort:1234|AbnormalStatTime:1570689065|AbnormalReason:connection time out|Interval:20|CheckNum:6|FailNum:6"`. Multiple error messages for the source IP should be separated by `,`,
SourceIp: real server IP, SourcePort: real server port, AbnormalStatTime: exception time, AbnormalReason: cause of exception, Interval: check frequency, CheckNum: number of checks, FailNum: number of failures;
                     */
                    std::vector<KeyValueRecord> GetExtErrHealths() const;

                    /**
                     * 判断参数 ExtErrHealths 是否已赋值
                     * @return ExtErrHealths 是否已赋值
                     */
                    bool ExtErrHealthsHasBeenSet() const;

                private:

                    /**
                     * Total number of exceptional rules
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Exceptional rule list. Returned value description: `Key` is the rule ID, while `Value` is the exceptional IP. Multiple IPs are separated by ","
                     */
                    std::vector<KeyValue> m_errHealths;
                    bool m_errHealthsHasBeenSet;

                    /**
                     * Exceptional rule list (which provides more error-related information). Returned value description:
If `key` is `RuleId`, `Value` indicates the rule ID;
If `key` is `Protocol`, `Value` indicates the forwarding protocol of a rule;
If `key` is `VirtualPort`, `Value` indicates the forwarding port of a rule;
If `Key` is `ErrMessage`, `Value` indicates the exception message for health check;
Exception message for health check in the format of `"SourceIp:1.1.1.1|SourcePort:1234|AbnormalStatTime:1570689065|AbnormalReason:connection time out|Interval:20|CheckNum:6|FailNum:6"`. Multiple error messages for the source IP should be separated by `,`,
SourceIp: real server IP, SourcePort: real server port, AbnormalStatTime: exception time, AbnormalReason: cause of exception, Interval: check frequency, CheckNum: number of checks, FailNum: number of failures;
                     */
                    std::vector<KeyValueRecord> m_extErrHealths;
                    bool m_extErrHealthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEL4RULESERRHEALTHRESPONSE_H_
