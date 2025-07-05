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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Asset management Web site list information
                */
                class AssetWebLocationInfo : public AbstractModel
                {
                public:
                    AssetWebLocationInfo();
                    ~AssetWebLocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name
                     * @return Name Domain name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Domain name
                     * @param _name Domain name
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
                     * 获取Site port
                     * @return Port Site port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Site port
                     * @param _port Site port
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Site protocol
                     * @return Proto Site protocol
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Site protocol
                     * @param _proto Site protocol
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取Service type
                     * @return ServiceType Service type
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type
                     * @param _serviceType Service type
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Security module status. 0: not enabled; 1: enabled; 999: null (nginx only)
                     * @return SafeStatus Security module status. 0: not enabled; 1: enabled; 999: null (nginx only)
                     * 
                     */
                    uint64_t GetSafeStatus() const;

                    /**
                     * 设置Security module status. 0: not enabled; 1: enabled; 999: null (nginx only)
                     * @param _safeStatus Security module status. 0: not enabled; 1: enabled; 999: null (nginx only)
                     * 
                     */
                    void SetSafeStatus(const uint64_t& _safeStatus);

                    /**
                     * 判断参数 SafeStatus 是否已赋值
                     * @return SafeStatus 是否已赋值
                     * 
                     */
                    bool SafeStatusHasBeenSet() const;

                    /**
                     * 获取Running user
                     * @return User Running user
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Running user
                     * @param _user Running user
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Home directory
                     * @return MainPath Home directory
                     * 
                     */
                    std::string GetMainPath() const;

                    /**
                     * 设置Home directory
                     * @param _mainPath Home directory
                     * 
                     */
                    void SetMainPath(const std::string& _mainPath);

                    /**
                     * 判断参数 MainPath 是否已赋值
                     * @return MainPath 是否已赋值
                     * 
                     */
                    bool MainPathHasBeenSet() const;

                    /**
                     * 获取Startup command
                     * @return Command Startup command
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Startup command
                     * @param _command Startup command
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Bind IP
                     * @return Ip Bind IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Bind IP
                     * @param _ip Bind IP
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
                     * 获取Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Site port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Site protocol
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Service type
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Security module status. 0: not enabled; 1: enabled; 999: null (nginx only)
                     */
                    uint64_t m_safeStatus;
                    bool m_safeStatusHasBeenSet;

                    /**
                     * Running user
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Home directory
                     */
                    std::string m_mainPath;
                    bool m_mainPathHasBeenSet;

                    /**
                     * Startup command
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Bind IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONINFO_H_
