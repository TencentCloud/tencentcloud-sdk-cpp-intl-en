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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_COMPLETEEXPANSIONRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_COMPLETEEXPANSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CompleteExpansion response structure.
                */
                class CompleteExpansionResponse : public AbstractModel
                {
                public:
                    CompleteExpansionResponse();
                    ~CompleteExpansionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Process ID, which can be used to query the status of the immediate switch upgrade task through the API DescribeFlowStatus.
                     * @return FlowId Process ID, which can be used to query the status of the immediate switch upgrade task through the API DescribeFlowStatus.
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * Process ID, which can be used to query the status of the immediate switch upgrade task through the API DescribeFlowStatus.
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_COMPLETEEXPANSIONRESPONSE_H_
