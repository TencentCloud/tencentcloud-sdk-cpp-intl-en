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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNRELEASESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNRELEASESERVICEREQUEST_H_

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
                * UnReleaseService request structure.
                */
                class UnReleaseServiceRequest : public AbstractModel
                {
                public:
                    UnReleaseServiceRequest();
                    ~UnReleaseServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the service to be deactivated.
                     * @return ServiceId Unique ID of the service to be deactivated.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be deactivated.
                     * @param ServiceId Unique ID of the service to be deactivated.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Name of the environment to be deactivated. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * @return EnvironmentName Name of the environment to be deactivated. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Name of the environment to be deactivated. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * @param EnvironmentName Name of the environment to be deactivated. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取List of APIs to be deactivated, which is a reserved field.
                     * @return ApiIds List of APIs to be deactivated, which is a reserved field.
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置List of APIs to be deactivated, which is a reserved field.
                     * @param ApiIds List of APIs to be deactivated, which is a reserved field.
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     */
                    bool ApiIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be deactivated.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Name of the environment to be deactivated. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * List of APIs to be deactivated, which is a reserved field.
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNRELEASESERVICEREQUEST_H_
