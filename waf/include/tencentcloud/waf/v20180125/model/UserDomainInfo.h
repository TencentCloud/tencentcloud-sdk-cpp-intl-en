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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SaaS and CLB information
                */
                class UserDomainInfo : public AbstractModel
                {
                public:
                    UserDomainInfo();
                    ~UserDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return Appid User ID
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置User ID
                     * @param _appid User ID
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Domain ID
                     * @return DomainId Domain ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置Domain ID
                     * @param _domainId Domain ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取WAF type
                     * @return Edition WAF type
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF type
                     * @param _edition WAF type
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Version

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Version

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Version

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Version

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Switch for Specified Domain Access Log Fields

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WriteConfig Switch for Specified Domain Access Log Fields

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWriteConfig() const;

                    /**
                     * 设置Switch for Specified Domain Access Log Fields

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _writeConfig Switch for Specified Domain Access Log Fields

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWriteConfig(const std::string& _writeConfig);

                    /**
                     * 判断参数 WriteConfig 是否已赋值
                     * @return WriteConfig 是否已赋值
                     * 
                     */
                    bool WriteConfigHasBeenSet() const;

                    /**
                     * 获取Whether to Write the CLS Switch for the Specified Domain 1: Yes, 0: No

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cls Whether to Write the CLS Switch for the Specified Domain 1: Yes, 0: No

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置Whether to Write the CLS Switch for the Specified Domain 1: Yes, 0: No

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cls Whether to Write the CLS Switch for the Specified Domain 1: Yes, 0: No

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCls(const uint64_t& _cls);

                    /**
                     * 判断参数 Cls 是否已赋值
                     * @return Cls 是否已赋值
                     * 
                     */
                    bool ClsHasBeenSet() const;

                    /**
                     * 获取Marks if it is hybrid cloud access. Hybrid indicates a hybrid cloud access domain

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudType Marks if it is hybrid cloud access. Hybrid indicates a hybrid cloud access domain

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置Marks if it is hybrid cloud access. Hybrid indicates a hybrid cloud access domain

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudType Marks if it is hybrid cloud access. Hybrid indicates a hybrid cloud access domain

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取CLB WAF type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlbType CLB WAF type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置CLB WAF type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _albType CLB WAF type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取Bot detection enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BotStatus Bot detection enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置Bot detection enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _botStatus Bot detection enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotStatus(const int64_t& _botStatus);

                    /**
                     * 判断参数 BotStatus 是否已赋值
                     * @return BotStatus 是否已赋值
                     * 
                     */
                    bool BotStatusHasBeenSet() const;

                    /**
                     * 获取API enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiStatus API enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置API enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiStatus API enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiStatus(const int64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Domain ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * WAF type
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Version

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Switch for Specified Domain Access Log Fields

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_writeConfig;
                    bool m_writeConfigHasBeenSet;

                    /**
                     * Whether to Write the CLS Switch for the Specified Domain 1: Yes, 0: No

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * Marks if it is hybrid cloud access. Hybrid indicates a hybrid cloud access domain

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * CLB WAF type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * Bot detection enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * API enabling status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_
