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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCCHECKSTEPINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCCHECKSTEPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Check steps for a disaster recovery task
                */
                class SyncCheckStepInfo : public AbstractModel
                {
                public:
                    SyncCheckStepInfo();
                    ~SyncCheckStepInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Step number
                     * @return StepNo Step number
                     */
                    uint64_t GetStepNo() const;

                    /**
                     * 设置Step number
                     * @param StepNo Step number
                     */
                    void SetStepNo(const uint64_t& _stepNo);

                    /**
                     * 判断参数 StepNo 是否已赋值
                     * @return StepNo 是否已赋值
                     */
                    bool StepNoHasBeenSet() const;

                    /**
                     * 获取Step name
                     * @return StepName Step name
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置Step name
                     * @param StepName Step name
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取Code of the step execution result
                     * @return StepCode Code of the step execution result
                     */
                    int64_t GetStepCode() const;

                    /**
                     * 设置Code of the step execution result
                     * @param StepCode Code of the step execution result
                     */
                    void SetStepCode(const int64_t& _stepCode);

                    /**
                     * 判断参数 StepCode 是否已赋值
                     * @return StepCode 是否已赋值
                     */
                    bool StepCodeHasBeenSet() const;

                    /**
                     * 获取Message about the step execution result
                     * @return StepMessage Message about the step execution result
                     */
                    std::string GetStepMessage() const;

                    /**
                     * 设置Message about the step execution result
                     * @param StepMessage Message about the step execution result
                     */
                    void SetStepMessage(const std::string& _stepMessage);

                    /**
                     * 判断参数 StepMessage 是否已赋值
                     * @return StepMessage 是否已赋值
                     */
                    bool StepMessageHasBeenSet() const;

                private:

                    /**
                     * Step number
                     */
                    uint64_t m_stepNo;
                    bool m_stepNoHasBeenSet;

                    /**
                     * Step name
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * Code of the step execution result
                     */
                    int64_t m_stepCode;
                    bool m_stepCodeHasBeenSet;

                    /**
                     * Message about the step execution result
                     */
                    std::string m_stepMessage;
                    bool m_stepMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCCHECKSTEPINFO_H_
