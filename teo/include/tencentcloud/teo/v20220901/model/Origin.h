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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_

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
                * The origin server configuration.
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Primary origin server list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Origins Primary origin server list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Primary origin server list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _origins Primary origin server list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取The list of backup origin servers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupOrigins The list of backup origin servers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置The list of backup origin servers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupOrigins The list of backup origin servers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     * 
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取Origin-pull protocol configuration. Values:
<li>`http`: Force HTTP for origin-pull.</li>
<li>`follow`: Follow protocol.</li>
<li>`https`: Force HTTPS for origin-pull.</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginPullProtocol Origin-pull protocol configuration. Values:
<li>`http`: Force HTTP for origin-pull.</li>
<li>`follow`: Follow protocol.</li>
<li>`https`: Force HTTPS for origin-pull.</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin-pull protocol configuration. Values:
<li>`http`: Force HTTP for origin-pull.</li>
<li>`follow`: Follow protocol.</li>
<li>`https`: Force HTTPS for origin-pull.</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _originPullProtocol Origin-pull protocol configuration. Values:
<li>`http`: Force HTTP for origin-pull.</li>
<li>`follow`: Follow protocol.</li>
<li>`https`: Force HTTPS for origin-pull.</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     * 
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取Whether to allow private access to buckets when `OriginType=cos`. Valid values: 
<li>`on`: Private access;</li>
<li>`off`: Public access.</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CosPrivateAccess Whether to allow private access to buckets when `OriginType=cos`. Valid values: 
<li>`on`: Private access;</li>
<li>`off`: Public access.</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCosPrivateAccess() const;

                    /**
                     * 设置Whether to allow private access to buckets when `OriginType=cos`. Valid values: 
<li>`on`: Private access;</li>
<li>`off`: Public access.</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cosPrivateAccess Whether to allow private access to buckets when `OriginType=cos`. Valid values: 
<li>`on`: Private access;</li>
<li>`off`: Public access.</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosPrivateAccess(const std::string& _cosPrivateAccess);

                    /**
                     * 判断参数 CosPrivateAccess 是否已赋值
                     * @return CosPrivateAccess 是否已赋值
                     * 
                     */
                    bool CosPrivateAccessHasBeenSet() const;

                private:

                    /**
                     * Primary origin server list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * The list of backup origin servers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Origin-pull protocol configuration. Values:
<li>`http`: Force HTTP for origin-pull.</li>
<li>`follow`: Follow protocol.</li>
<li>`https`: Force HTTPS for origin-pull.</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * Whether to allow private access to buckets when `OriginType=cos`. Valid values: 
<li>`on`: Private access;</li>
<li>`off`: Public access.</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cosPrivateAccess;
                    bool m_cosPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
