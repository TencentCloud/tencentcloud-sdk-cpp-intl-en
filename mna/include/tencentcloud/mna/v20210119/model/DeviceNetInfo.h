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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DEVICENETINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DEVICENETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Device network status information
                */
                class DeviceNetInfo : public AbstractModel
                {
                public:
                    DeviceNetInfo();
                    ~DeviceNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network type:
Data
1:Wi-Fi
2: Wired
                     * @return Type Network type:
Data
1:Wi-Fi
2: Wired
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Network type:
Data
1:Wi-Fi
2: Wired
                     * @param _type Network type:
Data
1:Wi-Fi
2: Wired
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Enable or disable.
                     * @return DataEnable Enable or disable.
                     * 
                     */
                    bool GetDataEnable() const;

                    /**
                     * 设置Enable or disable.
                     * @param _dataEnable Enable or disable.
                     * 
                     */
                    void SetDataEnable(const bool& _dataEnable);

                    /**
                     * 判断参数 DataEnable 是否已赋值
                     * @return DataEnable 是否已赋值
                     * 
                     */
                    bool DataEnableHasBeenSet() const;

                    /**
                     * 获取Uplink speed limit
                     * @return UploadLimit Uplink speed limit
                     * 
                     */
                    std::string GetUploadLimit() const;

                    /**
                     * 设置Uplink speed limit
                     * @param _uploadLimit Uplink speed limit
                     * 
                     */
                    void SetUploadLimit(const std::string& _uploadLimit);

                    /**
                     * 判断参数 UploadLimit 是否已赋值
                     * @return UploadLimit 是否已赋值
                     * 
                     */
                    bool UploadLimitHasBeenSet() const;

                    /**
                     * 获取Downstream speed limit
                     * @return DownloadLimit Downstream speed limit
                     * 
                     */
                    std::string GetDownloadLimit() const;

                    /**
                     * 设置Downstream speed limit
                     * @param _downloadLimit Downstream speed limit
                     * 
                     */
                    void SetDownloadLimit(const std::string& _downloadLimit);

                    /**
                     * 判断参数 DownloadLimit 是否已赋值
                     * @return DownloadLimit 是否已赋值
                     * 
                     */
                    bool DownloadLimitHasBeenSet() const;

                    /**
                     * 获取receive real-time speed
                     * @return DataRx receive real-time speed
                     * 
                     */
                    uint64_t GetDataRx() const;

                    /**
                     * 设置receive real-time speed
                     * @param _dataRx receive real-time speed
                     * 
                     */
                    void SetDataRx(const uint64_t& _dataRx);

                    /**
                     * 判断参数 DataRx 是否已赋值
                     * @return DataRx 是否已赋值
                     * 
                     */
                    bool DataRxHasBeenSet() const;

                    /**
                     * 获取Send real-time speed
                     * @return DataTx Send real-time speed
                     * 
                     */
                    uint64_t GetDataTx() const;

                    /**
                     * 设置Send real-time speed
                     * @param _dataTx Send real-time speed
                     * 
                     */
                    void SetDataTx(const uint64_t& _dataTx);

                    /**
                     * 判断参数 DataTx 是否已赋值
                     * @return DataTx 是否已赋值
                     * 
                     */
                    bool DataTxHasBeenSet() const;

                    /**
                     * 获取Operator type:
1: CMCC;
2: CTCC 
3: CUCC
                     * @return Vendor Operator type:
1: CMCC;
2: CTCC 
3: CUCC
                     * 
                     */
                    int64_t GetVendor() const;

                    /**
                     * 设置Operator type:
1: CMCC;
2: CTCC 
3: CUCC
                     * @param _vendor Operator type:
1: CMCC;
2: CTCC 
3: CUCC
                     * 
                     */
                    void SetVendor(const int64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取Connection status:
0: connectionless
1: Connecting
2: Connected
                     * @return State Connection status:
0: connectionless
1: Connecting
2: Connected
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Connection status:
0: connectionless
1: Connecting
2: Connected
                     * @param _state Connection status:
0: connectionless
1: Connecting
2: Connected
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Signal strength/Measurement unit: dbm
                     * @return SignalStrength Signal strength/Measurement unit: dbm
                     * 
                     */
                    int64_t GetSignalStrength() const;

                    /**
                     * 设置Signal strength/Measurement unit: dbm
                     * @param _signalStrength Signal strength/Measurement unit: dbm
                     * 
                     */
                    void SetSignalStrength(const int64_t& _signalStrength);

                    /**
                     * 判断参数 SignalStrength 是否已赋值
                     * @return SignalStrength 是否已赋值
                     * 
                     */
                    bool SignalStrengthHasBeenSet() const;

                    /**
                     * 获取Data network type:
-1: Invalid value.   
2:2G 
3:3G 
4:4G 
5:5G
                     * @return Rat Data network type:
-1: Invalid value.   
2:2G 
3:3G 
4:4G 
5:5G
                     * 
                     */
                    int64_t GetRat() const;

                    /**
                     * 设置Data network type:
-1: Invalid value.   
2:2G 
3:3G 
4:4G 
5:5G
                     * @param _rat Data network type:
-1: Invalid value.   
2:2G 
3:3G 
4:4G 
5:5G
                     * 
                     */
                    void SetRat(const int64_t& _rat);

                    /**
                     * 判断参数 Rat 是否已赋值
                     * @return Rat 是否已赋值
                     * 
                     */
                    bool RatHasBeenSet() const;

                    /**
                     * 获取NIC Name
                     * @return NetInfoName NIC Name
                     * 
                     */
                    std::string GetNetInfoName() const;

                    /**
                     * 设置NIC Name
                     * @param _netInfoName NIC Name
                     * 
                     */
                    void SetNetInfoName(const std::string& _netInfoName);

                    /**
                     * 判断参数 NetInfoName 是否已赋值
                     * @return NetInfoName 是否已赋值
                     * 
                     */
                    bool NetInfoNameHasBeenSet() const;

                    /**
                     * 获取Downstream real-time rate (floating-point type replaces the integer type of the previous version DataRx).
                     * @return DownRate Downstream real-time rate (floating-point type replaces the integer type of the previous version DataRx).
                     * 
                     */
                    double GetDownRate() const;

                    /**
                     * 设置Downstream real-time rate (floating-point type replaces the integer type of the previous version DataRx).
                     * @param _downRate Downstream real-time rate (floating-point type replaces the integer type of the previous version DataRx).
                     * 
                     */
                    void SetDownRate(const double& _downRate);

                    /**
                     * 判断参数 DownRate 是否已赋值
                     * @return DownRate 是否已赋值
                     * 
                     */
                    bool DownRateHasBeenSet() const;

                    /**
                     * 获取Uplink real-time rate (floating-point type replaces the integer of the previous version TxRate)
                     * @return UpRate Uplink real-time rate (floating-point type replaces the integer of the previous version TxRate)
                     * 
                     */
                    double GetUpRate() const;

                    /**
                     * 设置Uplink real-time rate (floating-point type replaces the integer of the previous version TxRate)
                     * @param _upRate Uplink real-time rate (floating-point type replaces the integer of the previous version TxRate)
                     * 
                     */
                    void SetUpRate(const double& _upRate);

                    /**
                     * 判断参数 UpRate 是否已赋值
                     * @return UpRate 是否已赋值
                     * 
                     */
                    bool UpRateHasBeenSet() const;

                private:

                    /**
                     * Network type:
Data
1:Wi-Fi
2: Wired
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Enable or disable.
                     */
                    bool m_dataEnable;
                    bool m_dataEnableHasBeenSet;

                    /**
                     * Uplink speed limit
                     */
                    std::string m_uploadLimit;
                    bool m_uploadLimitHasBeenSet;

                    /**
                     * Downstream speed limit
                     */
                    std::string m_downloadLimit;
                    bool m_downloadLimitHasBeenSet;

                    /**
                     * receive real-time speed
                     */
                    uint64_t m_dataRx;
                    bool m_dataRxHasBeenSet;

                    /**
                     * Send real-time speed
                     */
                    uint64_t m_dataTx;
                    bool m_dataTxHasBeenSet;

                    /**
                     * Operator type:
1: CMCC;
2: CTCC 
3: CUCC
                     */
                    int64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * Connection status:
0: connectionless
1: Connecting
2: Connected
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Signal strength/Measurement unit: dbm
                     */
                    int64_t m_signalStrength;
                    bool m_signalStrengthHasBeenSet;

                    /**
                     * Data network type:
-1: Invalid value.   
2:2G 
3:3G 
4:4G 
5:5G
                     */
                    int64_t m_rat;
                    bool m_ratHasBeenSet;

                    /**
                     * NIC Name
                     */
                    std::string m_netInfoName;
                    bool m_netInfoNameHasBeenSet;

                    /**
                     * Downstream real-time rate (floating-point type replaces the integer type of the previous version DataRx).
                     */
                    double m_downRate;
                    bool m_downRateHasBeenSet;

                    /**
                     * Uplink real-time rate (floating-point type replaces the integer of the previous version TxRate)
                     */
                    double m_upRate;
                    bool m_upRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DEVICENETINFO_H_
