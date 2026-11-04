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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNRESULT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workflow running instance status information
                */
                class WorkflowRunResult : public AbstractModel
                {
                public:
                    WorkflowRunResult();
                    ~WorkflowRunResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Running state. 1: Queuing; 2: running; 3: run successfully; 4: fail to run; 5: canceled
                     * @return Status Running state. 1: Queuing; 2: running; 3: run successfully; 4: fail to run; 5: canceled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Running state. 1: Queuing; 2: running; 3: run successfully; 4: fail to run; 5: canceled
                     * @param _status Running state. 1: Queuing; 2: running; 3: run successfully; 4: fail to run; 5: canceled
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return FailMessage Error message
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置Error message
                     * @param _failMessage Error message
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取Total number of tokens consumed
                     * @return TotalTokens Total number of tokens consumed
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置Total number of tokens consumed
                     * @param _totalTokens Total number of tokens consumed
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * Running state. 1: Queuing; 2: running; 3: run successfully; 4: fail to run; 5: canceled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * Total number of tokens consumed
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNRESULT_H_
