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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_PLACEMENT_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_PLACEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * This describes the abstract location of the instance, including the availability zone in which it is located, the projects to which it belongs, and the ID and name of the dedicated clusters to which it belongs.
                */
                class Placement : public AbstractModel
                {
                public:
                    Placement();
                    ~Placement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the [Availability Zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) to which the cloud disk belongs. This parameter can be obtained from the Zone field in the returned values of [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * @return Zone The ID of the [Availability Zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) to which the cloud disk belongs. This parameter can be obtained from the Zone field in the returned values of [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The ID of the [Availability Zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) to which the cloud disk belongs. This parameter can be obtained from the Zone field in the returned values of [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     * @param _zone The ID of the [Availability Zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) to which the cloud disk belongs. This parameter can be obtained from the Zone field in the returned values of [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
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
                     * 获取CageId, which can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it operates on resources of the specified cage Id and can be empty. as an output parameter, it indicates the cage Id to which the resource belongs and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CageId CageId, which can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it operates on resources of the specified cage Id and can be empty. as an output parameter, it indicates the cage Id to which the resource belongs and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置CageId, which can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it operates on resources of the specified cage Id and can be empty. as an output parameter, it indicates the cage Id to which the resource belongs and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cageId CageId, which can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it operates on resources of the specified cage Id and can be empty. as an output parameter, it indicates the cage Id to which the resource belongs and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取Instance'S project ID, which can be obtained by DescribeProject. by default if left blank, it is 0, indicating the default project.
                     * @return ProjectId Instance'S project ID, which can be obtained by DescribeProject. by default if left blank, it is 0, indicating the default project.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Instance'S project ID, which can be obtained by DescribeProject. by default if left blank, it is 0, indicating the default project.
                     * @param _projectId Instance'S project ID, which can be obtained by DescribeProject. by default if left blank, it is 0, indicating the default project.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project to which instance belongs. search via [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project to which instance belongs. search via [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project to which instance belongs. search via [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project to which instance belongs. search via [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster name. When it is an input parameter, it is ignored.  When it is an output parameter, it is the name of the dedicated cluster the cloud disk belongs to, and it can be left blank.
Note: This field may return null, indicating that no valid value was found.
                     * @return CdcName Dedicated cluster name. When it is an input parameter, it is ignored.  When it is an output parameter, it is the name of the dedicated cluster the cloud disk belongs to, and it can be left blank.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetCdcName() const;

                    /**
                     * 设置Dedicated cluster name. When it is an input parameter, it is ignored.  When it is an output parameter, it is the name of the dedicated cluster the cloud disk belongs to, and it can be left blank.
Note: This field may return null, indicating that no valid value was found.
                     * @param _cdcName Dedicated cluster name. When it is an input parameter, it is ignored.  When it is an output parameter, it is the name of the dedicated cluster the cloud disk belongs to, and it can be left blank.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetCdcName(const std::string& _cdcName);

                    /**
                     * 判断参数 CdcName 是否已赋值
                     * @return CdcName 是否已赋值
                     * 
                     */
                    bool CdcNameHasBeenSet() const;

                    /**
                     * 获取The exclusive cluster ID of the instance. can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it indicates operations on resources belonging to the designated CdcId exclusive cluster and can be empty. as an output parameter, it indicates the exclusive cluster ID of the resource and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CdcId The exclusive cluster ID of the instance. can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it indicates operations on resources belonging to the designated CdcId exclusive cluster and can be empty. as an output parameter, it indicates the exclusive cluster ID of the resource and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置The exclusive cluster ID of the instance. can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it indicates operations on resources belonging to the designated CdcId exclusive cluster and can be empty. as an output parameter, it indicates the exclusive cluster ID of the resource and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cdcId The exclusive cluster ID of the instance. can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it indicates operations on resources belonging to the designated CdcId exclusive cluster and can be empty. as an output parameter, it indicates the exclusive cluster ID of the resource and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Dedicated cluster ID
                     * @return DedicatedClusterId Dedicated cluster ID
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置Dedicated cluster ID
                     * @param _dedicatedClusterId Dedicated cluster ID
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the [Availability Zone](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#ZoneInfo) to which the cloud disk belongs. This parameter can be obtained from the Zone field in the returned values of [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1).
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * CageId, which can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it operates on resources of the specified cage Id and can be empty. as an output parameter, it indicates the cage Id to which the resource belongs and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * Instance'S project ID, which can be obtained by DescribeProject. by default if left blank, it is 0, indicating the default project.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project to which instance belongs. search via [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Dedicated cluster name. When it is an input parameter, it is ignored.  When it is an output parameter, it is the name of the dedicated cluster the cloud disk belongs to, and it can be left blank.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_cdcName;
                    bool m_cdcNameHasBeenSet;

                    /**
                     * The exclusive cluster ID of the instance. can be obtained via [DescribeDiskStoragePool](https://www.tencentcloud.com/document/api/362/62143?from_cn_redirect=1). as an input parameter, it indicates operations on resources belonging to the designated CdcId exclusive cluster and can be empty. as an output parameter, it indicates the exclusive cluster ID of the resource and can be empty.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Dedicated cluster ID
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_PLACEMENT_H_
