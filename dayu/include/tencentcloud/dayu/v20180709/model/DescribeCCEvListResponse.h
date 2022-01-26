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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCEVLISTRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCEVLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCEventRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCEvList response structure.
                */
                class DescribeCCEvListResponse : public AbstractModel
                {
                public:
                    DescribeCCEvListResponse();
                    ~DescribeCCEvListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `shield`: Chess Shield; `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     * @return Business Anti-DDoS service type. `shield`: Chess Shield; `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Instance IP list
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpList Instance IP list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取CC attack event list
                     * @return Data CC attack event list
                     */
                    std::vector<CCEventRecord> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of records
                     * @return Total Total number of records
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `shield`: Chess Shield; `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP); `net`: Anti-DDoS Ultimate; `basic`: Anti-DDoS Basic
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Instance IP list
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * CC attack event list
                     */
                    std::vector<CCEventRecord> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of records
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCEVLISTRESPONSE_H_
