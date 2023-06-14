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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DetailCheckItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Check step
                */
                class CheckStep : public AbstractModel
                {
                public:
                    CheckStep();
                    ~CheckStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNo Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNo Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     * 
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Step ID such as `ConnectDBCheck`, `VersionCheck`, and `SrcPrivilegeCheck`. The specific check items are subject to source and target instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepId Step ID such as `ConnectDBCheck`, `VersionCheck`, and `SrcPrivilegeCheck`. The specific check items are subject to source and target instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepId() const;

                    /**
                     * 设置Step ID such as `ConnectDBCheck`, `VersionCheck`, and `SrcPrivilegeCheck`. The specific check items are subject to source and target instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepId Step ID such as `ConnectDBCheck`, `VersionCheck`, and `SrcPrivilegeCheck`. The specific check items are subject to source and target instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepId(const std::string& _stepId);

                    /**
                     * 判断参数 StepId 是否已赋值
                     * @return StepId 是否已赋值
                     * 
                     */
                    bool StepIdHasBeenSet() const;

                    /**
                     * 获取Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepName Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepName Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Result of this check step. Valid values: `pass`, `failed`, `notStarted`, `blocked`, `warning`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepStatus Result of this check step. Valid values: `pass`, `failed`, `notStarted`, `blocked`, `warning`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepStatus() const;

                    /**
                     * 设置Result of this check step. Valid values: `pass`, `failed`, `notStarted`, `blocked`, `warning`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepStatus Result of this check step. Valid values: `pass`, `failed`, `notStarted`, `blocked`, `warning`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepStatus(const std::string& _stepStatus);

                    /**
                     * 判断参数 StepStatus 是否已赋值
                     * @return StepStatus 是否已赋值
                     * 
                     */
                    bool StepStatusHasBeenSet() const;

                    /**
                     * 获取Error message in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepMessage Error message in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStepMessage() const;

                    /**
                     * 设置Error message in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepMessage Error message in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepMessage(const std::string& _stepMessage);

                    /**
                     * 判断参数 StepMessage 是否已赋值
                     * @return StepMessage 是否已赋值
                     * 
                     */
                    bool StepMessageHasBeenSet() const;

                    /**
                     * 获取Specific check item in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetailCheckItems Specific check item in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DetailCheckItem> GetDetailCheckItems() const;

                    /**
                     * 设置Specific check item in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detailCheckItems Specific check item in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetailCheckItems(const std::vector<DetailCheckItem>& _detailCheckItems);

                    /**
                     * 判断参数 DetailCheckItems 是否已赋值
                     * @return DetailCheckItems 是否已赋值
                     * 
                     */
                    bool DetailCheckItemsHasBeenSet() const;

                    /**
                     * 获取Whether this step was skipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasSkipped Whether this step was skipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHasSkipped() const;

                    /**
                     * 设置Whether this step was skipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasSkipped Whether this step was skipped
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasSkipped(const bool& _hasSkipped);

                    /**
                     * 判断参数 HasSkipped 是否已赋值
                     * @return HasSkipped 是否已赋值
                     * 
                     */
                    bool HasSkippedHasBeenSet() const;

                private:

                    /**
                     * Step number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step ID such as `ConnectDBCheck`, `VersionCheck`, and `SrcPrivilegeCheck`. The specific check items are subject to source and target instances.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepId;
                    bool m_stepIdHasBeenSet;

                    /**
                     * Step name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Result of this check step. Valid values: `pass`, `failed`, `notStarted`, `blocked`, `warning`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepStatus;
                    bool m_stepStatusHasBeenSet;

                    /**
                     * Error message in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stepMessage;
                    bool m_stepMessageHasBeenSet;

                    /**
                     * Specific check item in this check step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DetailCheckItem> m_detailCheckItems;
                    bool m_detailCheckItemsHasBeenSet;

                    /**
                     * Whether this step was skipped
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasSkipped;
                    bool m_hasSkippedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CHECKSTEP_H_
