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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowSchedulerConfiguration.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the workflow details.
                */
                class WorkflowDetail : public AbstractModel
                {
                public:
                    WorkflowDetail();
                    ~WorkflowDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow name.

                     * @return WorkflowName Workflow name.

                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.

                     * @param _workflowName Workflow name.

                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Owner ID.
                     * @return OwnerUin Owner ID.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID.
                     * @param _ownerUin Owner ID.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Creator ID.
                     * @return CreateUserUin Creator ID.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.
                     * @param _createUserUin Creator ID.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Workflow type. Valid values: cycle or manual.

                     * @return WorkflowType Workflow type. Valid values: cycle or manual.

                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Workflow type. Valid values: cycle or manual.

                     * @param _workflowType Workflow type. Valid values: cycle or manual.

                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取Workflow parameter array.
                     * @return WorkflowParams Workflow parameter array.
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置Workflow parameter array.
                     * @param _workflowParams Workflow parameter array.
                     * 
                     */
                    void SetWorkflowParams(const std::vector<ParamInfo>& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取Unified scheduling parameter.
.
                     * @return WorkflowSchedulerConfiguration Unified scheduling parameter.
.
                     * 
                     */
                    WorkflowSchedulerConfiguration GetWorkflowSchedulerConfiguration() const;

                    /**
                     * 设置Unified scheduling parameter.
.
                     * @param _workflowSchedulerConfiguration Unified scheduling parameter.
.
                     * 
                     */
                    void SetWorkflowSchedulerConfiguration(const WorkflowSchedulerConfiguration& _workflowSchedulerConfiguration);

                    /**
                     * 判断参数 WorkflowSchedulerConfiguration 是否已赋值
                     * @return WorkflowSchedulerConfiguration 是否已赋值
                     * 
                     */
                    bool WorkflowSchedulerConfigurationHasBeenSet() const;

                    /**
                     * 获取Workflow description.

                     * @return WorkflowDesc Workflow description.

                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow description.

                     * @param _workflowDesc Workflow description.

                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取Workflow path.
                     * @return Path Workflow path.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Workflow path.
                     * @param _path Workflow path.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取BundleId item.
                     * @return BundleId BundleId item.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置BundleId item.
                     * @param _bundleId BundleId item.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取BundleInfo item. specifies the bundle information.

                     * @return BundleInfo BundleInfo item. specifies the bundle information.

                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置BundleInfo item. specifies the bundle information.

                     * @param _bundleInfo BundleInfo item. specifies the bundle information.

                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * Workflow name.

                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Owner ID.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creator ID.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Workflow type. Valid values: cycle or manual.

                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * Workflow parameter array.
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Unified scheduling parameter.
.
                     */
                    WorkflowSchedulerConfiguration m_workflowSchedulerConfiguration;
                    bool m_workflowSchedulerConfigurationHasBeenSet;

                    /**
                     * Workflow description.

                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow path.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * BundleId item.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * BundleInfo item. specifies the bundle information.

                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWDETAIL_H_
