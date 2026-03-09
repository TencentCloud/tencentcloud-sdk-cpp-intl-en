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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKLINKBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKLINKBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task link summary information.
                */
                class TriggerTaskLinkBrief : public AbstractModel
                {
                public:
                    TriggerTaskLinkBrief();
                    ~TriggerTaskLinkBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LinkId Connection ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLinkId() const;

                    /**
                     * 设置Connection ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _linkId Connection ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLinkId(const std::string& _linkId);

                    /**
                     * 判断参数 LinkId 是否已赋值
                     * @return LinkId 是否已赋值
                     * 
                     */
                    bool LinkIdHasBeenSet() const;

                    /**
                     * 获取Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowId Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowId Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow version ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowVersionId Workflow version ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowVersionId() const;

                    /**
                     * 设置Workflow version ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowVersionId Workflow version ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowVersionId(const std::string& _workflowVersionId);

                    /**
                     * 判断参数 WorkflowVersionId 是否已赋值
                     * @return WorkflowVersionId 是否已赋值
                     * 
                     */
                    bool WorkflowVersionIdHasBeenSet() const;

                    /**
                     * 获取Upstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamTaskId Upstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpstreamTaskId() const;

                    /**
                     * 设置Upstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamTaskId Upstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamTaskId(const std::string& _upstreamTaskId);

                    /**
                     * 判断参数 UpstreamTaskId 是否已赋值
                     * @return UpstreamTaskId 是否已赋值
                     * 
                     */
                    bool UpstreamTaskIdHasBeenSet() const;

                    /**
                     * 获取Downstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DownstreamTaskId Downstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDownstreamTaskId() const;

                    /**
                     * 设置Downstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _downstreamTaskId Downstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDownstreamTaskId(const std::string& _downstreamTaskId);

                    /**
                     * 判断参数 DownstreamTaskId 是否已赋值
                     * @return DownstreamTaskId 是否已赋值
                     * 
                     */
                    bool DownstreamTaskIdHasBeenSet() const;

                private:

                    /**
                     * Connection ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_linkId;
                    bool m_linkIdHasBeenSet;

                    /**
                     * Workflow ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow version ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowVersionId;
                    bool m_workflowVersionIdHasBeenSet;

                    /**
                     * Upstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_upstreamTaskId;
                    bool m_upstreamTaskIdHasBeenSet;

                    /**
                     * Downstream task ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_downstreamTaskId;
                    bool m_downstreamTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKLINKBRIEF_H_
