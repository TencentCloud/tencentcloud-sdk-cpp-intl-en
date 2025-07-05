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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCENODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceNodeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Current Node Information of Real-time Task Instance
                */
                class RealTimeTaskInstanceNodeInfo : public AbstractModel
                {
                public:
                    RealTimeTaskInstanceNodeInfo();
                    ~RealTimeTaskInstanceNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Real-time Task Instance Node Information List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceNodeInfoList Real-time Task Instance Node Information List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceNodeInfo> GetInstanceNodeInfoList() const;

                    /**
                     * 设置Real-time Task Instance Node Information List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceNodeInfoList Real-time Task Instance Node Information List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceNodeInfoList(const std::vector<InstanceNodeInfo>& _instanceNodeInfoList);

                    /**
                     * 判断参数 InstanceNodeInfoList 是否已赋值
                     * @return InstanceNodeInfoList 是否已赋值
                     * 
                     */
                    bool InstanceNodeInfoListHasBeenSet() const;

                private:

                    /**
                     * Task Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Real-time Task Instance Node Information List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceNodeInfo> m_instanceNodeInfoList;
                    bool m_instanceNodeInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCENODEINFO_H_
