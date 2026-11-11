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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERBASELINEPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERBASELINEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline policy for a cluster
                */
                class ClusterBaselinePolicy : public AbstractModel
                {
                public:
                    ClusterBaselinePolicy();
                    ~ClusterBaselinePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Baseline policy ID.</p>
                     * @return PolicyID <p>Baseline policy ID.</p>
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置<p>Baseline policy ID.</p>
                     * @param _policyID <p>Baseline policy ID.</p>
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline policy name.</p>
                     * @return PolicyName <p>Baseline policy name.</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>Baseline policy name.</p>
                     * @param _policyName <p>Baseline policy name.</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>Asset type to detect.<br>Enumeration values:<br>HOST: host<br>CLUSTER: container cluster</p>
                     * @return CheckAssetType <p>Asset type to detect.<br>Enumeration values:<br>HOST: host<br>CLUSTER: container cluster</p>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Asset type to detect.<br>Enumeration values:<br>HOST: host<br>CLUSTER: container cluster</p>
                     * @param _checkAssetType <p>Asset type to detect.<br>Enumeration values:<br>HOST: host<br>CLUSTER: container cluster</p>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Baseline system parent category ID.</p>
                     * @return ParentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>Baseline system parent category ID.</p>
                     * @param _parentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a system baseline policy. true means system policy, false means custom policy.</p>
                     * @return IsSystem <p>Whether it is a system baseline policy. true means system policy, false means custom policy.</p>
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置<p>Whether it is a system baseline policy. true means system policy, false means custom policy.</p>
                     * @param _isSystem <p>Whether it is a system baseline policy. true means system policy, false means custom policy.</p>
                     * 
                     */
                    void SetIsSystem(const bool& _isSystem);

                    /**
                     * 判断参数 IsSystem 是否已赋值
                     * @return IsSystem 是否已赋值
                     * 
                     */
                    bool IsSystemHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline policy ID.</p>
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>Baseline policy name.</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>Asset type to detect.<br>Enumeration values:<br>HOST: host<br>CLUSTER: container cluster</p>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>Baseline system parent category ID.</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>Whether it is a system baseline policy. true means system policy, false means custom policy.</p>
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERBASELINEPOLICY_H_
