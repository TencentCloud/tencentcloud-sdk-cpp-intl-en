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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PLACEMENT_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PLACEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the location of an instance, including its availability zone, project, host (for CDH products only), primary host IP, etc.
                */
                class Placement : public AbstractModel
                {
                public:
                    Placement();
                    ~Placement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     * @return Zone ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     * @param Zone ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the instance belongs. To obtain the project IDs, you can call [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1) and look for the `projectId` fields in the response. If this parameter is not specified, the default project will be used.
                     * @return ProjectId ID of the project to which the instance belongs. To obtain the project IDs, you can call [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1) and look for the `projectId` fields in the response. If this parameter is not specified, the default project will be used.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the instance belongs. To obtain the project IDs, you can call [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1) and look for the `projectId` fields in the response. If this parameter is not specified, the default project will be used.
                     * @param ProjectId ID of the project to which the instance belongs. To obtain the project IDs, you can call [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1) and look for the `projectId` fields in the response. If this parameter is not specified, the default project will be used.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取ID list of CDHs from which the instance can be created. If you have purchased CDHs and specify this parameter, the instances you purchase will be randomly deployed on the CDHs.
                     * @return HostIds ID list of CDHs from which the instance can be created. If you have purchased CDHs and specify this parameter, the instances you purchase will be randomly deployed on the CDHs.
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置ID list of CDHs from which the instance can be created. If you have purchased CDHs and specify this parameter, the instances you purchase will be randomly deployed on the CDHs.
                     * @param HostIds ID list of CDHs from which the instance can be created. If you have purchased CDHs and specify this parameter, the instances you purchase will be randomly deployed on the CDHs.
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取Master host IP used to create the CVM
                     * @return HostIps Master host IP used to create the CVM
                     */
                    std::vector<std::string> GetHostIps() const;

                    /**
                     * 设置Master host IP used to create the CVM
                     * @param HostIps Master host IP used to create the CVM
                     */
                    void SetHostIps(const std::vector<std::string>& _hostIps);

                    /**
                     * 判断参数 HostIps 是否已赋值
                     * @return HostIps 是否已赋值
                     */
                    bool HostIpsHasBeenSet() const;

                    /**
                     * 获取The ID of the CDH to which the instance belongs, only used as an output parameter.
                     * @return HostId The ID of the CDH to which the instance belongs, only used as an output parameter.
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置The ID of the CDH to which the instance belongs, only used as an output parameter.
                     * @param HostId The ID of the CDH to which the instance belongs, only used as an output parameter.
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                private:

                    /**
                     * ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ID of the project to which the instance belongs. To obtain the project IDs, you can call [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1) and look for the `projectId` fields in the response. If this parameter is not specified, the default project will be used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * ID list of CDHs from which the instance can be created. If you have purchased CDHs and specify this parameter, the instances you purchase will be randomly deployed on the CDHs.
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * Master host IP used to create the CVM
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                    /**
                     * The ID of the CDH to which the instance belongs, only used as an output parameter.
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PLACEMENT_H_
