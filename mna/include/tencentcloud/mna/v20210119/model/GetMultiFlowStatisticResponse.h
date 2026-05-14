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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/FlowDetails.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetMultiFlowStatistic response structure.
                */
                class GetMultiFlowStatisticResponse : public AbstractModel
                {
                public:
                    GetMultiFlowStatisticResponse();
                    ~GetMultiFlowStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Batch device traffic information
                     * @return FlowDetails Batch device traffic information
                     * 
                     */
                    std::vector<FlowDetails> GetFlowDetails() const;

                    /**
                     * 判断参数 FlowDetails 是否已赋值
                     * @return FlowDetails 是否已赋值
                     * 
                     */
                    bool FlowDetailsHasBeenSet() const;

                private:

                    /**
                     * Batch device traffic information
                     */
                    std::vector<FlowDetails> m_flowDetails;
                    bool m_flowDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETMULTIFLOWSTATISTICRESPONSE_H_
