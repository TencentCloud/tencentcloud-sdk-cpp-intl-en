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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradePreCheckResultItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Pre-upgrade check result of a node
                */
                class InstanceUpgradePreCheckResult : public AbstractModel
                {
                public:
                    InstanceUpgradePreCheckResult();
                    ~InstanceUpgradePreCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the check is passed
                     * @return CheckPass Whether the check is passed
                     * 
                     */
                    bool GetCheckPass() const;

                    /**
                     * 设置Whether the check is passed
                     * @param _checkPass Whether the check is passed
                     * 
                     */
                    void SetCheckPass(const bool& _checkPass);

                    /**
                     * 判断参数 CheckPass 是否已赋值
                     * @return CheckPass 是否已赋值
                     * 
                     */
                    bool CheckPassHasBeenSet() const;

                    /**
                     * 获取Array of check items
                     * @return Items Array of check items
                     * 
                     */
                    std::vector<InstanceUpgradePreCheckResultItem> GetItems() const;

                    /**
                     * 设置Array of check items
                     * @param _items Array of check items
                     * 
                     */
                    void SetItems(const std::vector<InstanceUpgradePreCheckResultItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取List of independent pods on this node
                     * @return SinglePods List of independent pods on this node
                     * 
                     */
                    std::vector<std::string> GetSinglePods() const;

                    /**
                     * 设置List of independent pods on this node
                     * @param _singlePods List of independent pods on this node
                     * 
                     */
                    void SetSinglePods(const std::vector<std::string>& _singlePods);

                    /**
                     * 判断参数 SinglePods 是否已赋值
                     * @return SinglePods 是否已赋值
                     * 
                     */
                    bool SinglePodsHasBeenSet() const;

                private:

                    /**
                     * Whether the check is passed
                     */
                    bool m_checkPass;
                    bool m_checkPassHasBeenSet;

                    /**
                     * Array of check items
                     */
                    std::vector<InstanceUpgradePreCheckResultItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * List of independent pods on this node
                     */
                    std::vector<std::string> m_singlePods;
                    bool m_singlePodsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULT_H_
