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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADEABLEINSTANCESITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADEABLEINSTANCESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Upgradeable node information
                */
                class UpgradeAbleInstancesItem : public AbstractModel
                {
                public:
                    UpgradeAbleInstancesItem();
                    ~UpgradeAbleInstancesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node ID
                     * @return InstanceId Node ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Node ID
                     * @param InstanceId Node ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The current version of the node
                     * @return Version The current version of the node
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置The current version of the node
                     * @param Version The current version of the node
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取The latest minor version of the current version
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LatestVersion The latest minor version of the current version
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置The latest minor version of the current version
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param LatestVersion The latest minor version of the current version
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     */
                    bool LatestVersionHasBeenSet() const;

                private:

                    /**
                     * Node ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The current version of the node
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * The latest minor version of the current version
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADEABLEINSTANCESITEM_H_
