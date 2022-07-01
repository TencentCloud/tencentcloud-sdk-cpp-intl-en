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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINGROUP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecord.h>
#include <tencentcloud/teo/v20220106/model/OriginCheckOriginStatus.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Origin group information
                */
                class OriginGroup : public AbstractModel
                {
                public:
                    OriginGroup();
                    ~OriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin group ID
                     * @return OriginId Origin group ID
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置Origin group ID
                     * @param OriginId Origin group ID
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取Origin group name
                     * @return OriginName Origin group name
                     */
                    std::string GetOriginName() const;

                    /**
                     * 设置Origin group name
                     * @param OriginName Origin group name
                     */
                    void SetOriginName(const std::string& _originName);

                    /**
                     * 判断参数 OriginName 是否已赋值
                     * @return OriginName 是否已赋值
                     */
                    bool OriginNameHasBeenSet() const;

                    /**
                     * 获取Origin server type
                     * @return Type Origin server type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin server type
                     * @param Type Origin server type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Record
                     * @return Record Record
                     */
                    std::vector<OriginRecord> GetRecord() const;

                    /**
                     * 设置Record
                     * @param Record Record
                     */
                    void SetRecord(const std::vector<OriginRecord>& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param UpdateTime Update time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取Site name
                     * @return ZoneName Site name
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name
                     * @param ZoneName Site name
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Origin server type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginType Origin server type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param OriginType Origin server type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Whether the origin group is used for layer-4 proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ApplicationProxyUsed Whether the origin group is used for layer-4 proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetApplicationProxyUsed() const;

                    /**
                     * 设置Whether the origin group is used for layer-4 proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ApplicationProxyUsed Whether the origin group is used for layer-4 proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetApplicationProxyUsed(const bool& _applicationProxyUsed);

                    /**
                     * 判断参数 ApplicationProxyUsed 是否已赋值
                     * @return ApplicationProxyUsed 是否已赋值
                     */
                    bool ApplicationProxyUsedHasBeenSet() const;

                    /**
                     * 获取Whether the origin group is used for load balancing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return LoadBalancingUsed Whether the origin group is used for load balancing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetLoadBalancingUsed() const;

                    /**
                     * 设置Whether the origin group is used for load balancing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param LoadBalancingUsed Whether the origin group is used for load balancing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetLoadBalancingUsed(const bool& _loadBalancingUsed);

                    /**
                     * 判断参数 LoadBalancingUsed 是否已赋值
                     * @return LoadBalancingUsed 是否已赋值
                     */
                    bool LoadBalancingUsedHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     */
                    OriginCheckOriginStatus GetStatus() const;

                    /**
                     * 设置
                     * @param Status 
                     */
                    void SetStatus(const OriginCheckOriginStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return LoadBalancingUsedType 
                     */
                    std::string GetLoadBalancingUsedType() const;

                    /**
                     * 设置
                     * @param LoadBalancingUsedType 
                     */
                    void SetLoadBalancingUsedType(const std::string& _loadBalancingUsedType);

                    /**
                     * 判断参数 LoadBalancingUsedType 是否已赋值
                     * @return LoadBalancingUsedType 是否已赋值
                     */
                    bool LoadBalancingUsedTypeHasBeenSet() const;

                private:

                    /**
                     * Origin group ID
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Origin group name
                     */
                    std::string m_originName;
                    bool m_originNameHasBeenSet;

                    /**
                     * Origin server type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Record
                     */
                    std::vector<OriginRecord> m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Origin server type
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Whether the origin group is used for layer-4 proxy
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_applicationProxyUsed;
                    bool m_applicationProxyUsedHasBeenSet;

                    /**
                     * Whether the origin group is used for load balancing
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_loadBalancingUsed;
                    bool m_loadBalancingUsedHasBeenSet;

                    /**
                     * 
                     */
                    OriginCheckOriginStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_loadBalancingUsedType;
                    bool m_loadBalancingUsedTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINGROUP_H_
