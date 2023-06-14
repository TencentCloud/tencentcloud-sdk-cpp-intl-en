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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXSETTINGSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXSETTINGSFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Index configuration fields
                */
                class IndexSettingsField : public AbstractModel
                {
                public:
                    IndexSettingsField();
                    ~IndexSettingsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of primary shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return NumberOfShards Number of primary shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNumberOfShards() const;

                    /**
                     * 设置Number of primary shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _numberOfShards Number of primary shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNumberOfShards(const std::string& _numberOfShards);

                    /**
                     * 判断参数 NumberOfShards 是否已赋值
                     * @return NumberOfShards 是否已赋值
                     * 
                     */
                    bool NumberOfShardsHasBeenSet() const;

                    /**
                     * 获取Number of replica shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return NumberOfReplicas Number of replica shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNumberOfReplicas() const;

                    /**
                     * 设置Number of replica shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _numberOfReplicas Number of replica shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNumberOfReplicas(const std::string& _numberOfReplicas);

                    /**
                     * 判断参数 NumberOfReplicas 是否已赋值
                     * @return NumberOfReplicas 是否已赋值
                     * 
                     */
                    bool NumberOfReplicasHasBeenSet() const;

                    /**
                     * 获取Index refresh interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RefreshInterval Index refresh interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRefreshInterval() const;

                    /**
                     * 设置Index refresh interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _refreshInterval Index refresh interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRefreshInterval(const std::string& _refreshInterval);

                    /**
                     * 判断参数 RefreshInterval 是否已赋值
                     * @return RefreshInterval 是否已赋值
                     * 
                     */
                    bool RefreshIntervalHasBeenSet() const;

                private:

                    /**
                     * Number of primary shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_numberOfShards;
                    bool m_numberOfShardsHasBeenSet;

                    /**
                     * Number of replica shards
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_numberOfReplicas;
                    bool m_numberOfReplicasHasBeenSet;

                    /**
                     * Index refresh interval
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_refreshInterval;
                    bool m_refreshIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXSETTINGSFIELD_H_
