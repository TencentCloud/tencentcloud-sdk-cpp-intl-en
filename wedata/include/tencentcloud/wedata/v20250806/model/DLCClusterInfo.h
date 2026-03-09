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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DLCCLUSTERINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DLCCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * dlc cluster information.
                */
                class DLCClusterInfo : public AbstractModel
                {
                public:
                    DLCClusterInfo();
                    ~DLCClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取dlc resource name (the role Uin needs to be added to dlc, otherwise the resource may be unavailable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ComputeResources dlc resource name (the role Uin needs to be added to dlc, otherwise the resource may be unavailable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetComputeResources() const;

                    /**
                     * 设置dlc resource name (the role Uin needs to be added to dlc, otherwise the resource may be unavailable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _computeResources dlc resource name (the role Uin needs to be added to dlc, otherwise the resource may be unavailable).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComputeResources(const std::vector<std::string>& _computeResources);

                    /**
                     * 判断参数 ComputeResources 是否已赋值
                     * @return ComputeResources 是否已赋值
                     * 
                     */
                    bool ComputeResourcesHasBeenSet() const;

                    /**
                     * 获取dlc region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region dlc region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置dlc region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region dlc region.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Specify the default database for the DLC cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultDatabase Specify the default database for the DLC cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultDatabase() const;

                    /**
                     * 设置Specify the default database for the DLC cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultDatabase Specify the default database for the DLC cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultDatabase(const std::string& _defaultDatabase);

                    /**
                     * 判断参数 DefaultDatabase 是否已赋值
                     * @return DefaultDatabase 是否已赋值
                     * 
                     */
                    bool DefaultDatabaseHasBeenSet() const;

                    /**
                     * 获取Cluster configuration tag (only applicable to projects in standard mode and required in standard mode). valid values:.
-Prod (live production environment).
-Dev (development environment).
                     * @return StandardModeEnvTag Cluster configuration tag (only applicable to projects in standard mode and required in standard mode). valid values:.
-Prod (live production environment).
-Dev (development environment).
                     * 
                     */
                    std::string GetStandardModeEnvTag() const;

                    /**
                     * 设置Cluster configuration tag (only applicable to projects in standard mode and required in standard mode). valid values:.
-Prod (live production environment).
-Dev (development environment).
                     * @param _standardModeEnvTag Cluster configuration tag (only applicable to projects in standard mode and required in standard mode). valid values:.
-Prod (live production environment).
-Dev (development environment).
                     * 
                     */
                    void SetStandardModeEnvTag(const std::string& _standardModeEnvTag);

                    /**
                     * 判断参数 StandardModeEnvTag 是否已赋值
                     * @return StandardModeEnvTag 是否已赋值
                     * 
                     */
                    bool StandardModeEnvTagHasBeenSet() const;

                    /**
                     * 获取Access account (only applicable to projects in standard mode and required in standard mode), used for submitting dlc tasks.
Use a designated sub-account and set permissions to the corresponding database and table for the sub-account. task owner mode is prone to cause task failure after the person in charge leaves. master account mode is not easy to control permissions when permissions across multiple projects are different.

Enumeration value:.
-TASK_RUNNER (task owner).
-OWNER (master account mode).
-SUB (sub-account mode).
                     * @return AccessAccount Access account (only applicable to projects in standard mode and required in standard mode), used for submitting dlc tasks.
Use a designated sub-account and set permissions to the corresponding database and table for the sub-account. task owner mode is prone to cause task failure after the person in charge leaves. master account mode is not easy to control permissions when permissions across multiple projects are different.

Enumeration value:.
-TASK_RUNNER (task owner).
-OWNER (master account mode).
-SUB (sub-account mode).
                     * 
                     */
                    std::string GetAccessAccount() const;

                    /**
                     * 设置Access account (only applicable to projects in standard mode and required in standard mode), used for submitting dlc tasks.
Use a designated sub-account and set permissions to the corresponding database and table for the sub-account. task owner mode is prone to cause task failure after the person in charge leaves. master account mode is not easy to control permissions when permissions across multiple projects are different.

Enumeration value:.
-TASK_RUNNER (task owner).
-OWNER (master account mode).
-SUB (sub-account mode).
                     * @param _accessAccount Access account (only applicable to projects in standard mode and required in standard mode), used for submitting dlc tasks.
Use a designated sub-account and set permissions to the corresponding database and table for the sub-account. task owner mode is prone to cause task failure after the person in charge leaves. master account mode is not easy to control permissions when permissions across multiple projects are different.

Enumeration value:.
-TASK_RUNNER (task owner).
-OWNER (master account mode).
-SUB (sub-account mode).
                     * 
                     */
                    void SetAccessAccount(const std::string& _accessAccount);

                    /**
                     * 判断参数 AccessAccount 是否已赋值
                     * @return AccessAccount 是否已赋值
                     * 
                     */
                    bool AccessAccountHasBeenSet() const;

                    /**
                     * 获取Sub-Account id (only applicable to projects in standard mode). when AccessAccount is in sub-account mode, the designated sub-account id information is required. other modes do not require specifying.
                     * @return SubAccountUin Sub-Account id (only applicable to projects in standard mode). when AccessAccount is in sub-account mode, the designated sub-account id information is required. other modes do not require specifying.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub-Account id (only applicable to projects in standard mode). when AccessAccount is in sub-account mode, the designated sub-account id information is required. other modes do not require specifying.
                     * @param _subAccountUin Sub-Account id (only applicable to projects in standard mode). when AccessAccount is in sub-account mode, the designated sub-account id information is required. other modes do not require specifying.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * dlc resource name (the role Uin needs to be added to dlc, otherwise the resource may be unavailable).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_computeResources;
                    bool m_computeResourcesHasBeenSet;

                    /**
                     * dlc region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Specify the default database for the DLC cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultDatabase;
                    bool m_defaultDatabaseHasBeenSet;

                    /**
                     * Cluster configuration tag (only applicable to projects in standard mode and required in standard mode). valid values:.
-Prod (live production environment).
-Dev (development environment).
                     */
                    std::string m_standardModeEnvTag;
                    bool m_standardModeEnvTagHasBeenSet;

                    /**
                     * Access account (only applicable to projects in standard mode and required in standard mode), used for submitting dlc tasks.
Use a designated sub-account and set permissions to the corresponding database and table for the sub-account. task owner mode is prone to cause task failure after the person in charge leaves. master account mode is not easy to control permissions when permissions across multiple projects are different.

Enumeration value:.
-TASK_RUNNER (task owner).
-OWNER (master account mode).
-SUB (sub-account mode).
                     */
                    std::string m_accessAccount;
                    bool m_accessAccountHasBeenSet;

                    /**
                     * Sub-Account id (only applicable to projects in standard mode). when AccessAccount is in sub-account mode, the designated sub-account id information is required. other modes do not require specifying.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DLCCLUSTERINFO_H_
