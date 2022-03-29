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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_TASKRESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_TASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * The result returned during task creation
                */
                class TaskResult : public AbstractModel
                {
                public:
                    TaskResult();
                    ~TaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the `DataId` passed in within the `TaskInput` structure when a video moderation task is created. It is used to identify the specific moderation task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataId This field is used to return the `DataId` passed in within the `TaskInput` structure when a video moderation task is created. It is used to identify the specific moderation task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置This field is used to return the `DataId` passed in within the `TaskInput` structure when a video moderation task is created. It is used to identify the specific moderation task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param DataId This field is used to return the `DataId` passed in within the `TaskInput` structure when a video moderation task is created. It is used to identify the specific moderation task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取This field is used to return the ID of a video moderation task for identification, query, and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskId This field is used to return the ID of a video moderation task for identification, query, and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置This field is used to return the ID of a video moderation task for identification, query, and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TaskId This field is used to return the ID of a video moderation task for identification, query, and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取This field is used to return the task creation status. If `OK` is returned, the task has been created successfully; if another value is returned, refer to the common error codes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Code This field is used to return the task creation status. If `OK` is returned, the task has been created successfully; if another value is returned, refer to the common error codes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCode() const;

                    /**
                     * 设置This field is used to return the task creation status. If `OK` is returned, the task has been created successfully; if another value is returned, refer to the common error codes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Code This field is used to return the task creation status. If `OK` is returned, the task has been created successfully; if another value is returned, refer to the common error codes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取**This field will take effect only when the returned value of `Code` is an error code**. It is used to return the error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message **This field will take effect only when the returned value of `Code` is an error code**. It is used to return the error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置**This field will take effect only when the returned value of `Code` is an error code**. It is used to return the error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Message **This field will take effect only when the returned value of `Code` is an error code**. It is used to return the error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the `DataId` passed in within the `TaskInput` structure when a video moderation task is created. It is used to identify the specific moderation task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * This field is used to return the ID of a video moderation task for identification, query, and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * This field is used to return the task creation status. If `OK` is returned, the task has been created successfully; if another value is returned, refer to the common error codes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * **This field will take effect only when the returned value of `Code` is an error code**. It is used to return the error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_TASKRESULT_H_
