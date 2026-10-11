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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/PersistentVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DynamicInstanceGroupSpec
                */
                class DynamicInstanceGroupSpec : public AbstractModel
                {
                public:
                    DynamicInstanceGroupSpec();
                    ~DynamicInstanceGroupSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Group name.</p>
                     * @return Name <p>Group name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Group name.</p>
                     * @param _name <p>Group name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Number of Pods.</p>
                     * @return PodCount <p>Number of Pods.</p>
                     * 
                     */
                    int64_t GetPodCount() const;

                    /**
                     * 设置<p>Number of Pods.</p>
                     * @param _podCount <p>Number of Pods.</p>
                     * 
                     */
                    void SetPodCount(const int64_t& _podCount);

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of nodes.</p>
                     * @return MinNodes <p>Minimum number of nodes.</p>
                     * 
                     */
                    int64_t GetMinNodes() const;

                    /**
                     * 设置<p>Minimum number of nodes.</p>
                     * @param _minNodes <p>Minimum number of nodes.</p>
                     * 
                     */
                    void SetMinNodes(const int64_t& _minNodes);

                    /**
                     * 判断参数 MinNodes 是否已赋值
                     * @return MinNodes 是否已赋值
                     * 
                     */
                    bool MinNodesHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of nodes.</p>
                     * @return MaxNodes <p>Maximum number of nodes.</p>
                     * 
                     */
                    int64_t GetMaxNodes() const;

                    /**
                     * 设置<p>Maximum number of nodes.</p>
                     * @param _maxNodes <p>Maximum number of nodes.</p>
                     * 
                     */
                    void SetMaxNodes(const int64_t& _maxNodes);

                    /**
                     * 判断参数 MaxNodes 是否已赋值
                     * @return MaxNodes 是否已赋值
                     * 
                     */
                    bool MaxNodesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable storage configuration.</p>
                     * @return StorageConfigEnabled <p>Whether to enable storage configuration.</p>
                     * 
                     */
                    bool GetStorageConfigEnabled() const;

                    /**
                     * 设置<p>Whether to enable storage configuration.</p>
                     * @param _storageConfigEnabled <p>Whether to enable storage configuration.</p>
                     * 
                     */
                    void SetStorageConfigEnabled(const bool& _storageConfigEnabled);

                    /**
                     * 判断参数 StorageConfigEnabled 是否已赋值
                     * @return StorageConfigEnabled 是否已赋值
                     * 
                     */
                    bool StorageConfigEnabledHasBeenSet() const;

                    /**
                     * 获取<p>headGroup:head;<br>workerGroup:worker</p>
                     * @return GroupType <p>headGroup:head;<br>workerGroup:worker</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>headGroup:head;<br>workerGroup:worker</p>
                     * @param _groupType <p>headGroup:head;<br>workerGroup:worker</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of CPU cores.</p>
                     * @return Cpu <p>Number of CPU cores.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Number of CPU cores.</p>
                     * @param _cpu <p>Number of CPU cores.</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Memory (GB).</p>
                     * @return MemSize <p>Memory (GB).</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory (GB).</p>
                     * @param _memSize <p>Memory (GB).</p>
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>GPU type.</p>
                     * @return GpuType <p>GPU type.</p>
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU type.</p>
                     * @param _gpuType <p>GPU type.</p>
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of GPU cores.</p>
                     * @return Gpu <p>Number of GPU cores.</p>
                     * 
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置<p>Number of GPU cores.</p>
                     * @param _gpu <p>Number of GPU cores.</p>
                     * 
                     */
                    void SetGpu(const int64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取<p>Resource label.</p>
                     * @return ResourceLabels <p>Resource label.</p>
                     * 
                     */
                    std::string GetResourceLabels() const;

                    /**
                     * 设置<p>Resource label.</p>
                     * @param _resourceLabels <p>Resource label.</p>
                     * 
                     */
                    void SetResourceLabels(const std::string& _resourceLabels);

                    /**
                     * 判断参数 ResourceLabels 是否已赋值
                     * @return ResourceLabels 是否已赋值
                     * 
                     */
                    bool ResourceLabelsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable.</p>
                     * @return Env <p>Environment variable.</p>
                     * 
                     */
                    std::vector<NameValue> GetEnv() const;

                    /**
                     * 设置<p>Environment variable.</p>
                     * @param _env <p>Environment variable.</p>
                     * 
                     */
                    void SetEnv(const std::vector<NameValue>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Labels <p>Tag.</p>
                     * 
                     */
                    std::vector<NameValue> GetLabels() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _labels <p>Tag.</p>
                     * 
                     */
                    void SetLabels(const std::vector<NameValue>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations.</p>
                     * @return Tolerations <p>Tolerations.</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>Tolerations.</p>
                     * @param _tolerations <p>Tolerations.</p>
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>Scheduling policy.</p>
                     * @return Scheduler <p>Scheduling policy.</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>Scheduling policy.</p>
                     * @param _scheduler <p>Scheduling policy.</p>
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取<p>Volume directory.</p>
                     * @return PersistentVolume <p>Volume directory.</p>
                     * 
                     */
                    PersistentVolume GetPersistentVolume() const;

                    /**
                     * 设置<p>Volume directory.</p>
                     * @param _persistentVolume <p>Volume directory.</p>
                     * 
                     */
                    void SetPersistentVolume(const PersistentVolume& _persistentVolume);

                    /**
                     * 判断参数 PersistentVolume 是否已赋值
                     * @return PersistentVolume 是否已赋值
                     * 
                     */
                    bool PersistentVolumeHasBeenSet() const;

                    /**
                     * 获取<p>Pre-start command.</p>
                     * @return PreStartCommand <p>Pre-start command.</p>
                     * 
                     */
                    std::string GetPreStartCommand() const;

                    /**
                     * 设置<p>Pre-start command.</p>
                     * @param _preStartCommand <p>Pre-start command.</p>
                     * 
                     */
                    void SetPreStartCommand(const std::string& _preStartCommand);

                    /**
                     * 判断参数 PreStartCommand 是否已赋值
                     * @return PreStartCommand 是否已赋值
                     * 
                     */
                    bool PreStartCommandHasBeenSet() const;

                    /**
                     * 获取<p>RayStart startup parameters.</p>
                     * @return RayStartParams <p>RayStart startup parameters.</p>
                     * 
                     */
                    std::string GetRayStartParams() const;

                    /**
                     * 设置<p>RayStart startup parameters.</p>
                     * @param _rayStartParams <p>RayStart startup parameters.</p>
                     * 
                     */
                    void SetRayStartParams(const std::string& _rayStartParams);

                    /**
                     * 判断参数 RayStartParams 是否已赋值
                     * @return RayStartParams 是否已赋值
                     * 
                     */
                    bool RayStartParamsHasBeenSet() const;

                private:

                    /**
                     * <p>Group name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Number of Pods.</p>
                     */
                    int64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * <p>Minimum number of nodes.</p>
                     */
                    int64_t m_minNodes;
                    bool m_minNodesHasBeenSet;

                    /**
                     * <p>Maximum number of nodes.</p>
                     */
                    int64_t m_maxNodes;
                    bool m_maxNodesHasBeenSet;

                    /**
                     * <p>Whether to enable storage configuration.</p>
                     */
                    bool m_storageConfigEnabled;
                    bool m_storageConfigEnabledHasBeenSet;

                    /**
                     * <p>headGroup:head;<br>workerGroup:worker</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>Number of CPU cores.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Memory (GB).</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>GPU type.</p>
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>Number of GPU cores.</p>
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * <p>Resource label.</p>
                     */
                    std::string m_resourceLabels;
                    bool m_resourceLabelsHasBeenSet;

                    /**
                     * <p>Environment variable.</p>
                     */
                    std::vector<NameValue> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<NameValue> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations.</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>Scheduling policy.</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>Volume directory.</p>
                     */
                    PersistentVolume m_persistentVolume;
                    bool m_persistentVolumeHasBeenSet;

                    /**
                     * <p>Pre-start command.</p>
                     */
                    std::string m_preStartCommand;
                    bool m_preStartCommandHasBeenSet;

                    /**
                     * <p>RayStart startup parameters.</p>
                     */
                    std::string m_rayStartParams;
                    bool m_rayStartParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUPSPEC_H_
