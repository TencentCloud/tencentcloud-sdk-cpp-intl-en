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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATETARGETREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATETARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateTarget request structure.
                */
                class UpdateTargetRequest : public AbstractModel
                {
                public:
                    UpdateTargetRequest();
                    ~UpdateTargetRequest() = default;
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
                     * 获取Delivery target ID
                     * @return TargetId Delivery target ID
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Delivery target ID
                     * @param _targetId Delivery target ID
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取Enables batch delivery
                     * @return EnableBatchDelivery Enables batch delivery
                     * 
                     */
                    bool GetEnableBatchDelivery() const;

                    /**
                     * 设置Enables batch delivery
                     * @param _enableBatchDelivery Enables batch delivery
                     * 
                     */
                    void SetEnableBatchDelivery(const bool& _enableBatchDelivery);

                    /**
                     * 判断参数 EnableBatchDelivery 是否已赋值
                     * @return EnableBatchDelivery 是否已赋值
                     * 
                     */
                    bool EnableBatchDeliveryHasBeenSet() const;

                    /**
                     * 获取Maximum waiting time for batch delivery
                     * @return BatchTimeout Maximum waiting time for batch delivery
                     * 
                     */
                    int64_t GetBatchTimeout() const;

                    /**
                     * 设置Maximum waiting time for batch delivery
                     * @param _batchTimeout Maximum waiting time for batch delivery
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
                     * 获取Maximum number of events in batch delivery
                     * @return BatchEventCount Maximum number of events in batch delivery
                     * 
                     */
                    int64_t GetBatchEventCount() const;

                    /**
                     * 设置Maximum number of events in batch delivery
                     * @param _batchEventCount Maximum number of events in batch delivery
                     * 
                     */
                    void SetBatchEventCount(const int64_t& _batchEventCount);

                    /**
                     * 判断参数 BatchEventCount 是否已赋值
                     * @return BatchEventCount 是否已赋值
                     * 
                     */
                    bool BatchEventCountHasBeenSet() const;

                private:

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Event rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Delivery target ID
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * Enables batch delivery
                     */
                    bool m_enableBatchDelivery;
                    bool m_enableBatchDeliveryHasBeenSet;

                    /**
                     * Maximum waiting time for batch delivery
                     */
                    int64_t m_batchTimeout;
                    bool m_batchTimeoutHasBeenSet;

                    /**
                     * Maximum number of events in batch delivery
                     */
                    int64_t m_batchEventCount;
                    bool m_batchEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATETARGETREQUEST_H_
