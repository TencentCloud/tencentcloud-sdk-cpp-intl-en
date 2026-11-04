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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_NODERUN_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_NODERUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Basic information of node operation
                */
                class NodeRun : public AbstractModel
                {
                public:
                    NodeRun();
                    ~NodeRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the node operation
                     * @return NodeRunId ID of the node operation
                     * 
                     */
                    std::string GetNodeRunId() const;

                    /**
                     * 设置ID of the node operation
                     * @param _nodeRunId ID of the node operation
                     * 
                     */
                    void SetNodeRunId(const std::string& _nodeRunId);

                    /**
                     * 判断参数 NodeRunId 是否已赋值
                     * @return NodeRunId 是否已赋值
                     * 
                     */
                    bool NodeRunIdHasBeenSet() const;

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
                     * 获取ID of the workflow running instance
                     * @return WorkflowRunId ID of the workflow running instance
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置ID of the workflow running instance
                     * @param _workflowRunId ID of the workflow running instance
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

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
                     * 获取Node type.
1: Start node
2: Parameter extraction node
3: Large model node
4: Knowledge Q&A node
5: Knowledge retrieval node
6: Tag extraction node
7: Code execution node
8: Tool node
9: Logic judgment node
10: Reply node
11: Tab node
12: Loop node
13: Intent recognition node
14: Workflow node
15: Plug-in node
16: End node
17: Variable aggregate node data
18: Batch processing node
19: Message Queue node
20: Database node
21: Variable assignment node data
22: Variable conversion node data
23: Agent node
24: Annotation node
25: File collection node
26: Text collection node
27: Widget node
                     * @return NodeType Node type.
1: Start node
2: Parameter extraction node
3: Large model node
4: Knowledge Q&A node
5: Knowledge retrieval node
6: Tag extraction node
7: Code execution node
8: Tool node
9: Logic judgment node
10: Reply node
11: Tab node
12: Loop node
13: Intent recognition node
14: Workflow node
15: Plug-in node
16: End node
17: Variable aggregate node data
18: Batch processing node
19: Message Queue node
20: Database node
21: Variable assignment node data
22: Variable conversion node data
23: Agent node
24: Annotation node
25: File collection node
26: Text collection node
27: Widget node
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置Node type.
1: Start node
2: Parameter extraction node
3: Large model node
4: Knowledge Q&A node
5: Knowledge retrieval node
6: Tag extraction node
7: Code execution node
8: Tool node
9: Logic judgment node
10: Reply node
11: Tab node
12: Loop node
13: Intent recognition node
14: Workflow node
15: Plug-in node
16: End node
17: Variable aggregate node data
18: Batch processing node
19: Message Queue node
20: Database node
21: Variable assignment node data
22: Variable conversion node data
23: Agent node
24: Annotation node
25: File collection node
26: Text collection node
27: Widget node
                     * @param _nodeType Node type.
1: Start node
2: Parameter extraction node
3: Large model node
4: Knowledge Q&A node
5: Knowledge retrieval node
6: Tag extraction node
7: Code execution node
8: Tool node
9: Logic judgment node
10: Reply node
11: Tab node
12: Loop node
13: Intent recognition node
14: Workflow node
15: Plug-in node
16: End node
17: Variable aggregate node data
18: Batch processing node
19: Message Queue node
20: Database node
21: Variable assignment node data
22: Variable conversion node data
23: Agent node
24: Annotation node
25: File collection node
26: Text collection node
27: Widget node
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
                     * 获取Running state. 1: initial status; 2: running; 3: operation successful; 4: operation failure; 5: canceled
                     * @return Status Running state. 1: initial status; 2: running; 3: operation successful; 4: operation failure; 5: canceled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Running state. 1: initial status; 2: running; 3: operation successful; 4: operation failure; 5: canceled
                     * @param _status Running state. 1: initial status; 2: running; 3: operation successful; 4: operation failure; 5: canceled
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
                     * 获取Error message
                     * @return FailMessage Error message
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置Error message
                     * @param _failMessage Error message
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
                     * 获取Total time consumed (ms)
                     * @return TotalCostMs Total time consumed (ms)
                     * 
                     */
                    int64_t GetTotalCostMs() const;

                    /**
                     * 设置Total time consumed (ms)
                     * @param _totalCostMs Total time consumed (ms)
                     * 
                     */
                    void SetTotalCostMs(const int64_t& _totalCostMs);

                    /**
                     * 判断参数 TotalCostMs 是否已赋值
                     * @return TotalCostMs 是否已赋值
                     * 
                     */
                    bool TotalCostMsHasBeenSet() const;

                    /**
                     * 获取Total number of tokens consumed
                     * @return TotalTokens Total number of tokens consumed
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置Total number of tokens consumed
                     * @param _totalTokens Total number of tokens consumed
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取Error code.
                     * @return FailCode Error code.
                     * 
                     */
                    std::string GetFailCode() const;

                    /**
                     * 设置Error code.
                     * @param _failCode Error code.
                     * 
                     */
                    void SetFailCode(const std::string& _failCode);

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取List of branch indexes
                     * @return BranchIndexList List of branch indexes
                     * 
                     */
                    std::vector<int64_t> GetBranchIndexList() const;

                    /**
                     * 设置List of branch indexes
                     * @param _branchIndexList List of branch indexes
                     * 
                     */
                    void SetBranchIndexList(const std::vector<int64_t>& _branchIndexList);

                    /**
                     * 判断参数 BranchIndexList 是否已赋值
                     * @return BranchIndexList 是否已赋值
                     * 
                     */
                    bool BranchIndexListHasBeenSet() const;

                private:

                    /**
                     * ID of the node operation
                     */
                    std::string m_nodeRunId;
                    bool m_nodeRunIdHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * ID of the workflow running instance
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node type.
1: Start node
2: Parameter extraction node
3: Large model node
4: Knowledge Q&A node
5: Knowledge retrieval node
6: Tag extraction node
7: Code execution node
8: Tool node
9: Logic judgment node
10: Reply node
11: Tab node
12: Loop node
13: Intent recognition node
14: Workflow node
15: Plug-in node
16: End node
17: Variable aggregate node data
18: Batch processing node
19: Message Queue node
20: Database node
21: Variable assignment node data
22: Variable conversion node data
23: Agent node
24: Annotation node
25: File collection node
26: Text collection node
27: Widget node
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Running state. 1: initial status; 2: running; 3: operation successful; 4: operation failure; 5: canceled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * Total time consumed (ms)
                     */
                    int64_t m_totalCostMs;
                    bool m_totalCostMsHasBeenSet;

                    /**
                     * Total number of tokens consumed
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * Error code.
                     */
                    std::string m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * List of branch indexes
                     */
                    std::vector<int64_t> m_branchIndexList;
                    bool m_branchIndexListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_NODERUN_H_
