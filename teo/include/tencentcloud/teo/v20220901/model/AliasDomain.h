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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALIASDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALIASDOMAIN_H_

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
                * Alias domain information.
                */
                class AliasDomain : public AbstractModel
                {
                public:
                    AliasDomain();
                    ~AliasDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alias domain name.
                     * @return AliasName Alias domain name.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Alias domain name.
                     * @param _aliasName Alias domain name.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Target domain name.
                     * @return TargetName Target domain name.
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置Target domain name.
                     * @param _targetName Target domain name.
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取Status of the alias domain name. Valid values:
<li> active: effective; </li>
<li> pending: deploying.</li>
<li> conflict: Retrieved. </li>
<li> stop: deactivated;</li>
                     * @return Status Status of the alias domain name. Valid values:
<li> active: effective; </li>
<li> pending: deploying.</li>
<li> conflict: Retrieved. </li>
<li> stop: deactivated;</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the alias domain name. Valid values:
<li> active: effective; </li>
<li> pending: deploying.</li>
<li> conflict: Retrieved. </li>
<li> stop: deactivated;</li>
                     * @param _status Status of the alias domain name. Valid values:
<li> active: effective; </li>
<li> pending: deploying.</li>
<li> conflict: Retrieved. </li>
<li> stop: deactivated;</li>
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
                     * 获取Blocking mode. Valid values:
<li>`0`: not blocked;</li>
<li> 11: Block due to regulatory compliance;</li>
<li> 14: Banned for non-filing.</li>
                     * @return ForbidMode Blocking mode. Valid values:
<li>`0`: not blocked;</li>
<li> 11: Block due to regulatory compliance;</li>
<li> 14: Banned for non-filing.</li>
                     * 
                     */
                    int64_t GetForbidMode() const;

                    /**
                     * 设置Blocking mode. Valid values:
<li>`0`: not blocked;</li>
<li> 11: Block due to regulatory compliance;</li>
<li> 14: Banned for non-filing.</li>
                     * @param _forbidMode Blocking mode. Valid values:
<li>`0`: not blocked;</li>
<li> 11: Block due to regulatory compliance;</li>
<li> 14: Banned for non-filing.</li>
                     * 
                     */
                    void SetForbidMode(const int64_t& _forbidMode);

                    /**
                     * 判断参数 ForbidMode 是否已赋值
                     * @return ForbidMode 是否已赋值
                     * 
                     */
                    bool ForbidModeHasBeenSet() const;

                    /**
                     * 获取Alias domain creation time.
                     * @return CreatedOn Alias domain creation time.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Alias domain creation time.
                     * @param _createdOn Alias domain creation time.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Alias domain name modification time.
                     * @return ModifiedOn Alias domain name modification time.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Alias domain name modification time.
                     * @param _modifiedOn Alias domain name modification time.
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * Alias domain name.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Target domain name.
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Status of the alias domain name. Valid values:
<li> active: effective; </li>
<li> pending: deploying.</li>
<li> conflict: Retrieved. </li>
<li> stop: deactivated;</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Blocking mode. Valid values:
<li>`0`: not blocked;</li>
<li> 11: Block due to regulatory compliance;</li>
<li> 14: Banned for non-filing.</li>
                     */
                    int64_t m_forbidMode;
                    bool m_forbidModeHasBeenSet;

                    /**
                     * Alias domain creation time.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Alias domain name modification time.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALIASDOMAIN_H_
