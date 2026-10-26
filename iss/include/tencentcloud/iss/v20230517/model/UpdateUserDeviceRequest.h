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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateUserDevice request structure.
                */
                class UpdateUserDeviceRequest : public AbstractModel
                {
                public:
                    UpdateUserDeviceRequest();
                    ~UpdateUserDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Device ID (obtain from the device list API ListDevices)</p><p>For parameter values, see <a href="https://www.tencentcloud.com/document/api/1344/95871?from_cn_redirect=1">ListDevices</a></p>
                     * @return DeviceId <p>Device ID (obtain from the device list API ListDevices)</p><p>For parameter values, see <a href="https://www.tencentcloud.com/document/api/1344/95871?from_cn_redirect=1">ListDevices</a></p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>Device ID (obtain from the device list API ListDevices)</p><p>For parameter values, see <a href="https://www.tencentcloud.com/document/api/1344/95871?from_cn_redirect=1">ListDevices</a></p>
                     * @param _deviceId <p>Device ID (obtain from the device list API ListDevices)</p><p>For parameter values, see <a href="https://www.tencentcloud.com/document/api/1344/95871?from_cn_redirect=1">ListDevices</a></p>
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
                     * 获取<p>Device name (only supports Chinese, English, numbers, spaces, Chinese and English parentheses, _, -, length not exceeding 128 characters)</p>
                     * @return Name <p>Device name (only supports Chinese, English, numbers, spaces, Chinese and English parentheses, _, -, length not exceeding 128 characters)</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Device name (only supports Chinese, English, numbers, spaces, Chinese and English parentheses, _, -, length not exceeding 128 characters)</p>
                     * @param _name <p>Device name (only supports Chinese, English, numbers, spaces, Chinese and English parentheses, _, -, length not exceeding 128 characters)</p>
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
                     * 获取<p>Device streaming protocol. Only valid for national standard devices. Fill in 0 to make no change (1: UDP, 2: TCP)</p>
                     * @return TransportProtocol <p>Device streaming protocol. Only valid for national standard devices. Fill in 0 to make no change (1: UDP, 2: TCP)</p>
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置<p>Device streaming protocol. Only valid for national standard devices. Fill in 0 to make no change (1: UDP, 2: TCP)</p>
                     * @param _transportProtocol <p>Device streaming protocol. Only valid for national standard devices. Fill in 0 to make no change (1: UDP, 2: TCP)</p>
                     * 
                     */
                    void SetTransportProtocol(const int64_t& _transportProtocol);

                    /**
                     * 判断参数 TransportProtocol 是否已赋值
                     * @return TransportProtocol 是否已赋值
                     * 
                     */
                    bool TransportProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Device password (only supported for national standard devices, length not exceeding 64 characters)</p>
                     * @return Password <p>Device password (only supported for national standard devices, length not exceeding 64 characters)</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Device password (only supported for national standard devices, length not exceeding 64 characters)</p>
                     * @param _password <p>Device password (only supported for national standard devices, length not exceeding 64 characters)</p>
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
                     * 获取<p>Device description (length not exceeding 128 characters)</p>
                     * @return Description <p>Device description (length not exceeding 128 characters)</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Device description (length not exceeding 128 characters)</p>
                     * @param _description <p>Device description (length not exceeding 128 characters)</p>
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
                     * 获取<p>Device access IP (deprecated, reserved for compatibility, can be ignored)</p>
                     * @return Ip <p>Device access IP (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Device access IP (deprecated, reserved for compatibility, can be ignored)</p>
                     * @param _ip <p>Device access IP (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>Device Port (deprecated, reserved for compatibility, can be ignored)</p>
                     * @return Port <p>Device Port (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Device Port (deprecated, reserved for compatibility, can be ignored)</p>
                     * @param _port <p>Device Port (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Device username (deprecated, reserved for compatibility, can be ignored)</p>
                     * @return Username <p>Device username (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Device username (deprecated, reserved for compatibility, can be ignored)</p>
                     * @param _username <p>Device username (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>Gateway device access protocol (deprecated, reserved for compatibility, can be ignored)</p>
                     * @return ProtocolType <p>Gateway device access protocol (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置<p>Gateway device access protocol (deprecated, reserved for compatibility, can be ignored)</p>
                     * @param _protocolType <p>Gateway device access protocol (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    void SetProtocolType(const int64_t& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取<p>Audio on/off (0: off; 1: on), enabled by default. Audio is dropped when turned off.</p>
                     * @return AudioSwitch <p>Audio on/off (0: off; 1: on), enabled by default. Audio is dropped when turned off.</p>
                     * 
                     */
                    int64_t GetAudioSwitch() const;

                    /**
                     * 设置<p>Audio on/off (0: off; 1: on), enabled by default. Audio is dropped when turned off.</p>
                     * @param _audioSwitch <p>Audio on/off (0: off; 1: on), enabled by default. Audio is dropped when turned off.</p>
                     * 
                     */
                    void SetAudioSwitch(const int64_t& _audioSwitch);

                    /**
                     * 判断参数 AudioSwitch 是否已赋值
                     * @return AudioSwitch 是否已赋值
                     * 
                     */
                    bool AudioSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Subscription switch (0: off; 1: on). Default On. When enabled, it subscribes to device channel transitions. Valid only for national standard NVR devices.</p>
                     * @return SubscribeSwitch <p>Subscription switch (0: off; 1: on). Default On. When enabled, it subscribes to device channel transitions. Valid only for national standard NVR devices.</p>
                     * 
                     */
                    int64_t GetSubscribeSwitch() const;

                    /**
                     * 设置<p>Subscription switch (0: off; 1: on). Default On. When enabled, it subscribes to device channel transitions. Valid only for national standard NVR devices.</p>
                     * @param _subscribeSwitch <p>Subscription switch (0: off; 1: on). Default On. When enabled, it subscribes to device channel transitions. Valid only for national standard NVR devices.</p>
                     * 
                     */
                    void SetSubscribeSwitch(const int64_t& _subscribeSwitch);

                    /**
                     * 判断参数 SubscribeSwitch 是否已赋值
                     * @return SubscribeSwitch 是否已赋值
                     * 
                     */
                    bool SubscribeSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable silent frame (0: disabled; 1: enabled)</p>
                     * @return SilentFrameSwitch <p>Whether to enable silent frame (0: disabled; 1: enabled)</p>
                     * 
                     */
                    int64_t GetSilentFrameSwitch() const;

                    /**
                     * 设置<p>Whether to enable silent frame (0: disabled; 1: enabled)</p>
                     * @param _silentFrameSwitch <p>Whether to enable silent frame (0: disabled; 1: enabled)</p>
                     * 
                     */
                    void SetSilentFrameSwitch(const int64_t& _silentFrameSwitch);

                    /**
                     * 判断参数 SilentFrameSwitch 是否已赋值
                     * @return SilentFrameSwitch 是否已赋值
                     * 
                     */
                    bool SilentFrameSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Clock sync switch (only effective for national standard devices)</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Default value: 1</p>
                     * @return TimeSyncSwitch <p>Clock sync switch (only effective for national standard devices)</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Default value: 1</p>
                     * 
                     */
                    int64_t GetTimeSyncSwitch() const;

                    /**
                     * 设置<p>Clock sync switch (only effective for national standard devices)</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Default value: 1</p>
                     * @param _timeSyncSwitch <p>Clock sync switch (only effective for national standard devices)</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Default value: 1</p>
                     * 
                     */
                    void SetTimeSyncSwitch(const int64_t& _timeSyncSwitch);

                    /**
                     * 判断参数 TimeSyncSwitch 是否已赋值
                     * @return TimeSyncSwitch 是否已赋值
                     * 
                     */
                    bool TimeSyncSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>Device ID (obtain from the device list API ListDevices)</p><p>For parameter values, see <a href="https://www.tencentcloud.com/document/api/1344/95871?from_cn_redirect=1">ListDevices</a></p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>Device name (only supports Chinese, English, numbers, spaces, Chinese and English parentheses, _, -, length not exceeding 128 characters)</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Device streaming protocol. Only valid for national standard devices. Fill in 0 to make no change (1: UDP, 2: TCP)</p>
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * <p>Device password (only supported for national standard devices, length not exceeding 64 characters)</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Device description (length not exceeding 128 characters)</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Device access IP (deprecated, reserved for compatibility, can be ignored)</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Device Port (deprecated, reserved for compatibility, can be ignored)</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Device username (deprecated, reserved for compatibility, can be ignored)</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Gateway device access protocol (deprecated, reserved for compatibility, can be ignored)</p>
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>Audio on/off (0: off; 1: on), enabled by default. Audio is dropped when turned off.</p>
                     */
                    int64_t m_audioSwitch;
                    bool m_audioSwitchHasBeenSet;

                    /**
                     * <p>Subscription switch (0: off; 1: on). Default On. When enabled, it subscribes to device channel transitions. Valid only for national standard NVR devices.</p>
                     */
                    int64_t m_subscribeSwitch;
                    bool m_subscribeSwitchHasBeenSet;

                    /**
                     * <p>Whether to enable silent frame (0: disabled; 1: enabled)</p>
                     */
                    int64_t m_silentFrameSwitch;
                    bool m_silentFrameSwitchHasBeenSet;

                    /**
                     * <p>Clock sync switch (only effective for national standard devices)</p><p>Enumeration values:</p><ul><li>0: Off</li><li>1: On</li></ul><p>Default value: 1</p>
                     */
                    int64_t m_timeSyncSwitch;
                    bool m_timeSyncSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEUSERDEVICEREQUEST_H_
