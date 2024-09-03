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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * CreateApplicationSnapshot request structure.
                */
                class CreateApplicationSnapshotRequest : public AbstractModel
                {
                public:
                    CreateApplicationSnapshotRequest();
                    ~CreateApplicationSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return ApplicationId Application ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID.
                     * @param _applicationId Application ID.
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
                     * 获取Application download address (if the version is created by file upload, this parameter is an empty string).
                     * @return ApplicationDownloadUrl Application download address (if the version is created by file upload, this parameter is an empty string).
                     * 
                     */
                    std::string GetApplicationDownloadUrl() const;

                    /**
                     * 设置Application download address (if the version is created by file upload, this parameter is an empty string).
                     * @param _applicationDownloadUrl Application download address (if the version is created by file upload, this parameter is an empty string).
                     * 
                     */
                    void SetApplicationDownloadUrl(const std::string& _applicationDownloadUrl);

                    /**
                     * 判断参数 ApplicationDownloadUrl 是否已赋值
                     * @return ApplicationDownloadUrl 是否已赋值
                     * 
                     */
                    bool ApplicationDownloadUrlHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application download address (if the version is created by file upload, this parameter is an empty string).
                     */
                    std::string m_applicationDownloadUrl;
                    bool m_applicationDownloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONSNAPSHOTREQUEST_H_
