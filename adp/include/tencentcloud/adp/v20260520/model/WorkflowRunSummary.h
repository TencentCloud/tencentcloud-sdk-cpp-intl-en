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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunProfile.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunResult.h>
#include <tencentcloud/adp/v20260520/model/WorkflowRunTime.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Basic information of the workflow running instance
                */
                class WorkflowRunSummary : public AbstractModel
                {
                public:
                    WorkflowRunSummary();
                    ~WorkflowRunSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Runtime environment. 1: Development domain, 2: Production domain</p>
                     * @return Domain <p>Runtime environment. 1: Development domain, 2: Production domain</p>
                     * 
                     */
                    uint64_t GetDomain() const;

                    /**
                     * 设置<p>Runtime environment. 1: Development domain, 2: Production domain</p>
                     * @param _domain <p>Runtime environment. 1: Development domain, 2: Production domain</p>
                     * 
                     */
                    void SetDomain(const uint64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>Basic information of workflow operation instance</p>
                     * @return WorkflowRunProfile <p>Basic information of workflow operation instance</p>
                     * 
                     */
                    WorkflowRunProfile GetWorkflowRunProfile() const;

                    /**
                     * 设置<p>Basic information of workflow operation instance</p>
                     * @param _workflowRunProfile <p>Basic information of workflow operation instance</p>
                     * 
                     */
                    void SetWorkflowRunProfile(const WorkflowRunProfile& _workflowRunProfile);

                    /**
                     * 判断参数 WorkflowRunProfile 是否已赋值
                     * @return WorkflowRunProfile 是否已赋值
                     * 
                     */
                    bool WorkflowRunProfileHasBeenSet() const;

                    /**
                     * 获取<p>Workflow operation instance result</p>
                     * @return WorkflowRunResult <p>Workflow operation instance result</p>
                     * 
                     */
                    WorkflowRunResult GetWorkflowRunResult() const;

                    /**
                     * 设置<p>Workflow operation instance result</p>
                     * @param _workflowRunResult <p>Workflow operation instance result</p>
                     * 
                     */
                    void SetWorkflowRunResult(const WorkflowRunResult& _workflowRunResult);

                    /**
                     * 判断参数 WorkflowRunResult 是否已赋值
                     * @return WorkflowRunResult 是否已赋值
                     * 
                     */
                    bool WorkflowRunResultHasBeenSet() const;

                    /**
                     * 获取<p>Time information of workflow running instance</p>
                     * @return WorkflowRunTime <p>Time information of workflow running instance</p>
                     * 
                     */
                    WorkflowRunTime GetWorkflowRunTime() const;

                    /**
                     * 设置<p>Time information of workflow running instance</p>
                     * @param _workflowRunTime <p>Time information of workflow running instance</p>
                     * 
                     */
                    void SetWorkflowRunTime(const WorkflowRunTime& _workflowRunTime);

                    /**
                     * 判断参数 WorkflowRunTime 是否已赋值
                     * @return WorkflowRunTime 是否已赋值
                     * 
                     */
                    bool WorkflowRunTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Runtime environment. 1: Development domain, 2: Production domain</p>
                     */
                    uint64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Basic information of workflow operation instance</p>
                     */
                    WorkflowRunProfile m_workflowRunProfile;
                    bool m_workflowRunProfileHasBeenSet;

                    /**
                     * <p>Workflow operation instance result</p>
                     */
                    WorkflowRunResult m_workflowRunResult;
                    bool m_workflowRunResultHasBeenSet;

                    /**
                     * <p>Time information of workflow running instance</p>
                     */
                    WorkflowRunTime m_workflowRunTime;
                    bool m_workflowRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNSUMMARY_H_
