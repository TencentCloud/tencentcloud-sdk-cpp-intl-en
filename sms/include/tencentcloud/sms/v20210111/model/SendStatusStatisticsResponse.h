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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/SendStatusStatistics.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * SendStatusStatistics response structure.
                */
                class SendStatusStatisticsResponse : public AbstractModel
                {
                public:
                    SendStatusStatisticsResponse();
                    ~SendStatusStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Delivery statistics response body.
                     * @return SendStatusStatistics Delivery statistics response body.
                     */
                    SendStatusStatistics GetSendStatusStatistics() const;

                    /**
                     * 判断参数 SendStatusStatistics 是否已赋值
                     * @return SendStatusStatistics 是否已赋值
                     */
                    bool SendStatusStatisticsHasBeenSet() const;

                private:

                    /**
                     * Delivery statistics response body.
                     */
                    SendStatusStatistics m_sendStatusStatistics;
                    bool m_sendStatusStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDSTATUSSTATISTICSRESPONSE_H_