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
                     * 获取<p>Mini program appid</p>
                     * @return MNPId <p>Mini program appid</p>
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置<p>Mini program appid</p>
                     * @param _mNPId <p>Mini program appid</p>
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
                     * 获取<p>Task ID</p>
                     * @return TaskId <p>Task ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID</p>
                     * @param _taskId <p>Task ID</p>
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
                     * 获取<p>Valid values: 1: Pending; 20: Running; 30: Failed; 60: Succeeded</p>
                     * @return TaskStatus <p>Valid values: 1: Pending; 20: Running; 30: Failed; 60: Succeeded</p>
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置<p>Valid values: 1: Pending; 20: Running; 30: Failed; 60: Succeeded</p>
                     * @param _taskStatus <p>Valid values: 1: Pending; 20: Running; 30: Failed; 60: Succeeded</p>
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
                     * 获取<p>Task status information</p>
                     * @return TaskMsg <p>Task status information</p>
                     * 
                     */
                    std::string GetTaskMsg() const;

                    /**
                     * 设置<p>Task status information</p>
                     * @param _taskMsg <p>Task status information</p>
                     * 
                     */
                    void SetTaskMsg(const std::string& _taskMsg);

                    /**
                     * 判断参数 TaskMsg 是否已赋值
                     * @return TaskMsg 是否已赋值
                     * 
                     */
                    bool TaskMsgHasBeenSet() const;

                    /**
                     * 获取<p>Mini program version ID (returned upon successful compilation)</p>
                     * @return MNPVersionId <p>Mini program version ID (returned upon successful compilation)</p>
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置<p>Mini program version ID (returned upon successful compilation)</p>
                     * @param _mNPVersionId <p>Mini program version ID (returned upon successful compilation)</p>
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>Mini program appid</p>
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * <p>Task ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Valid values: 1: Pending; 20: Running; 30: Failed; 60: Succeeded</p>
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Task status information</p>
                     */
                    std::string m_taskMsg;
                    bool m_taskMsgHasBeenSet;

                    /**
                     * <p>Mini program version ID (returned upon successful compilation)</p>
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPVERSIONRESP_H_
