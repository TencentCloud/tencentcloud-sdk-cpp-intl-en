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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CHECKRULEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CHECKRULEREQUEST_H_

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
                * CheckRule request structure.
                */
                class CheckRuleRequest : public AbstractModel
                {
                public:
                    CheckRuleRequest();
                    ~CheckRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Event 
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置
                     * @param _event 
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取
                     * @return EventPattern 
                     * 
                     */
                    std::string GetEventPattern() const;

                    /**
                     * 设置
                     * @param _eventPattern 
                     * 
                     */
                    void SetEventPattern(const std::string& _eventPattern);

                    /**
                     * 判断参数 EventPattern 是否已赋值
                     * @return EventPattern 是否已赋值
                     * 
                     */
                    bool EventPatternHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_eventPattern;
                    bool m_eventPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CHECKRULEREQUEST_H_
