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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MONTHNETWORK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MONTHNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Bandwidth information of the corresponding month
                */
                class MonthNetwork : public AbstractModel
                {
                public:
                    MonthNetwork();
                    ~MonthNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Zone information of the node
                     * @return ZoneInfo Zone information of the node
                     * 
                     */
                    ZoneInfo GetZoneInfo() const;

                    /**
                     * 设置Zone information of the node
                     * @param _zoneInfo Zone information of the node
                     * 
                     */
                    void SetZoneInfo(const ZoneInfo& _zoneInfo);

                    /**
                     * 判断参数 ZoneInfo 是否已赋值
                     * @return ZoneInfo 是否已赋值
                     * 
                     */
                    bool ZoneInfoHasBeenSet() const;

                    /**
                     * 获取Bandwidth month, such as `202103`
                     * @return Month Bandwidth month, such as `202103`
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bandwidth month, such as `202103`
                     * @param _month Bandwidth month, such as `202103`
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID format, such as `bwp-xxxxxxxx`
                     * @return BandwidthPkgId Bandwidth package ID format, such as `bwp-xxxxxxxx`
                     * 
                     */
                    std::string GetBandwidthPkgId() const;

                    /**
                     * 设置Bandwidth package ID format, such as `bwp-xxxxxxxx`
                     * @param _bandwidthPkgId Bandwidth package ID format, such as `bwp-xxxxxxxx`
                     * 
                     */
                    void SetBandwidthPkgId(const std::string& _bandwidthPkgId);

                    /**
                     * 判断参数 BandwidthPkgId 是否已赋值
                     * @return BandwidthPkgId 是否已赋值
                     * 
                     */
                    bool BandwidthPkgIdHasBeenSet() const;

                    /**
                     * 获取ISP abbreviation. Valid values: CUCC, CTCC, CMCC
                     * @return Isp ISP abbreviation. Valid values: CUCC, CTCC, CMCC
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置ISP abbreviation. Valid values: CUCC, CTCC, CMCC
                     * @param _isp ISP abbreviation. Valid values: CUCC, CTCC, CMCC
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取Inbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * @return TrafficMaxIn Inbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * 
                     */
                    double GetTrafficMaxIn() const;

                    /**
                     * 设置Inbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * @param _trafficMaxIn Inbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * 
                     */
                    void SetTrafficMaxIn(const double& _trafficMaxIn);

                    /**
                     * 判断参数 TrafficMaxIn 是否已赋值
                     * @return TrafficMaxIn 是否已赋值
                     * 
                     */
                    bool TrafficMaxInHasBeenSet() const;

                    /**
                     * 获取Outbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * @return TrafficMaxOut Outbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * 
                     */
                    double GetTrafficMaxOut() const;

                    /**
                     * 设置Outbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * @param _trafficMaxOut Outbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     * 
                     */
                    void SetTrafficMaxOut(const double& _trafficMaxOut);

                    /**
                     * 判断参数 TrafficMaxOut 是否已赋值
                     * @return TrafficMaxOut 是否已赋值
                     * 
                     */
                    bool TrafficMaxOutHasBeenSet() const;

                    /**
                     * 获取Billable bandwidth. Value range: 0.0–xxx.xxx
                     * @return FeeTraffic Billable bandwidth. Value range: 0.0–xxx.xxx
                     * 
                     */
                    double GetFeeTraffic() const;

                    /**
                     * 设置Billable bandwidth. Value range: 0.0–xxx.xxx
                     * @param _feeTraffic Billable bandwidth. Value range: 0.0–xxx.xxx
                     * 
                     */
                    void SetFeeTraffic(const double& _feeTraffic);

                    /**
                     * 判断参数 FeeTraffic 是否已赋值
                     * @return FeeTraffic 是否已赋值
                     * 
                     */
                    bool FeeTrafficHasBeenSet() const;

                    /**
                     * 获取Start time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     * @return StartTime Start time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     * @param _startTime Start time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
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
                     * 获取End time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     * @return EndTime End time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     * @param _endTime End time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
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
                     * 获取Number of actual valid days for the monthly billable bandwidth, which must be an integer greater than or equal to 0
                     * @return EffectiveDays Number of actual valid days for the monthly billable bandwidth, which must be an integer greater than or equal to 0
                     * 
                     */
                    int64_t GetEffectiveDays() const;

                    /**
                     * 设置Number of actual valid days for the monthly billable bandwidth, which must be an integer greater than or equal to 0
                     * @param _effectiveDays Number of actual valid days for the monthly billable bandwidth, which must be an integer greater than or equal to 0
                     * 
                     */
                    void SetEffectiveDays(const int64_t& _effectiveDays);

                    /**
                     * 判断参数 EffectiveDays 是否已赋值
                     * @return EffectiveDays 是否已赋值
                     * 
                     */
                    bool EffectiveDaysHasBeenSet() const;

                    /**
                     * 获取Actual number of days in the specified month, such as 30
                     * @return MonthDays Actual number of days in the specified month, such as 30
                     * 
                     */
                    int64_t GetMonthDays() const;

                    /**
                     * 设置Actual number of days in the specified month, such as 30
                     * @param _monthDays Actual number of days in the specified month, such as 30
                     * 
                     */
                    void SetMonthDays(const int64_t& _monthDays);

                    /**
                     * 判断参数 MonthDays 是否已赋值
                     * @return MonthDays 是否已赋值
                     * 
                     */
                    bool MonthDaysHasBeenSet() const;

                    /**
                     * 获取Proportion of the number of valid days, accurate to four decimal places, such as `0.2134`
                     * @return EffectiveDaysRate Proportion of the number of valid days, accurate to four decimal places, such as `0.2134`
                     * 
                     */
                    double GetEffectiveDaysRate() const;

                    /**
                     * 设置Proportion of the number of valid days, accurate to four decimal places, such as `0.2134`
                     * @param _effectiveDaysRate Proportion of the number of valid days, accurate to four decimal places, such as `0.2134`
                     * 
                     */
                    void SetEffectiveDaysRate(const double& _effectiveDaysRate);

                    /**
                     * 判断参数 EffectiveDaysRate 是否已赋值
                     * @return EffectiveDaysRate 是否已赋值
                     * 
                     */
                    bool EffectiveDaysRateHasBeenSet() const;

                    /**
                     * 获取Billable bandwidth package type. Valid values: Address, LoadBalance, AddressIpv6
                     * @return BandwidthPkgType Billable bandwidth package type. Valid values: Address, LoadBalance, AddressIpv6
                     * 
                     */
                    std::string GetBandwidthPkgType() const;

                    /**
                     * 设置Billable bandwidth package type. Valid values: Address, LoadBalance, AddressIpv6
                     * @param _bandwidthPkgType Billable bandwidth package type. Valid values: Address, LoadBalance, AddressIpv6
                     * 
                     */
                    void SetBandwidthPkgType(const std::string& _bandwidthPkgType);

                    /**
                     * 判断参数 BandwidthPkgType 是否已赋值
                     * @return BandwidthPkgType 是否已赋值
                     * 
                     */
                    bool BandwidthPkgTypeHasBeenSet() const;

                private:

                    /**
                     * Zone information of the node
                     */
                    ZoneInfo m_zoneInfo;
                    bool m_zoneInfoHasBeenSet;

                    /**
                     * Bandwidth month, such as `202103`
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Bandwidth package ID format, such as `bwp-xxxxxxxx`
                     */
                    std::string m_bandwidthPkgId;
                    bool m_bandwidthPkgIdHasBeenSet;

                    /**
                     * ISP abbreviation. Valid values: CUCC, CTCC, CMCC
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Inbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     */
                    double m_trafficMaxIn;
                    bool m_trafficMaxInHasBeenSet;

                    /**
                     * Outbound bandwidth package peak. Value range: 0.0–xxx.xxx
                     */
                    double m_trafficMaxOut;
                    bool m_trafficMaxOutHasBeenSet;

                    /**
                     * Billable bandwidth. Value range: 0.0–xxx.xxx
                     */
                    double m_feeTraffic;
                    bool m_feeTrafficHasBeenSet;

                    /**
                     * Start time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the monthly billable bandwidth in the format of `yyyy-mm-dd HH:mm:ss`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of actual valid days for the monthly billable bandwidth, which must be an integer greater than or equal to 0
                     */
                    int64_t m_effectiveDays;
                    bool m_effectiveDaysHasBeenSet;

                    /**
                     * Actual number of days in the specified month, such as 30
                     */
                    int64_t m_monthDays;
                    bool m_monthDaysHasBeenSet;

                    /**
                     * Proportion of the number of valid days, accurate to four decimal places, such as `0.2134`
                     */
                    double m_effectiveDaysRate;
                    bool m_effectiveDaysRateHasBeenSet;

                    /**
                     * Billable bandwidth package type. Valid values: Address, LoadBalance, AddressIpv6
                     */
                    std::string m_bandwidthPkgType;
                    bool m_bandwidthPkgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MONTHNETWORK_H_
