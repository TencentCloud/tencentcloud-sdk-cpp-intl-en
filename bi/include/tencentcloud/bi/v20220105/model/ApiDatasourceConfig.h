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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APIDATASOURCECONFIG_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APIDATASOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/FrequencyConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * API data source connection configuration
                */
                class ApiDatasourceConfig : public AbstractModel
                {
                public:
                    ApiDatasourceConfig();
                    ~ApiDatasourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API data source parsing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FieldsJsonData API data source parsing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFieldsJsonData() const;

                    /**
                     * 设置API data source parsing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fieldsJsonData API data source parsing result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFieldsJsonData(const std::string& _fieldsJsonData);

                    /**
                     * 判断参数 FieldsJsonData 是否已赋值
                     * @return FieldsJsonData 是否已赋值
                     * 
                     */
                    bool FieldsJsonDataHasBeenSet() const;

                    /**
                     * 获取Connection Type 1: Direct Connection 2: Extraction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConnectionType Connection Type 1: Direct Connection 2: Extraction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConnectionType() const;

                    /**
                     * 设置Connection Type 1: Direct Connection 2: Extraction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _connectionType Connection Type 1: Direct Connection 2: Extraction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConnectionType(const uint64_t& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                    /**
                     * 获取Extraction frequency configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FrequencyConfig Extraction frequency configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FrequencyConfig GetFrequencyConfig() const;

                    /**
                     * 设置Extraction frequency configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _frequencyConfig Extraction frequency configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrequencyConfig(const FrequencyConfig& _frequencyConfig);

                    /**
                     * 判断参数 FrequencyConfig 是否已赋值
                     * @return FrequencyConfig 是否已赋值
                     * 
                     */
                    bool FrequencyConfigHasBeenSet() const;

                    /**
                     * 获取Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取1:GET 2:POST
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestMethod 1:GET 2:POST
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRequestMethod() const;

                    /**
                     * 设置1:GET 2:POST
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestMethod 1:GET 2:POST
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestMethod(const uint64_t& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     * 
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取Request headers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestHeader Request headers
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置Request headers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestHeader Request headers
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestHeader(const std::string& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                    /**
                     * 获取Request parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestParams Request parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestParams() const;

                    /**
                     * 设置Request parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestParams Request parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestParams(const std::string& _requestParams);

                    /**
                     * 判断参数 RequestParams 是否已赋值
                     * @return RequestParams 是否已赋值
                     * 
                     */
                    bool RequestParamsHasBeenSet() const;

                    /**
                     * 获取request body
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestBody request body
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置request body
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestBody request body
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userName Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password Password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password Password.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Valid values: 1: no authentication; 2: BASIC_AUTH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizationType Valid values: 1: no authentication; 2: BASIC_AUTH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAuthorizationType() const;

                    /**
                     * 设置Valid values: 1: no authentication; 2: BASIC_AUTH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authorizationType Valid values: 1: no authentication; 2: BASIC_AUTH.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthorizationType(const uint64_t& _authorizationType);

                    /**
                     * 判断参数 AuthorizationType 是否已赋值
                     * @return AuthorizationType 是否已赋值
                     * 
                     */
                    bool AuthorizationTypeHasBeenSet() const;

                    /**
                     * 获取Table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableId Table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTableId() const;

                    /**
                     * 设置Table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableId Table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableId(const uint64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Mapping path DbName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonPathDbNameMap Mapping path DbName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJsonPathDbNameMap() const;

                    /**
                     * 设置Mapping path DbName
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jsonPathDbNameMap Mapping path DbName
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJsonPathDbNameMap(const std::string& _jsonPathDbNameMap);

                    /**
                     * 判断参数 JsonPathDbNameMap 是否已赋值
                     * @return JsonPathDbNameMap 是否已赋值
                     * 
                     */
                    bool JsonPathDbNameMapHasBeenSet() const;

                    /**
                     * 获取Authentication API
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthApi Authentication API
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthApi() const;

                    /**
                     * 设置Authentication API
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authApi Authentication API
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthApi(const std::string& _authApi);

                    /**
                     * 判断参数 AuthApi 是否已赋值
                     * @return AuthApi 是否已赋值
                     * 
                     */
                    bool AuthApiHasBeenSet() const;

                    /**
                     * 获取Application Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppKey Application Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置Application Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appKey Application Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取application key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppSecret application key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppSecret() const;

                    /**
                     * 设置application key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appSecret application key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppSecret(const std::string& _appSecret);

                    /**
                     * 判断参数 AppSecret 是否已赋值
                     * @return AppSecret 是否已赋值
                     * 
                     */
                    bool AppSecretHasBeenSet() const;

                    /**
                     * 获取Data Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey Data Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Data Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretKey Data Key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Data key initialization vector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretIv Data key initialization vector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretIv() const;

                    /**
                     * 设置Data key initialization vector
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secretIv Data key initialization vector
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretIv(const std::string& _secretIv);

                    /**
                     * 判断参数 SecretIv 是否已赋值
                     * @return SecretIv 是否已赋值
                     * 
                     */
                    bool SecretIvHasBeenSet() const;

                private:

                    /**
                     * API data source parsing result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fieldsJsonData;
                    bool m_fieldsJsonDataHasBeenSet;

                    /**
                     * Connection Type 1: Direct Connection 2: Extraction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                    /**
                     * Extraction frequency configuration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FrequencyConfig m_frequencyConfig;
                    bool m_frequencyConfigHasBeenSet;

                    /**
                     * Request URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 1:GET 2:POST
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * Request headers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                    /**
                     * Request parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestParams;
                    bool m_requestParamsHasBeenSet;

                    /**
                     * request body
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * Username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Password.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Valid values: 1: no authentication; 2: BASIC_AUTH.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_authorizationType;
                    bool m_authorizationTypeHasBeenSet;

                    /**
                     * Table ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Mapping path DbName
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jsonPathDbNameMap;
                    bool m_jsonPathDbNameMapHasBeenSet;

                    /**
                     * Authentication API
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authApi;
                    bool m_authApiHasBeenSet;

                    /**
                     * Application Key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * application key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appSecret;
                    bool m_appSecretHasBeenSet;

                    /**
                     * Data Key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Data key initialization vector
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretIv;
                    bool m_secretIvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APIDATASOURCECONFIG_H_
