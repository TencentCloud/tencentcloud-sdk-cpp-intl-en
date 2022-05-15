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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowRealtimeStatus request structure.
                */
                class DescribeStreamLinkFlowRealtimeStatusRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowRealtimeStatusRequest();
                    ~DescribeStreamLinkFlowRealtimeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The flow ID.
                     * @return FlowId The flow ID.
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置The flow ID.
                     * @param FlowId The flow ID.
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取The IDs of the inputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     * @return InputIds The IDs of the inputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     */
                    std::vector<std::string> GetInputIds() const;

                    /**
                     * 设置The IDs of the inputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     * @param InputIds The IDs of the inputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     */
                    void SetInputIds(const std::vector<std::string>& _inputIds);

                    /**
                     * 判断参数 InputIds 是否已赋值
                     * @return InputIds 是否已赋值
                     */
                    bool InputIdsHasBeenSet() const;

                    /**
                     * 获取The IDs of the outputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     * @return OutputIds The IDs of the outputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     */
                    std::vector<std::string> GetOutputIds() const;

                    /**
                     * 设置The IDs of the outputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     * @param OutputIds The IDs of the outputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     */
                    void SetOutputIds(const std::vector<std::string>& _outputIds);

                    /**
                     * 判断参数 OutputIds 是否已赋值
                     * @return OutputIds 是否已赋值
                     */
                    bool OutputIdsHasBeenSet() const;

                private:

                    /**
                     * The flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * The IDs of the inputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     */
                    std::vector<std::string> m_inputIds;
                    bool m_inputIdsHasBeenSet;

                    /**
                     * The IDs of the outputs to query. If this parameter and `OutputIds` are both empty, all inputs and outputs are queried.
                     */
                    std::vector<std::string> m_outputIds;
                    bool m_outputIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_
