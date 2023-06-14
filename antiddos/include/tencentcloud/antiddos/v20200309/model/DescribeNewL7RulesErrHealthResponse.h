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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/KeyValue.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeNewL7RulesErrHealth response structure.
                */
                class DescribeNewL7RulesErrHealthResponse : public AbstractModel
                {
                public:
                    DescribeNewL7RulesErrHealthResponse();
                    ~DescribeNewL7RulesErrHealthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of rules with exceptions. `Key`: Rule ID, `Value`: Exception IPs and error message. 
                     * @return ErrHealths List of rules with exceptions. `Key`: Rule ID, `Value`: Exception IPs and error message. 
                     * 
                     */
                    std::vector<KeyValue> GetErrHealths() const;

                    /**
                     * 判断参数 ErrHealths 是否已赋值
                     * @return ErrHealths 是否已赋值
                     * 
                     */
                    bool ErrHealthsHasBeenSet() const;

                    /**
                     * 获取Total number of rules with exceptions
                     * @return Total Total number of rules with exceptions
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * List of rules with exceptions. `Key`: Rule ID, `Value`: Exception IPs and error message. 
                     */
                    std::vector<KeyValue> m_errHealths;
                    bool m_errHealthsHasBeenSet;

                    /**
                     * Total number of rules with exceptions
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHRESPONSE_H_
