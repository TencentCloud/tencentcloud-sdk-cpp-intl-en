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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPLICATIONCONFIGINFO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPLICATIONCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Application configuration info
                */
                class ApplicationConfigInfo : public AbstractModel
                {
                public:
                    ApplicationConfigInfo();
                    ~ApplicationConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Superapp configuration type: 1 Non-production, 2 Production
                     * @return ApplicationType Superapp configuration type: 1 Non-production, 2 Production
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Superapp configuration type: 1 Non-production, 2 Production
                     * @param _applicationType Superapp configuration type: 1 Non-production, 2 Production
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Superapp package name
                     * @return AppKey Superapp package name
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置Superapp package name
                     * @param _appKey Superapp package name
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取Superapp URL
                     * @return AppURL Superapp URL
                     * 
                     */
                    std::string GetAppURL() const;

                    /**
                     * 设置Superapp URL
                     * @param _appURL Superapp URL
                     * 
                     */
                    void SetAppURL(const std::string& _appURL);

                    /**
                     * 判断参数 AppURL 是否已赋值
                     * @return AppURL 是否已赋值
                     * 
                     */
                    bool AppURLHasBeenSet() const;

                    /**
                     * 获取Superapp configuration ID
                     * @return Id Superapp configuration ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Superapp configuration ID
                     * @param _id Superapp configuration ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Superapp configuration type: 1 Non-production, 2 Production
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Superapp package name
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * Superapp URL
                     */
                    std::string m_appURL;
                    bool m_appURLHasBeenSet;

                    /**
                     * Superapp configuration ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPLICATIONCONFIGINFO_H_
