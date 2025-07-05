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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateSnapshotTask response structure.
                */
                class CreateSnapshotTaskResponse : public AbstractModel
                {
                public:
                    CreateSnapshotTaskResponse();
                    ~CreateSnapshotTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the whiteboard snapshot task. This parameter is returned only if a task is created successfully.
                     * @return TaskID ID of the whiteboard snapshot task. This parameter is returned only if a task is created successfully.
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * ID of the whiteboard snapshot task. This parameter is returned only if a task is created successfully.
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKRESPONSE_H_
