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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPERTSERVICEORDERINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPERTSERVICEORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Expert service order information
                */
                class ExpertServiceOrderInfo : public AbstractModel
                {
                public:
                    ExpertServiceOrderInfo();
                    ~ExpertServiceOrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order ID
                     * @return OrderId Order ID
                     * 
                     */
                    uint64_t GetOrderId() const;

                    /**
                     * 设置Order ID
                     * @param _orderId Order ID
                     * 
                     */
                    void SetOrderId(const uint64_t& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Order type. 1: emergency; 2: Ultimate Edition important period guarantee; 3: security manager.
                     * @return InquireType Order type. 1: emergency; 2: Ultimate Edition important period guarantee; 3: security manager.
                     * 
                     */
                    uint64_t GetInquireType() const;

                    /**
                     * 设置Order type. 1: emergency; 2: Ultimate Edition important period guarantee; 3: security manager.
                     * @param _inquireType Order type. 1: emergency; 2: Ultimate Edition important period guarantee; 3: security manager.
                     * 
                     */
                    void SetInquireType(const uint64_t& _inquireType);

                    /**
                     * 判断参数 InquireType 是否已赋值
                     * @return InquireType 是否已赋值
                     * 
                     */
                    bool InquireTypeHasBeenSet() const;

                    /**
                     * 获取Number of services
                     * @return InquireNum Number of services
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 设置Number of services
                     * @param _inquireNum Number of services
                     * 
                     */
                    void SetInquireNum(const uint64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取Service start time
                     * @return BeginTime Service start time
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Service start time
                     * @param _beginTime Service start time
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Service end time
                     * @return EndTime Service end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Service end time
                     * @param _endTime Service end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Service duration, in months
                     * @return ServiceTime Service duration, in months
                     * 
                     */
                    uint64_t GetServiceTime() const;

                    /**
                     * 设置Service duration, in months
                     * @param _serviceTime Service duration, in months
                     * 
                     */
                    void SetServiceTime(const uint64_t& _serviceTime);

                    /**
                     * 判断参数 ServiceTime 是否已赋值
                     * @return ServiceTime 是否已赋值
                     * 
                     */
                    bool ServiceTimeHasBeenSet() const;

                    /**
                     * 获取Order status. 0: not started; 1: in service; 2: expired; 3: completed; 4: refunded and terminated.
                     * @return Status Order status. 0: not started; 1: in service; 2: expired; 3: completed; 4: refunded and terminated.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Order status. 0: not started; 1: in service; 2: expired; 3: completed; 4: refunded and terminated.
                     * @param _status Order status. 0: not started; 1: in service; 2: expired; 3: completed; 4: refunded and terminated.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Order ID
                     */
                    uint64_t m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Order type. 1: emergency; 2: Ultimate Edition important period guarantee; 3: security manager.
                     */
                    uint64_t m_inquireType;
                    bool m_inquireTypeHasBeenSet;

                    /**
                     * Number of services
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * Service start time
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Service end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Service duration, in months
                     */
                    uint64_t m_serviceTime;
                    bool m_serviceTimeHasBeenSet;

                    /**
                     * Order status. 0: not started; 1: in service; 2: expired; 3: completed; 4: refunded and terminated.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPERTSERVICEORDERINFO_H_
