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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINCHECKORIGINSTATUS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINCHECKORIGINSTATUS_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Origin health status
                */
                class OriginCheckOriginStatus : public AbstractModel
                {
                public:
                    OriginCheckOriginStatus();
                    ~OriginCheckOriginStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`healthy`: Healthy; `unhealthy`: Unhealthy; `process`: Checking origin.
                     * @return Status `healthy`: Healthy; `unhealthy`: Unhealthy; `process`: Checking origin.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置`healthy`: Healthy; `unhealthy`: Unhealthy; `process`: Checking origin.
                     * @param _status `healthy`: Healthy; `unhealthy`: Unhealthy; `process`: Checking origin.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of unhealthy origin groups when `Status = unhealthy`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host List of unhealthy origin groups when `Status = unhealthy`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置List of unhealthy origin groups when `Status = unhealthy`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _host List of unhealthy origin groups when `Status = unhealthy`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * `healthy`: Healthy; `unhealthy`: Unhealthy; `process`: Checking origin.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of unhealthy origin groups when `Status = unhealthy`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINCHECKORIGINSTATUS_H_
