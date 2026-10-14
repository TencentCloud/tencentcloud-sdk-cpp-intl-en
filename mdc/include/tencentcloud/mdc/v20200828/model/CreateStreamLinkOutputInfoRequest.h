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
                     * 获取Transport stream Id.
                     * @return FlowId Transport stream Id.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Transport stream Id.
                     * @param _flowId Transport stream Id.
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
                     * 获取Output configuration of the transport stream.
                     * @return Output Output configuration of the transport stream.
                     * 
                     */
                    CreateOutputInfo GetOutput() const;

                    /**
                     * 设置Output configuration of the transport stream.
                     * @param _output Output configuration of the transport stream.
                     * 
                     */
                    void SetOutput(const CreateOutputInfo& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Transport stream Id.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Output configuration of the transport stream.
                     */
                    CreateOutputInfo m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKOUTPUTINFOREQUEST_H_
