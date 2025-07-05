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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKRESPONSE_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/TaskResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateVideoModerationTask response structure.
                */
                class CreateVideoModerationTaskResponse : public AbstractModel
                {
                public:
                    CreateVideoModerationTaskResponse();
                    ~CreateVideoModerationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This field is used to return the task creation result. For the specific output content, see the detailed description of the `TaskResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Results This field is used to return the task creation result. For the specific output content, see the detailed description of the `TaskResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the task creation result. For the specific output content, see the detailed description of the `TaskResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKRESPONSE_H_
