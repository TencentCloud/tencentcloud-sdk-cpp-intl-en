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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PUBLICIPADDRESSINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PUBLICIPADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ISP.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Public IP information of the instance.
                */
                class PublicIPAddressInfo : public AbstractModel
                {
                public:
                    PublicIPAddressInfo();
                    ~PublicIPAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing mode.
                     * @return ChargeMode Billing mode.
                     * 
                     */
                    std::string GetChargeMode() const;

                    /**
                     * 设置Billing mode.
                     * @param _chargeMode Billing mode.
                     * 
                     */
                    void SetChargeMode(const std::string& _chargeMode);

                    /**
                     * 判断参数 ChargeMode 是否已赋值
                     * @return ChargeMode 是否已赋值
                     * 
                     */
                    bool ChargeModeHasBeenSet() const;

                    /**
                     * 获取Public IP of the instance.
                     * @return PublicIPAddress Public IP of the instance.
                     * 
                     */
                    std::string GetPublicIPAddress() const;

                    /**
                     * 设置Public IP of the instance.
                     * @param _publicIPAddress Public IP of the instance.
                     * 
                     */
                    void SetPublicIPAddress(const std::string& _publicIPAddress);

                    /**
                     * 判断参数 PublicIPAddress 是否已赋值
                     * @return PublicIPAddress 是否已赋值
                     * 
                     */
                    bool PublicIPAddressHasBeenSet() const;

                    /**
                     * 获取Public IP ISP of the instance.
                     * @return ISP Public IP ISP of the instance.
                     * 
                     */
                    ISP GetISP() const;

                    /**
                     * 设置Public IP ISP of the instance.
                     * @param _iSP Public IP ISP of the instance.
                     * 
                     */
                    void SetISP(const ISP& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取Outbound bandwidth cap of the instance in Mbps.
                     * @return MaxBandwidthOut Outbound bandwidth cap of the instance in Mbps.
                     * 
                     */
                    int64_t GetMaxBandwidthOut() const;

                    /**
                     * 设置Outbound bandwidth cap of the instance in Mbps.
                     * @param _maxBandwidthOut Outbound bandwidth cap of the instance in Mbps.
                     * 
                     */
                    void SetMaxBandwidthOut(const int64_t& _maxBandwidthOut);

                    /**
                     * 判断参数 MaxBandwidthOut 是否已赋值
                     * @return MaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool MaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Inbound bandwidth cap of the instance in Mbps.
                     * @return MaxBandwidthIn Inbound bandwidth cap of the instance in Mbps.
                     * 
                     */
                    int64_t GetMaxBandwidthIn() const;

                    /**
                     * 设置Inbound bandwidth cap of the instance in Mbps.
                     * @param _maxBandwidthIn Inbound bandwidth cap of the instance in Mbps.
                     * 
                     */
                    void SetMaxBandwidthIn(const int64_t& _maxBandwidthIn);

                    /**
                     * 判断参数 MaxBandwidthIn 是否已赋值
                     * @return MaxBandwidthIn 是否已赋值
                     * 
                     */
                    bool MaxBandwidthInHasBeenSet() const;

                private:

                    /**
                     * Billing mode.
                     */
                    std::string m_chargeMode;
                    bool m_chargeModeHasBeenSet;

                    /**
                     * Public IP of the instance.
                     */
                    std::string m_publicIPAddress;
                    bool m_publicIPAddressHasBeenSet;

                    /**
                     * Public IP ISP of the instance.
                     */
                    ISP m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * Outbound bandwidth cap of the instance in Mbps.
                     */
                    int64_t m_maxBandwidthOut;
                    bool m_maxBandwidthOutHasBeenSet;

                    /**
                     * Inbound bandwidth cap of the instance in Mbps.
                     */
                    int64_t m_maxBandwidthIn;
                    bool m_maxBandwidthInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PUBLICIPADDRESSINFO_H_
