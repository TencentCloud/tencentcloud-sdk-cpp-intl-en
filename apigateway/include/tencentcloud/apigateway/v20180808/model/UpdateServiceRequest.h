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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATESERVICEREQUEST_H_

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
                * UpdateService request structure.
                */
                class UpdateServiceRequest : public AbstractModel
                {
                public:
                    UpdateServiceRequest();
                    ~UpdateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the service to be switch.
                     * @return ServiceId Unique ID of the service to be switch.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be switch.
                     * @param _serviceId Unique ID of the service to be switch.
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
                     * 获取Name of the environment to be switched to. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * @return EnvironmentName Name of the environment to be switched to. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Name of the environment to be switched to. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * @param _environmentName Name of the environment to be switched to. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Number of the version to be switched to.
                     * @return VersionName Number of the version to be switched to.
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Number of the version to be switched to.
                     * @param _versionName Number of the version to be switched to.
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Switch description.
                     * @return UpdateDesc Switch description.
                     * 
                     */
                    std::string GetUpdateDesc() const;

                    /**
                     * 设置Switch description.
                     * @param _updateDesc Switch description.
                     * 
                     */
                    void SetUpdateDesc(const std::string& _updateDesc);

                    /**
                     * 判断参数 UpdateDesc 是否已赋值
                     * @return UpdateDesc 是否已赋值
                     * 
                     */
                    bool UpdateDescHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be switch.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Name of the environment to be switched to. Valid values: test (test environment), prepub (pre-release environment), release (release environment).
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Number of the version to be switched to.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Switch description.
                     */
                    std::string m_updateDesc;
                    bool m_updateDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPDATESERVICEREQUEST_H_
