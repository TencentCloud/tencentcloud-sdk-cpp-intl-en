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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_AGENTSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_AGENTSTATUS_H_

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
                * Agent Collector Status Statistics
                */
                class AgentStatus : public AbstractModel
                {
                public:
                    AgentStatus();
                    ~AgentStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Running Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Running Running Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRunning() const;

                    /**
                     * 设置Running Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _running Running Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRunning(const int64_t& _running);

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                    /**
                     * 获取Number of Anomalies
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Abnormal Number of Anomalies
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetAbnormal() const;

                    /**
                     * 设置Number of Anomalies
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _abnormal Number of Anomalies
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAbnormal(const int64_t& _abnormal);

                    /**
                     * 判断参数 Abnormal 是否已赋值
                     * @return Abnormal 是否已赋值
                     * 
                     */
                    bool AbnormalHasBeenSet() const;

                    /**
                     * 获取Operating Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InOperation Operating Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInOperation() const;

                    /**
                     * 设置Operating Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inOperation Operating Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInOperation(const int64_t& _inOperation);

                    /**
                     * 判断参数 InOperation 是否已赋值
                     * @return InOperation 是否已赋值
                     * 
                     */
                    bool InOperationHasBeenSet() const;

                private:

                    /**
                     * Running Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_running;
                    bool m_runningHasBeenSet;

                    /**
                     * Number of Anomalies
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_abnormal;
                    bool m_abnormalHasBeenSet;

                    /**
                     * Operating Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_inOperation;
                    bool m_inOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_AGENTSTATUS_H_
