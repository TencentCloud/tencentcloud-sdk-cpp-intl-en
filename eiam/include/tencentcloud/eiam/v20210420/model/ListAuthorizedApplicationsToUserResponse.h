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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/ApplicationAuthorizationInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListAuthorizedApplicationsToUser response structure.
                */
                class ListAuthorizedApplicationsToUserResponse : public AbstractModel
                {
                public:
                    ListAuthorizedApplicationsToUserResponse();
                    ~ListAuthorizedApplicationsToUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of information of the applications accessible to the user.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationAuthorizationInfo List of information of the applications accessible to the user.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApplicationAuthorizationInfo> GetApplicationAuthorizationInfo() const;

                    /**
                     * 判断参数 ApplicationAuthorizationInfo 是否已赋值
                     * @return ApplicationAuthorizationInfo 是否已赋值
                     * 
                     */
                    bool ApplicationAuthorizationInfoHasBeenSet() const;

                private:

                    /**
                     * List of information of the applications accessible to the user.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApplicationAuthorizationInfo> m_applicationAuthorizationInfo;
                    bool m_applicationAuthorizationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAUTHORIZEDAPPLICATIONSTOUSERRESPONSE_H_
