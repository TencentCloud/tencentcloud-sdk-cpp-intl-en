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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instance information
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance status
                     * @return Status <p>Instance status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Instance status
                     * @param _status <p>Instance status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Substatus of the instance in process returned.</p><p>Enumeration value:</p><ul><li>0: Read-only disk.</li></ul>
                     * @return SubStatus <p>Substatus of the instance in process returned.</p><p>Enumeration value:</p><ul><li>0: Read-only disk.</li></ul>
                     * 
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置<p>Substatus of the instance in process returned.</p><p>Enumeration value:</p><ul><li>0: Read-only disk.</li></ul>
                     * @param _subStatus <p>Substatus of the instance in process returned.</p><p>Enumeration value:</p><ul><li>0: Read-only disk.</li></ul>
                     * 
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Zone</p>
                     * @return Zone <p>Zone</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Zone</p>
                     * @param _zone <p>Zone</p>
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
                     * 获取<p>Degradation policy, measurement unit: ms. After the instance P99 reaches the degradation policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms. Range value: 300-1000 ms.</p>
                     * @return DegradeStrategy <p>Degradation policy, measurement unit: ms. After the instance P99 reaches the degradation policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms. Range value: 300-1000 ms.</p>
                     * 
                     */
                    int64_t GetDegradeStrategy() const;

                    /**
                     * 设置<p>Degradation policy, measurement unit: ms. After the instance P99 reaches the degradation policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms. Range value: 300-1000 ms.</p>
                     * @param _degradeStrategy <p>Degradation policy, measurement unit: ms. After the instance P99 reaches the degradation policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms. Range value: 300-1000 ms.</p>
                     * 
                     */
                    void SetDegradeStrategy(const int64_t& _degradeStrategy);

                    /**
                     * 判断参数 DegradeStrategy 是否已赋值
                     * @return DegradeStrategy 是否已赋值
                     * 
                     */
                    bool DegradeStrategyHasBeenSet() const;

                    /**
                     * 获取<p>Tag information</p>
                     * @return InstanceTags <p>Tag information</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>Tag information</p>
                     * @param _instanceTags <p>Tag information</p>
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Architecture edition</p>
                     * @return Type <p>Architecture edition</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Architecture edition</p>
                     * @param _type <p>Architecture edition</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Instance status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Substatus of the instance in process returned.</p><p>Enumeration value:</p><ul><li>0: Read-only disk.</li></ul>
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Zone</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Degradation policy, measurement unit: ms. After the instance P99 reaches the degradation policy, audit data is automatically discarded to prioritize business availability. Default value: 500 ms. Range value: 300-1000 ms.</p>
                     */
                    int64_t m_degradeStrategy;
                    bool m_degradeStrategyHasBeenSet;

                    /**
                     * <p>Tag information</p>
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>Architecture edition</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINFO_H_
