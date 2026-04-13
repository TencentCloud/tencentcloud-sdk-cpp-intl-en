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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PREFETCHORIGINLIMIT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PREFETCHORIGINLIMIT_H_

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
                * Origin speed limit details.
                */
                class PrefetchOriginLimit : public AbstractModel
                {
                public:
                    PrefetchOriginLimit();
                    ~PrefetchOriginLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Acceleration domain name.
                     * @return DomainName Acceleration domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Acceleration domain name.
                     * @param _domainName Acceleration domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * @return Area Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * @param _area Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * @return Bandwidth Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * @param _bandwidth Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Describes the time when the origin-pull speed limit was created.
                     * @return CreateTime Describes the time when the origin-pull speed limit was created.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Describes the time when the origin-pull speed limit was created.
                     * @param _createTime Describes the time when the origin-pull speed limit was created.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Describes the time when the origin-pull speed limit is updated.
                     * @return UpdateTime Describes the time when the origin-pull speed limit is updated.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Describes the time when the origin-pull speed limit is updated.
                     * @param _updateTime Describes the time when the origin-pull speed limit is updated.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Acceleration domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Specifies the acceleration region with origin-pull speed limit.
During preheating, the acceleration region will be subject to the configured Bandwidth value limit. valid values:.
<Li>Overseas: global availability zone (excluding the chinese mainland);</li>.
<Li>MainlandChina: chinese mainland availability zone.</li>.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies the bandwidth limit for origin-pull.
Specifies the upper limit of bandwidth returning to the origin server during preheating. value ranges from 100 to 100,000 Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Describes the time when the origin-pull speed limit was created.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Describes the time when the origin-pull speed limit is updated.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PREFETCHORIGINLIMIT_H_
