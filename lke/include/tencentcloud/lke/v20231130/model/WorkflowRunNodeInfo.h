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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/StatisticInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Workflow running node information.
                */
                class WorkflowRunNodeInfo : public AbstractModel
                {
                public:
                    WorkflowRunNodeInfo();
                    ~WorkflowRunNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node ID.
                     * @return NodeId Node ID.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeId Node ID.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
                     * 
                     */
                    void SetNodeType(const uint64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Status Status.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status.
                     * @param _status Status.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Input..
                     * @return Input Input..
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置Input..
                     * @param _input Input..
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output.
                     * @return Output Output.
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Output.
                     * @param _output Output.
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Task output.
                     * @return TaskOutput Task output.
                     * 
                     */
                    std::string GetTaskOutput() const;

                    /**
                     * 设置Task output.
                     * @param _taskOutput Task output.
                     * 
                     */
                    void SetTaskOutput(const std::string& _taskOutput);

                    /**
                     * 判断参数 TaskOutput 是否已赋值
                     * @return TaskOutput 是否已赋值
                     * 
                     */
                    bool TaskOutputHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return FailMessage Error message.
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置Error message.
                     * @param _failMessage Error message.
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取Time consumption.
                     * @return CostMilliSeconds Time consumption.
                     * 
                     */
                    uint64_t GetCostMilliSeconds() const;

                    /**
                     * 设置Time consumption.
                     * @param _costMilliSeconds Time consumption.
                     * 
                     */
                    void SetCostMilliSeconds(const uint64_t& _costMilliSeconds);

                    /**
                     * 判断参数 CostMilliSeconds 是否已赋值
                     * @return CostMilliSeconds 是否已赋值
                     * 
                     */
                    bool CostMilliSecondsHasBeenSet() const;

                    /**
                     * 获取Large model output information.
                     * @return StatisticInfos Large model output information.
                     * 
                     */
                    std::vector<StatisticInfo> GetStatisticInfos() const;

                    /**
                     * 设置Large model output information.
                     * @param _statisticInfos Large model output information.
                     * 
                     */
                    void SetStatisticInfos(const std::vector<StatisticInfo>& _statisticInfos);

                    /**
                     * 判断参数 StatisticInfos 是否已赋值
                     * @return StatisticInfos 是否已赋值
                     * 
                     */
                    bool StatisticInfosHasBeenSet() const;

                private:

                    /**
                     * Node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node type.
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Status.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Input..
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output.
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Task output.
                     */
                    std::string m_taskOutput;
                    bool m_taskOutputHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * Time consumption.
                     */
                    uint64_t m_costMilliSeconds;
                    bool m_costMilliSecondsHasBeenSet;

                    /**
                     * Large model output information.
                     */
                    std::vector<StatisticInfo> m_statisticInfos;
                    bool m_statisticInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_
