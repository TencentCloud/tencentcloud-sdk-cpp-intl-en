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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Application information
                */
                class ApiAppInfo : public AbstractModel
                {
                public:
                    ApiAppInfo();
                    ~ApiAppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppName Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiAppName() const;

                    /**
                     * 设置Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppName Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppName(const std::string& _apiAppName);

                    /**
                     * 判断参数 ApiAppName 是否已赋值
                     * @return ApiAppName 是否已赋值
                     * 
                     */
                    bool ApiAppNameHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ApiAppId Application ID
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置Application ID
                     * @param _apiAppId Application ID
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取Application SECRET
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppSecret Application SECRET
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiAppSecret() const;

                    /**
                     * 设置Application SECRET
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppSecret Application SECRET
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppSecret(const std::string& _apiAppSecret);

                    /**
                     * 判断参数 ApiAppSecret 是否已赋值
                     * @return ApiAppSecret 是否已赋值
                     * 
                     */
                    bool ApiAppSecretHasBeenSet() const;

                    /**
                     * 获取Application description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppDesc Application description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiAppDesc() const;

                    /**
                     * 设置Application description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppDesc Application description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppDesc(const std::string& _apiAppDesc);

                    /**
                     * 判断参数 ApiAppDesc 是否已赋值
                     * @return ApiAppDesc 是否已赋值
                     * 
                     */
                    bool ApiAppDescHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _modifiedTime Modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取Application KEY
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppKey Application KEY
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiAppKey() const;

                    /**
                     * 设置Application KEY
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppKey Application KEY
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppKey(const std::string& _apiAppKey);

                    /**
                     * 判断参数 ApiAppKey 是否已赋值
                     * @return ApiAppKey 是否已赋值
                     * 
                     */
                    bool ApiAppKeyHasBeenSet() const;

                private:

                    /**
                     * Application name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiAppName;
                    bool m_apiAppNameHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * Application SECRET
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiAppSecret;
                    bool m_apiAppSecretHasBeenSet;

                    /**
                     * Application description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiAppDesc;
                    bool m_apiAppDescHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Modification time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * Application KEY
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiAppKey;
                    bool m_apiAppKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFO_H_
