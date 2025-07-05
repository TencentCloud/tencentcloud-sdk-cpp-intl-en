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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTER_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC list
                */
                class DedicatedCluster : public AbstractModel
                {
                public:
                    DedicatedCluster();
                    ~DedicatedCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDC id, e.g., cluster-xxxxx.
                     * @return DedicatedClusterId CDC id, e.g., cluster-xxxxx.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC id, e.g., cluster-xxxxx.
                     * @param _dedicatedClusterId CDC id, e.g., cluster-xxxxx.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取Name of AZ to which the CDC belongs
                     * @return Zone Name of AZ to which the CDC belongs
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Name of AZ to which the CDC belongs
                     * @param _zone Name of AZ to which the CDC belongs
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取CDC description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Description CDC description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置CDC description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _description CDC description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取CDC name
                     * @return Name CDC name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置CDC name
                     * @param _name CDC name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Life cycle of the CDC, e.g., PENDING.
                     * @return LifecycleStatus Life cycle of the CDC, e.g., PENDING.
                     * 
                     */
                    std::string GetLifecycleStatus() const;

                    /**
                     * 设置Life cycle of the CDC, e.g., PENDING.
                     * @param _lifecycleStatus Life cycle of the CDC, e.g., PENDING.
                     * 
                     */
                    void SetLifecycleStatus(const std::string& _lifecycleStatus);

                    /**
                     * 判断参数 LifecycleStatus 是否已赋值
                     * @return LifecycleStatus 是否已赋值
                     * 
                     */
                    bool LifecycleStatusHasBeenSet() const;

                    /**
                     * 获取Creation time of the CDC
                     * @return CreateTime Creation time of the CDC
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the CDC
                     * @param _createTime Creation time of the CDC
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
                     * 获取Site id to which the CDC belongs
                     * @return SiteId Site id to which the CDC belongs
                     * 
                     */
                    std::string GetSiteId() const;

                    /**
                     * 设置Site id to which the CDC belongs
                     * @param _siteId Site id to which the CDC belongs
                     * 
                     */
                    void SetSiteId(const std::string& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                private:

                    /**
                     * CDC id, e.g., cluster-xxxxx.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Name of AZ to which the CDC belongs
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * CDC description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * CDC name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Life cycle of the CDC, e.g., PENDING.
                     */
                    std::string m_lifecycleStatus;
                    bool m_lifecycleStatusHasBeenSet;

                    /**
                     * Creation time of the CDC
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Site id to which the CDC belongs
                     */
                    std::string m_siteId;
                    bool m_siteIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTER_H_
