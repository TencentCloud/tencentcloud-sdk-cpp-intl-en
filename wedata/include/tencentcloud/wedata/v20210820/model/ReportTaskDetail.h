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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/EngineTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task submission detail response parameters structure.
                */
                class ReportTaskDetail : public AbstractModel
                {
                public:
                    ReportTaskDetail();
                    ~ReportTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Engine task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineTaskId Engine task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineTaskId() const;

                    /**
                     * 设置Engine task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineTaskId Engine task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineTaskId(const std::string& _engineTaskId);

                    /**
                     * 判断参数 EngineTaskId 是否已赋值
                     * @return EngineTaskId 是否已赋值
                     * 
                     */
                    bool EngineTaskIdHasBeenSet() const;

                    /**
                     * 获取Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeStatus Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeStatus() const;

                    /**
                     * 设置Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeStatus Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeStatus(const std::string& _engineExeStatus);

                    /**
                     * 判断参数 EngineExeStatus 是否已赋值
                     * @return EngineExeStatus 是否已赋值
                     * 
                     */
                    bool EngineExeStatusHasBeenSet() const;

                    /**
                     * 获取Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeStartTime Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeStartTime() const;

                    /**
                     * 设置Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeStartTime Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeStartTime(const std::string& _engineExeStartTime);

                    /**
                     * 判断参数 EngineExeStartTime 是否已赋值
                     * @return EngineExeStartTime 是否已赋值
                     * 
                     */
                    bool EngineExeStartTimeHasBeenSet() const;

                    /**
                     * 获取Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeEndTime Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeEndTime() const;

                    /**
                     * 设置Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeEndTime Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeEndTime(const std::string& _engineExeEndTime);

                    /**
                     * 判断参数 EngineExeEndTime 是否已赋值
                     * @return EngineExeEndTime 是否已赋值
                     * 
                     */
                    bool EngineExeEndTimeHasBeenSet() const;

                    /**
                     * 获取Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskTypeId Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Business information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BusinessInfo Business information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBusinessInfo() const;

                    /**
                     * 设置Business information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _businessInfo Business information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBusinessInfo(const std::string& _businessInfo);

                    /**
                     * 判断参数 BusinessInfo 是否已赋值
                     * @return BusinessInfo 是否已赋值
                     * 
                     */
                    bool BusinessInfoHasBeenSet() const;

                    /**
                     * 获取Engine task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineTaskInfo Engine task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EngineTaskInfo GetEngineTaskInfo() const;

                    /**
                     * 设置Engine task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineTaskInfo Engine task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineTaskInfo(const EngineTaskInfo& _engineTaskInfo);

                    /**
                     * 判断参数 EngineTaskInfo 是否已赋值
                     * @return EngineTaskInfo 是否已赋值
                     * 
                     */
                    bool EngineTaskInfoHasBeenSet() const;

                private:

                    /**
                     * Engine task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineTaskId;
                    bool m_engineTaskIdHasBeenSet;

                    /**
                     * Engine execution status, enumerate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeStatus;
                    bool m_engineExeStatusHasBeenSet;

                    /**
                     * Engine execution start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeStartTime;
                    bool m_engineExeStartTimeHasBeenSet;

                    /**
                     * Engine execution end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeEndTime;
                    bool m_engineExeEndTimeHasBeenSet;

                    /**
                     * Task type id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Business information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_businessInfo;
                    bool m_businessInfoHasBeenSet;

                    /**
                     * Engine task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EngineTaskInfo m_engineTaskInfo;
                    bool m_engineTaskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKDETAIL_H_
