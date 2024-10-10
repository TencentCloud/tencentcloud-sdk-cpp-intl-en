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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIDOCREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIDOCREQUEST_H_

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
                * ModifyAPIDoc request structure.
                */
                class ModifyAPIDocRequest : public AbstractModel
                {
                public:
                    ModifyAPIDocRequest();
                    ~ModifyAPIDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API document name
                     * @return ApiDocName API document name
                     * 
                     */
                    std::string GetApiDocName() const;

                    /**
                     * 设置API document name
                     * @param _apiDocName API document name
                     * 
                     */
                    void SetApiDocName(const std::string& _apiDocName);

                    /**
                     * 判断参数 ApiDocName 是否已赋值
                     * @return ApiDocName 是否已赋值
                     * 
                     */
                    bool ApiDocNameHasBeenSet() const;

                    /**
                     * 获取Service name
                     * @return ServiceId Service name
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service name
                     * @param _serviceId Service name
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
                     * 获取Environment name
                     * @return Environment Environment name
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Environment name
                     * @param _environment Environment name
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取List of APIs for which to generate documents
                     * @return ApiIds List of APIs for which to generate documents
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置List of APIs for which to generate documents
                     * @param _apiIds List of APIs for which to generate documents
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                    /**
                     * 获取API document ID
                     * @return ApiDocId API document ID
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API document ID
                     * @param _apiDocId API document ID
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                private:

                    /**
                     * API document name
                     */
                    std::string m_apiDocName;
                    bool m_apiDocNameHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Environment name
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * List of APIs for which to generate documents
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                    /**
                     * API document ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIDOCREQUEST_H_
