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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_INTERNETCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_INTERNETCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Public network load balancing configuration
                */
                class InternetConfig : public AbstractModel
                {
                public:
                    InternetConfig();
                    ~InternetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public network address version. Optional: "IPV4" | "IPV6". By default IPV4 if left blank.
                     * @return InternetAddressVersion Public network address version. Optional: "IPV4" | "IPV6". By default IPV4 if left blank.
                     * 
                     */
                    std::string GetInternetAddressVersion() const;

                    /**
                     * 设置Public network address version. Optional: "IPV4" | "IPV6". By default IPV4 if left blank.
                     * @param _internetAddressVersion Public network address version. Optional: "IPV4" | "IPV6". By default IPV4 if left blank.
                     * 
                     */
                    void SetInternetAddressVersion(const std::string& _internetAddressVersion);

                    /**
                     * 判断参数 InternetAddressVersion 是否已赋值
                     * @return InternetAddressVersion 是否已赋值
                     * 
                     */
                    bool InternetAddressVersionHasBeenSet() const;

                    /**
                     * 获取Public network payment mode. Currently, only "BANDWIDTH" is selectable. Defaults to "BANDWIDTH" if left blank.
                     * @return InternetPayMode Public network payment mode. Currently, only "BANDWIDTH" is selectable. Defaults to "BANDWIDTH" if left blank.
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置Public network payment mode. Currently, only "BANDWIDTH" is selectable. Defaults to "BANDWIDTH" if left blank.
                     * @param _internetPayMode Public network payment mode. Currently, only "BANDWIDTH" is selectable. Defaults to "BANDWIDTH" if left blank.
                     * 
                     */
                    void SetInternetPayMode(const std::string& _internetPayMode);

                    /**
                     * 判断参数 InternetPayMode 是否已赋值
                     * @return InternetPayMode 是否已赋值
                     * 
                     */
                    bool InternetPayModeHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth.
                     * @return InternetMaxBandwidthOut Public network bandwidth.
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network bandwidth.
                     * @param _internetMaxBandwidthOut Public network bandwidth.
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Description of load balancing
                     * @return Description Description of load balancing
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of load balancing
                     * @param _description Description of load balancing
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Load balancing specification type. Support clb.c2.medium, clb.c3.small, clb.c3.medium, clb.c4.small, clb.c4.medium, clb.c4.large, clb.c4.xlarge. Defaults to shared type.
                     * @return SlaType Load balancing specification type. Support clb.c2.medium, clb.c3.small, clb.c3.medium, clb.c4.small, clb.c4.medium, clb.c4.large, clb.c4.xlarge. Defaults to shared type.
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Load balancing specification type. Support clb.c2.medium, clb.c3.small, clb.c3.medium, clb.c4.small, clb.c4.medium, clb.c4.large, clb.c4.xlarge. Defaults to shared type.
                     * @param _slaType Load balancing specification type. Support clb.c2.medium, clb.c3.small, clb.c3.medium, clb.c4.small, clb.c4.medium, clb.c4.large, clb.c4.xlarge. Defaults to shared type.
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取Whether load balancing is multi-availability zone
                     * @return MultiZoneFlag Whether load balancing is multi-availability zone
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置Whether load balancing is multi-availability zone
                     * @param _multiZoneFlag Whether load balancing is multi-availability zone
                     * 
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     * 
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取Primary AZ.
                     * @return MasterZoneId Primary AZ.
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置Primary AZ.
                     * @param _masterZoneId Primary AZ.
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取standby availability zone
                     * @return SlaveZoneId standby availability zone
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置standby availability zone
                     * @param _slaveZoneId standby availability zone
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                private:

                    /**
                     * Public network address version. Optional: "IPV4" | "IPV6". By default IPV4 if left blank.
                     */
                    std::string m_internetAddressVersion;
                    bool m_internetAddressVersionHasBeenSet;

                    /**
                     * Public network payment mode. Currently, only "BANDWIDTH" is selectable. Defaults to "BANDWIDTH" if left blank.
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * Public network bandwidth.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Description of load balancing
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Load balancing specification type. Support clb.c2.medium, clb.c3.small, clb.c3.medium, clb.c4.small, clb.c4.medium, clb.c4.large, clb.c4.xlarge. Defaults to shared type.
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Whether load balancing is multi-availability zone
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * Primary AZ.
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * standby availability zone
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_INTERNETCONFIG_H_
