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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_HOSTMETRICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_HOSTMETRICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HostMetricItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Host metrics collection configuration
                */
                class HostMetricConfig : public AbstractModel
                {
                public:
                    HostMetricConfig();
                    ~HostMetricConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Collection Configuration id
                     * @return ConfigId Collection Configuration id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Collection Configuration id
                     * @param _configId Collection Configuration id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Collection configuration name
                     * @return Name Collection configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Collection configuration name
                     * @param _name Collection configuration name
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
                     * 获取Collection frequency, in milliseconds
                     * @return Interval Collection frequency, in milliseconds
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Collection frequency, in milliseconds
                     * @param _interval Collection frequency, in milliseconds
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Collection item
                     * @return HostMetricItems Collection item
                     * 
                     */
                    std::vector<HostMetricItem> GetHostMetricItems() const;

                    /**
                     * 设置Collection item
                     * @param _hostMetricItems Collection item
                     * 
                     */
                    void SetHostMetricItems(const std::vector<HostMetricItem>& _hostMetricItems);

                    /**
                     * 判断参数 HostMetricItems 是否已赋值
                     * @return HostMetricItems 是否已赋值
                     * 
                     */
                    bool HostMetricItemsHasBeenSet() const;

                    /**
                     * 获取Machine group id list
                     * @return MachineGroupIds Machine group id list
                     * 
                     */
                    std::vector<std::string> GetMachineGroupIds() const;

                    /**
                     * 设置Machine group id list
                     * @param _machineGroupIds Machine group id list
                     * 
                     */
                    void SetMachineGroupIds(const std::vector<std::string>& _machineGroupIds);

                    /**
                     * 判断参数 MachineGroupIds 是否已赋值
                     * @return MachineGroupIds 是否已赋值
                     * 
                     */
                    bool MachineGroupIdsHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return UpdateTime Modification time.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Modification time.
                     * @param _updateTime Modification time.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Collection Configuration id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Collection configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Collection frequency, in milliseconds
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Collection item
                     */
                    std::vector<HostMetricItem> m_hostMetricItems;
                    bool m_hostMetricItemsHasBeenSet;

                    /**
                     * Machine group id list
                     */
                    std::vector<std::string> m_machineGroupIds;
                    bool m_machineGroupIdsHasBeenSet;

                    /**
                     * Creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_HOSTMETRICCONFIG_H_
