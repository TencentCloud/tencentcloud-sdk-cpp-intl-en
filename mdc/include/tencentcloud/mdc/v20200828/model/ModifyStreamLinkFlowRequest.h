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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKFLOWREQUEST_H_

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
                * ModifyStreamLinkFlow request structure.
                */
                class ModifyStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkFlowRequest();
                    ~ModifyStreamLinkFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Flow ID
                     * @return FlowId Flow ID
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Flow ID
                     * @param _flowId Flow ID
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
                     * 获取Name of the flow to modify
                     * @return FlowName Name of the flow to modify
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置Name of the flow to modify
                     * @param _flowName Name of the flow to modify
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                private:

                    /**
                     * Flow ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Name of the flow to modify
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKFLOWREQUEST_H_
