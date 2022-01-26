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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACELIMIT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerCount.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Namespace limit
                */
                class NamespaceLimit : public AbstractModel
                {
                public:
                    NamespaceLimit();
                    ~NamespaceLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of functions
                     * @return FunctionsCount Total number of functions
                     */
                    int64_t GetFunctionsCount() const;

                    /**
                     * 设置Total number of functions
                     * @param FunctionsCount Total number of functions
                     */
                    void SetFunctionsCount(const int64_t& _functionsCount);

                    /**
                     * 判断参数 FunctionsCount 是否已赋值
                     * @return FunctionsCount 是否已赋值
                     */
                    bool FunctionsCountHasBeenSet() const;

                    /**
                     * 获取Trigger information
                     * @return Trigger Trigger information
                     */
                    TriggerCount GetTrigger() const;

                    /**
                     * 设置Trigger information
                     * @param Trigger Trigger information
                     */
                    void SetTrigger(const TriggerCount& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return Namespace Namespace name
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace name
                     * @param Namespace Namespace name
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Concurrency
                     * @return ConcurrentExecutions Concurrency
                     */
                    int64_t GetConcurrentExecutions() const;

                    /**
                     * 设置Concurrency
                     * @param ConcurrentExecutions Concurrency
                     */
                    void SetConcurrentExecutions(const int64_t& _concurrentExecutions);

                    /**
                     * 判断参数 ConcurrentExecutions 是否已赋值
                     * @return ConcurrentExecutions 是否已赋值
                     */
                    bool ConcurrentExecutionsHasBeenSet() const;

                    /**
                     * 获取Timeout limit
                     * @return TimeoutLimit Timeout limit
                     */
                    int64_t GetTimeoutLimit() const;

                    /**
                     * 设置Timeout limit
                     * @param TimeoutLimit Timeout limit
                     */
                    void SetTimeoutLimit(const int64_t& _timeoutLimit);

                    /**
                     * 判断参数 TimeoutLimit 是否已赋值
                     * @return TimeoutLimit 是否已赋值
                     */
                    bool TimeoutLimitHasBeenSet() const;

                    /**
                     * 获取Test event limit
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TestModelLimit Test event limit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTestModelLimit() const;

                    /**
                     * 设置Test event limit
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TestModelLimit Test event limit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTestModelLimit(const int64_t& _testModelLimit);

                    /**
                     * 判断参数 TestModelLimit 是否已赋值
                     * @return TestModelLimit 是否已赋值
                     */
                    bool TestModelLimitHasBeenSet() const;

                    /**
                     * 获取Initialization timeout limit
                     * @return InitTimeoutLimit Initialization timeout limit
                     */
                    int64_t GetInitTimeoutLimit() const;

                    /**
                     * 设置Initialization timeout limit
                     * @param InitTimeoutLimit Initialization timeout limit
                     */
                    void SetInitTimeoutLimit(const int64_t& _initTimeoutLimit);

                    /**
                     * 判断参数 InitTimeoutLimit 是否已赋值
                     * @return InitTimeoutLimit 是否已赋值
                     */
                    bool InitTimeoutLimitHasBeenSet() const;

                    /**
                     * 获取Limit of async retry attempt quantity
                     * @return RetryNumLimit Limit of async retry attempt quantity
                     */
                    int64_t GetRetryNumLimit() const;

                    /**
                     * 设置Limit of async retry attempt quantity
                     * @param RetryNumLimit Limit of async retry attempt quantity
                     */
                    void SetRetryNumLimit(const int64_t& _retryNumLimit);

                    /**
                     * 判断参数 RetryNumLimit 是否已赋值
                     * @return RetryNumLimit 是否已赋值
                     */
                    bool RetryNumLimitHasBeenSet() const;

                    /**
                     * 获取Lower limit of message retention time for async retry
                     * @return MinMsgTTL Lower limit of message retention time for async retry
                     */
                    int64_t GetMinMsgTTL() const;

                    /**
                     * 设置Lower limit of message retention time for async retry
                     * @param MinMsgTTL Lower limit of message retention time for async retry
                     */
                    void SetMinMsgTTL(const int64_t& _minMsgTTL);

                    /**
                     * 判断参数 MinMsgTTL 是否已赋值
                     * @return MinMsgTTL 是否已赋值
                     */
                    bool MinMsgTTLHasBeenSet() const;

                    /**
                     * 获取Upper limit of message retention time for async retry
                     * @return MaxMsgTTL Upper limit of message retention time for async retry
                     */
                    int64_t GetMaxMsgTTL() const;

                    /**
                     * 设置Upper limit of message retention time for async retry
                     * @param MaxMsgTTL Upper limit of message retention time for async retry
                     */
                    void SetMaxMsgTTL(const int64_t& _maxMsgTTL);

                    /**
                     * 判断参数 MaxMsgTTL 是否已赋值
                     * @return MaxMsgTTL 是否已赋值
                     */
                    bool MaxMsgTTLHasBeenSet() const;

                private:

                    /**
                     * Total number of functions
                     */
                    int64_t m_functionsCount;
                    bool m_functionsCountHasBeenSet;

                    /**
                     * Trigger information
                     */
                    TriggerCount m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Concurrency
                     */
                    int64_t m_concurrentExecutions;
                    bool m_concurrentExecutionsHasBeenSet;

                    /**
                     * Timeout limit
                     */
                    int64_t m_timeoutLimit;
                    bool m_timeoutLimitHasBeenSet;

                    /**
                     * Test event limit
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_testModelLimit;
                    bool m_testModelLimitHasBeenSet;

                    /**
                     * Initialization timeout limit
                     */
                    int64_t m_initTimeoutLimit;
                    bool m_initTimeoutLimitHasBeenSet;

                    /**
                     * Limit of async retry attempt quantity
                     */
                    int64_t m_retryNumLimit;
                    bool m_retryNumLimitHasBeenSet;

                    /**
                     * Lower limit of message retention time for async retry
                     */
                    int64_t m_minMsgTTL;
                    bool m_minMsgTTLHasBeenSet;

                    /**
                     * Upper limit of message retention time for async retry
                     */
                    int64_t m_maxMsgTTL;
                    bool m_maxMsgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACELIMIT_H_
