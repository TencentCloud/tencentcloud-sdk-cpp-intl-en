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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TargetDescription.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateTarget request structure.
                */
                class CreateTargetRequest : public AbstractModel
                {
                public:
                    CreateTargetRequest();
                    ~CreateTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取Target type
                     * @return Type Target type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Target type
                     * @param _type Target type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Target description
                     * @return TargetDescription Target description
                     * 
                     */
                    TargetDescription GetTargetDescription() const;

                    /**
                     * 设置Target description
                     * @param _targetDescription Target description
                     * 
                     */
                    void SetTargetDescription(const TargetDescription& _targetDescription);

                    /**
                     * 判断参数 TargetDescription 是否已赋值
                     * @return TargetDescription 是否已赋值
                     * 
                     */
                    bool TargetDescriptionHasBeenSet() const;

                    /**
                     * 获取Event rule ID
                     * @return RuleId Event rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Event rule ID
                     * @param _ruleId Event rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return BatchTimeout 
                     * 
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置
                     * @param _batchTimeout 
                     * 
                     */
                    void SetBatchTimeout(const int64_t& _batchTimeout);

                    /**
                     * 判断参数 BatchTimeout 是否已赋值
                     * @return BatchTimeout 是否已赋值
                     * 
                     */
                    bool BatchTimeoutHasBeenSet() const;

                    /**
                     * 获取
                     * @return BatchEventCount 
                     * 
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置
                     * @param _batchEventCount 
                     * 
                     */
                    void SetBatchEventCount(const int64_t& _batchEventCount);

                    /**
                     * 判断参数 BatchEventCount 是否已赋值
                     * @return BatchEventCount 是否已赋值
                     * 
                     */
                    bool BatchEventCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableBatchDelivery 
                     * 
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置
                     * @param _enableBatchDelivery 
                     * 
                     */
                    void SetEnableBatchDelivery(const bool& _enableBatchDelivery);

                    /**
                     * 判断参数 EnableBatchDelivery 是否已赋值
                     * @return EnableBatchDelivery 是否已赋值
                     * 
                     */
                    bool EnableBatchDeliveryHasBeenSet() const;

                private:

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Target type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Target description
                     */
                    TargetDescription m_targetDescription;
                    bool m_targetDescriptionHasBeenSet;

                    /**
                     * Event rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_batchEventCount;
                    bool m_batchEventCountHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_
