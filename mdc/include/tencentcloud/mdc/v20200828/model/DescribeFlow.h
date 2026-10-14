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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEFLOW_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/DescribeInput.h>
#include <tencentcloud/mdc/v20200828/model/DescribeOutput.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Query the Flow configuration information.
                */
                class DescribeFlow : public AbstractModel
                {
                public:
                    DescribeFlow();
                    ~DescribeFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Stream status. Valid values: IDLE, RUNNING.
                     * @return State Stream status. Valid values: IDLE, RUNNING.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Stream status. Valid values: IDLE, RUNNING.
                     * @param _state Stream status. Valid values: IDLE, RUNNING.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth.
                     * @return MaxBandwidth Maximum bandwidth.
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth.
                     * @param _maxBandwidth Maximum bandwidth.
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
                     * 获取Input group.
                     * @return InputGroup Input group.
                     * 
                     */
                    std::vector<DescribeInput> GetInputGroup() const;

                    /**
                     * 设置Input group.
                     * @param _inputGroup Input group.
                     * 
                     */
                    void SetInputGroup(const std::vector<DescribeInput>& _inputGroup);

                    /**
                     * 判断参数 InputGroup 是否已赋值
                     * @return InputGroup 是否已赋值
                     * 
                     */
                    bool InputGroupHasBeenSet() const;

                    /**
                     * 获取Output group.
                     * @return OutputGroup Output group.
                     * 
                     */
                    std::vector<DescribeOutput> GetOutputGroup() const;

                    /**
                     * 设置Output group.
                     * @param _outputGroup Output group.
                     * 
                     */
                    void SetOutputGroup(const std::vector<DescribeOutput>& _outputGroup);

                    /**
                     * 判断参数 OutputGroup 是否已赋值
                     * @return OutputGroup 是否已赋值
                     * 
                     */
                    bool OutputGroupHasBeenSet() const;

                    /**
                     * 获取EventId of the media transmission event associated with this Flow.
                     * @return EventId EventId of the media transmission event associated with this Flow.
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置EventId of the media transmission event associated with this Flow.
                     * @param _eventId EventId of the media transmission event associated with this Flow.
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
                     * 获取Creation time of the Flow in UTC format.
                     * @return CreateTime Creation time of the Flow in UTC format.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the Flow in UTC format.
                     * @param _createTime Creation time of the Flow in UTC format.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Input protocols that can be created for this Flow.
                     * @return AllowedInputProtocols Input protocols that can be created for this Flow.
                     * 
                     */
                    std::vector<std::string> GetAllowedInputProtocols() const;

                    /**
                     * 设置Input protocols that can be created for this Flow.
                     * @param _allowedInputProtocols Input protocols that can be created for this Flow.
                     * 
                     */
                    void SetAllowedInputProtocols(const std::vector<std::string>& _allowedInputProtocols);

                    /**
                     * 判断参数 AllowedInputProtocols 是否已赋值
                     * @return AllowedInputProtocols 是否已赋值
                     * 
                     */
                    bool AllowedInputProtocolsHasBeenSet() const;

                    /**
                     * 获取Output protocols allowed to be created by this Flow
                     * @return AllowedOutputProtocols Output protocols allowed to be created by this Flow
                     * 
                     */
                    std::vector<std::string> GetAllowedOutputProtocols() const;

                    /**
                     * 设置Output protocols allowed to be created by this Flow
                     * @param _allowedOutputProtocols Output protocols allowed to be created by this Flow
                     * 
                     */
                    void SetAllowedOutputProtocols(const std::vector<std::string>& _allowedOutputProtocols);

                    /**
                     * 判断参数 AllowedOutputProtocols 是否已赋值
                     * @return AllowedOutputProtocols 是否已赋值
                     * 
                     */
                    bool AllowedOutputProtocolsHasBeenSet() const;

                private:

                    /**
                     * Stream Id.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Stream status. Valid values: IDLE, RUNNING.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Maximum bandwidth.
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * Input group.
                     */
                    std::vector<DescribeInput> m_inputGroup;
                    bool m_inputGroupHasBeenSet;

                    /**
                     * Output group.
                     */
                    std::vector<DescribeOutput> m_outputGroup;
                    bool m_outputGroupHasBeenSet;

                    /**
                     * EventId of the media transmission event associated with this Flow.
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Creation time of the Flow in UTC format.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Input protocols that can be created for this Flow.
                     */
                    std::vector<std::string> m_allowedInputProtocols;
                    bool m_allowedInputProtocolsHasBeenSet;

                    /**
                     * Output protocols allowed to be created by this Flow
                     */
                    std::vector<std::string> m_allowedOutputProtocols;
                    bool m_allowedOutputProtocolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEFLOW_H_
