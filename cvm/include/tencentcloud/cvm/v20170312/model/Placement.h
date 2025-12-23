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
                * Placement of an instance, including its availability zone, project, host (for CDH products only), master host IP, etc.
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
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     * @param _zone ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance'S project ID. obtain this parameter by calling the `ProjectId` field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/54679). default value 0 means default project.
                     * @return ProjectId Instance'S project ID. obtain this parameter by calling the `ProjectId` field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/54679). default value 0 means default project.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Instance'S project ID. obtain this parameter by calling the `ProjectId` field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/54679). default value 0 means default project.
                     * @param _projectId Instance'S project ID. obtain this parameter by calling the `ProjectId` field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/54679). default value 0 means default project.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Specifies the dedicated host ID list for instance ownership, only used for input parameters. if you purchase a dedicated host and specify this parameter, instances you purchase will be randomly deployed on these dedicated hosts. obtain this parameter by calling the `HostId` field in the return value of [DescribeHosts](https://www.tencentcloud.com/document/product/213/33279?lang=en).
                     * @return HostIds Specifies the dedicated host ID list for instance ownership, only used for input parameters. if you purchase a dedicated host and specify this parameter, instances you purchase will be randomly deployed on these dedicated hosts. obtain this parameter by calling the `HostId` field in the return value of [DescribeHosts](https://www.tencentcloud.com/document/product/213/33279?lang=en).
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Specifies the dedicated host ID list for instance ownership, only used for input parameters. if you purchase a dedicated host and specify this parameter, instances you purchase will be randomly deployed on these dedicated hosts. obtain this parameter by calling the `HostId` field in the return value of [DescribeHosts](https://www.tencentcloud.com/document/product/213/33279?lang=en).
                     * @param _hostIds Specifies the dedicated host ID list for instance ownership, only used for input parameters. if you purchase a dedicated host and specify this parameter, instances you purchase will be randomly deployed on these dedicated hosts. obtain this parameter by calling the `HostId` field in the return value of [DescribeHosts](https://www.tencentcloud.com/document/product/213/33279?lang=en).
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取The ID of the CDH to which the instance belongs, only used as an output parameter.
                     * @return HostId The ID of the CDH to which the instance belongs, only used as an output parameter.
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置The ID of the CDH to which the instance belongs, only used as an output parameter.
                     * @param _hostId The ID of the CDH to which the instance belongs, only used as an output parameter.
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                private:

                    /**
                     * ID of the availability zone where the instance resides. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/35071) API and obtain the ID in the returned `Zone` field.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance'S project ID. obtain this parameter by calling the `ProjectId` field in the return value of [DescribeProjects](https://www.tencentcloud.com/document/product/651/54679). default value 0 means default project.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies the dedicated host ID list for instance ownership, only used for input parameters. if you purchase a dedicated host and specify this parameter, instances you purchase will be randomly deployed on these dedicated hosts. obtain this parameter by calling the `HostId` field in the return value of [DescribeHosts](https://www.tencentcloud.com/document/product/213/33279?lang=en).
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

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
