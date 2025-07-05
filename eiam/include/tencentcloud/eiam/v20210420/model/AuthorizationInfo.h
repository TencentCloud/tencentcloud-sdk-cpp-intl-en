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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * Returned authorization information.
                */
                class AuthorizationInfo : public AbstractModel
                {
                public:
                    AuthorizationInfo();
                    ~AuthorizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique application ID.
                     * @return AppId Unique application ID.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Unique application ID.
                     * @param _appId Unique application ID.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Application name.
                     * @return AppName Application name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name.
                     * @param _appName Application name.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Type name.
                     * @return EntityName Type name.
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置Type name.
                     * @param _entityName Type name.
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取Unique type ID.
                     * @return EntityId Unique type ID.
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置Unique type ID.
                     * @param _entityId Unique type ID.
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取Last update time in ISO 8601 format.
                     * @return LastModifiedDate Last update time in ISO 8601 format.
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置Last update time in ISO 8601 format.
                     * @param _lastModifiedDate Last update time in ISO 8601 format.
                     * 
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取Unique authorization type ID.
                     * @return AuthorizationId Unique authorization type ID.
                     * 
                     */
                    std::string GetAuthorizationId() const;

                    /**
                     * 设置Unique authorization type ID.
                     * @param _authorizationId Unique authorization type ID.
                     * 
                     */
                    void SetAuthorizationId(const std::string& _authorizationId);

                    /**
                     * 判断参数 AuthorizationId 是否已赋值
                     * @return AuthorizationId 是否已赋值
                     * 
                     */
                    bool AuthorizationIdHasBeenSet() const;

                private:

                    /**
                     * Unique application ID.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Type name.
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * Unique type ID.
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * Last update time in ISO 8601 format.
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * Unique authorization type ID.
                     */
                    std::string m_authorizationId;
                    bool m_authorizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFO_H_
