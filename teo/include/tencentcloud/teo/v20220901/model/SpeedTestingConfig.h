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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The site test configuration
                */
                class SpeedTestingConfig : public AbstractModel
                {
                public:
                    SpeedTestingConfig();
                    ~SpeedTestingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task type. Values:
<li>`1`: Page performance</li>
<li>`2`: File uploads</li>
<li>`3`: File downloads</li>
<li>`4`: Port performance</li>
<li>`5`: Network quality</li>
<li>`6`: Audio/Video experience</li>
                     * @return TaskType The task type. Values:
<li>`1`: Page performance</li>
<li>`2`: File uploads</li>
<li>`3`: File downloads</li>
<li>`4`: Port performance</li>
<li>`5`: Network quality</li>
<li>`6`: Audio/Video experience</li>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置The task type. Values:
<li>`1`: Page performance</li>
<li>`2`: File uploads</li>
<li>`3`: File downloads</li>
<li>`4`: Port performance</li>
<li>`5`: Network quality</li>
<li>`6`: Audio/Video experience</li>
                     * @param _taskType The task type. Values:
<li>`1`: Page performance</li>
<li>`2`: File uploads</li>
<li>`3`: File downloads</li>
<li>`4`: Port performance</li>
<li>`5`: Network quality</li>
<li>`6`: Audio/Video experience</li>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取The URL.
                     * @return Url The URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL.
                     * @param _url The URL.
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
                     * 获取The user agent.
                     * @return UA The user agent.
                     * 
                     */
                    std::string GetUA() const;

                    /**
                     * 设置The user agent.
                     * @param _uA The user agent.
                     * 
                     */
                    void SetUA(const std::string& _uA);

                    /**
                     * 判断参数 UA 是否已赋值
                     * @return UA 是否已赋值
                     * 
                     */
                    bool UAHasBeenSet() const;

                    /**
                     * 获取The network type.
                     * @return Connectivity The network type.
                     * 
                     */
                    std::string GetConnectivity() const;

                    /**
                     * 设置The network type.
                     * @param _connectivity The network type.
                     * 
                     */
                    void SetConnectivity(const std::string& _connectivity);

                    /**
                     * 判断参数 Connectivity 是否已赋值
                     * @return Connectivity 是否已赋值
                     * 
                     */
                    bool ConnectivityHasBeenSet() const;

                private:

                    /**
                     * The task type. Values:
<li>`1`: Page performance</li>
<li>`2`: File uploads</li>
<li>`3`: File downloads</li>
<li>`4`: Port performance</li>
<li>`5`: Network quality</li>
<li>`6`: Audio/Video experience</li>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * The URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The user agent.
                     */
                    std::string m_uA;
                    bool m_uAHasBeenSet;

                    /**
                     * The network type.
                     */
                    std::string m_connectivity;
                    bool m_connectivityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SPEEDTESTINGCONFIG_H_
