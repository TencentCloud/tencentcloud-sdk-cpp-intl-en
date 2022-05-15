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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputInfo.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * CreateStreamLinkOutputInfo request structure.
                */
                class CreateStreamLinkOutputInfoRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkOutputInfoRequest();
                    ~CreateStreamLinkOutputInfoRequest() = default;
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
                     * 获取The output configuration of the flow.
                     * @return Output The output configuration of the flow.
                     */
                    CreateOutputInfo GetOutput() const;

                    /**
                     * 设置The output configuration of the flow.
                     * @param Output The output configuration of the flow.
                     */
                    void SetOutput(const CreateOutputInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * The flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * The output configuration of the flow.
                     */
                    CreateOutputInfo m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_
