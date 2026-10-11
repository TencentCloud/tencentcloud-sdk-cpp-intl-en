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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DiskSpecInfo.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/ServiceDeploy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource details.
                */
                class NodeResourceSpec : public AbstractModel
                {
                public:
                    NodeResourceSpec();
                    ~NodeResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specifications type, such as S2.MEDIUM8.</p>
                     * @return InstanceType <p>Specifications type, such as S2.MEDIUM8.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Specifications type, such as S2.MEDIUM8.</p>
                     * @param _instanceType <p>Specifications type, such as S2.MEDIUM8.</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>System disk. The number of system disks does not exceed 1.</p>
                     * @return SystemDisk <p>System disk. The number of system disks does not exceed 1.</p>
                     * 
                     */
                    std::vector<DiskSpecInfo> GetSystemDisk() const;

                    /**
                     * 设置<p>System disk. The number of system disks does not exceed 1.</p>
                     * @param _systemDisk <p>System disk. The number of system disks does not exceed 1.</p>
                     * 
                     */
                    void SetSystemDisk(const std::vector<DiskSpecInfo>& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>List of tags to be bound.</p>
                     * @return Tags <p>List of tags to be bound.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tags to be bound.</p>
                     * @param _tags <p>List of tags to be bound.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Cloud data disk. The total number of cloud data disks does not exceed 15.</p>
                     * @return DataDisk <p>Cloud data disk. The total number of cloud data disks does not exceed 15.</p>
                     * 
                     */
                    std::vector<DiskSpecInfo> GetDataDisk() const;

                    /**
                     * 设置<p>Cloud data disk. The total number of cloud data disks does not exceed 15.</p>
                     * @param _dataDisk <p>Cloud data disk. The total number of cloud data disks does not exceed 15.</p>
                     * 
                     */
                    void SetDataDisk(const std::vector<DiskSpecInfo>& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取<p>Local data disk.</p>
                     * @return LocalDataDisk <p>Local data disk.</p>
                     * 
                     */
                    std::vector<DiskSpecInfo> GetLocalDataDisk() const;

                    /**
                     * 设置<p>Local data disk.</p>
                     * @param _localDataDisk <p>Local data disk.</p>
                     * 
                     */
                    void SetLocalDataDisk(const std::vector<DiskSpecInfo>& _localDataDisk);

                    /**
                     * 判断参数 LocalDataDisk 是否已赋值
                     * @return LocalDataDisk 是否已赋值
                     * 
                     */
                    bool LocalDataDiskHasBeenSet() const;

                    /**
                     * 获取<p>Node configuration information. Currently provided only for the Terraform platform to validate parameters.</p>
                     * @return SoftwareConfig <p>Node configuration information. Currently provided only for the Terraform platform to validate parameters.</p>
                     * 
                     */
                    std::vector<ServiceDeploy> GetSoftwareConfig() const;

                    /**
                     * 设置<p>Node configuration information. Currently provided only for the Terraform platform to validate parameters.</p>
                     * @param _softwareConfig <p>Node configuration information. Currently provided only for the Terraform platform to validate parameters.</p>
                     * 
                     */
                    void SetSoftwareConfig(const std::vector<ServiceDeploy>& _softwareConfig);

                    /**
                     * 判断参数 SoftwareConfig 是否已赋值
                     * @return SoftwareConfig 是否已赋值
                     * 
                     */
                    bool SoftwareConfigHasBeenSet() const;

                    /**
                     * 获取<p>Custom hostname.</p>
                     * @return CustomNodeName <p>Custom hostname.</p>
                     * 
                     */
                    std::string GetCustomNodeName() const;

                    /**
                     * 设置<p>Custom hostname.</p>
                     * @param _customNodeName <p>Custom hostname.</p>
                     * 
                     */
                    void SetCustomNodeName(const std::string& _customNodeName);

                    /**
                     * 判断参数 CustomNodeName 是否已赋值
                     * @return CustomNodeName 是否已赋值
                     * 
                     */
                    bool CustomNodeNameHasBeenSet() const;

                private:

                    /**
                     * <p>Specifications type, such as S2.MEDIUM8.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>System disk. The number of system disks does not exceed 1.</p>
                     */
                    std::vector<DiskSpecInfo> m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>List of tags to be bound.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Cloud data disk. The total number of cloud data disks does not exceed 15.</p>
                     */
                    std::vector<DiskSpecInfo> m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * <p>Local data disk.</p>
                     */
                    std::vector<DiskSpecInfo> m_localDataDisk;
                    bool m_localDataDiskHasBeenSet;

                    /**
                     * <p>Node configuration information. Currently provided only for the Terraform platform to validate parameters.</p>
                     */
                    std::vector<ServiceDeploy> m_softwareConfig;
                    bool m_softwareConfigHasBeenSet;

                    /**
                     * <p>Custom hostname.</p>
                     */
                    std::string m_customNodeName;
                    bool m_customNodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERESOURCESPEC_H_
