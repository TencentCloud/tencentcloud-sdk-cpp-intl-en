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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANTASKOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANTASKOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Supplemental Plan Tasks
                */
                class MakePlanTaskOpsDto : public AbstractModel
                {
                public:
                    MakePlanTaskOpsDto();
                    ~MakePlanTaskOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic task informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskBaseInfo Basic task informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskOpsDto GetTaskBaseInfo() const;

                    /**
                     * 设置Basic task informationNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskBaseInfo Basic task informationNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskBaseInfo(const TaskOpsDto& _taskBaseInfo);

                    /**
                     * 判断参数 TaskBaseInfo 是否已赋值
                     * @return TaskBaseInfo 是否已赋值
                     * 
                     */
                    bool TaskBaseInfoHasBeenSet() const;

                    /**
                     * 获取Supplemental instances already generated for this task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceCount Supplemental instances already generated for this task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Supplemental instances already generated for this task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceCount Supplemental instances already generated for this task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取Supplementary Task Instance Completion Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CompletePercent Supplementary Task Instance Completion Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetCompletePercent() const;

                    /**
                     * 设置Supplementary Task Instance Completion Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _completePercent Supplementary Task Instance Completion Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCompletePercent(const int64_t& _completePercent);

                    /**
                     * 判断参数 CompletePercent 是否已赋值
                     * @return CompletePercent 是否已赋值
                     * 
                     */
                    bool CompletePercentHasBeenSet() const;

                    /**
                     * 获取Supplementary Task Instance Success Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SuccessPercent Supplementary Task Instance Success Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSuccessPercent() const;

                    /**
                     * 设置Supplementary Task Instance Success Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _successPercent Supplementary Task Instance Success Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSuccessPercent(const int64_t& _successPercent);

                    /**
                     * 判断参数 SuccessPercent 是否已赋值
                     * @return SuccessPercent 是否已赋值
                     * 
                     */
                    bool SuccessPercentHasBeenSet() const;

                    /**
                     * 获取Estimated Total Number of Instances Generated, as generation is asynchronous, -1 indicates instances are not fully generated yet
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceTotalCount Estimated Total Number of Instances Generated, as generation is asynchronous, -1 indicates instances are not fully generated yet
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInstanceTotalCount() const;

                    /**
                     * 设置Estimated Total Number of Instances Generated, as generation is asynchronous, -1 indicates instances are not fully generated yet
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceTotalCount Estimated Total Number of Instances Generated, as generation is asynchronous, -1 indicates instances are not fully generated yet
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceTotalCount(const int64_t& _instanceTotalCount);

                    /**
                     * 判断参数 InstanceTotalCount 是否已赋值
                     * @return InstanceTotalCount 是否已赋值
                     * 
                     */
                    bool InstanceTotalCountHasBeenSet() const;

                private:

                    /**
                     * Basic task informationNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskOpsDto m_taskBaseInfo;
                    bool m_taskBaseInfoHasBeenSet;

                    /**
                     * Supplemental instances already generated for this task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Supplementary Task Instance Completion Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_completePercent;
                    bool m_completePercentHasBeenSet;

                    /**
                     * Supplementary Task Instance Success Percentage
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_successPercent;
                    bool m_successPercentHasBeenSet;

                    /**
                     * Estimated Total Number of Instances Generated, as generation is asynchronous, -1 indicates instances are not fully generated yet
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_instanceTotalCount;
                    bool m_instanceTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MAKEPLANTASKOPSDTO_H_
