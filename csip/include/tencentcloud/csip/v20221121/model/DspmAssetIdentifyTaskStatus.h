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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETIDENTIFYTASKSTATUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETIDENTIFYTASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Status of the dspm data identification task
                */
                class DspmAssetIdentifyTaskStatus : public AbstractModel
                {
                public:
                    DspmAssetIdentifyTaskStatus();
                    ~DspmAssetIdentifyTaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>0: Unrecognized</li><li>1: Recognizing</li><li>2: Recognition terminated</li><li>3: Recognition successful</li><li>4: Recognition failed</li><li>5: Suspended</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>0: Unrecognized</li><li>1: Recognizing</li><li>2: Recognition terminated</li><li>3: Recognition successful</li><li>4: Recognition failed</li><li>5: Suspended</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Enumeration values: </p><ul><li>0: Unrecognized</li><li>1: Recognizing</li><li>2: Recognition terminated</li><li>3: Recognition successful</li><li>4: Recognition failed</li><li>5: Suspended</li></ul>
                     * @param _status <p>Task status.</p><p>Enumeration values: </p><ul><li>0: Unrecognized</li><li>1: Recognizing</li><li>2: Recognition terminated</li><li>3: Recognition successful</li><li>4: Recognition failed</li><li>5: Suspended</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>0: Unrecognized</li><li>1: Recognizing</li><li>2: Recognition terminated</li><li>3: Recognition successful</li><li>4: Recognition failed</li><li>5: Suspended</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETIDENTIFYTASKSTATUS_H_
