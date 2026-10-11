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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYBOOTSCRIPTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYBOOTSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyBootScript request structure.
                */
                class ModifyBootScriptRequest : public AbstractModel
                {
                public:
                    ModifyBootScriptRequest();
                    ~ModifyBootScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR instance ID.
                     * @return InstanceId EMR instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR instance ID.
                     * @param _instanceId EMR instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore.
                     * @return BootType Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore.
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore.
                     * @param _bootType Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore.
                     * 
                     */
                    void SetBootType(const std::string& _bootType);

                    /**
                     * 判断参数 BootType 是否已赋值
                     * @return BootType 是否已赋值
                     * 
                     */
                    bool BootTypeHasBeenSet() const;

                    /**
                     * 获取Specific changes to the bootstrap script. If it is left empty, no bootstrap script is configured for the WhenRun timing.
                     * @return PreExecutedFileSettings Specific changes to the bootstrap script. If it is left empty, no bootstrap script is configured for the WhenRun timing.
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetPreExecutedFileSettings() const;

                    /**
                     * 设置Specific changes to the bootstrap script. If it is left empty, no bootstrap script is configured for the WhenRun timing.
                     * @param _preExecutedFileSettings Specific changes to the bootstrap script. If it is left empty, no bootstrap script is configured for the WhenRun timing.
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSetting>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                private:

                    /**
                     * EMR instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore.
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                    /**
                     * Specific changes to the bootstrap script. If it is left empty, no bootstrap script is configured for the WhenRun timing.
                     */
                    std::vector<PreExecuteFileSetting> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYBOOTSCRIPTREQUEST_H_
