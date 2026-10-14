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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKFLOWREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateInput.h>
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
                * CreateStreamLinkFlow request structure.
                */
                class CreateStreamLinkFlowRequest : public AbstractModel
                {
                public:
                    CreateStreamLinkFlowRequest();
                    ~CreateStreamLinkFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Stream name.
                     * @return FlowName Stream name.
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置Stream name.
                     * @param _flowName Stream name.
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth in bps. Options: [10000000, 20000000].
                     * @return MaxBandwidth Maximum bandwidth in bps. Options: [10000000, 20000000].
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth in bps. Options: [10000000, 20000000].
                     * @param _maxBandwidth Maximum bandwidth in bps. Options: [10000000, 20000000].
                     * 
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取Input group of a stream.
                     * @return InputGroup Input group of a stream.
                     * 
                     */
                    std::vector<CreateInput> GetInputGroup() const;

                    /**
                     * 设置Input group of a stream.
                     * @param _inputGroup Input group of a stream.
                     * 
                     */
                    void SetInputGroup(const std::vector<CreateInput>& _inputGroup);

                    /**
                     * 判断参数 InputGroup 是否已赋值
                     * @return InputGroup 是否已赋值
                     * 
                     */
                    bool InputGroupHasBeenSet() const;

                    /**
                     * 获取Media transmission Event ID associated with the Flow. Each Flow can only be associated with one Event.
                     * @return EventId Media transmission Event ID associated with the Flow. Each Flow can only be associated with one Event.
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置Media transmission Event ID associated with the Flow. Each Flow can only be associated with one Event.
                     * @param _eventId Media transmission Event ID associated with the Flow. Each Flow can only be associated with one Event.
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Output group of the stream.
                     * @return OutputGroup Output group of the stream.
                     * 
                     */
                    std::vector<CreateOutputInfo> GetOutputGroup() const;

                    /**
                     * 设置Output group of the stream.
                     * @param _outputGroup Output group of the stream.
                     * 
                     */
                    void SetOutputGroup(const std::vector<CreateOutputInfo>& _outputGroup);

                    /**
                     * 判断参数 OutputGroup 是否已赋值
                     * @return OutputGroup 是否已赋值
                     * 
                     */
                    bool OutputGroupHasBeenSet() const;

                private:

                    /**
                     * Stream name.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Maximum bandwidth in bps. Options: [10000000, 20000000].
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * Input group of a stream.
                     */
                    std::vector<CreateInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                    /**
                     * Media transmission Event ID associated with the Flow. Each Flow can only be associated with one Event.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Output group of the stream.
                     */
                    std::vector<CreateOutputInfo> m_outputGroup;
                    bool m_outputGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATESTREAMLINKFLOWREQUEST_H_
