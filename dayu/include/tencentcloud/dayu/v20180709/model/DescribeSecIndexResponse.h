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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESECINDEXRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESECINDEXRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeSecIndex response structure.
                */
                class DescribeSecIndexResponse : public AbstractModel
                {
                public:
                    DescribeSecIndexResponse();
                    ~DescribeSecIndexResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Field value as follows:
AttackIpCount: number of attacked IPs
AttackCount: number of attacks
BlockCount: number of blockings
MaxMbps: attack bandwidth peak in Mbps
IpNum: IP statistics
                     * @return Data Field value as follows:
AttackIpCount: number of attacked IPs
AttackCount: number of attacks
BlockCount: number of blockings
MaxMbps: attack bandwidth peak in Mbps
IpNum: IP statistics
                     */
                    std::vector<KeyValue> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Start time of the current month
                     * @return BeginDate Start time of the current month
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取End time of the current month
                     * @return EndDate End time of the current month
                     */
                    std::string GetEndDate() const;

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * Field value as follows:
AttackIpCount: number of attacked IPs
AttackCount: number of attacks
BlockCount: number of blockings
MaxMbps: attack bandwidth peak in Mbps
IpNum: IP statistics
                     */
                    std::vector<KeyValue> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Start time of the current month
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * End time of the current month
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESECINDEXRESPONSE_H_
