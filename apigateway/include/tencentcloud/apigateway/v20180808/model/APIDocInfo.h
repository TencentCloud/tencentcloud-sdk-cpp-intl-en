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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCINFO_H_

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
                * API document details
                */
                class APIDocInfo : public AbstractModel
                {
                public:
                    APIDocInfo();
                    ~APIDocInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取API document build status
                     * @return ApiDocStatus API document build status
                     * 
                     */
                    std::string GetApiDocStatus() const;

                    /**
                     * 设置API document build status
                     * @param _apiDocStatus API document build status
                     * 
                     */
                    void SetApiDocStatus(const std::string& _apiDocStatus);

                    /**
                     * 判断参数 ApiDocStatus 是否已赋值
                     * @return ApiDocStatus 是否已赋值
                     * 
                     */
                    bool ApiDocStatusHasBeenSet() const;

                    /**
                     * 获取Number of APIs with API documents
                     * @return ApiCount Number of APIs with API documents
                     * 
                     */
                    int64_t GetApiCount() const;

                    /**
                     * 设置Number of APIs with API documents
                     * @param _apiCount Number of APIs with API documents
                     * 
                     */
                    void SetApiCount(const int64_t& _apiCount);

                    /**
                     * 判断参数 ApiCount 是否已赋值
                     * @return ApiCount 是否已赋值
                     * 
                     */
                    bool ApiCountHasBeenSet() const;

                    /**
                     * 获取Number of views of API document
                     * @return ViewCount Number of views of API document
                     * 
                     */
                    int64_t GetViewCount() const;

                    /**
                     * 设置Number of views of API document
                     * @param _viewCount Number of views of API document
                     * 
                     */
                    void SetViewCount(const int64_t& _viewCount);

                    /**
                     * 判断参数 ViewCount 是否已赋值
                     * @return ViewCount 是否已赋值
                     * 
                     */
                    bool ViewCountHasBeenSet() const;

                    /**
                     * 获取Number of releases of API document
                     * @return ReleaseCount Number of releases of API document
                     * 
                     */
                    int64_t GetReleaseCount() const;

                    /**
                     * 设置Number of releases of API document
                     * @param _releaseCount Number of releases of API document
                     * 
                     */
                    void SetReleaseCount(const int64_t& _releaseCount);

                    /**
                     * 判断参数 ReleaseCount 是否已赋值
                     * @return ReleaseCount 是否已赋值
                     * 
                     */
                    bool ReleaseCountHasBeenSet() const;

                    /**
                     * 获取API document access URI
                     * @return ApiDocUri API document access URI
                     * 
                     */
                    std::string GetApiDocUri() const;

                    /**
                     * 设置API document access URI
                     * @param _apiDocUri API document access URI
                     * 
                     */
                    void SetApiDocUri(const std::string& _apiDocUri);

                    /**
                     * 判断参数 ApiDocUri 是否已赋值
                     * @return ApiDocUri 是否已赋值
                     * 
                     */
                    bool ApiDocUriHasBeenSet() const;

                    /**
                     * 获取API document password for sharing
                     * @return SharePassword API document password for sharing
                     * 
                     */
                    std::string GetSharePassword() const;

                    /**
                     * 设置API document password for sharing
                     * @param _sharePassword API document password for sharing
                     * 
                     */
                    void SetSharePassword(const std::string& _sharePassword);

                    /**
                     * 判断参数 SharePassword 是否已赋值
                     * @return SharePassword 是否已赋值
                     * 
                     */
                    bool SharePasswordHasBeenSet() const;

                    /**
                     * 获取API document update time
                     * @return UpdatedTime API document update time
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置API document update time
                     * @param _updatedTime API document update time
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
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
                     * 获取Environment information
                     * @return Environment Environment information
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Environment information
                     * @param _environment Environment information
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
                     * 获取ID of the API for which to generate the API document
                     * @return ApiIds ID of the API for which to generate the API document
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置ID of the API for which to generate the API document
                     * @param _apiIds ID of the API for which to generate the API document
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
                     * 获取Service name
                     * @return ServiceName Service name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
                     * @param _serviceName Service name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Name of the API for which to generate the API document
                     * @return ApiNames Name of the API for which to generate the API document
                     * 
                     */
                    std::vector<std::string> GetApiNames() const;

                    /**
                     * 设置Name of the API for which to generate the API document
                     * @param _apiNames Name of the API for which to generate the API document
                     * 
                     */
                    void SetApiNames(const std::vector<std::string>& _apiNames);

                    /**
                     * 判断参数 ApiNames 是否已赋值
                     * @return ApiNames 是否已赋值
                     * 
                     */
                    bool ApiNamesHasBeenSet() const;

                private:

                    /**
                     * API document ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                    /**
                     * API document name
                     */
                    std::string m_apiDocName;
                    bool m_apiDocNameHasBeenSet;

                    /**
                     * API document build status
                     */
                    std::string m_apiDocStatus;
                    bool m_apiDocStatusHasBeenSet;

                    /**
                     * Number of APIs with API documents
                     */
                    int64_t m_apiCount;
                    bool m_apiCountHasBeenSet;

                    /**
                     * Number of views of API document
                     */
                    int64_t m_viewCount;
                    bool m_viewCountHasBeenSet;

                    /**
                     * Number of releases of API document
                     */
                    int64_t m_releaseCount;
                    bool m_releaseCountHasBeenSet;

                    /**
                     * API document access URI
                     */
                    std::string m_apiDocUri;
                    bool m_apiDocUriHasBeenSet;

                    /**
                     * API document password for sharing
                     */
                    std::string m_sharePassword;
                    bool m_sharePasswordHasBeenSet;

                    /**
                     * API document update time
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Environment information
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * ID of the API for which to generate the API document
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Name of the API for which to generate the API document
                     */
                    std::vector<std::string> m_apiNames;
                    bool m_apiNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCINFO_H_
