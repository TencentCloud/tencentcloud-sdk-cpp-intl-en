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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Task process information.
                */
                class TaskFlowInfo : public AbstractModel
                {
                public:
                    TaskFlowInfo();
                    ~TaskFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task flow ID.
                     * @return TaskFlowId Task flow ID.
                     * 
                     */
                    std::string GetTaskFlowId() const;

                    /**
                     * 设置Task flow ID.
                     * @param _taskFlowId Task flow ID.
                     * 
                     */
                    void SetTaskFlowId(const std::string& _taskFlowId);

                    /**
                     * 判断参数 TaskFlowId 是否已赋值
                     * @return TaskFlowId 是否已赋值
                     * 
                     */
                    bool TaskFlowIdHasBeenSet() const;

                    /**
                     * 获取Task flow name.
                     * @return TaskFlowName Task flow name.
                     * 
                     */
                    std::string GetTaskFlowName() const;

                    /**
                     * 设置Task flow name.
                     * @param _taskFlowName Task flow name.
                     * 
                     */
                    void SetTaskFlowName(const std::string& _taskFlowName);

                    /**
                     * 判断参数 TaskFlowName 是否已赋值
                     * @return TaskFlowName 是否已赋值
                     * 
                     */
                    bool TaskFlowNameHasBeenSet() const;

                    /**
                     * 获取Rewrite results of query.
                     * @return QueryRewrite Rewrite results of query.
                     * 
                     */
                    std::string GetQueryRewrite() const;

                    /**
                     * 设置Rewrite results of query.
                     * @param _queryRewrite Rewrite results of query.
                     * 
                     */
                    void SetQueryRewrite(const std::string& _queryRewrite);

                    /**
                     * 判断参数 QueryRewrite 是否已赋值
                     * @return QueryRewrite 是否已赋值
                     * 
                     */
                    bool QueryRewriteHasBeenSet() const;

                    /**
                     * 获取Hit intent.
                     * @return HitIntent Hit intent.
                     * 
                     */
                    std::string GetHitIntent() const;

                    /**
                     * 设置Hit intent.
                     * @param _hitIntent Hit intent.
                     * 
                     */
                    void SetHitIntent(const std::string& _hitIntent);

                    /**
                     * 判断参数 HitIntent 是否已赋值
                     * @return HitIntent 是否已赋值
                     * 
                     */
                    bool HitIntentHasBeenSet() const;

                    /**
                     * 获取Task flow response type.
0: Task flow response.
1: Silent task flow.
2: Pull back script of workflow.
3: Custom response of task flow.
                     * @return Type Task flow response type.
0: Task flow response.
1: Silent task flow.
2: Pull back script of workflow.
3: Custom response of task flow.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Task flow response type.
0: Task flow response.
1: Silent task flow.
2: Pull back script of workflow.
3: Custom response of task flow.
                     * @param _type Task flow response type.
0: Task flow response.
1: Silent task flow.
2: Pull back script of workflow.
3: Custom response of task flow.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Task flow ID.
                     */
                    std::string m_taskFlowId;
                    bool m_taskFlowIdHasBeenSet;

                    /**
                     * Task flow name.
                     */
                    std::string m_taskFlowName;
                    bool m_taskFlowNameHasBeenSet;

                    /**
                     * Rewrite results of query.
                     */
                    std::string m_queryRewrite;
                    bool m_queryRewriteHasBeenSet;

                    /**
                     * Hit intent.
                     */
                    std::string m_hitIntent;
                    bool m_hitIntentHasBeenSet;

                    /**
                     * Task flow response type.
0: Task flow response.
1: Silent task flow.
2: Pull back script of workflow.
3: Custom response of task flow.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWINFO_H_
