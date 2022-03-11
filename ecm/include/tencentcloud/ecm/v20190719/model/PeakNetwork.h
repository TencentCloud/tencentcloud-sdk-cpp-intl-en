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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Peak network data
                */
                class PeakNetwork : public AbstractModel
                {
                public:
                    PeakNetwork();
                    ~PeakNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording time.
                     * @return RecordTime Recording time.
                     */
                    std::string GetRecordTime() const;

                    /**
                     * 设置Recording time.
                     * @param RecordTime Recording time.
                     */
                    void SetRecordTime(const std::string& _recordTime);

                    /**
                     * 判断参数 RecordTime 是否已赋值
                     * @return RecordTime 是否已赋值
                     */
                    bool RecordTimeHasBeenSet() const;

                    /**
                     * 获取Inbound bandwidth data.
                     * @return PeakInNetwork Inbound bandwidth data.
                     */
                    std::string GetPeakInNetwork() const;

                    /**
                     * 设置Inbound bandwidth data.
                     * @param PeakInNetwork Inbound bandwidth data.
                     */
                    void SetPeakInNetwork(const std::string& _peakInNetwork);

                    /**
                     * 判断参数 PeakInNetwork 是否已赋值
                     * @return PeakInNetwork 是否已赋值
                     */
                    bool PeakInNetworkHasBeenSet() const;

                    /**
                     * 获取Outbound bandwidth data.
                     * @return PeakOutNetwork Outbound bandwidth data.
                     */
                    std::string GetPeakOutNetwork() const;

                    /**
                     * 设置Outbound bandwidth data.
                     * @param PeakOutNetwork Outbound bandwidth data.
                     */
                    void SetPeakOutNetwork(const std::string& _peakOutNetwork);

                    /**
                     * 判断参数 PeakOutNetwork 是否已赋值
                     * @return PeakOutNetwork 是否已赋值
                     */
                    bool PeakOutNetworkHasBeenSet() const;

                    /**
                     * 获取Billable bandwidth in bps
                     * @return ChargeNetwork Billable bandwidth in bps
                     */
                    std::string GetChargeNetwork() const;

                    /**
                     * 设置Billable bandwidth in bps
                     * @param ChargeNetwork Billable bandwidth in bps
                     */
                    void SetChargeNetwork(const std::string& _chargeNetwork);

                    /**
                     * 判断参数 ChargeNetwork 是否已赋值
                     * @return ChargeNetwork 是否已赋值
                     */
                    bool ChargeNetworkHasBeenSet() const;

                private:

                    /**
                     * Recording time.
                     */
                    std::string m_recordTime;
                    bool m_recordTimeHasBeenSet;

                    /**
                     * Inbound bandwidth data.
                     */
                    std::string m_peakInNetwork;
                    bool m_peakInNetworkHasBeenSet;

                    /**
                     * Outbound bandwidth data.
                     */
                    std::string m_peakOutNetwork;
                    bool m_peakOutNetworkHasBeenSet;

                    /**
                     * Billable bandwidth in bps
                     */
                    std::string m_chargeNetwork;
                    bool m_chargeNetworkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORK_H_
