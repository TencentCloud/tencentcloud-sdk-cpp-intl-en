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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYDETAILINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Information of the machine at the access layer (tcaproxy) in a dedicated cluster
                */
                class ProxyDetailInfo : public AbstractModel
                {
                public:
                    ProxyDetailInfo();
                    ~ProxyDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the access layer (tcaproxy)
                     * @return ProxyUid The unique ID of the access layer (tcaproxy)
                     * 
                     */
                    std::string GetProxyUid() const;

                    /**
                     * 设置The unique ID of the access layer (tcaproxy)
                     * @param _proxyUid The unique ID of the access layer (tcaproxy)
                     * 
                     */
                    void SetProxyUid(const std::string& _proxyUid);

                    /**
                     * 判断参数 ProxyUid 是否已赋值
                     * @return ProxyUid 是否已赋值
                     * 
                     */
                    bool ProxyUidHasBeenSet() const;

                    /**
                     * 获取Machine type
                     * @return MachineType Machine type
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Machine type
                     * @param _machineType Machine type
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取The speed of processing request packets
                     * @return ProcessSpeed The speed of processing request packets
                     * 
                     */
                    int64_t GetProcessSpeed() const;

                    /**
                     * 设置The speed of processing request packets
                     * @param _processSpeed The speed of processing request packets
                     * 
                     */
                    void SetProcessSpeed(const int64_t& _processSpeed);

                    /**
                     * 判断参数 ProcessSpeed 是否已赋值
                     * @return ProcessSpeed 是否已赋值
                     * 
                     */
                    bool ProcessSpeedHasBeenSet() const;

                    /**
                     * 获取Request packet delay
                     * @return AverageProcessDelay Request packet delay
                     * 
                     */
                    int64_t GetAverageProcessDelay() const;

                    /**
                     * 设置Request packet delay
                     * @param _averageProcessDelay Request packet delay
                     * 
                     */
                    void SetAverageProcessDelay(const int64_t& _averageProcessDelay);

                    /**
                     * 判断参数 AverageProcessDelay 是否已赋值
                     * @return AverageProcessDelay 是否已赋值
                     * 
                     */
                    bool AverageProcessDelayHasBeenSet() const;

                    /**
                     * 获取The speed of processing delayed request packets
                     * @return SlowProcessSpeed The speed of processing delayed request packets
                     * 
                     */
                    int64_t GetSlowProcessSpeed() const;

                    /**
                     * 设置The speed of processing delayed request packets
                     * @param _slowProcessSpeed The speed of processing delayed request packets
                     * 
                     */
                    void SetSlowProcessSpeed(const int64_t& _slowProcessSpeed);

                    /**
                     * 判断参数 SlowProcessSpeed 是否已赋值
                     * @return SlowProcessSpeed 是否已赋值
                     * 
                     */
                    bool SlowProcessSpeedHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the access layer (tcaproxy)
                     */
                    std::string m_proxyUid;
                    bool m_proxyUidHasBeenSet;

                    /**
                     * Machine type
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * The speed of processing request packets
                     */
                    int64_t m_processSpeed;
                    bool m_processSpeedHasBeenSet;

                    /**
                     * Request packet delay
                     */
                    int64_t m_averageProcessDelay;
                    bool m_averageProcessDelayHasBeenSet;

                    /**
                     * The speed of processing delayed request packets
                     */
                    int64_t m_slowProcessSpeed;
                    bool m_slowProcessSpeedHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_PROXYDETAILINFO_H_
