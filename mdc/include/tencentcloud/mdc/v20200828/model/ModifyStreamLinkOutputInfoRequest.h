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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKOUTPUTINFOREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKOUTPUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/ModifyOutputInfo.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * ModifyStreamLinkOutputInfo request structure.
                */
                class ModifyStreamLinkOutputInfoRequest : public AbstractModel
                {
                public:
                    ModifyStreamLinkOutputInfoRequest();
                    ~ModifyStreamLinkOutputInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The flow ID.
                     * @return FlowId The flow ID.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置The flow ID.
                     * @param _flowId The flow ID.
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
                     * 获取The output configuration to modify.
                     * @return Output The output configuration to modify.
                     * 
                     */
                    ModifyOutputInfo GetOutput() const;

                    /**
                     * 设置The output configuration to modify.
                     * @param _output The output configuration to modify.
                     * 
                     */
                    void SetOutput(const ModifyOutputInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * The flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * The output configuration to modify.
                     */
                    ModifyOutputInfo m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_MODIFYSTREAMLINKOUTPUTINFOREQUEST_H_
