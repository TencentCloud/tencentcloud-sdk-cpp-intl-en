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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_GENERATEAPIDOCUMENTREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_GENERATEAPIDOCUMENTREQUEST_H_

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
                * GenerateApiDocument request structure.
                */
                class GenerateApiDocumentRequest : public AbstractModel
                {
                public:
                    GenerateApiDocumentRequest();
                    ~GenerateApiDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID of the document to be created.
                     * @return ServiceId Unique service ID of the document to be created.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID of the document to be created.
                     * @param _serviceId Unique service ID of the document to be created.
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
                     * 获取Environment of the service for which to create an SDK.
                     * @return GenEnvironment Environment of the service for which to create an SDK.
                     * 
                     */
                    std::string GetGenEnvironment() const;

                    /**
                     * 设置Environment of the service for which to create an SDK.
                     * @param _genEnvironment Environment of the service for which to create an SDK.
                     * 
                     */
                    void SetGenEnvironment(const std::string& _genEnvironment);

                    /**
                     * 判断参数 GenEnvironment 是否已赋值
                     * @return GenEnvironment 是否已赋值
                     * 
                     */
                    bool GenEnvironmentHasBeenSet() const;

                    /**
                     * 获取Programming language of the SDK to be created. Currently, only Python and JavaScript are supported.
                     * @return GenLanguage Programming language of the SDK to be created. Currently, only Python and JavaScript are supported.
                     * 
                     */
                    std::string GetGenLanguage() const;

                    /**
                     * 设置Programming language of the SDK to be created. Currently, only Python and JavaScript are supported.
                     * @param _genLanguage Programming language of the SDK to be created. Currently, only Python and JavaScript are supported.
                     * 
                     */
                    void SetGenLanguage(const std::string& _genLanguage);

                    /**
                     * 判断参数 GenLanguage 是否已赋值
                     * @return GenLanguage 是否已赋值
                     * 
                     */
                    bool GenLanguageHasBeenSet() const;

                private:

                    /**
                     * Unique service ID of the document to be created.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Environment of the service for which to create an SDK.
                     */
                    std::string m_genEnvironment;
                    bool m_genEnvironmentHasBeenSet;

                    /**
                     * Programming language of the SDK to be created. Currently, only Python and JavaScript are supported.
                     */
                    std::string m_genLanguage;
                    bool m_genLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_GENERATEAPIDOCUMENTREQUEST_H_
