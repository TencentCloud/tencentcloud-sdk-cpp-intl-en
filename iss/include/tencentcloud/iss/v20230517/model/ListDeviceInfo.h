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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * to the get device list request
                */
                class ListDeviceInfo : public AbstractModel
                {
                public:
                    ListDeviceInfo();
                    ~ListDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Device code
                     * @return Code Device code
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Device code
                     * @param _code Device code
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Device status. 0: unregistered; 1: online; 2: offline; 3: disabled
                     * @return Status Device status. 0: unregistered; 1: online; 2: offline; 3: disabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Device status. 0: unregistered; 1: online; 2: offline; 3: disabled
                     * @param _status Device status. 0: unregistered; 1: online; 2: offline; 3: disabled
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Device streaming protocol. 1: UDP, 2: TCP
                     * @return TransportProtocol Device streaming protocol. 1: UDP, 2: TCP
                     * 
                     */
                    uint64_t GetTransportProtocol() const;

                    /**
                     * 设置Device streaming protocol. 1: UDP, 2: TCP
                     * @param _transportProtocol Device streaming protocol. 1: UDP, 2: TCP
                     * 
                     */
                    void SetTransportProtocol(const uint64_t& _transportProtocol);

                    /**
                     * 判断参数 TransportProtocol 是否已赋值
                     * @return TransportProtocol 是否已赋值
                     * 
                     */
                    bool TransportProtocolHasBeenSet() const;

                    /**
                     * 获取Device name.
                     * @return Name Device name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Device name.
                     * @param _name Device name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Device type. 1: IPC. 2: NVR
                     * @return Type Device type. 1: IPC. 2: NVR
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Device type. 1: IPC. 2: NVR
                     * @param _type Device type. 1: IPC. 2: NVR
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Device password
                     * @return Password Device password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Device password
                     * @param _password Device password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Node ID of the device access service
                     * @return ClusterId Node ID of the device access service
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Node ID of the device access service
                     * @param _clusterId Node ID of the device access service
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Service node name
                     * @return ClusterName Service node name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Service node name
                     * @param _clusterName Service node name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Access protocol. 1: RTMP, 2: GB, 3: GW
                     * @return AccessProtocol Access protocol. 1: RTMP, 2: GB, 3: GW
                     * 
                     */
                    uint64_t GetAccessProtocol() const;

                    /**
                     * 设置Access protocol. 1: RTMP, 2: GB, 3: GW
                     * @param _accessProtocol Access protocol. 1: RTMP, 2: GB, 3: GW
                     * 
                     */
                    void SetAccessProtocol(const uint64_t& _accessProtocol);

                    /**
                     * 判断参数 AccessProtocol 是否已赋值
                     * @return AccessProtocol 是否已赋值
                     * 
                     */
                    bool AccessProtocolHasBeenSet() const;

                    /**
                     * 获取Organization ID of the device
                     * @return OrganizationId Organization ID of the device
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置Organization ID of the device
                     * @param _organizationId Organization ID of the device
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取Number of channels
                     * @return ChannelNum Number of channels
                     * 
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置Number of channels
                     * @param _channelNum Number of channels
                     * 
                     */
                    void SetChannelNum(const uint64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     * 
                     */
                    bool ChannelNumHasBeenSet() const;

                private:

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device code
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Device status. 0: unregistered; 1: online; 2: offline; 3: disabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Device streaming protocol. 1: UDP, 2: TCP
                     */
                    uint64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Device type. 1: IPC. 2: NVR
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Device password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Node ID of the device access service
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Service node name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Access protocol. 1: RTMP, 2: GB, 3: GW
                     */
                    uint64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * Organization ID of the device
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Number of channels
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICEINFO_H_
