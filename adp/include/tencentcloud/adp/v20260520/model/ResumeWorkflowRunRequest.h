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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RESUMEWORKFLOWRUNREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RESUMEWORKFLOWRUNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationFileInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ResumeWorkflowRun request structure.
                */
                class ResumeWorkflowRunRequest : public AbstractModel
                {
                public:
                    ResumeWorkflowRunRequest();
                    ~ResumeWorkflowRunRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Workflow operation instance ID</p>
                     * @return WorkflowRunId <p>Workflow operation instance ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow operation instance ID</p>
                     * @param _workflowRunId <p>Workflow operation instance ID</p>
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
                     * 获取<p>User input</p>
                     * @return Query <p>User input</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>User input</p>
                     * @param _query <p>User input</p>
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
                     * 获取<p>File information</p>
                     * @return FileList <p>File information</p>
                     * 
                     */
                    std::vector<ConversationFileInfo> GetFileList() const;

                    /**
                     * 设置<p>File information</p>
                     * @param _fileList <p>File information</p>
                     * 
                     */
                    void SetFileList(const std::vector<ConversationFileInfo>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Workflow operation instance ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * <p>User input</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>File information</p>
                     */
                    std::vector<ConversationFileInfo> m_fileList;
                    bool m_fileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RESUMEWORKFLOWRUNREQUEST_H_
