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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBizHttpStatus request structure.
                */
                class DescribeBizHttpStatusRequest : public AbstractModel
                {
                public:
                    DescribeBizHttpStatusRequest();
                    ~DescribeBizHttpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @return Business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @param _business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return Id Resource ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource ID
                     * @param _id Resource ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Statistical period in seconds. Valid values: 300, 1800, 3600, 21600, and 86400.
                     * @return Period Statistical period in seconds. Valid values: 300, 1800, 3600, 21600, and 86400.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Statistical period in seconds. Valid values: 300, 1800, 3600, 21600, and 86400.
                     * @param _period Statistical period in seconds. Valid values: 300, 1800, 3600, 21600, and 86400.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Statistics start time
                     * @return StartTime Statistics start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Statistics start time
                     * @param _startTime Statistics start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Statistics end time
                     * @return EndTime Statistics end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Statistics end time
                     * @param _endTime Statistics end time
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
                     * 获取Statistical mode, which only supports sum.
                     * @return Statistics Statistical mode, which only supports sum.
                     * 
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置Statistical mode, which only supports sum.
                     * @param _statistics Statistical mode, which only supports sum.
                     * 
                     */
                    void SetStatistics(const std::string& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取Protocol and port list, which is valid when the statistical dimension is the number of connections. Valid protocols: TCP, UDP, HTTP, and HTTPS.
                     * @return ProtoInfo Protocol and port list, which is valid when the statistical dimension is the number of connections. Valid protocols: TCP, UDP, HTTP, and HTTPS.
                     * 
                     */
                    std::vector<ProtocolPort> GetProtoInfo() const;

                    /**
                     * 设置Protocol and port list, which is valid when the statistical dimension is the number of connections. Valid protocols: TCP, UDP, HTTP, and HTTPS.
                     * @param _protoInfo Protocol and port list, which is valid when the statistical dimension is the number of connections. Valid protocols: TCP, UDP, HTTP, and HTTPS.
                     * 
                     */
                    void SetProtoInfo(const std::vector<ProtocolPort>& _protoInfo);

                    /**
                     * 判断参数 ProtoInfo 是否已赋值
                     * @return ProtoInfo 是否已赋值
                     * 
                     */
                    bool ProtoInfoHasBeenSet() const;

                    /**
                     * 获取Specific domain name query
                     * @return Domain Specific domain name query
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specific domain name query
                     * @param _domain Specific domain name query
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Statistical period in seconds. Valid values: 300, 1800, 3600, 21600, and 86400.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Statistics start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Statistics end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistical mode, which only supports sum.
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * Protocol and port list, which is valid when the statistical dimension is the number of connections. Valid protocols: TCP, UDP, HTTP, and HTTPS.
                     */
                    std::vector<ProtocolPort> m_protoInfo;
                    bool m_protoInfoHasBeenSet;

                    /**
                     * Specific domain name query
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_
