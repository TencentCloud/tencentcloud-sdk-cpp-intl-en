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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERBILLINGQUOTAREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERBILLINGQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryCustomerBillingQuota request structure.
                */
                class QueryCustomerBillingQuotaRequest : public AbstractModel
                {
                public:
                    QueryCustomerBillingQuotaRequest();
                    ~QueryCustomerBillingQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event id, used to tag the request event, usually a random number.
                     * @return EventId Event id, used to tag the request event, usually a random number.
                     * @deprecated
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event id, used to tag the request event, usually a random number.
                     * @param _eventId Event id, used to tag the request event, usually a random number.
                     * @deprecated
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * @deprecated
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Source of the request.
                     * @return ComponentName Source of the request.
                     * @deprecated
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Source of the request.
                     * @param _componentName Source of the request.
                     * @deprecated
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * @deprecated
                     */
                    bool ComponentNameHasBeenSet() const;

                private:

                    /**
                     * Event id, used to tag the request event, usually a random number.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Source of the request.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERBILLINGQUOTAREQUEST_H_
