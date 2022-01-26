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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESAPISSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESAPISSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API status details
                */
                class DesApisStatus : public AbstractModel
                {
                public:
                    DesApisStatus();
                    ~DesApisStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
                     * @param ServiceId Unique service ID.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Unique API ID.
                     * @return ApiId Unique API ID.
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
                     * @param ApiId Unique API ID.
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Custom API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiDesc Custom API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置Custom API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiDesc Custom API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiName API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiName API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpcId Unique VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UniqVpcId Unique VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiType API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiType API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol API protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置API protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Protocol API protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Whether to enable debugging after purchase (reserved field for the marketplace)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDebugAfterCharge Whether to enable debugging after purchase (reserved field for the marketplace)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsDebugAfterCharge() const;

                    /**
                     * 设置Whether to enable debugging after purchase (reserved field for the marketplace)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsDebugAfterCharge Whether to enable debugging after purchase (reserved field for the marketplace)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsDebugAfterCharge(const bool& _isDebugAfterCharge);

                    /**
                     * 判断参数 IsDebugAfterCharge 是否已赋值
                     * @return IsDebugAfterCharge 是否已赋值
                     */
                    bool IsDebugAfterChargeHasBeenSet() const;

                    /**
                     * 获取API authentication type. Valid values: `SECRET` (key pair authentication), `NONE` (no authentication), `OAUTH`, and `EIAM`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AuthType API authentication type. Valid values: `SECRET` (key pair authentication), `NONE` (no authentication), `OAUTH`, and `EIAM`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置API authentication type. Valid values: `SECRET` (key pair authentication), `NONE` (no authentication), `OAUTH`, and `EIAM`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AuthType API authentication type. Valid values: `SECRET` (key pair authentication), `NONE` (no authentication), `OAUTH`, and `EIAM`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取OAuth API type, which is valid if `AuthType` is `OAUTH`. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiBusinessType OAuth API type, which is valid if `AuthType` is `OAUTH`. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiBusinessType() const;

                    /**
                     * 设置OAuth API type, which is valid if `AuthType` is `OAUTH`. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiBusinessType OAuth API type, which is valid if `AuthType` is `OAUTH`. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiBusinessType(const std::string& _apiBusinessType);

                    /**
                     * 判断参数 ApiBusinessType 是否已赋值
                     * @return ApiBusinessType 是否已赋值
                     */
                    bool ApiBusinessTypeHasBeenSet() const;

                    /**
                     * 获取Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthRelationApiId Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthRelationApiId() const;

                    /**
                     * 设置Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AuthRelationApiId Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthRelationApiId(const std::string& _authRelationApiId);

                    /**
                     * 判断参数 AuthRelationApiId 是否已赋值
                     * @return AuthRelationApiId 是否已赋值
                     */
                    bool AuthRelationApiIdHasBeenSet() const;

                    /**
                     * 获取OAuth configuration information, which takes effect if `AuthType` is `OAUTH`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OauthConfig OAuth configuration information, which takes effect if `AuthType` is `OAUTH`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OauthConfig GetOauthConfig() const;

                    /**
                     * 设置OAuth configuration information, which takes effect if `AuthType` is `OAUTH`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OauthConfig OAuth configuration information, which takes effect if `AuthType` is `OAUTH`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOauthConfig(const OauthConfig& _oauthConfig);

                    /**
                     * 判断参数 OauthConfig 是否已赋值
                     * @return OauthConfig 是否已赋值
                     */
                    bool OauthConfigHasBeenSet() const;

                    /**
                     * 获取List of business APIs associated with authorization API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RelationBuniessApiIds List of business APIs associated with authorization API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRelationBuniessApiIds() const;

                    /**
                     * 设置List of business APIs associated with authorization API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RelationBuniessApiIds List of business APIs associated with authorization API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRelationBuniessApiIds(const std::vector<std::string>& _relationBuniessApiIds);

                    /**
                     * 判断参数 RelationBuniessApiIds 是否已赋值
                     * @return RelationBuniessApiIds 是否已赋值
                     */
                    bool RelationBuniessApiIdsHasBeenSet() const;

                    /**
                     * 获取Information of tags associated with API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Information of tags associated with API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Information of tags associated with API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Information of tags associated with API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取API path, such as `/path`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Path API path, such as `/path`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API path, such as `/path`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Path API path, such as `/path`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API request method, such as `GET`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Method API request method, such as `GET`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API request method, such as `GET`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Method API request method, such as `GET`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique API ID.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Custom API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique VPC ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API protocol.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Whether to enable debugging after purchase (reserved field for the marketplace)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDebugAfterCharge;
                    bool m_isDebugAfterChargeHasBeenSet;

                    /**
                     * API authentication type. Valid values: `SECRET` (key pair authentication), `NONE` (no authentication), `OAUTH`, and `EIAM`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * OAuth API type, which is valid if `AuthType` is `OAUTH`. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiBusinessType;
                    bool m_apiBusinessTypeHasBeenSet;

                    /**
                     * Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authRelationApiId;
                    bool m_authRelationApiIdHasBeenSet;

                    /**
                     * OAuth configuration information, which takes effect if `AuthType` is `OAUTH`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OauthConfig m_oauthConfig;
                    bool m_oauthConfigHasBeenSet;

                    /**
                     * List of business APIs associated with authorization API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_relationBuniessApiIds;
                    bool m_relationBuniessApiIdsHasBeenSet;

                    /**
                     * Information of tags associated with API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * API path, such as `/path`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API request method, such as `GET`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESAPISSTATUS_H_
