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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNStatDetails request structure.
                */
                class DescribeCDNStatDetailsRequest : public AbstractModel
                {
                public:
                    DescribeCDNStatDetailsRequest();
                    ~DescribeCDNStatDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Metric 
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置
                     * @param _metric 
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取
                     * @return StartTime 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置
                     * @param _startTime 
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
                     * 获取
                     * @return EndTime 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置
                     * @param _endTime 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return DomainNames 
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置
                     * @param _domainNames 
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Area 
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置
                     * @param _area 
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取
                     * @return Districts 
                     * 
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置
                     * @param _districts 
                     * 
                     */
                    void SetDistricts(const std::vector<std::string>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     * 
                     */
                    bool DistrictsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Isps 
                     * 
                     */
                    std::vector<std::string> GetIsps() const;

                    /**
                     * 设置
                     * @param _isps 
                     * 
                     */
                    void SetIsps(const std::vector<std::string>& _isps);

                    /**
                     * 判断参数 Isps 是否已赋值
                     * @return Isps 是否已赋值
                     * 
                     */
                    bool IspsHasBeenSet() const;

                    /**
                     * 获取
                     * @return DataInterval 
                     * 
                     */
                    uint64_t GetDataInterval() const;

                    /**
                     * 设置
                     * @param _dataInterval 
                     * 
                     */
                    void SetDataInterval(const uint64_t& _dataInterval);

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     * 
                     */
                    bool DataIntervalHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_isps;
                    bool m_ispsHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNSTATDETAILSREQUEST_H_
