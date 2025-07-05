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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TRAFFICPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Traffic package details.
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Traffic package ID.
                     * @return TrafficPackageId Traffic package ID.
                     * 
                     */
                    std::string GetTrafficPackageId() const;

                    /**
                     * 设置Traffic package ID.
                     * @param _trafficPackageId Traffic package ID.
                     * 
                     */
                    void SetTrafficPackageId(const std::string& _trafficPackageId);

                    /**
                     * 判断参数 TrafficPackageId 是否已赋值
                     * @return TrafficPackageId 是否已赋值
                     * 
                     */
                    bool TrafficPackageIdHasBeenSet() const;

                    /**
                     * 获取Used traffic in bytes during traffic package validity period.
                     * @return TrafficUsed Used traffic in bytes during traffic package validity period.
                     * 
                     */
                    int64_t GetTrafficUsed() const;

                    /**
                     * 设置Used traffic in bytes during traffic package validity period.
                     * @param _trafficUsed Used traffic in bytes during traffic package validity period.
                     * 
                     */
                    void SetTrafficUsed(const int64_t& _trafficUsed);

                    /**
                     * 判断参数 TrafficUsed 是否已赋值
                     * @return TrafficUsed 是否已赋值
                     * 
                     */
                    bool TrafficUsedHasBeenSet() const;

                    /**
                     * 获取Total traffic in bytes during traffic package validity period.
                     * @return TrafficPackageTotal Total traffic in bytes during traffic package validity period.
                     * 
                     */
                    int64_t GetTrafficPackageTotal() const;

                    /**
                     * 设置Total traffic in bytes during traffic package validity period.
                     * @param _trafficPackageTotal Total traffic in bytes during traffic package validity period.
                     * 
                     */
                    void SetTrafficPackageTotal(const int64_t& _trafficPackageTotal);

                    /**
                     * 判断参数 TrafficPackageTotal 是否已赋值
                     * @return TrafficPackageTotal 是否已赋值
                     * 
                     */
                    bool TrafficPackageTotalHasBeenSet() const;

                    /**
                     * 获取Remaining traffic in bytes during traffic package validity period.
                     * @return TrafficPackageRemaining Remaining traffic in bytes during traffic package validity period.
                     * 
                     */
                    int64_t GetTrafficPackageRemaining() const;

                    /**
                     * 设置Remaining traffic in bytes during traffic package validity period.
                     * @param _trafficPackageRemaining Remaining traffic in bytes during traffic package validity period.
                     * 
                     */
                    void SetTrafficPackageRemaining(const int64_t& _trafficPackageRemaining);

                    /**
                     * 判断参数 TrafficPackageRemaining 是否已赋值
                     * @return TrafficPackageRemaining 是否已赋值
                     * 
                     */
                    bool TrafficPackageRemainingHasBeenSet() const;

                    /**
                     * 获取Traffic exceeding package amount in bytes during traffic package validity period.
                     * @return TrafficOverflow Traffic exceeding package amount in bytes during traffic package validity period.
                     * 
                     */
                    int64_t GetTrafficOverflow() const;

                    /**
                     * 设置Traffic exceeding package amount in bytes during traffic package validity period.
                     * @param _trafficOverflow Traffic exceeding package amount in bytes during traffic package validity period.
                     * 
                     */
                    void SetTrafficOverflow(const int64_t& _trafficOverflow);

                    /**
                     * 判断参数 TrafficOverflow 是否已赋值
                     * @return TrafficOverflow 是否已赋值
                     * 
                     */
                    bool TrafficOverflowHasBeenSet() const;

                    /**
                     * 获取Start time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Traffic package expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Deadline Traffic package expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置Traffic package expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _deadline Traffic package expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取Traffic package status:
<li>NETWORK_NORMAL: normal</li>
<li>OVERDUE_NETWORK_DISABLED: the network is disconnected due to overdue payments</li>
                     * @return Status Traffic package status:
<li>NETWORK_NORMAL: normal</li>
<li>OVERDUE_NETWORK_DISABLED: the network is disconnected due to overdue payments</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Traffic package status:
<li>NETWORK_NORMAL: normal</li>
<li>OVERDUE_NETWORK_DISABLED: the network is disconnected due to overdue payments</li>
                     * @param _status Traffic package status:
<li>NETWORK_NORMAL: normal</li>
<li>OVERDUE_NETWORK_DISABLED: the network is disconnected due to overdue payments</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Traffic package ID.
                     */
                    std::string m_trafficPackageId;
                    bool m_trafficPackageIdHasBeenSet;

                    /**
                     * Used traffic in bytes during traffic package validity period.
                     */
                    int64_t m_trafficUsed;
                    bool m_trafficUsedHasBeenSet;

                    /**
                     * Total traffic in bytes during traffic package validity period.
                     */
                    int64_t m_trafficPackageTotal;
                    bool m_trafficPackageTotalHasBeenSet;

                    /**
                     * Remaining traffic in bytes during traffic package validity period.
                     */
                    int64_t m_trafficPackageRemaining;
                    bool m_trafficPackageRemainingHasBeenSet;

                    /**
                     * Traffic exceeding package amount in bytes during traffic package validity period.
                     */
                    int64_t m_trafficOverflow;
                    bool m_trafficOverflowHasBeenSet;

                    /**
                     * Start time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of traffic package validity period according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Traffic package expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * Traffic package status:
<li>NETWORK_NORMAL: normal</li>
<li>OVERDUE_NETWORK_DISABLED: the network is disconnected due to overdue payments</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_TRAFFICPACKAGE_H_
