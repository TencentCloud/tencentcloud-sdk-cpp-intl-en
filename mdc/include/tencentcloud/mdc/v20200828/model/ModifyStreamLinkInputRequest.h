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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKINPUTREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKINPUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/ModifyInput.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * ModifyStreamLinkInput request structure.
                */
                class ModifyStreamLinkInputRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkInputRequest();
                    ~ModifyStreamLinkInputRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Stream Id.
                     * @return FlowId Stream Id.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Stream Id.
                     * @param _flowId Stream Id.
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
                     * 获取Input information that needs to be modified.
                     * @return Input Input information that needs to be modified.
                     * 
                     */
                    ModifyInput GetInput() const;

                    /**
                     * 设置Input information that needs to be modified.
                     * @param _input Input information that needs to be modified.
                     * 
                     */
                    void SetInput(const ModifyInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * Stream Id.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Input information that needs to be modified.
                     */
                    ModifyInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKINPUTREQUEST_H_
