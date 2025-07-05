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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Replica server read-only information
                */
                class DrReadableInfo : public AbstractModel
                {
                public:
                    DrReadableInfo();
                    ~DrReadableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Replica server status. Valid values: enable - running; disable - unavailable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SlaveStatus Replica server status. Valid values: enable - running; disable - unavailable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSlaveStatus() const;

                    /**
                     * 设置Replica server status. Valid values: enable - running; disable - unavailable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _slaveStatus Replica server status. Valid values: enable - running; disable - unavailable
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSlaveStatus(const std::string& _slaveStatus);

                    /**
                     * 判断参数 SlaveStatus 是否已赋值
                     * @return SlaveStatus 是否已赋值
                     * 
                     */
                    bool SlaveStatusHasBeenSet() const;

                    /**
                     * 获取Replica server readable status. Valid values: enable - enabled; disable - disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReadableStatus Replica server readable status. Valid values: enable - enabled; disable - disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReadableStatus() const;

                    /**
                     * 设置Replica server readable status. Valid values: enable - enabled; disable - disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _readableStatus Replica server readable status. Valid values: enable - enabled; disable - disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadableStatus(const std::string& _readableStatus);

                    /**
                     * 判断参数 ReadableStatus 是否已赋值
                     * @return ReadableStatus 是否已赋值
                     * 
                     */
                    bool ReadableStatusHasBeenSet() const;

                    /**
                     * 获取Replica server read-only VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip Replica server read-only VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Replica server read-only VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vip Replica server read-only VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Replica server read-only port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VPort Replica server read-only port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置Replica server read-only port
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vPort Replica server read-only port
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Replica server VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpcId Replica server VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Replica server VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqVpcId Replica server VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Replica server VPC subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqSubnetId Replica server VPC subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Replica server VPC subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqSubnetId Replica server VPC subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                private:

                    /**
                     * Replica server status. Valid values: enable - running; disable - unavailable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_slaveStatus;
                    bool m_slaveStatusHasBeenSet;

                    /**
                     * Replica server readable status. Valid values: enable - enabled; disable - disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_readableStatus;
                    bool m_readableStatusHasBeenSet;

                    /**
                     * Replica server read-only VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Replica server read-only port
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Replica server VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Replica server VPC subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRREADABLEINFO_H_
