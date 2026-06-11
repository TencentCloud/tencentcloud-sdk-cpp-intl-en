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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_BASEMETRICCOLLECTCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_BASEMETRICCOLLECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricCollectConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Metric collection configuration.
                */
                class BaseMetricCollectConfig : public AbstractModel
                {
                public:
                    BaseMetricCollectConfig();
                    ~BaseMetricCollectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId Machine group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Machine group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupId Machine group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Basic monitoring collection configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Configs Basic monitoring collection configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MetricCollectConfig> GetConfigs() const;

                    /**
                     * 设置Basic monitoring collection configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configs Basic monitoring collection configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigs(const std::vector<MetricCollectConfig>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * Machine group ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Basic monitoring collection configuration information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MetricCollectConfig> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_BASEMETRICCOLLECTCONFIG_H_
