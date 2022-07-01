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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DETAILHOST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DETAILHOST_H_

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
                * Domain name configuration information
                */
                class DetailHost : public AbstractModel
                {
                public:
                    DetailHost();
                    ~DetailHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tencent Cloud account ID
                     * @return AppId Tencent Cloud account ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tencent Cloud account ID
                     * @param AppId Tencent Cloud account ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param ZoneId Site ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Acceleration service status
`process`: Deploying
`online`: Enabled
`offline`: Disabled
                     * @return Status Acceleration service status
`process`: Deploying
`online`: Enabled
`offline`: Disabled
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Acceleration service status
`process`: Deploying
`online`: Enabled
`offline`: Disabled
                     * @param Status Acceleration service status
`process`: Deploying
`online`: Enabled
`offline`: Disabled
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return Host Domain name
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name
                     * @param Host Domain name
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud account ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration service status
`process`: Deploying
`online`: Enabled
`offline`: Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DETAILHOST_H_
