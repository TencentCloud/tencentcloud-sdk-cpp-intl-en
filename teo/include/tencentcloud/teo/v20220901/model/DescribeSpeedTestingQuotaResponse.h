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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESPEEDTESTINGQUOTARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESPEEDTESTINGQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SpeedTestingQuota.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSpeedTestingQuota response structure.
                */
                class DescribeSpeedTestingQuotaResponse : public AbstractModel
                {
                public:
                    DescribeSpeedTestingQuotaResponse();
                    ~DescribeSpeedTestingQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The quota limit on site tests.
                     * @return SpeedTestingQuota The quota limit on site tests.
                     */
                    SpeedTestingQuota GetSpeedTestingQuota() const;

                    /**
                     * 判断参数 SpeedTestingQuota 是否已赋值
                     * @return SpeedTestingQuota 是否已赋值
                     */
                    bool SpeedTestingQuotaHasBeenSet() const;

                private:

                    /**
                     * The quota limit on site tests.
                     */
                    SpeedTestingQuota m_speedTestingQuota;
                    bool m_speedTestingQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESPEEDTESTINGQUOTARESPONSE_H_
