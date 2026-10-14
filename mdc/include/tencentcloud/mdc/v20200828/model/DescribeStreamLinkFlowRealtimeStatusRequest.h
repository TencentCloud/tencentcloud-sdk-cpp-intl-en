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
                     * 获取<p>Stream ID.</p>
                     * @return FlowId <p>Stream ID.</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>Stream ID.</p>
                     * @param _flowId <p>Stream ID.</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>Input an id array. If both the input and output arrays are empty, it signifies a full query.</p>
                     * @return InputIds <p>Input an id array. If both the input and output arrays are empty, it signifies a full query.</p>
                     * 
                     */
                    std::vector<std::string> GetInputIds() const;

                    /**
                     * 设置<p>Input an id array. If both the input and output arrays are empty, it signifies a full query.</p>
                     * @param _inputIds <p>Input an id array. If both the input and output arrays are empty, it signifies a full query.</p>
                     * 
                     */
                    void SetInputIds(const std::vector<std::string>& _inputIds);

                    /**
                     * 判断参数 InputIds 是否已赋值
                     * @return InputIds 是否已赋值
                     * 
                     */
                    bool InputIdsHasBeenSet() const;

                    /**
                     * 获取<p>Output id array. If both input and output arrays are empty, it signifies a full query.</p>
                     * @return OutputIds <p>Output id array. If both input and output arrays are empty, it signifies a full query.</p>
                     * 
                     */
                    std::vector<std::string> GetOutputIds() const;

                    /**
                     * 设置<p>Output id array. If both input and output arrays are empty, it signifies a full query.</p>
                     * @param _outputIds <p>Output id array. If both input and output arrays are empty, it signifies a full query.</p>
                     * 
                     */
                    void SetOutputIds(const std::vector<std::string>& _outputIds);

                    /**
                     * 判断参数 OutputIds 是否已赋值
                     * @return OutputIds 是否已赋值
                     * 
                     */
                    bool OutputIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Stream ID.</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Input an id array. If both the input and output arrays are empty, it signifies a full query.</p>
                     */
                    std::vector<std::string> m_inputIds;
                    bool m_inputIdsHasBeenSet;

                    /**
                     * <p>Output id array. If both input and output arrays are empty, it signifies a full query.</p>
                     */
                    std::vector<std::string> m_outputIds;
                    bool m_outputIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSREQUEST_H_
