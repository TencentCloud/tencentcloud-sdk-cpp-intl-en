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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/GPUArgs.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/DataDisk.h>
#include <tencentcloud/tke/v20180525/model/InstanceExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Describes K8s cluster configuration and related information.
                */
                class InstanceAdvancedSettings : public AbstractModel
                {
                public:
                    InstanceAdvancedSettings();
                    ~InstanceAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DesiredPodNumber When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDesiredPodNumber() const;

                    /**
                     * 设置When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _desiredPodNumber When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesiredPodNumber(const int64_t& _desiredPodNumber);

                    /**
                     * 判断参数 DesiredPodNumber 是否已赋值
                     * @return DesiredPodNumber 是否已赋值
                     * 
                     */
                    bool DesiredPodNumberHasBeenSet() const;

                    /**
                     * 获取GPU driver-related parameters. Relevant GPU parameters can be found at: https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return GPUArgs GPU driver-related parameters. Relevant GPU parameters can be found at: https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    GPUArgs GetGPUArgs() const;

                    /**
                     * 设置GPU driver-related parameters. Relevant GPU parameters can be found at: https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _gPUArgs GPU driver-related parameters. Relevant GPU parameters can be found at: https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGPUArgs(const GPUArgs& _gPUArgs);

                    /**
                     * 判断参数 GPUArgs 是否已赋值
                     * @return GPUArgs 是否已赋值
                     * 
                     */
                    bool GPUArgsHasBeenSet() const;

                    /**
                     * 获取Specifies the base64-encoded custom script to be executed before initialization of the node. It’s only valid for adding existing nodes for now.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PreStartUserScript Specifies the base64-encoded custom script to be executed before initialization of the node. It’s only valid for adding existing nodes for now.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置Specifies the base64-encoded custom script to be executed before initialization of the node. It’s only valid for adding existing nodes for now.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _preStartUserScript Specifies the base64-encoded custom script to be executed before initialization of the node. It’s only valid for adding existing nodes for now.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                    /**
                     * 获取Node taint
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Taints Node taint
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Node taint
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _taints Node taint
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取Data disk mount point. By default, no data disk is mounted. Data disks in ext3, ext4, or XFS file system formats will be mounted directly, while data disks in other file systems and unformatted data disks will automatically be formatted as ext4 (xfs for tlinux system) and then mounted. Please back up your data in advance. This setting is only applicable to CVMs with a single data disk.
Note: in multi-disk scenarios, use the DataDisks data structure below to set the corresponding information, such as cloud disk type, cloud disk size, mount path, and whether to perform formatting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MountTarget Data disk mount point. By default, no data disk is mounted. Data disks in ext3, ext4, or XFS file system formats will be mounted directly, while data disks in other file systems and unformatted data disks will automatically be formatted as ext4 (xfs for tlinux system) and then mounted. Please back up your data in advance. This setting is only applicable to CVMs with a single data disk.
Note: in multi-disk scenarios, use the DataDisks data structure below to set the corresponding information, such as cloud disk type, cloud disk size, mount path, and whether to perform formatting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置Data disk mount point. By default, no data disk is mounted. Data disks in ext3, ext4, or XFS file system formats will be mounted directly, while data disks in other file systems and unformatted data disks will automatically be formatted as ext4 (xfs for tlinux system) and then mounted. Please back up your data in advance. This setting is only applicable to CVMs with a single data disk.
Note: in multi-disk scenarios, use the DataDisks data structure below to set the corresponding information, such as cloud disk type, cloud disk size, mount path, and whether to perform formatting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _mountTarget Data disk mount point. By default, no data disk is mounted. Data disks in ext3, ext4, or XFS file system formats will be mounted directly, while data disks in other file systems and unformatted data disks will automatically be formatted as ext4 (xfs for tlinux system) and then mounted. Please back up your data in advance. This setting is only applicable to CVMs with a single data disk.
Note: in multi-disk scenarios, use the DataDisks data structure below to set the corresponding information, such as cloud disk type, cloud disk size, mount path, and whether to perform formatting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取Specified value of dockerd --graph. Default value: /var/lib/docker
Note: This field may return null, indicating that no valid value was found.
                     * @return DockerGraphPath Specified value of dockerd --graph. Default value: /var/lib/docker
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDockerGraphPath() const;

                    /**
                     * 设置Specified value of dockerd --graph. Default value: /var/lib/docker
Note: This field may return null, indicating that no valid value was found.
                     * @param _dockerGraphPath Specified value of dockerd --graph. Default value: /var/lib/docker
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetDockerGraphPath(const std::string& _dockerGraphPath);

                    /**
                     * 判断参数 DockerGraphPath 是否已赋值
                     * @return DockerGraphPath 是否已赋值
                     * 
                     */
                    bool DockerGraphPathHasBeenSet() const;

                    /**
                     * 获取Base64-encoded user script, which will be executed after the K8s component starts running. You need to ensure the reentrant and retry logic of the script. The script and its log files can be viewed at the node path: /data/ccs_userscript/. If you want to initialize nodes before adding them to the scheduling list, you can use this parameter together with the unschedulable parameter. After the final initialization of userScript is completed, add the kubectl uncordon nodename --kubeconfig=/root/.kube/config command to enable the node for scheduling.
Note: This field may return null, indicating that no valid value was found.
                     * @return UserScript Base64-encoded user script, which will be executed after the K8s component starts running. You need to ensure the reentrant and retry logic of the script. The script and its log files can be viewed at the node path: /data/ccs_userscript/. If you want to initialize nodes before adding them to the scheduling list, you can use this parameter together with the unschedulable parameter. After the final initialization of userScript is completed, add the kubectl uncordon nodename --kubeconfig=/root/.kube/config command to enable the node for scheduling.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置Base64-encoded user script, which will be executed after the K8s component starts running. You need to ensure the reentrant and retry logic of the script. The script and its log files can be viewed at the node path: /data/ccs_userscript/. If you want to initialize nodes before adding them to the scheduling list, you can use this parameter together with the unschedulable parameter. After the final initialization of userScript is completed, add the kubectl uncordon nodename --kubeconfig=/root/.kube/config command to enable the node for scheduling.
Note: This field may return null, indicating that no valid value was found.
                     * @param _userScript Base64-encoded user script, which will be executed after the K8s component starts running. You need to ensure the reentrant and retry logic of the script. The script and its log files can be viewed at the node path: /data/ccs_userscript/. If you want to initialize nodes before adding them to the scheduling list, you can use this parameter together with the unschedulable parameter. After the final initialization of userScript is completed, add the kubectl uncordon nodename --kubeconfig=/root/.kube/config command to enable the node for scheduling.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取Sets whether the added node is schedulable. 0 (default): schedulable; other values: unschedulable. After node initialization is completed, you can run kubectl uncordon nodename to enable this node for scheduling.
                     * @return Unschedulable Sets whether the added node is schedulable. 0 (default): schedulable; other values: unschedulable. After node initialization is completed, you can run kubectl uncordon nodename to enable this node for scheduling.
                     * 
                     */
                    int64_t GetUnschedulable() const;

                    /**
                     * 设置Sets whether the added node is schedulable. 0 (default): schedulable; other values: unschedulable. After node initialization is completed, you can run kubectl uncordon nodename to enable this node for scheduling.
                     * @param _unschedulable Sets whether the added node is schedulable. 0 (default): schedulable; other values: unschedulable. After node initialization is completed, you can run kubectl uncordon nodename to enable this node for scheduling.
                     * 
                     */
                    void SetUnschedulable(const int64_t& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取Node label array
Note: This field may return null, indicating that no valid value was found.
                     * @return Labels Node label array
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Node label array
Note: This field may return null, indicating that no valid value was found.
                     * @param _labels Node label array
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Mounting information of multiple data disks. When you create a node, ensure that the CVM purchase parameter specifies the information required for the purchase of multiple data disks. For example, the `DataDisks` under `RunInstancesPara` of the `CreateClusterInstances` API should be configured accordingly (Referto document of CreateClusterInstances API). When you add an existing node, ensure that the specified partition exists in the node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DataDisks Mounting information of multiple data disks. When you create a node, ensure that the CVM purchase parameter specifies the information required for the purchase of multiple data disks. For example, the `DataDisks` under `RunInstancesPara` of the `CreateClusterInstances` API should be configured accordingly (Referto document of CreateClusterInstances API). When you add an existing node, ensure that the specified partition exists in the node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Mounting information of multiple data disks. When you create a node, ensure that the CVM purchase parameter specifies the information required for the purchase of multiple data disks. For example, the `DataDisks` under `RunInstancesPara` of the `CreateClusterInstances` API should be configured accordingly (Referto document of CreateClusterInstances API). When you add an existing node, ensure that the specified partition exists in the node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dataDisks Mounting information of multiple data disks. When you create a node, ensure that the CVM purchase parameter specifies the information required for the purchase of multiple data disks. For example, the `DataDisks` under `RunInstancesPara` of the `CreateClusterInstances` API should be configured accordingly (Referto document of CreateClusterInstances API). When you add an existing node, ensure that the specified partition exists in the node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Information about node custom parameters
Note: This field may return null, indicating that no valid value was found.
                     * @return ExtraArgs Information about node custom parameters
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    InstanceExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Information about node custom parameters
Note: This field may return null, indicating that no valid value was found.
                     * @param _extraArgs Information about node custom parameters
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetExtraArgs(const InstanceExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                private:

                    /**
                     * When the custom PodCIDR mode is enabled for the cluster, you can specify the maximum number of pods per node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_desiredPodNumber;
                    bool m_desiredPodNumberHasBeenSet;

                    /**
                     * GPU driver-related parameters. Relevant GPU parameters can be found at: https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    GPUArgs m_gPUArgs;
                    bool m_gPUArgsHasBeenSet;

                    /**
                     * Specifies the base64-encoded custom script to be executed before initialization of the node. It’s only valid for adding existing nodes for now.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                    /**
                     * Node taint
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Data disk mount point. By default, no data disk is mounted. Data disks in ext3, ext4, or XFS file system formats will be mounted directly, while data disks in other file systems and unformatted data disks will automatically be formatted as ext4 (xfs for tlinux system) and then mounted. Please back up your data in advance. This setting is only applicable to CVMs with a single data disk.
Note: in multi-disk scenarios, use the DataDisks data structure below to set the corresponding information, such as cloud disk type, cloud disk size, mount path, and whether to perform formatting.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * Specified value of dockerd --graph. Default value: /var/lib/docker
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_dockerGraphPath;
                    bool m_dockerGraphPathHasBeenSet;

                    /**
                     * Base64-encoded user script, which will be executed after the K8s component starts running. You need to ensure the reentrant and retry logic of the script. The script and its log files can be viewed at the node path: /data/ccs_userscript/. If you want to initialize nodes before adding them to the scheduling list, you can use this parameter together with the unschedulable parameter. After the final initialization of userScript is completed, add the kubectl uncordon nodename --kubeconfig=/root/.kube/config command to enable the node for scheduling.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * Sets whether the added node is schedulable. 0 (default): schedulable; other values: unschedulable. After node initialization is completed, you can run kubectl uncordon nodename to enable this node for scheduling.
                     */
                    int64_t m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * Node label array
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Mounting information of multiple data disks. When you create a node, ensure that the CVM purchase parameter specifies the information required for the purchase of multiple data disks. For example, the `DataDisks` under `RunInstancesPara` of the `CreateClusterInstances` API should be configured accordingly (Referto document of CreateClusterInstances API). When you add an existing node, ensure that the specified partition exists in the node.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Information about node custom parameters
Note: This field may return null, indicating that no valid value was found.
                     */
                    InstanceExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEADVANCEDSETTINGS_H_
