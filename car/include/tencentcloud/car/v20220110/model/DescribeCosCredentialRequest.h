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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECOSCREDENTIALREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECOSCREDENTIALREQUEST_H_

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
                * DescribeCosCredential request structure.
                */
                class DescribeCosCredentialRequest : public AbstractModel
                {
                public:
                    DescribeCosCredentialRequest();
                    ~DescribeCosCredentialRequest() = default;
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
                     * 获取Application file name (the file must be a compressed package with a zip/rar/7z file name extension).
                     * @return ApplicationFileName Application file name (the file must be a compressed package with a zip/rar/7z file name extension).
                     * 
                     */
                    std::string GetApplicationFileName() const;

                    /**
                     * 设置Application file name (the file must be a compressed package with a zip/rar/7z file name extension).
                     * @param _applicationFileName Application file name (the file must be a compressed package with a zip/rar/7z file name extension).
                     * 
                     */
                    void SetApplicationFileName(const std::string& _applicationFileName);

                    /**
                     * 判断参数 ApplicationFileName 是否已赋值
                     * @return ApplicationFileName 是否已赋值
                     * 
                     */
                    bool ApplicationFileNameHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application file name (the file must be a compressed package with a zip/rar/7z file name extension).
                     */
                    std::string m_applicationFileName;
                    bool m_applicationFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECOSCREDENTIALREQUEST_H_
