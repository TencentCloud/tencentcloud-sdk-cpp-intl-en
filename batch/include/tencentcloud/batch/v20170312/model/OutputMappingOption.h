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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGOPTION_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Output mapping options
                */
                class OutputMappingOption : public AbstractModel
                {
                public:
                    OutputMappingOption();
                    ~OutputMappingOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The mapped output workspace on the container side for the instance.
`BATCH_WORKSPACE` (Default): The workspace is the workspace defined for the usage of Batch Compute. Batch Compute ensures the isolation between jobs.
`GLOBAL_WORKSPACE`: The workspace is the instance OS space..
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Workspace The mapped output workspace on the container side for the instance.
`BATCH_WORKSPACE` (Default): The workspace is the workspace defined for the usage of Batch Compute. Batch Compute ensures the isolation between jobs.
`GLOBAL_WORKSPACE`: The workspace is the instance OS space..
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetWorkspace() const;

                    /**
                     * 设置The mapped output workspace on the container side for the instance.
`BATCH_WORKSPACE` (Default): The workspace is the workspace defined for the usage of Batch Compute. Batch Compute ensures the isolation between jobs.
`GLOBAL_WORKSPACE`: The workspace is the instance OS space..
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _workspace The mapped output workspace on the container side for the instance.
`BATCH_WORKSPACE` (Default): The workspace is the workspace defined for the usage of Batch Compute. Batch Compute ensures the isolation between jobs.
`GLOBAL_WORKSPACE`: The workspace is the instance OS space..
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetWorkspace(const std::string& _workspace);

                    /**
                     * 判断参数 Workspace 是否已赋值
                     * @return Workspace 是否已赋值
                     * 
                     */
                    bool WorkspaceHasBeenSet() const;

                private:

                    /**
                     * The mapped output workspace on the container side for the instance.
`BATCH_WORKSPACE` (Default): The workspace is the workspace defined for the usage of Batch Compute. Batch Compute ensures the isolation between jobs.
`GLOBAL_WORKSPACE`: The workspace is the instance OS space..
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_workspace;
                    bool m_workspaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPINGOPTION_H_
