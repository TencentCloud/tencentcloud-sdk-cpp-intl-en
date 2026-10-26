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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDRETRIEVETASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDRETRIEVETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DeleteRecordRetrieveTask request structure.
                */
                class DeleteRecordRetrieveTaskRequest : public AbstractModel
                {
                public:
                    DeleteRecordRetrieveTaskRequest();
                    ~DeleteRecordRetrieveTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Retrieval task ID
                     * @return TaskId Retrieval task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Retrieval task ID
                     * @param _taskId Retrieval task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Retrieval task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DELETERECORDRETRIEVETASKREQUEST_H_
