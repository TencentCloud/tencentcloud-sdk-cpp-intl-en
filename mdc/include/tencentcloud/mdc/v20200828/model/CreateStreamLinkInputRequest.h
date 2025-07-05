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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKINPUTREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKINPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateInput.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * CreateStreamLinkInput request structure.
                */
                class CreateStreamLinkInputRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkInputRequest();
                    ~CreateStreamLinkInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取StreamLink stream ID.
                     * @return FlowId StreamLink stream ID.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置StreamLink stream ID.
                     * @param _flowId StreamLink stream ID.
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
                     * 获取The input group of the Flow.
                     * @return InputGroup The input group of the Flow.
                     * 
                     */
                    std::vector<CreateInput> GetInputGroup() const;

                    /**
                     * 设置The input group of the Flow.
                     * @param _inputGroup The input group of the Flow.
                     * 
                     */
                    void SetInputGroup(const std::vector<CreateInput>& _inputGroup);

                    /**
                     * 判断参数 InputGroup 是否已赋值
                     * @return InputGroup 是否已赋值
                     * 
                     */
                    bool InputGroupHasBeenSet() const;

                private:

                    /**
                     * StreamLink stream ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * The input group of the Flow.
                     */
                    std::vector<CreateInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKINPUTREQUEST_H_
