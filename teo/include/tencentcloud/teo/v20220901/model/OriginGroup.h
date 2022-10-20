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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Origin group information.
                */
                class OriginGroup : public AbstractModel
                {
                public:
                    OriginGroup();
                    ~OriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The site name.
                     * @return ZoneName The site name.
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置The site name.
                     * @param ZoneName The site name.
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取The ID of the origin group.
                     * @return OriginGroupId The ID of the origin group.
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置The ID of the origin group.
                     * @param OriginGroupId The ID of the origin group.
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取The origin type. Values:
<li>`self`: Customer origin</li>
<li>`third_party`: Third-party origin</li>
<li>`cos`: Tencent Cloud COS origin</li>
                     * @return OriginType The origin type. Values:
<li>`self`: Customer origin</li>
<li>`third_party`: Third-party origin</li>
<li>`cos`: Tencent Cloud COS origin</li>
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置The origin type. Values:
<li>`self`: Customer origin</li>
<li>`third_party`: Third-party origin</li>
<li>`cos`: Tencent Cloud COS origin</li>
                     * @param OriginType The origin type. Values:
<li>`self`: Customer origin</li>
<li>`third_party`: Third-party origin</li>
<li>`cos`: Tencent Cloud COS origin</li>
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取The name of the origin group.
                     * @return OriginGroupName The name of the origin group.
                     */
                    std::string GetOriginGroupName() const;

                    /**
                     * 设置The name of the origin group.
                     * @param OriginGroupName The name of the origin group.
                     */
                    void SetOriginGroupName(const std::string& _originGroupName);

                    /**
                     * 判断参数 OriginGroupName 是否已赋值
                     * @return OriginGroupName 是否已赋值
                     */
                    bool OriginGroupNameHasBeenSet() const;

                    /**
                     * 获取The origin configuration type when `OriginType=self`. Values:
<li>`area`: Configure by region.</li>
<li>`weight`: Configure by weight.</li>
<li>`proto`: Configure by HTTP protocol.</li>When `OriginType=third_party/cos`, leave this field empty.
                     * @return ConfigurationType The origin configuration type when `OriginType=self`. Values:
<li>`area`: Configure by region.</li>
<li>`weight`: Configure by weight.</li>
<li>`proto`: Configure by HTTP protocol.</li>When `OriginType=third_party/cos`, leave this field empty.
                     */
                    std::string GetConfigurationType() const;

                    /**
                     * 设置The origin configuration type when `OriginType=self`. Values:
<li>`area`: Configure by region.</li>
<li>`weight`: Configure by weight.</li>
<li>`proto`: Configure by HTTP protocol.</li>When `OriginType=third_party/cos`, leave this field empty.
                     * @param ConfigurationType The origin configuration type when `OriginType=self`. Values:
<li>`area`: Configure by region.</li>
<li>`weight`: Configure by weight.</li>
<li>`proto`: Configure by HTTP protocol.</li>When `OriginType=third_party/cos`, leave this field empty.
                     */
                    void SetConfigurationType(const std::string& _configurationType);

                    /**
                     * 判断参数 ConfigurationType 是否已赋值
                     * @return ConfigurationType 是否已赋值
                     */
                    bool ConfigurationTypeHasBeenSet() const;

                    /**
                     * 获取The origin record information.
                     * @return OriginRecords The origin record information.
                     */
                    std::vector<OriginRecord> GetOriginRecords() const;

                    /**
                     * 设置The origin record information.
                     * @param OriginRecords The origin record information.
                     */
                    void SetOriginRecords(const std::vector<OriginRecord>& _originRecords);

                    /**
                     * 判断参数 OriginRecords 是否已赋值
                     * @return OriginRecords 是否已赋值
                     */
                    bool OriginRecordsHasBeenSet() const;

                    /**
                     * 获取The update time of the origin group.
                     * @return UpdateTime The update time of the origin group.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time of the origin group.
                     * @param UpdateTime The update time of the origin group.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return HostHeader 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置
                     * @param HostHeader 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * The ID of the origin group.
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * The origin type. Values:
<li>`self`: Customer origin</li>
<li>`third_party`: Third-party origin</li>
<li>`cos`: Tencent Cloud COS origin</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * The name of the origin group.
                     */
                    std::string m_originGroupName;
                    bool m_originGroupNameHasBeenSet;

                    /**
                     * The origin configuration type when `OriginType=self`. Values:
<li>`area`: Configure by region.</li>
<li>`weight`: Configure by weight.</li>
<li>`proto`: Configure by HTTP protocol.</li>When `OriginType=third_party/cos`, leave this field empty.
                     */
                    std::string m_configurationType;
                    bool m_configurationTypeHasBeenSet;

                    /**
                     * The origin record information.
                     */
                    std::vector<OriginRecord> m_originRecords;
                    bool m_originRecordsHasBeenSet;

                    /**
                     * The update time of the origin group.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
