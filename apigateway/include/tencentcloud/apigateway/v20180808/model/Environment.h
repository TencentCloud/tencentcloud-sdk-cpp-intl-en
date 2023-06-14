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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENT_H_

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
                * Information of service release environment.
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment name.
                     * @return EnvironmentName Environment name.
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name.
                     * @param _environmentName Environment name.
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
                     * 获取Access path.
                     * @return Url Access path.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Access path.
                     * @param _url Access path.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Release status. 1: published. 0: not published.
                     * @return Status Release status. 1: published. 0: not published.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Release status. 1: published. 0: not published.
                     * @param _status Release status. 1: published. 0: not published.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Running version.
                     * @return VersionName Running version.
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Running version.
                     * @param _versionName Running version.
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                private:

                    /**
                     * Environment name.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Access path.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Release status. 1: published. 0: not published.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Running version.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENT_H_
