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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLERESPONSE_H_

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
                * DescribeEventByTable response structure.
                */
                class DescribeEventByTableResponse : public AbstractModel
                {
                public:
                    DescribeEventByTableResponse();
                    ~DescribeEventByTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm type. Bruteattack: brute force cracking; bash: high-risk command; malware: malicious file; risk_dns: malicious request; privilege_escalation: local privilege escalation; reverse_shell: reverse shell; java_shell: Java webshell.
                     * @return Type Alarm type. Bruteattack: brute force cracking; bash: high-risk command; malware: malicious file; risk_dns: malicious request; privilege_escalation: local privilege escalation; reverse_shell: reverse shell; java_shell: Java webshell.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取JSON string of the event content. The field structure is the same as that of the event table.
                     * @return Value JSON string of the event content. The field structure is the same as that of the event table.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Alarm type. Bruteattack: brute force cracking; bash: high-risk command; malware: malicious file; risk_dns: malicious request; privilege_escalation: local privilege escalation; reverse_shell: reverse shell; java_shell: Java webshell.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * JSON string of the event content. The field structure is the same as that of the event table.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLERESPONSE_H_
