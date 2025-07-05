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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/CreateApplicationSensitiveAPIReq.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateApplicationSensitiveAPI request structure.
                */
                class CreateApplicationSensitiveAPIRequest : public AbstractModel
                {
                public:
                    CreateApplicationSensitiveAPIRequest();
                    ~CreateApplicationSensitiveAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取List of newly-added APIs
                     * @return APIList List of newly-added APIs
                     * 
                     */
                    std::vector<CreateApplicationSensitiveAPIReq> GetAPIList() const;

                    /**
                     * 设置List of newly-added APIs
                     * @param _aPIList List of newly-added APIs
                     * 
                     */
                    void SetAPIList(const std::vector<CreateApplicationSensitiveAPIReq>& _aPIList);

                    /**
                     * 判断参数 APIList 是否已赋值
                     * @return APIList 是否已赋值
                     * 
                     */
                    bool APIListHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * List of newly-added APIs
                     */
                    std::vector<CreateApplicationSensitiveAPIReq> m_aPIList;
                    bool m_aPIListHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEAPPLICATIONSENSITIVEAPIREQUEST_H_
