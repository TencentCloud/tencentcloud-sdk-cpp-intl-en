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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICECONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/CosConfig.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ServiceConfig information
                */
                class ServiceConfig : public AbstractModel
                {
                public:
                    ServiceConfig();
                    ~ServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The backend type. It’s available when `vpc` is enabled. Values: `clb`, `cvm` and `upstream`.
                     * @return Product The backend type. It’s available when `vpc` is enabled. Values: `clb`, `cvm` and `upstream`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置The backend type. It’s available when `vpc` is enabled. Values: `clb`, `cvm` and `upstream`.
                     * @param _product The backend type. It’s available when `vpc` is enabled. Values: `clb`, `cvm` and `upstream`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Unique VPC ID.
                     * @return UniqVpcId Unique VPC ID.
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unique VPC ID.
                     * @param _uniqVpcId Unique VPC ID.
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取API backend service URL, which is required if `ServiceType` is `HTTP`.
                     * @return Url API backend service URL, which is required if `ServiceType` is `HTTP`.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置API backend service URL, which is required if `ServiceType` is `HTTP`.
                     * @param _url API backend service URL, which is required if `ServiceType` is `HTTP`.
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
                     * 获取API backend service path, such as `/path`, which is required if `ServiceType` is `HTTP`. The frontend and backend paths can be different.
                     * @return Path API backend service path, such as `/path`, which is required if `ServiceType` is `HTTP`. The frontend and backend paths can be different.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API backend service path, such as `/path`, which is required if `ServiceType` is `HTTP`. The frontend and backend paths can be different.
                     * @param _path API backend service path, such as `/path`, which is required if `ServiceType` is `HTTP`. The frontend and backend paths can be different.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API backend service request method, such as `GET`, which is required if `ServiceType` is `HTTP`. The frontend and backend methods can be different
                     * @return Method API backend service request method, such as `GET`, which is required if `ServiceType` is `HTTP`. The frontend and backend methods can be different
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API backend service request method, such as `GET`, which is required if `ServiceType` is `HTTP`. The frontend and backend methods can be different
                     * @param _method API backend service request method, such as `GET`, which is required if `ServiceType` is `HTTP`. The frontend and backend methods can be different
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取It’s required for `upstream`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @return UpstreamId It’s required for `upstream`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置It’s required for `upstream`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * @param _upstreamId It’s required for `upstream`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     * 
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     * 
                     */
                    bool UpstreamIdHasBeenSet() const;

                    /**
                     * 获取API backend COS configuration. It’s required if the `ServiceType` is ·`COS`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CosConfig API backend COS configuration. It’s required if the `ServiceType` is ·`COS`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    CosConfig GetCosConfig() const;

                    /**
                     * 设置API backend COS configuration. It’s required if the `ServiceType` is ·`COS`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cosConfig API backend COS configuration. It’s required if the `ServiceType` is ·`COS`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosConfig(const CosConfig& _cosConfig);

                    /**
                     * 判断参数 CosConfig 是否已赋值
                     * @return CosConfig 是否已赋值
                     * 
                     */
                    bool CosConfigHasBeenSet() const;

                private:

                    /**
                     * The backend type. It’s available when `vpc` is enabled. Values: `clb`, `cvm` and `upstream`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Unique VPC ID.
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * API backend service URL, which is required if `ServiceType` is `HTTP`.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * API backend service path, such as `/path`, which is required if `ServiceType` is `HTTP`. The frontend and backend paths can be different.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API backend service request method, such as `GET`, which is required if `ServiceType` is `HTTP`. The frontend and backend methods can be different
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * It’s required for `upstream`.
Note: This field may return `NULL`, indicating that no valid value was found.
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                    /**
                     * API backend COS configuration. It’s required if the `ServiceType` is ·`COS`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    CosConfig m_cosConfig;
                    bool m_cosConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICECONFIG_H_
