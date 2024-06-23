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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Rule Execution Configuration
                */
                class RuleExecConfig : public AbstractModel
                {
                public:
                    RuleExecConfig();
                    ~RuleExecConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compute Queue Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QueueName Compute Queue Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Compute Queue Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _queueName Compute Queue Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Execution Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecutorGroupId Execution Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置Execution Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _executorGroupId Execution Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取The running execution engine, if not specified, the default execution engine under this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EngineType The running execution engine, if not specified, the default execution engine under this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置The running execution engine, if not specified, the default execution engine under this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engineType The running execution engine, if not specified, the default execution engine under this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * Compute Queue Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Execution Resource Group
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * The running execution engine, if not specified, the default execution engine under this data source will be requested
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECCONFIG_H_
