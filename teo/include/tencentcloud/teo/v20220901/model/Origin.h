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
                     * 获取Origin server list.
                     * @return Origins Origin server list.
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Origin server list.
                     * @param _origins Origin server list.
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
                     * 获取Backup origin list.
                     * @return BackupOrigins Backup origin list.
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置Backup origin list.
                     * @param _backupOrigins Backup origin list.
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
                     * 获取Origin server protocol configuration. valid values:.
<Li>Http: forced http back to source;</li>.
<Li>`Follow`: follow protocol.</li>.
<Li>Https: enforce https origin-pull.</li>.
                     * @return OriginPullProtocol Origin server protocol configuration. valid values:.
<Li>Http: forced http back to source;</li>.
<Li>`Follow`: follow protocol.</li>.
<Li>Https: enforce https origin-pull.</li>.
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置Origin server protocol configuration. valid values:.
<Li>Http: forced http back to source;</li>.
<Li>`Follow`: follow protocol.</li>.
<Li>Https: enforce https origin-pull.</li>.
                     * @param _originPullProtocol Origin server protocol configuration. valid values:.
<Li>Http: forced http back to source;</li>.
<Li>`Follow`: follow protocol.</li>.
<Li>Https: enforce https origin-pull.</li>.
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
                     * 获取When the origin is tencent cloud COS, whether it is a private access bucket. valid values:.
<li>`on`: private network access;</li>.
<li>`off`: public access.</li>.
                     * @return CosPrivateAccess When the origin is tencent cloud COS, whether it is a private access bucket. valid values:.
<li>`on`: private network access;</li>.
<li>`off`: public access.</li>.
                     * 
                     */
                    std::string GetCosPrivateAccess() const;

                    /**
                     * 设置When the origin is tencent cloud COS, whether it is a private access bucket. valid values:.
<li>`on`: private network access;</li>.
<li>`off`: public access.</li>.
                     * @param _cosPrivateAccess When the origin is tencent cloud COS, whether it is a private access bucket. valid values:.
<li>`on`: private network access;</li>.
<li>`off`: public access.</li>.
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
                     * Origin server list.
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Backup origin list.
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * Origin server protocol configuration. valid values:.
<Li>Http: forced http back to source;</li>.
<Li>`Follow`: follow protocol.</li>.
<Li>Https: enforce https origin-pull.</li>.
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * When the origin is tencent cloud COS, whether it is a private access bucket. valid values:.
<li>`on`: private network access;</li>.
<li>`off`: public access.</li>.
                     */
                    std::string m_cosPrivateAccess;
                    bool m_cosPrivateAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGIN_H_
