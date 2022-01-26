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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICEENVIRONMENTSTRATEGY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICEENVIRONMENTSTRATEGY_H_

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
                * Service environment policy
                */
                class ServiceEnvironmentStrategy : public AbstractModel
                {
                public:
                    ServiceEnvironmentStrategy();
                    ~ServiceEnvironmentStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment name.
                     * @return EnvironmentName Environment name.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name.
                     * @param EnvironmentName Environment name.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Access service environment URL.
                     * @return Url Access service environment URL.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Access service environment URL.
                     * @param Url Access service environment URL.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Release status.
                     * @return Status Release status.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Release status.
                     * @param Status Release status.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Published version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VersionName Published version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Published version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param VersionName Published version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Throttling value.
                     * @return Strategy Throttling value.
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Throttling value.
                     * @param Strategy Throttling value.
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Maximum quota value
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxStrategy Maximum quota value
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxStrategy() const;

                    /**
                     * 设置Maximum quota value
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxStrategy Maximum quota value
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxStrategy(const int64_t& _maxStrategy);

                    /**
                     * 判断参数 MaxStrategy 是否已赋值
                     * @return MaxStrategy 是否已赋值
                     */
                    bool MaxStrategyHasBeenSet() const;

                private:

                    /**
                     * Environment name.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Access service environment URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Release status.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Published version number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Throttling value.
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Maximum quota value
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxStrategy;
                    bool m_maxStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICEENVIRONMENTSTRATEGY_H_
