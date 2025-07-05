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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADCONTENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ScriptRequestInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UploadContent request structure.
                */
                class UploadContentRequest : public AbstractModel
                {
                public:
                    UploadContentRequest();
                    ~UploadContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Script Upload Information
                     * @return ScriptRequestInfo Script Upload Information
                     * 
                     */
                    ScriptRequestInfo GetScriptRequestInfo() const;

                    /**
                     * 设置Script Upload Information
                     * @param _scriptRequestInfo Script Upload Information
                     * 
                     */
                    void SetScriptRequestInfo(const ScriptRequestInfo& _scriptRequestInfo);

                    /**
                     * 判断参数 ScriptRequestInfo 是否已赋值
                     * @return ScriptRequestInfo 是否已赋值
                     * 
                     */
                    bool ScriptRequestInfoHasBeenSet() const;

                    /**
                     * 获取Request Source, WEB frontend; CLIENT client
                     * @return RequestFromSource Request Source, WEB frontend; CLIENT client
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置Request Source, WEB frontend; CLIENT client
                     * @param _requestFromSource Request Source, WEB frontend; CLIENT client
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Script Upload Information
                     */
                    ScriptRequestInfo m_scriptRequestInfo;
                    bool m_scriptRequestInfoHasBeenSet;

                    /**
                     * Request Source, WEB frontend; CLIENT client
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADCONTENTREQUEST_H_
