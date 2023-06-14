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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IMPORTOPENAPIREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IMPORTOPENAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ImportOpenApi request structure.
                */
                class ImportOpenApiRequest : public AbstractModel
                {
                public:
                    ImportOpenApiRequest();
                    ~ImportOpenApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the service associated with the API
                     * @return ServiceId The unique ID of the service associated with the API
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置The unique ID of the service associated with the API
                     * @param _serviceId The unique ID of the service associated with the API
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Content of the openAPI
                     * @return Content Content of the openAPI
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content of the openAPI
                     * @param _content Content of the openAPI
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Format of the content. Values: `YAML` (default), `JSON`
                     * @return EncodeType Format of the content. Values: `YAML` (default), `JSON`
                     * 
                     */
                    std::string GetEncodeType() const;

                    /**
                     * 设置Format of the content. Values: `YAML` (default), `JSON`
                     * @param _encodeType Format of the content. Values: `YAML` (default), `JSON`
                     * 
                     */
                    void SetEncodeType(const std::string& _encodeType);

                    /**
                     * 判断参数 EncodeType 是否已赋值
                     * @return EncodeType 是否已赋值
                     * 
                     */
                    bool EncodeTypeHasBeenSet() const;

                    /**
                     * 获取Version of the content. It can only be `openAPI` for now.
                     * @return ContentVersion Version of the content. It can only be `openAPI` for now.
                     * 
                     */
                    std::string GetContentVersion() const;

                    /**
                     * 设置Version of the content. It can only be `openAPI` for now.
                     * @param _contentVersion Version of the content. It can only be `openAPI` for now.
                     * 
                     */
                    void SetContentVersion(const std::string& _contentVersion);

                    /**
                     * 判断参数 ContentVersion 是否已赋值
                     * @return ContentVersion 是否已赋值
                     * 
                     */
                    bool ContentVersionHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the service associated with the API
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Content of the openAPI
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Format of the content. Values: `YAML` (default), `JSON`
                     */
                    std::string m_encodeType;
                    bool m_encodeTypeHasBeenSet;

                    /**
                     * Version of the content. It can only be `openAPI` for now.
                     */
                    std::string m_contentVersion;
                    bool m_contentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IMPORTOPENAPIREQUEST_H_
