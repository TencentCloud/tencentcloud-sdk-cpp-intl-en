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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline host information
                */
                class BaselineHost : public AbstractModel
                {
                public:
                    BaselineHost();
                    ~BaselineHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host ID
                     * @return HostId Host ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置Host ID
                     * @param _hostId Host ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostTag Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostTag() const;

                    /**
                     * 设置Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostTag Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostTag(const std::string& _hostTag);

                    /**
                     * 判断参数 HostTag 是否已赋值
                     * @return HostTag 是否已赋值
                     * 
                     */
                    bool HostTagHasBeenSet() const;

                    /**
                     * 获取Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIp Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIp Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wanIp Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Host ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostTag;
                    bool m_hostTagHasBeenSet;

                    /**
                     * Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOST_H_
