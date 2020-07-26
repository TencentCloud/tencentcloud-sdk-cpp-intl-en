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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RELEASESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RELEASESERVICEREQUEST_H_

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
                * ReleaseService request structure.
                */
                class ReleaseServiceRequest : public AbstractModel
                {
                public:
                    ReleaseServiceRequest();
                    ~ReleaseServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the service to be published.
                     * @return ServiceId Unique ID of the service to be published.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be published.
                     * @param ServiceId Unique ID of the service to be published.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Name of the environment to be published. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * @return EnvironmentName Name of the environment to be published. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Name of the environment to be published. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * @param EnvironmentName Name of the environment to be published. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Release description.
                     * @return ReleaseDesc Release description.
                     */
                    std::string GetReleaseDesc() const;

                    /**
                     * 设置Release description.
                     * @param ReleaseDesc Release description.
                     */
                    void SetReleaseDesc(const std::string& _releaseDesc);

                    /**
                     * 判断参数 ReleaseDesc 是否已赋值
                     * @return ReleaseDesc 是否已赋值
                     */
                    bool ReleaseDescHasBeenSet() const;

                    /**
                     * 获取`apiId` list, which is reserved. Full API release is used by default.
                     * @return ApiIds `apiId` list, which is reserved. Full API release is used by default.
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置`apiId` list, which is reserved. Full API release is used by default.
                     * @param ApiIds `apiId` list, which is reserved. Full API release is used by default.
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     */
                    bool ApiIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be published.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Name of the environment to be published. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Release description.
                     */
                    std::string m_releaseDesc;
                    bool m_releaseDescHasBeenSet;

                    /**
                     * `apiId` list, which is reserved. Full API release is used by default.
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_RELEASESERVICEREQUEST_H_
