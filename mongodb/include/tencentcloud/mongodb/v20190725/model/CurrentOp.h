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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CURRENTOP_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CURRENTOP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Current operation on the TencentDB for MongoDB instance.
                */
                class CurrentOp : public AbstractModel
                {
                public:
                    CurrentOp();
                    ~CurrentOp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation number.
                     * @return OpId Operation number.
                     * 
                     */
                    int64_t GetOpId() const;

                    /**
                     * 设置Operation number.
                     * @param _opId Operation number.
                     * 
                     */
                    void SetOpId(const int64_t& _opId);

                    /**
                     * 判断参数 OpId 是否已赋值
                     * @return OpId 是否已赋值
                     * 
                     */
                    bool OpIdHasBeenSet() const;

                    /**
                     * 获取Namespace where the operation is located, in the format of db.collection.
                     * @return Ns Namespace where the operation is located, in the format of db.collection.
                     * 
                     */
                    std::string GetNs() const;

                    /**
                     * 设置Namespace where the operation is located, in the format of db.collection.
                     * @param _ns Namespace where the operation is located, in the format of db.collection.
                     * 
                     */
                    void SetNs(const std::string& _ns);

                    /**
                     * 判断参数 Ns 是否已赋值
                     * @return Ns 是否已赋值
                     * 
                     */
                    bool NsHasBeenSet() const;

                    /**
                     * 获取Execution statement of the operation.
                     * @return Query Execution statement of the operation.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Execution statement of the operation.
                     * @param _query Execution statement of the operation.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Operation type.
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * @return Op Operation type.
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置Operation type.
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * @param _op Operation type.
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取Name of the shard where the operation is performed.
                     * @return ReplicaSetName Name of the shard where the operation is performed.
                     * 
                     */
                    std::string GetReplicaSetName() const;

                    /**
                     * 设置Name of the shard where the operation is performed.
                     * @param _replicaSetName Name of the shard where the operation is performed.
                     * 
                     */
                    void SetReplicaSetName(const std::string& _replicaSetName);

                    /**
                     * 判断参数 ReplicaSetName 是否已赋值
                     * @return ReplicaSetName 是否已赋值
                     * 
                     */
                    bool ReplicaSetNameHasBeenSet() const;

                    /**
                     * 获取Name of the node where the operation is performed.
                     * @return NodeName Name of the node where the operation is performed.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Name of the node where the operation is performed.
                     * @param _nodeName Name of the node where the operation is performed.
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
                     * 获取Detailed information about the operation.
                     * @return Operation Detailed information about the operation.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Detailed information about the operation.
                     * @param _operation Detailed information about the operation.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Node role.
- primary: primary node.
- secondary: secondary node.
                     * @return State Node role.
- primary: primary node.
- secondary: secondary node.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Node role.
- primary: primary node.
- secondary: secondary node.
                     * @param _state Node role.
- primary: primary node.
- secondary: secondary node.
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
                     * 获取Execution time of the operation, in ms.
                     * @return MicrosecsRunning Execution time of the operation, in ms.
                     * 
                     */
                    uint64_t GetMicrosecsRunning() const;

                    /**
                     * 设置Execution time of the operation, in ms.
                     * @param _microsecsRunning Execution time of the operation, in ms.
                     * 
                     */
                    void SetMicrosecsRunning(const uint64_t& _microsecsRunning);

                    /**
                     * 判断参数 MicrosecsRunning 是否已赋值
                     * @return MicrosecsRunning 是否已赋值
                     * 
                     */
                    bool MicrosecsRunningHasBeenSet() const;

                    /**
                     * 获取Information about the node where the current operation is performed.
                     * @return ExecNode Information about the node where the current operation is performed.
                     * 
                     */
                    std::string GetExecNode() const;

                    /**
                     * 设置Information about the node where the current operation is performed.
                     * @param _execNode Information about the node where the current operation is performed.
                     * 
                     */
                    void SetExecNode(const std::string& _execNode);

                    /**
                     * 判断参数 ExecNode 是否已赋值
                     * @return ExecNode 是否已赋值
                     * 
                     */
                    bool ExecNodeHasBeenSet() const;

                private:

                    /**
                     * Operation number.
                     */
                    int64_t m_opId;
                    bool m_opIdHasBeenSet;

                    /**
                     * Namespace where the operation is located, in the format of db.collection.
                     */
                    std::string m_ns;
                    bool m_nsHasBeenSet;

                    /**
                     * Execution statement of the operation.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Operation type.
- none: special status; idle connections or internal tasks.
- update: update data.
- insert: insertion operation.
- query: query operation.
- command: command operation.
- getmore: obtain more data.
- remove: deletion operation.
- killcursors: operation of releasing the query cursor.
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * Name of the shard where the operation is performed.
                     */
                    std::string m_replicaSetName;
                    bool m_replicaSetNameHasBeenSet;

                    /**
                     * Name of the node where the operation is performed.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Detailed information about the operation.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Node role.
- primary: primary node.
- secondary: secondary node.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Execution time of the operation, in ms.
                     */
                    uint64_t m_microsecsRunning;
                    bool m_microsecsRunningHasBeenSet;

                    /**
                     * Information about the node where the current operation is performed.
                     */
                    std::string m_execNode;
                    bool m_execNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CURRENTOP_H_
