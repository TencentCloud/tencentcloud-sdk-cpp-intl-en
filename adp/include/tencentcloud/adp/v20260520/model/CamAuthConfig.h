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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AccessKeyParamConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CAM authorization information
                */
                class CamAuthConfig : public AbstractModel
                {
                public:
                    CamAuthConfig();
                    ~CamAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Role name.</p>
                     * @return RoleName <p>Role name.</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>Role name.</p>
                     * @param _roleName <p>Role name.</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>Key location HEADER/QUERY</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Header authentication |<br>| 1 | Request information authentication |</p>
                     * @return KeyLocation <p>Key location HEADER/QUERY</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Header authentication |<br>| 1 | Request information authentication |</p>
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置<p>Key location HEADER/QUERY</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Header authentication |<br>| 1 | Request information authentication |</p>
                     * @param _keyLocation <p>Key location HEADER/QUERY</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Header authentication |<br>| 1 | Request information authentication |</p>
                     * 
                     */
                    void SetKeyLocation(const int64_t& _keyLocation);

                    /**
                     * 判断参数 KeyLocation 是否已赋值
                     * @return KeyLocation 是否已赋值
                     * 
                     */
                    bool KeyLocationHasBeenSet() const;

                    /**
                     * 获取<p>SecretId field name</p>
                     * @return SecretIdName <p>SecretId field name</p>
                     * 
                     */
                    std::string GetSecretIdName() const;

                    /**
                     * 设置<p>SecretId field name</p>
                     * @param _secretIdName <p>SecretId field name</p>
                     * 
                     */
                    void SetSecretIdName(const std::string& _secretIdName);

                    /**
                     * 判断参数 SecretIdName 是否已赋值
                     * @return SecretIdName 是否已赋值
                     * 
                     */
                    bool SecretIdNameHasBeenSet() const;

                    /**
                     * 获取<p>SecretKey field name</p>
                     * @return SecretKeyName <p>SecretKey field name</p>
                     * 
                     */
                    std::string GetSecretKeyName() const;

                    /**
                     * 设置<p>SecretKey field name</p>
                     * @param _secretKeyName <p>SecretKey field name</p>
                     * 
                     */
                    void SetSecretKeyName(const std::string& _secretKeyName);

                    /**
                     * 判断参数 SecretKeyName 是否已赋值
                     * @return SecretKeyName 是否已赋值
                     * 
                     */
                    bool SecretKeyNameHasBeenSet() const;

                    /**
                     * 获取<p>CAM Access Key Field Configuration</p>
                     * @return ParamList <p>CAM Access Key Field Configuration</p>
                     * 
                     */
                    std::vector<AccessKeyParamConfig> GetParamList() const;

                    /**
                     * 设置<p>CAM Access Key Field Configuration</p>
                     * @param _paramList <p>CAM Access Key Field Configuration</p>
                     * 
                     */
                    void SetParamList(const std::vector<AccessKeyParamConfig>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取<p>Whether CAM role authorization is supported.</p>
                     * @return SupportRoleAuth <p>Whether CAM role authorization is supported.</p>
                     * 
                     */
                    bool GetSupportRoleAuth() const;

                    /**
                     * 设置<p>Whether CAM role authorization is supported.</p>
                     * @param _supportRoleAuth <p>Whether CAM role authorization is supported.</p>
                     * 
                     */
                    void SetSupportRoleAuth(const bool& _supportRoleAuth);

                    /**
                     * 判断参数 SupportRoleAuth 是否已赋值
                     * @return SupportRoleAuth 是否已赋值
                     * 
                     */
                    bool SupportRoleAuthHasBeenSet() const;

                private:

                    /**
                     * <p>Role name.</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>Key location HEADER/QUERY</p><p>Enumeration values:<br>| uint | Description |<br>| --- | --- |<br>| 0 | Header authentication |<br>| 1 | Request information authentication |</p>
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * <p>SecretId field name</p>
                     */
                    std::string m_secretIdName;
                    bool m_secretIdNameHasBeenSet;

                    /**
                     * <p>SecretKey field name</p>
                     */
                    std::string m_secretKeyName;
                    bool m_secretKeyNameHasBeenSet;

                    /**
                     * <p>CAM Access Key Field Configuration</p>
                     */
                    std::vector<AccessKeyParamConfig> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>Whether CAM role authorization is supported.</p>
                     */
                    bool m_supportRoleAuth;
                    bool m_supportRoleAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CAMAUTHCONFIG_H_
