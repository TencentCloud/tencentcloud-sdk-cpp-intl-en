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
                * Configuration information of the queried flow.
                */
                class DescribeFlow : public AbstractModel
                {
                public:
                    DescribeFlow();
                    ~DescribeFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Flow ID.
                     * @return FlowId Flow ID.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Flow ID.
                     * @param _flowId Flow ID.
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
                     * 获取Flow name.
                     * @return FlowName Flow name.
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置Flow name.
                     * @param _flowName Flow name.
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
                     * 获取Flow status. Valid values: `IDLE`, `RUNNING`
                     * @return State Flow status. Valid values: `IDLE`, `RUNNING`
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Flow status. Valid values: `IDLE`, `RUNNING`
                     * @param _state Flow status. Valid values: `IDLE`, `RUNNING`
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
                     * 获取Maximum bandwidth value.
                     * @return MaxBandwidth Maximum bandwidth value.
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth value.
                     * @param _maxBandwidth Maximum bandwidth value.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OutputGroup Output group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DescribeOutput> GetOutputGroup() const;

                    /**
                     * 设置Output group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _outputGroup Output group.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputGroup(const std::vector<DescribeOutput>& _outputGroup);

                    /**
                     * 判断参数 OutputGroup 是否已赋值
                     * @return OutputGroup 是否已赋值
                     * 
                     */
                    bool OutputGroupHasBeenSet() const;

                private:

                    /**
                     * Flow ID.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Flow name.
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * Flow status. Valid values: `IDLE`, `RUNNING`
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Maximum bandwidth value.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeOutput> m_outputGroup;
                    bool m_outputGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEFLOW_H_
