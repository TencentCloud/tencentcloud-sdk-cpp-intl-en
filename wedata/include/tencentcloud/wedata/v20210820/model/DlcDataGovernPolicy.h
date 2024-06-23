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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCDATAGOVERNPOLICY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCDATAGOVERNPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DlcRewriteDataInfo.h>
#include <tencentcloud/wedata/v20210820/model/DlcExpiredSnapshotsInfo.h>
#include <tencentcloud/wedata/v20210820/model/DlcRemoveOrphanFilesInfo.h>
#include <tencentcloud/wedata/v20210820/model/DlcMergeManifestsInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Governance Configuration Items
                */
                class DlcDataGovernPolicy : public AbstractModel
                {
                public:
                    DlcDataGovernPolicy();
                    ~DlcDataGovernPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data Layout Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RewriteDataPolicy Data Layout Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DlcRewriteDataInfo GetRewriteDataPolicy() const;

                    /**
                     * 设置Data Layout Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _rewriteDataPolicy Data Layout Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRewriteDataPolicy(const DlcRewriteDataInfo& _rewriteDataPolicy);

                    /**
                     * 判断参数 RewriteDataPolicy 是否已赋值
                     * @return RewriteDataPolicy 是否已赋值
                     * 
                     */
                    bool RewriteDataPolicyHasBeenSet() const;

                    /**
                     * 获取Snapshot Expiration Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExpiredSnapshotsPolicy Snapshot Expiration Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DlcExpiredSnapshotsInfo GetExpiredSnapshotsPolicy() const;

                    /**
                     * 设置Snapshot Expiration Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _expiredSnapshotsPolicy Snapshot Expiration Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExpiredSnapshotsPolicy(const DlcExpiredSnapshotsInfo& _expiredSnapshotsPolicy);

                    /**
                     * 判断参数 ExpiredSnapshotsPolicy 是否已赋值
                     * @return ExpiredSnapshotsPolicy 是否已赋值
                     * 
                     */
                    bool ExpiredSnapshotsPolicyHasBeenSet() const;

                    /**
                     * 获取Remove Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemoveOrphanFilesPolicy Remove Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DlcRemoveOrphanFilesInfo GetRemoveOrphanFilesPolicy() const;

                    /**
                     * 设置Remove Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _removeOrphanFilesPolicy Remove Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemoveOrphanFilesPolicy(const DlcRemoveOrphanFilesInfo& _removeOrphanFilesPolicy);

                    /**
                     * 判断参数 RemoveOrphanFilesPolicy 是否已赋值
                     * @return RemoveOrphanFilesPolicy 是否已赋值
                     * 
                     */
                    bool RemoveOrphanFilesPolicyHasBeenSet() const;

                    /**
                     * 获取Merge Metadata Manifests Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MergeManifestsPolicy Merge Metadata Manifests Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    DlcMergeManifestsInfo GetMergeManifestsPolicy() const;

                    /**
                     * 设置Merge Metadata Manifests Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _mergeManifestsPolicy Merge Metadata Manifests Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMergeManifestsPolicy(const DlcMergeManifestsInfo& _mergeManifestsPolicy);

                    /**
                     * 判断参数 MergeManifestsPolicy 是否已赋值
                     * @return MergeManifestsPolicy 是否已赋值
                     * 
                     */
                    bool MergeManifestsPolicyHasBeenSet() const;

                    /**
                     * 获取Integration Library Rules: default (Default Inheritance), none (No Inheritance)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InheritDataBase Integration Library Rules: default (Default Inheritance), none (No Inheritance)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInheritDataBase() const;

                    /**
                     * 设置Integration Library Rules: default (Default Inheritance), none (No Inheritance)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inheritDataBase Integration Library Rules: default (Default Inheritance), none (No Inheritance)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInheritDataBase(const std::string& _inheritDataBase);

                    /**
                     * 判断参数 InheritDataBase 是否已赋值
                     * @return InheritDataBase 是否已赋值
                     * 
                     */
                    bool InheritDataBaseHasBeenSet() const;

                    /**
                     * 获取Governance Rule Types, Customize: Custom Definition; Intelligence: Intelligent Governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleType Governance Rule Types, Customize: Custom Definition; Intelligence: Intelligent Governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Governance Rule Types, Customize: Custom Definition; Intelligence: Intelligent Governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleType Governance Rule Types, Customize: Custom Definition; Intelligence: Intelligent Governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Governance Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return GovernEngine Governance Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGovernEngine() const;

                    /**
                     * 设置Governance Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _governEngine Governance Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGovernEngine(const std::string& _governEngine);

                    /**
                     * 判断参数 GovernEngine 是否已赋值
                     * @return GovernEngine 是否已赋值
                     * 
                     */
                    bool GovernEngineHasBeenSet() const;

                private:

                    /**
                     * Data Layout Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DlcRewriteDataInfo m_rewriteDataPolicy;
                    bool m_rewriteDataPolicyHasBeenSet;

                    /**
                     * Snapshot Expiration Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DlcExpiredSnapshotsInfo m_expiredSnapshotsPolicy;
                    bool m_expiredSnapshotsPolicyHasBeenSet;

                    /**
                     * Remove Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DlcRemoveOrphanFilesInfo m_removeOrphanFilesPolicy;
                    bool m_removeOrphanFilesPolicyHasBeenSet;

                    /**
                     * Merge Metadata Manifests Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DlcMergeManifestsInfo m_mergeManifestsPolicy;
                    bool m_mergeManifestsPolicyHasBeenSet;

                    /**
                     * Integration Library Rules: default (Default Inheritance), none (No Inheritance)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inheritDataBase;
                    bool m_inheritDataBaseHasBeenSet;

                    /**
                     * Governance Rule Types, Customize: Custom Definition; Intelligence: Intelligent Governance
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Governance Engine
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_governEngine;
                    bool m_governEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCDATAGOVERNPOLICY_H_
