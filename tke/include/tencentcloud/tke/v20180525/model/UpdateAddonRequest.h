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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEADDONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEADDONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateAddon request structure.
                */
                class UpdateAddonRequest : public AbstractModel
                {
                public:
                    UpdateAddonRequest();
                    ~UpdateAddonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Add-on name
                     * @return AddonName Add-on name
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置Add-on name
                     * @param _addonName Add-on name
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取addon version (default does not update if not passed. if AddonVersion is not passed, RawValues must be passed.).
                     * @return AddonVersion addon version (default does not update if not passed. if AddonVersion is not passed, RawValues must be passed.).
                     * 
                     */
                    std::string GetAddonVersion() const;

                    /**
                     * 设置addon version (default does not update if not passed. if AddonVersion is not passed, RawValues must be passed.).
                     * @param _addonVersion addon version (default does not update if not passed. if AddonVersion is not passed, RawValues must be passed.).
                     * 
                     */
                    void SetAddonVersion(const std::string& _addonVersion);

                    /**
                     * 判断参数 AddonVersion 是否已赋值
                     * @return AddonVersion 是否已赋值
                     * 
                     */
                    bool AddonVersionHasBeenSet() const;

                    /**
                     * 获取Parameters of the addon, which is a base64-transcoded string in json format. (the addon parameters are obtained through DescribeAddonValues. when RawValues is not passed, AddonVersion must be provided.).
                     * @return RawValues Parameters of the addon, which is a base64-transcoded string in json format. (the addon parameters are obtained through DescribeAddonValues. when RawValues is not passed, AddonVersion must be provided.).
                     * 
                     */
                    std::string GetRawValues() const;

                    /**
                     * 设置Parameters of the addon, which is a base64-transcoded string in json format. (the addon parameters are obtained through DescribeAddonValues. when RawValues is not passed, AddonVersion must be provided.).
                     * @param _rawValues Parameters of the addon, which is a base64-transcoded string in json format. (the addon parameters are obtained through DescribeAddonValues. when RawValues is not passed, AddonVersion must be provided.).
                     * 
                     */
                    void SetRawValues(const std::string& _rawValues);

                    /**
                     * 判断参数 RawValues 是否已赋值
                     * @return RawValues 是否已赋值
                     * 
                     */
                    bool RawValuesHasBeenSet() const;

                    /**
                     * 获取The update policy for the addon parameter supports two strategies: replace and merge. the default value is merge, which is compatible with old version apis. replace: use new RawValues to fully replace the original RawValues of the addon. merge: add or update the corresponding parameters in the original RawValues of the addon based on new RawValues.
                     * @return UpdateStrategy The update policy for the addon parameter supports two strategies: replace and merge. the default value is merge, which is compatible with old version apis. replace: use new RawValues to fully replace the original RawValues of the addon. merge: add or update the corresponding parameters in the original RawValues of the addon based on new RawValues.
                     * 
                     */
                    std::string GetUpdateStrategy() const;

                    /**
                     * 设置The update policy for the addon parameter supports two strategies: replace and merge. the default value is merge, which is compatible with old version apis. replace: use new RawValues to fully replace the original RawValues of the addon. merge: add or update the corresponding parameters in the original RawValues of the addon based on new RawValues.
                     * @param _updateStrategy The update policy for the addon parameter supports two strategies: replace and merge. the default value is merge, which is compatible with old version apis. replace: use new RawValues to fully replace the original RawValues of the addon. merge: add or update the corresponding parameters in the original RawValues of the addon based on new RawValues.
                     * 
                     */
                    void SetUpdateStrategy(const std::string& _updateStrategy);

                    /**
                     * 判断参数 UpdateStrategy 是否已赋值
                     * @return UpdateStrategy 是否已赋值
                     * 
                     */
                    bool UpdateStrategyHasBeenSet() const;

                    /**
                     * 获取Specifies whether to only perform an update check. when set to true, only the check is performed without updating the component.
                     * @return DryRun Specifies whether to only perform an update check. when set to true, only the check is performed without updating the component.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Specifies whether to only perform an update check. when set to true, only the check is performed without updating the component.
                     * @param _dryRun Specifies whether to only perform an update check. when set to true, only the check is performed without updating the component.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Add-on name
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * addon version (default does not update if not passed. if AddonVersion is not passed, RawValues must be passed.).
                     */
                    std::string m_addonVersion;
                    bool m_addonVersionHasBeenSet;

                    /**
                     * Parameters of the addon, which is a base64-transcoded string in json format. (the addon parameters are obtained through DescribeAddonValues. when RawValues is not passed, AddonVersion must be provided.).
                     */
                    std::string m_rawValues;
                    bool m_rawValuesHasBeenSet;

                    /**
                     * The update policy for the addon parameter supports two strategies: replace and merge. the default value is merge, which is compatible with old version apis. replace: use new RawValues to fully replace the original RawValues of the addon. merge: add or update the corresponding parameters in the original RawValues of the addon based on new RawValues.
                     */
                    std::string m_updateStrategy;
                    bool m_updateStrategyHasBeenSet;

                    /**
                     * Specifies whether to only perform an update check. when set to true, only the check is performed without updating the component.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEADDONREQUEST_H_
