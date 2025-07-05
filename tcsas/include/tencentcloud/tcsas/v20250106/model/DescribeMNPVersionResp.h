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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Result of the task to create a mini program version
                */
                class DescribeMNPVersionResp : public AbstractModel
                {
                public:
                    DescribeMNPVersionResp();
                    ~DescribeMNPVersionResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskStatus 1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskStatus 1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskMsg Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskMsg() const;

                    /**
                     * 设置Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskMsg Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskMsg(const std::string& _taskMsg);

                    /**
                     * 判断参数 TaskMsg 是否已赋值
                     * @return TaskMsg 是否已赋值
                     * 
                     */
                    bool TaskMsgHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 1: Pending; 20: Running; 30: Failed; 60: Succeeded 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task status message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskMsg;
                    bool m_taskMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONRESP_H_
