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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONSENSITIVEAPILISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONSENSITIVEAPILISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Superapp sensitive API list data.
                */
                class DescribeApplicationSensitiveAPIListData : public AbstractModel
                {
                public:
                    DescribeApplicationSensitiveAPIListData();
                    ~DescribeApplicationSensitiveAPIListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID.
                     * @return APIId API ID.
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID.
                     * @param _aPIId API ID.
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取API name.
                     * @return APIName API name.
                     * 
                     */
                    std::string GetAPIName() const;

                    /**
                     * 设置API name.
                     * @param _aPIName API name.
                     * 
                     */
                    void SetAPIName(const std::string& _aPIName);

                    /**
                     * 判断参数 APIName 是否已赋值
                     * @return APIName 是否已赋值
                     * 
                     */
                    bool APINameHasBeenSet() const;

                    /**
                     * 获取API request method.
                     * @return APIMethod API request method.
                     * 
                     */
                    std::string GetAPIMethod() const;

                    /**
                     * 设置API request method.
                     * @param _aPIMethod API request method.
                     * 
                     */
                    void SetAPIMethod(const std::string& _aPIMethod);

                    /**
                     * 判断参数 APIMethod 是否已赋值
                     * @return APIMethod 是否已赋值
                     * 
                     */
                    bool APIMethodHasBeenSet() const;

                    /**
                     * 获取API description.
                     * @return APIDesc API description.
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置API description.
                     * @param _aPIDesc API description.
                     * 
                     */
                    void SetAPIDesc(const std::string& _aPIDesc);

                    /**
                     * 判断参数 APIDesc 是否已赋值
                     * @return APIDesc 是否已赋值
                     * 
                     */
                    bool APIDescHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modifier.
                     * @return UpdateUser Last modifier.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Last modifier.
                     * @param _updateUser Last modifier.
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取Last modified time.
                     * @return UpdateTime Last modified time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time.
                     * @param _updateTime Last modified time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Superapp ID.
                     * @return ApplicationId Superapp ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Superapp ID.
                     * @param _applicationId Superapp ID.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Superapp name.
                     * @return ApplicationName Superapp name.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Superapp name.
                     * @param _applicationName Superapp name.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Team ID.
                     * @return TeamId Team ID.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID.
                     * @param _teamId Team ID.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Team name.
                     * @return TeamName Team name.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name.
                     * @param _teamName Team name.
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Superapp icon.
                     * @return ApplicationLogo Superapp icon.
                     * 
                     */
                    std::string GetApplicationLogo() const;

                    /**
                     * 设置Superapp icon.
                     * @param _applicationLogo Superapp icon.
                     * 
                     */
                    void SetApplicationLogo(const std::string& _applicationLogo);

                    /**
                     * 判断参数 ApplicationLogo 是否已赋值
                     * @return ApplicationLogo 是否已赋值
                     * 
                     */
                    bool ApplicationLogoHasBeenSet() const;

                    /**
                     * 获取API type. Valid values: 1: System; 2: Custom.
                     * @return APIType API type. Valid values: 1: System; 2: Custom.
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置API type. Valid values: 1: System; 2: Custom.
                     * @param _aPIType API type. Valid values: 1: System; 2: Custom.
                     * 
                     */
                    void SetAPIType(const int64_t& _aPIType);

                    /**
                     * 判断参数 APIType 是否已赋值
                     * @return APIType 是否已赋值
                     * 
                     */
                    bool APITypeHasBeenSet() const;

                    /**
                     * 获取API status. Valid values: 0: Public; 1: Restricted.
                     * @return Status API status. Valid values: 0: Public; 1: Restricted.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置API status. Valid values: 0: Public; 1: Restricted.
                     * @param _status API status. Valid values: 0: Public; 1: Restricted.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Both.
                     * @return UseScope Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Both.
                     * 
                     */
                    int64_t GetUseScope() const;

                    /**
                     * 设置Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Both.
                     * @param _useScope Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Both.
                     * 
                     */
                    void SetUseScope(const int64_t& _useScope);

                    /**
                     * 判断参数 UseScope 是否已赋值
                     * @return UseScope 是否已赋值
                     * 
                     */
                    bool UseScopeHasBeenSet() const;

                private:

                    /**
                     * API ID.
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API name.
                     */
                    std::string m_aPIName;
                    bool m_aPINameHasBeenSet;

                    /**
                     * API request method.
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * API description.
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modifier.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Last modified time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Superapp ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Superapp name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Team ID.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Superapp icon.
                     */
                    std::string m_applicationLogo;
                    bool m_applicationLogoHasBeenSet;

                    /**
                     * API type. Valid values: 1: System; 2: Custom.
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                    /**
                     * API status. Valid values: 0: Public; 1: Restricted.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Applicable scope: Valid values: 0: Mini program; 1: Mini game; 100: Both.
                     */
                    int64_t m_useScope;
                    bool m_useScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONSENSITIVEAPILISTDATA_H_
