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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_UNHANDLEEVENT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_UNHANDLEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/UnHandleEventDetail.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Unhandled event details
                */
                class UnHandleEvent : public AbstractModel
                {
                public:
                    UnHandleEvent();
                    ~UnHandleEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unhandled event type
                     * @return EventTableListStruct Unhandled event type
                     * 
                     */
                    std::vector<UnHandleEventDetail> GetEventTableListStruct() const;

                    /**
                     * 设置Unhandled event type
                     * @param _eventTableListStruct Unhandled event type
                     * 
                     */
                    void SetEventTableListStruct(const std::vector<UnHandleEventDetail>& _eventTableListStruct);

                    /**
                     * 判断参数 EventTableListStruct 是否已赋值
                     * @return EventTableListStruct 是否已赋值
                     * 
                     */
                    bool EventTableListStructHasBeenSet() const;

                    /**
                     * 获取1: yes; 0: no
                     * @return BaseLineUser 1: yes; 0: no
                     * 
                     */
                    uint64_t GetBaseLineUser() const;

                    /**
                     * 设置1: yes; 0: no
                     * @param _baseLineUser 1: yes; 0: no
                     * 
                     */
                    void SetBaseLineUser(const uint64_t& _baseLineUser);

                    /**
                     * 判断参数 BaseLineUser 是否已赋值
                     * @return BaseLineUser 是否已赋值
                     * 
                     */
                    bool BaseLineUserHasBeenSet() const;

                    /**
                     * 获取1: on; 0: off
                     * @return BaseLineInSwitch 1: on; 0: off
                     * 
                     */
                    uint64_t GetBaseLineInSwitch() const;

                    /**
                     * 设置1: on; 0: off
                     * @param _baseLineInSwitch 1: on; 0: off
                     * 
                     */
                    void SetBaseLineInSwitch(const uint64_t& _baseLineInSwitch);

                    /**
                     * 判断参数 BaseLineInSwitch 是否已赋值
                     * @return BaseLineInSwitch 是否已赋值
                     * 
                     */
                    bool BaseLineInSwitchHasBeenSet() const;

                    /**
                     * 获取1: on; 0: off
                     * @return BaseLineOutSwitch 1: on; 0: off
                     * 
                     */
                    uint64_t GetBaseLineOutSwitch() const;

                    /**
                     * 设置1: on; 0: off
                     * @param _baseLineOutSwitch 1: on; 0: off
                     * 
                     */
                    void SetBaseLineOutSwitch(const uint64_t& _baseLineOutSwitch);

                    /**
                     * 判断参数 BaseLineOutSwitch 是否已赋值
                     * @return BaseLineOutSwitch 是否已赋值
                     * 
                     */
                    bool BaseLineOutSwitchHasBeenSet() const;

                    /**
                     * 获取Number of inter-VPC firewall instances
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcFwCount Number of inter-VPC firewall instances
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetVpcFwCount() const;

                    /**
                     * 设置Number of inter-VPC firewall instances
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _vpcFwCount Number of inter-VPC firewall instances
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetVpcFwCount(const uint64_t& _vpcFwCount);

                    /**
                     * 判断参数 VpcFwCount 是否已赋值
                     * @return VpcFwCount 是否已赋值
                     * 
                     */
                    bool VpcFwCountHasBeenSet() const;

                private:

                    /**
                     * Unhandled event type
                     */
                    std::vector<UnHandleEventDetail> m_eventTableListStruct;
                    bool m_eventTableListStructHasBeenSet;

                    /**
                     * 1: yes; 0: no
                     */
                    uint64_t m_baseLineUser;
                    bool m_baseLineUserHasBeenSet;

                    /**
                     * 1: on; 0: off
                     */
                    uint64_t m_baseLineInSwitch;
                    bool m_baseLineInSwitchHasBeenSet;

                    /**
                     * 1: on; 0: off
                     */
                    uint64_t m_baseLineOutSwitch;
                    bool m_baseLineOutSwitchHasBeenSet;

                    /**
                     * Number of inter-VPC firewall instances
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    uint64_t m_vpcFwCount;
                    bool m_vpcFwCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_UNHANDLEEVENT_H_
