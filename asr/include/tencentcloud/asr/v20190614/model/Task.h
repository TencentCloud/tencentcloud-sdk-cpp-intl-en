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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_TASK_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * Returned data of the [recording recognition] (https://intl.cloud.tencent.com/document/product/1093/37823?from_cn_redirect=1#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0) or [asynchronous real-time audio recognition] (https://intl.cloud.tencent.com/document/product/1093/52061?from_cn_redirect=1#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0) request.
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID. This ID can be used to obtain the recognition status and results through polling. The data type of TaskId is ** uint64 **.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **
                     * @return TaskId Task ID. This ID can be used to obtain the recognition status and results through polling. The data type of TaskId is ** uint64 **.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID. This ID can be used to obtain the recognition status and results through polling. The data type of TaskId is ** uint64 **.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **
                     * @param _taskId Task ID. This ID can be used to obtain the recognition status and results through polling. The data type of TaskId is ** uint64 **.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Task ID. This ID can be used to obtain the recognition status and results through polling. The data type of TaskId is ** uint64 **.
** Note: The task ID is valid for 24 hours, and duplicate task IDs of different dates may exist. Do not use task ID as the unique ID in your business system. **
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_TASK_H_
