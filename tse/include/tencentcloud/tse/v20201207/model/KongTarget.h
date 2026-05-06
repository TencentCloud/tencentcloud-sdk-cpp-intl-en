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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGTARGET_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Target in Kong Upstream
                */
                class KongTarget : public AbstractModel
                {
                public:
                    KongTarget();
                    ~KongTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host
                     * @return Host Host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host
                     * @param _host Host
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Weight
                     * @return Weight Weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight
                     * @param _weight Weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Health status.
                     * @return Health Health status.
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置Health status.
                     * @param _health Health status.
                     * 
                     */
                    void SetHealth(const std::string& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Source of the Target
                     * @return Source Source of the Target
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source of the Target
                     * @param _source Source of the Target
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取CVM instance ID
                     * @return CvmInstanceId CVM instance ID
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置CVM instance ID
                     * @param _cvmInstanceId CVM instance ID
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM instance name.
                     * @return CvmInstanceName CVM instance name.
                     * 
                     */
                    std::string GetCvmInstanceName() const;

                    /**
                     * 设置CVM instance name.
                     * @param _cvmInstanceName CVM instance name.
                     * 
                     */
                    void SetCvmInstanceName(const std::string& _cvmInstanceName);

                    /**
                     * 判断参数 CvmInstanceName 是否已赋值
                     * @return CvmInstanceName 是否已赋值
                     * 
                     */
                    bool CvmInstanceNameHasBeenSet() const;

                    /**
                     * 获取target tag
                     * @return Tags target tag
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置target tag
                     * @param _tags target tag
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Health status.
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Source of the Target
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * CVM instance ID
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * CVM instance name.
                     */
                    std::string m_cvmInstanceName;
                    bool m_cvmInstanceNameHasBeenSet;

                    /**
                     * target tag
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGTARGET_H_
