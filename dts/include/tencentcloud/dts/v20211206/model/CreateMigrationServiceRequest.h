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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateMigrationService request structure.
                */
                class CreateMigrationServiceRequest : public AbstractModel
                {
                public:
                    CreateMigrationServiceRequest();
                    ~CreateMigrationServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source database type. Valid values: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * @return SrcDatabaseType Source database type. Valid values: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source database type. Valid values: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * @param _srcDatabaseType Source database type. Valid values: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target database type. Valid values: `mysql`, `redis`, `percona`, `mongodb` ,`postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * @return DstDatabaseType Target database type. Valid values: `mysql`, `redis`, `percona`, `mongodb` ,`postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target database type. Valid values: `mysql`, `redis`, `percona`, `mongodb` ,`postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * @param _dstDatabaseType Target database type. Valid values: `mysql`, `redis`, `percona`, `mongodb` ,`postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source instance region, such as `ap-guangzhou`.
                     * @return SrcRegion Source instance region, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置Source instance region, such as `ap-guangzhou`.
                     * @param _srcRegion Source instance region, such as `ap-guangzhou`.
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取Target instance region, such as `ap-guangzhou`. Note that it must be the same as the API request region.
                     * @return DstRegion Target instance region, such as `ap-guangzhou`. Note that it must be the same as the API request region.
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置Target instance region, such as `ap-guangzhou`. Note that it must be the same as the API request region.
                     * @param _dstRegion Target instance region, such as `ap-guangzhou`. Note that it must be the same as the API request region.
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取Instance specification. Valid values: `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     * @return InstanceClass Instance specification. Valid values: `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置Instance specification. Valid values: `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     * @param _instanceClass Instance specification. Valid values: `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取Quantity. Value range: [1,15]. Default value: `1`.
                     * @return Count Quantity. Value range: [1,15]. Default value: `1`.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Quantity. Value range: [1,15]. Default value: `1`.
                     * @param _count Quantity. Value range: [1,15]. Default value: `1`.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Migration task name, which can contain up to 128 characters.
                     * @return JobName Migration task name, which can contain up to 128 characters.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Migration task name, which can contain up to 128 characters.
                     * @param _jobName Migration task name, which can contain up to 128 characters.
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Tag information
                     * @return Tags Tag information
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag information
                     * @param _tags Tag information
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Source database type. Valid values: `mysql`, `redis`, `percona`, `mongodb`, `postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Target database type. Valid values: `mysql`, `redis`, `percona`, `mongodb` ,`postgresql`, `sqlserver`, `mariadb`, and `cynosdbmysql`.
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Source instance region, such as `ap-guangzhou`.
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * Target instance region, such as `ap-guangzhou`. Note that it must be the same as the API request region.
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * Instance specification. Valid values: `small`, `medium`, `large`, `xlarge`, `2xlarge`.
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * Quantity. Value range: [1,15]. Default value: `1`.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Migration task name, which can contain up to 128 characters.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Tag information
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_
